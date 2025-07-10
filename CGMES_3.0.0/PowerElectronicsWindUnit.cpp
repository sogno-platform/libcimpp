/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PowerElectronicsWindUnit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PowerElectronicsWindUnit(),
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

PowerElectronicsWindUnit::PowerElectronicsWindUnit() {}
PowerElectronicsWindUnit::~PowerElectronicsWindUnit() {}

const std::list<std::string>& PowerElectronicsWindUnit::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PowerElectronicsWindUnit::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PowerElectronicsWindUnit::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PowerElectronicsWindUnit::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PowerElectronicsWindUnit::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PowerElectronicsWindUnit::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PowerElectronicsWindUnit::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

const char PowerElectronicsWindUnit::debugName[] = "PowerElectronicsWindUnit";
const char* PowerElectronicsWindUnit::debugString() const
{
	return PowerElectronicsWindUnit::debugName;
}

void PowerElectronicsWindUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PowerElectronicsWindUnit", &PowerElectronicsWindUnit_factory);
}

void PowerElectronicsWindUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void PowerElectronicsWindUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PowerElectronicsWindUnit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerElectronicsUnit::addPrimitiveGetFnsToMap(get_map);
}

void PowerElectronicsWindUnit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerElectronicsUnit::addClassGetFnsToMap(get_map);
}

void PowerElectronicsWindUnit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerElectronicsUnit::addEnumGetFnsToMap(get_map);
}

bool PowerElectronicsWindUnit::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PowerElectronicsWindUnit" &&
		dynamic_cast<PowerElectronicsWindUnit*>(otherObject) != nullptr;
}

const BaseClassDefiner PowerElectronicsWindUnit::declare()
{
	return BaseClassDefiner(PowerElectronicsWindUnit::addConstructToMap, PowerElectronicsWindUnit::addPrimitiveAssignFnsToMap, PowerElectronicsWindUnit::addClassAssignFnsToMap, PowerElectronicsWindUnit::debugName);
}

std::map<std::string, AttrDetails> PowerElectronicsWindUnit::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PowerElectronicsUnit::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PowerElectronicsWindUnit_factory()
	{
		return new PowerElectronicsWindUnit;
	}
}
