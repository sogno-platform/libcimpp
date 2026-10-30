#ifndef CIM_CONSTANTS_HPP
#define CIM_CONSTANTS_HPP
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <map>
#include <string>

/** \brief CIM version string. */
const std::string& getCimVersion();

/** \brief Default namespaces used by CGMES. Map of namespace key to URL. */
const std::map<std::string, std::string>& getNamespaceMap();

#endif
