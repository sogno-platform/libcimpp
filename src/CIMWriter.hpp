#ifndef CIMWRITER_HPP
#define CIMWRITER_HPP

#include <map>
#include <ostream>
#include <string>
#include <vector>

#include "CGMESProfile.hpp"
#include "BaseClass.hpp"

/**
 * \brief Class for writing CIM RDF/XML files.
 */
class CIMWriter
{
public:
  /**
   * \brief Write the CIM data to a RDF/XML file.
   *
   * All CIM objects are written to just one file, regardless of profiles.
   *
   * \param path     Path of the file to write
   * \param objList  List of CIM objects to write
   */
  static void writeFile(const std::string& path, const std::vector<BaseClass*>& objList);

  /**
   * \brief Write the CIM data corresponding to one profile to a RDF file.
   *
   * If no profile is specified, all objects are written, regardless of profiles.
   * In this case, modelId and classProfileMap are not required.
   *
   * \param path            Path of file to write
   * \param objList         List of CIM objects to write
   * \param profile         Only data for this profile should be written (if specified)
   * \param modelId         Model ID to write into the model description
   * \param classProfileMap Mapping of CIM type to profile
   */
  static void writeFile(const std::string& path, const std::vector<BaseClass*>& objList,
                        const CGMESProfile& profile, const std::string& modelId,
                        const std::map<std::string, CGMESProfile>& classProfileMap);

  /**
   * \brief Write the CIM data to RDF/XML files separated by profiles.
   *
   * Each CIM object will be written to its corresponding profile file depending on classProfileMap.
   * But some objects to more than one file if some attribute profiles are not the same as the class profile.
   *
   * \param pathStem         Stem of the output files, resulting files: <pathStem>_<profileName>.xml
   * \param objList          List of CIM objects to write
   * \param modelIdStem      Stem of the model IDs, resulting IDs: <modelIdStem>_<profileName>
   * \param classProfileMap  Mapping of CIM type to profile
   * \return                 Written files: Mapping of profile to file
   */
  static std::map<CGMESProfile, std::string> writeFiles(const std::string& pathStem,
                                                        const std::vector<BaseClass*>& objList,
                                                        const std::string& modelIdStem,
                                                        const std::map<std::string, CGMESProfile>& classProfileMap);

  /**
   * \brief Write the CIM data to a stream (e.g. a file stream).
   *
   * All CIM objects are written to just one stream, regardless of profiles.
   *
   * \param rdf      Output stream
   * \param objList  List of CIM objects to write
   */
  static void writeCim(std::ostream& rdf, const std::vector<BaseClass*>& objList);

  /**
   * \brief Write CIM objects as RDF/XML data to a stream.
   *
   * This function writes RDF/XML data corresponding to one profile into a stream (e.g. a file stream).
   *
   * \param rdf              Output stream
   * \param objList          List of CIM objects to write
   * \param profile          Only data for this profile should be written
   * \param modelId          Model ID to write into the model description
   * \param classProfileMap  Mapping of CIM type to profile
   * \return                 Success: at least one object ist written to the stream
   */
  static bool writeCim(std::ostream& rdf, const std::vector<BaseClass*>& objList,
                       const CGMESProfile& profile, const std::string& modelId,
                       const std::map<std::string, CGMESProfile>& classProfileMap);

  /**
   * \brief Check if this profile is a possible profile for this CIM object.
   *
   * This function checks if the CIM type of an object contains data for a profile.
   * The profile could be the main profile of the type, or the type contains attributes for this profile.
   *
   * \param obj      CIM object to get the CIM type from
   * \param profile  Profile to check
   * \return         True/False
   */
  static bool isClassMatchingProfile(const BaseClass* obj, const CGMESProfile& profile);

  /**
   * \brief Get the main profile of this CIM object.
   *
   * This function searches for the main profile of the CIM type of an object.
   * If the type contains attributes for different profiles not all data of the object could be written into one file.
   * To write the data to as few as possible files the main profile should be that with most of the attributes.
   * But some types contain a lot of rarely used special attributes, i.e. attributes for a special profile
   * (e.g. TopologyNode has many attributes for TopologyBoundary, but the main profile should be Topology).
   * That's why attributes that only belong to one profile are skipped in the search algorithm.
   *
   * \param obj  CIM object to get the CIM type from
   * \return     Main profile
   */
  static CGMESProfile getClassProfile(const BaseClass* obj);

  /**
   * \brief Get the main profiles for a list of CIM objects.
   *
   * This function searches for the main profile of each CIM type in the object list (see \ref getClassProfile for details).
   *
   * The result could be used as parameter for the write functions: \ref writeFiles and \ref writeCim.
   * But it is also possible to optimize the mapping manually for some CIM types before calling the write function.
   *
   * \param objList  List of CIM objects
   * \return         Mapping of CIM type to profile
   */
  static std::map<std::string, CGMESProfile> getClassProfileMap(const std::vector<BaseClass*>& objList);

  /**
   * \brief Get the profile for this attribute of the CIM object.
   *
   * This function searches for the profile of an attribute for the CIM type of an object.
   * If the main profile of the type is a possible profile of the attribute it should be choosen.
   * Otherwise, the first profile in the list of possible profiles ordered by profile number.
   *
   * \param obj           CIM object to get the CIM type from
   * \param attr          Attribute to check
   * \param classProfile  Main profile of the CIM type
   * \return              Attribute profile
   */
  static CGMESProfile getAttributeProfile(const BaseClass* obj, const std::string& attr,
                                          const CGMESProfile& classProfile);

private:
  static std::map<std::string, std::string> getUsedNamespaces(const std::vector<BaseClass*>& objList);
  static std::string getNamespaceKey(const std::string& url);
  static std::string xmlEscape(const std::string& txt);
};

#endif // CIMWRITER_HPP
