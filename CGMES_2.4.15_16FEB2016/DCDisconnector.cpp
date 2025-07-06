/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCDisconnector.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		DCDisconnector(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::EQ,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
	};
    return ClassAttrDetailsMap;
}

DCDisconnector::DCDisconnector() {}
DCDisconnector::~DCDisconnector() {}

const std::list<std::string>& DCDisconnector::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& DCDisconnector::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& DCDisconnector::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& DCDisconnector::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& DCDisconnector::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& DCDisconnector::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& DCDisconnector::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

const char DCDisconnector::debugName[] = "DCDisconnector";
const char* DCDisconnector::debugString() const
{
	return DCDisconnector::debugName;
}

void DCDisconnector::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("DCDisconnector", &DCDisconnector_factory);
}

void DCDisconnector::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCDisconnector::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void DCDisconnector::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCSwitch::addPrimitiveGetFnsToMap(get_map);
}

void DCDisconnector::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DCSwitch::addClassGetFnsToMap(get_map);
}

void DCDisconnector::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCSwitch::addEnumGetFnsToMap(get_map);
}

bool DCDisconnector::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "DCDisconnector" &&
		dynamic_cast<DCDisconnector*>(otherObject) != nullptr;
}

const BaseClassDefiner DCDisconnector::declare()
{
	return BaseClassDefiner(DCDisconnector::addConstructToMap, DCDisconnector::addPrimitiveAssignFnsToMap, DCDisconnector::addClassAssignFnsToMap, DCDisconnector::debugName);
}

std::map<std::string, AttrDetails> DCDisconnector::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DCSwitch::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* DCDisconnector_factory()
	{
		return new DCDisconnector;
	}
}
