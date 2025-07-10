#include "CIMWriter.hpp"

#include <algorithm>
#include <fstream>
#include <list>
#include <map>
#include <ostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

#include "BaseClass.hpp"
#include "CGMESProfile.hpp"
#include "CimConstants.hpp"
#include "gettercache.hpp"

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
  static const auto& cimURL = NamespaceMap.at("cim");
  static const auto& mdURL  = NamespaceMap.at("md");

  auto usedNamespaces = getUsedNamespaces(objList);
  if (profile != UnknownProfile)
  {
    usedNamespaces.emplace("md", mdURL);
  }

  rdf << "<?xml version='1.0' encoding='utf-8' ?>" << std::endl;
  rdf << "<rdf:RDF";
  for (const auto& nsAndUrl : usedNamespaces)
  {
    rdf << " xmlns:" << nsAndUrl.first << "='" << nsAndUrl.second << "'";
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
    std::string nsObj = getNamespaceKey(obj->getClassNamespaceUrl());

    if (!id.empty() && type != "UnknownType" && !nsObj.empty() &&
        (profile == UnknownProfile || isClassMatchingProfile(obj, profile)))
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
        rdfObj << "  <" << nsObj << ":" << type << " rdf:ID='" << id << "'>" << std::endl;
      }
      else
      {
        rdfObj << "  <" << nsObj << ":" << type << " rdf:about='#" << id << "'>" << std::endl;
      }

      for (const auto& attrAndFunc : get_primitive_getter_map(obj))
      {
        std::string attr  = attrAndFunc.first;
        get_function func = attrAndFunc.second;
        std::string nsAttr = getNamespaceKey(obj->getAttributeNamespaceUrl(attr));

        if (attr != "IdentifiedObject.mRID" &&
            (profile == UnknownProfile || getAttributeProfile(obj, attr, classProfile) == profile))
        {
          std::stringstream stream;
          if (func(obj, stream))
          {
            rdfObj << "    <" << nsAttr << ":" << attr << ">" << xmlEscape(stream.str()) << "</" << nsAttr << ":"
                   << attr << ">" << std::endl;
            ++attributesCount;
          }
        }
      }

      for (const auto& attrAndFunc : get_class_getter_map(obj))
      {
        std::string attr        = attrAndFunc.first;
        class_get_function func = attrAndFunc.second;
        std::string nsAttr = getNamespaceKey(obj->getAttributeNamespaceUrl(attr));

        if (profile == UnknownProfile || getAttributeProfile(obj, attr, classProfile) == profile)
        {
          std::list<const BaseClass*> targetList;
          if (func(obj, targetList))
          {
            for (const BaseClass* targetObj : targetList)
            {
              rdfObj << "    <" << nsAttr << ":" << attr << " rdf:resource='#" << targetObj->getRdfid() << "' />"
                     << std::endl;
              ++attributesCount;
            }
          }
        }
      }

      for (const auto& attrAndFunc : get_enum_getter_map(obj))
      {
        std::string attr  = attrAndFunc.first;
        get_function func = attrAndFunc.second;
        std::string namespaceUrl = obj->getAttributeNamespaceUrl(attr);
        std::string nsAttr = getNamespaceKey(namespaceUrl);

        if (profile == UnknownProfile || getAttributeProfile(obj, attr, classProfile) == profile)
        {
          std::stringstream stream;
          if (func(obj, stream))
          {
            rdfObj << "    <" << nsAttr << ":" << attr << " rdf:resource='" << namespaceUrl << stream.str() << "' />"
                   << std::endl;
            ++attributesCount;
          }
        }
      }

      rdfObj << "  </" << nsObj << ":" << type << ">" << std::endl;

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
  const auto& profiles = obj->getPossibleProfilesIncludingAttributes();
  return std::find(profiles.begin(), profiles.end(), profile) != profiles.end();
}

CGMESProfile CIMWriter::getClassProfile(const BaseClass* obj)
{
  return obj->getRecommendedProfile();
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
  auto profiles = obj->getPossibleAttributeProfiles(attr);
  if (std::find(profiles.begin(), profiles.end(), classProfile) != profiles.end())
  {
    return classProfile;
  }
  else if (!profiles.empty())
  {
    profiles.sort();
    return profiles.front();
  }
  return UnknownProfile;
}

std::map<std::string, std::string> CIMWriter::getUsedNamespaces(const std::vector<BaseClass*>& objList)
{
  std::set<std::string> urls;
  urls.insert(NamespaceMap.at("rdf"));

  for (const BaseClass* obj : objList)
  {
    urls.insert(obj->getClassNamespaceUrl());
    for (const auto& attrAndFunc : get_primitive_getter_map(obj))
    {
      std::string attr  = attrAndFunc.first;
      get_function func = attrAndFunc.second;

      std::stringstream stream;
      if (func(obj, stream))
      {
        urls.insert(obj->getAttributeNamespaceUrl(attr));
      }
    }

    for (const auto& attrAndFunc : get_class_getter_map(obj))
    {
      std::string attr        = attrAndFunc.first;
      class_get_function func = attrAndFunc.second;

      std::list<const BaseClass*> targetList;
      if (func(obj, targetList) && !targetList.empty())
      {
        urls.insert(obj->getAttributeNamespaceUrl(attr));
      }
    }

    for (const auto& attrAndFunc : get_enum_getter_map(obj))
    {
      std::string attr  = attrAndFunc.first;
      get_function func = attrAndFunc.second;

      std::stringstream stream;
      if (func(obj, stream))
      {
        urls.insert(obj->getAttributeNamespaceUrl(attr));
      }
    }
  }

  std::map<std::string, std::string> namespaces;
  for (const auto& url : urls)
  {
    const auto& ns = getNamespaceKey(url);
    if (!ns.empty())
    {
      namespaces.emplace(ns, url);
    }
  }
  return namespaces;
}

std::string CIMWriter::getNamespaceKey(const std::string& url)
{
  for (const auto& nsAndUrl : NamespaceMap)
  {
    if (nsAndUrl.second == url)
    {
      return nsAndUrl.first;
    }
  }
  return "";
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
