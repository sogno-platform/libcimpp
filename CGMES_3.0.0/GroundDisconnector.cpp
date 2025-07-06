/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GroundDisconnector.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GroundDisconnector(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::EQ,
			CGMESProfile::SSH,
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

GroundDisconnector::GroundDisconnector() {}
GroundDisconnector::~GroundDisconnector() {}

const std::list<std::string>& GroundDisconnector::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GroundDisconnector::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GroundDisconnector::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GroundDisconnector::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GroundDisconnector::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GroundDisconnector::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GroundDisconnector::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

const char GroundDisconnector::debugName[] = "GroundDisconnector";
const char* GroundDisconnector::debugString() const
{
	return GroundDisconnector::debugName;
}

void GroundDisconnector::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("GroundDisconnector", &GroundDisconnector_factory);
}

void GroundDisconnector::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void GroundDisconnector::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GroundDisconnector::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Switch::addPrimitiveGetFnsToMap(get_map);
}

void GroundDisconnector::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Switch::addClassGetFnsToMap(get_map);
}

void GroundDisconnector::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Switch::addEnumGetFnsToMap(get_map);
}

bool GroundDisconnector::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GroundDisconnector" &&
		dynamic_cast<GroundDisconnector*>(otherObject) != nullptr;
}

const BaseClassDefiner GroundDisconnector::declare()
{
	return BaseClassDefiner(GroundDisconnector::addConstructToMap, GroundDisconnector::addPrimitiveAssignFnsToMap, GroundDisconnector::addClassAssignFnsToMap, GroundDisconnector::debugName);
}

std::map<std::string, AttrDetails> GroundDisconnector::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = Switch::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GroundDisconnector_factory()
	{
		return new GroundDisconnector;
	}
}
