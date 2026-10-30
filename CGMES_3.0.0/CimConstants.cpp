/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CimConstants.hpp"

const std::string& getCimVersion()
{
	static const std::string cimVersion = "cgmes_v3_0_0";
	return cimVersion;
}

const std::map<std::string, std::string>& getNamespaceMap()
{
	static const std::map<std::string, std::string> namespaceMap =
	{
		{ "cim", "http://iec.ch/TC57/CIM100#" },
		{ "eu", "http://iec.ch/TC57/CIM100-European#" },
		{ "md", "http://iec.ch/TC57/61970-552/ModelDescription/1#" },
		{ "rdf", "http://www.w3.org/1999/02/22-rdf-syntax-ns#" },
	};
	return namespaceMap;
}
