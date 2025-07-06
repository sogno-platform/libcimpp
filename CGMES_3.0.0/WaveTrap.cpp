/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WaveTrap.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WaveTrap(),
		"http://iec.ch/TC57/CIM100#",
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

WaveTrap::WaveTrap() {}
WaveTrap::~WaveTrap() {}

const std::list<std::string>& WaveTrap::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WaveTrap::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WaveTrap::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WaveTrap::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WaveTrap::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WaveTrap::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WaveTrap::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

const char WaveTrap::debugName[] = "WaveTrap";
const char* WaveTrap::debugString() const
{
	return WaveTrap::debugName;
}

void WaveTrap::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WaveTrap", &WaveTrap_factory);
}

void WaveTrap::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WaveTrap::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void WaveTrap::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AuxiliaryEquipment::addPrimitiveGetFnsToMap(get_map);
}

void WaveTrap::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	AuxiliaryEquipment::addClassGetFnsToMap(get_map);
}

void WaveTrap::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AuxiliaryEquipment::addEnumGetFnsToMap(get_map);
}

bool WaveTrap::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WaveTrap" &&
		dynamic_cast<WaveTrap*>(otherObject) != nullptr;
}

const BaseClassDefiner WaveTrap::declare()
{
	return BaseClassDefiner(WaveTrap::addConstructToMap, WaveTrap::addPrimitiveAssignFnsToMap, WaveTrap::addClassAssignFnsToMap, WaveTrap::debugName);
}

std::map<std::string, AttrDetails> WaveTrap::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = AuxiliaryEquipment::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WaveTrap_factory()
	{
		return new WaveTrap;
	}
}
