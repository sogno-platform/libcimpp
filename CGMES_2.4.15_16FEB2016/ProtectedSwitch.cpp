/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ProtectedSwitch.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ProtectedSwitch(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
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

ProtectedSwitch::ProtectedSwitch() {}
ProtectedSwitch::~ProtectedSwitch() {}

const std::list<std::string>& ProtectedSwitch::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ProtectedSwitch::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ProtectedSwitch::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ProtectedSwitch::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ProtectedSwitch::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ProtectedSwitch::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ProtectedSwitch::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

const char ProtectedSwitch::debugName[] = "ProtectedSwitch";
const char* ProtectedSwitch::debugString() const
{
	return ProtectedSwitch::debugName;
}

void ProtectedSwitch::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ProtectedSwitch", &ProtectedSwitch_factory);
}

void ProtectedSwitch::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void ProtectedSwitch::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ProtectedSwitch::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Switch::addPrimitiveGetFnsToMap(get_map);
}

void ProtectedSwitch::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Switch::addClassGetFnsToMap(get_map);
}

void ProtectedSwitch::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Switch::addEnumGetFnsToMap(get_map);
}

bool ProtectedSwitch::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ProtectedSwitch" &&
		dynamic_cast<ProtectedSwitch*>(otherObject) != nullptr;
}

const BaseClassDefiner ProtectedSwitch::declare()
{
	return BaseClassDefiner(ProtectedSwitch::addConstructToMap, ProtectedSwitch::addPrimitiveAssignFnsToMap, ProtectedSwitch::addClassAssignFnsToMap, ProtectedSwitch::debugName);
}

std::map<std::string, AttrDetails> ProtectedSwitch::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = Switch::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ProtectedSwitch_factory()
	{
		return new ProtectedSwitch;
	}
}
