#include "CIMWriter.hpp"

#include <algorithm>
#include <fstream>
#include <list>
#include <map>
#include <ostream>
#include <sstream>
#include <string>
#include <vector>

#include "CGMESProfile.hpp"
#include "CimConstants.hpp"
#include "BaseClass.hpp"
#include "gettercache.hpp"
#include "profilecache.hpp"

void CIMWriter::writeFile(const std::string& path, const std::vector<BaseClass*>& objList)
{
  writeFile(path, objList, UnknownProfile, {}, {});
}

void CIMWriter::writeFile(const std::string& path, const std::vector<BaseClass*>& objList,
                          const CGMESProfile& profile, const std::string& modelId,
                          const std::map<std::string, CGMESProfile>& classProfileMap)
{
  std::stringstream rdf;
  writeCim(rdf, objList, profile, modelId, classProfileMap);

  std::ofstream rdfFile(path);
  rdfFile << rdf.str();
}

std::map<CGMESProfile, std::string> CIMWriter::writeFiles(const std::string& pathStem,
                                                          const std::vector<BaseClass*>& objList,
                                                          const std::string& modelIdStem,
                                                          const std::map<std::string, CGMESProfile>& classProfileMap)
{
  std::map<CGMESProfile, std::string> profileToFileMap;

  for (auto profile : getProfileList())
  {
    std::string profileName = getProfileLongName(profile);
    std::stringstream rdf;
    if (writeCim(rdf, objList, profile, modelIdStem + "_" + profileName, classProfileMap))
    {
      std::string file = pathStem + "_" + profileName + ".xml";
      std::ofstream rdfFile(file);
      rdfFile << rdf.str();
      profileToFileMap.emplace(profile, file);
    }
  }

  return profileToFileMap;
}

void CIMWriter::writeCim(std::ostream& rdf, const std::vector<BaseClass*>& objList)
{
  writeCim(rdf, objList, UnknownProfile, {}, {});
}

bool CIMWriter::writeCim(std::ostream& rdf, const std::vector<BaseClass*>& objList,
                         const CGMESProfile& profile, const std::string& modelId,
                         const std::map<std::string, CGMESProfile>& classProfileMap)
{
  int objectsCount = 0;
  static const auto& rdfURL = NamespaceMap.at("rdf");
  static const auto& cimURL = NamespaceMap.at("cim");
  static const auto& mdURL  = NamespaceMap.at("md");

  rdf << "<?xml version='1.0' encoding='utf-8' ?>" << std::endl;
  rdf << "<rdf:RDF xmlns:rdf='" << rdfURL << "'" << std::endl;
  rdf << "         xmlns:cim='" << cimURL << "'";
  if (profile != UnknownProfile)
  {
    rdf  << std::endl << "         xmlns:md='" << mdURL << "'";
  }
  rdf << ">" << std::endl;

  if (profile != UnknownProfile)
  {
    rdf << "  <md:FullModel rdf:about='#" << modelId << "'>" << std::endl;
    for (const auto& uri : getProfileURIs(profile))
    {
      rdf << "    <md:Model.profile>" << uri << "</md:Model.profile>" << std::endl;
    }
    rdf << "  </md:FullModel>" << std::endl;
  }

  for (const BaseClass* obj : objList)
  {
    std::string type = obj->debugString();
    std::string id   = obj->getRdfid();

    if (!id.empty() && type != "UnknownType" && (profile == UnknownProfile || isClassMatchingProfile(obj, profile)))
    {
      std::stringstream rdfObj;
      int attributesCount = 0;

      CGMESProfile classProfile = UnknownProfile;
      if (profile != UnknownProfile)
      {
        auto it = classProfileMap.find(type);
        if (it != classProfileMap.end())
        {
          classProfile = it->second;
        }
      }

      bool mainEntryOfObject = (classProfile == profile);
      if (mainEntryOfObject)
      {
        rdfObj << "  <cim:" << type << " rdf:ID='" << id << "'>" << std::endl;
      }
      else
      {
        rdfObj << "  <cim:" << type << " rdf:about='#" << id << "'>" << std::endl;
      }

      for (const auto& attrAndFunc : get_primitive_getter_map(obj))
      {
        std::string attr  = attrAndFunc.first;
        get_function func = attrAndFunc.second;

        if (attr != "cim:IdentifiedObject.mRID" &&
            (profile == UnknownProfile || getAttributeProfile(obj, attr, classProfile) == profile))
        {
          std::stringstream stream;
          if (func(obj, stream))
          {
            rdfObj << "    <" << attr << ">" << xmlEscape(stream.str()) << "</" << attr << ">" << std::endl;
            ++attributesCount;
          }
        }
      }

      for (const auto& attrAndFunc : get_class_getter_map(obj))
      {
        std::string attr        = attrAndFunc.first;
        class_get_function func = attrAndFunc.second;

        if (profile == UnknownProfile || getAttributeProfile(obj, attr, classProfile) == profile)
        {
          std::list<const BaseClass*> targetList;
          if (func(obj, targetList))
          {
            for (const BaseClass* targetObj : targetList)
            {
              rdfObj << "    <" << attr << " rdf:resource='#" << targetObj->getRdfid() << "' />" << std::endl;
              ++attributesCount;
            }
          }
        }
      }

      for (const auto& attrAndFunc : get_enum_getter_map(obj))
      {
        std::string attr  = attrAndFunc.first;
        get_function func = attrAndFunc.second;

        if (profile == UnknownProfile || getAttributeProfile(obj, attr, classProfile) == profile)
        {
          std::stringstream stream;
          if (func(obj, stream))
          {
            rdfObj << "    <" << attr << " rdf:resource='" << cimURL << stream.str() << "' />" << std::endl;
            ++attributesCount;
          }
        }
      }

      rdfObj << "  </cim:" << type << ">" << std::endl;

      if (mainEntryOfObject || attributesCount != 0)
      {
        rdf << rdfObj.str();
        ++objectsCount;
      }
    }
  }

  rdf << "</rdf:RDF>" << std::endl;
  return objectsCount != 0;
}

bool CIMWriter::isClassMatchingProfile(const BaseClass* obj, const CGMESProfile& profile)
{
  const auto& profiles = get_possible_profiles_for_class(obj);
  return std::find(profiles.begin(), profiles.end(), profile) != profiles.end();
}

CGMESProfile CIMWriter::getClassProfile(const BaseClass* obj)
{
  const auto& classProfiles = get_possible_profiles_for_class(obj);
  if (classProfiles.size() == 1)
  {
    return classProfiles.front();
  }

  std::map<CGMESProfile, int> profileCountMap;
  for (const auto& attrAndProfiles : get_possible_profiles_for_attributes(obj))
  {
    const auto& profiles = attrAndProfiles.second;
    bool ambiguousProfile = profiles.size() > 1;
    for (CGMESProfile profile : profiles)
    {
      if (ambiguousProfile &&
          std::find(classProfiles.begin(), classProfiles.end(), profile) != classProfiles.end())
      {
        ++profileCountMap[profile];
      }
    }
  }

  std::multimap<int, CGMESProfile> countProfileMap;
  for (const auto& profileAndCount : profileCountMap)
  {
    countProfileMap.emplace(-profileAndCount.second, profileAndCount.first);
  }

  for (const auto& countAndProfile : countProfileMap)
  {
    return countAndProfile.second;
  }

  return UnknownProfile;
}

std::map<std::string, CGMESProfile> CIMWriter::getClassProfileMap(const std::vector<BaseClass*>& objList)
{
  std::map<std::string, CGMESProfile> profileMap;

  for (const BaseClass* obj : objList)
  {
    std::string type = obj->debugString();
    if (profileMap.find(type) == profileMap.end())
    {
      CGMESProfile profile = getClassProfile(obj);
      profileMap.emplace(type, profile);
    }
  }

  return profileMap;
}

CGMESProfile CIMWriter::getAttributeProfile(const BaseClass* obj, const std::string& attr,
                                            const CGMESProfile& classProfile)
{
  const auto& profilesMap = get_possible_profiles_for_attributes(obj);
  auto it = profilesMap.find(attr);
  if (it != profilesMap.end())
  {
    auto profiles = it->second;
    if (std::find(profiles.begin(), profiles.end(), classProfile) != profiles.end())
    {
      return classProfile;
    }
    else if (!profiles.empty())
    {
      profiles.sort();
      return profiles.front();
    }
  }
  return UnknownProfile;
}

std::string CIMWriter::xmlEscape(const std::string& txt)
{
  if (txt.find_first_of("&<>'\"") == std::string::npos)
  {
    return txt;
  }
  std::string result;
  result.reserve(txt.size() + 10);
  for (size_t pos = 0; pos != txt.size(); ++pos)
  {
    switch (txt[pos])
    {
      case '&':   result.append("&amp;");       break;
      case '<':   result.append("&lt;");        break;
      case '>':   result.append("&gt;");        break;
      case '\'':  result.append("&apos;");      break;
      case '"':   result.append("&quot;");      break;
      default:    result.append(&txt[pos], 1);  break;
    }
  }
  return result;
}
