/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LoadBreakSwitch.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		LoadBreakSwitch(),
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

LoadBreakSwitch::LoadBreakSwitch() {}
LoadBreakSwitch::~LoadBreakSwitch() {}

const std::list<std::string>& LoadBreakSwitch::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& LoadBreakSwitch::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& LoadBreakSwitch::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& LoadBreakSwitch::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& LoadBreakSwitch::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& LoadBreakSwitch::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& LoadBreakSwitch::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

const char LoadBreakSwitch::debugName[] = "LoadBreakSwitch";
const char* LoadBreakSwitch::debugString() const
{
	return LoadBreakSwitch::debugName;
}

void LoadBreakSwitch::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("LoadBreakSwitch", &LoadBreakSwitch_factory);
}

void LoadBreakSwitch::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void LoadBreakSwitch::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void LoadBreakSwitch::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ProtectedSwitch::addPrimitiveGetFnsToMap(get_map);
}

void LoadBreakSwitch::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ProtectedSwitch::addClassGetFnsToMap(get_map);
}

void LoadBreakSwitch::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ProtectedSwitch::addEnumGetFnsToMap(get_map);
}

bool LoadBreakSwitch::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "LoadBreakSwitch" &&
		dynamic_cast<LoadBreakSwitch*>(otherObject) != nullptr;
}

const BaseClassDefiner LoadBreakSwitch::declare()
{
	return BaseClassDefiner(LoadBreakSwitch::addConstructToMap, LoadBreakSwitch::addPrimitiveAssignFnsToMap, LoadBreakSwitch::addClassAssignFnsToMap, LoadBreakSwitch::debugName);
}

std::map<std::string, AttrDetails> LoadBreakSwitch::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ProtectedSwitch::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* LoadBreakSwitch_factory()
	{
		return new LoadBreakSwitch;
	}
}
