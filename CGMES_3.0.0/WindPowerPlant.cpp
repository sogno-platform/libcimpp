/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindPowerPlant.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindGeneratingUnit.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindPowerPlant(),
		"http://iec.ch/TC57/CIM100-European#",
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
		{ "WindPowerPlant.WindGeneratingUnits", { "http://iec.ch/TC57/CIM100-European#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

WindPowerPlant::WindPowerPlant() {}
WindPowerPlant::~WindPowerPlant() {}

const std::list<std::string>& WindPowerPlant::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindPowerPlant::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindPowerPlant::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindPowerPlant::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindPowerPlant::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindPowerPlant::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindPowerPlant::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindGeneratingUnit_WindPowerPlant(BaseClass*, BaseClass*);
bool assign_WindPowerPlant_WindGeneratingUnits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindPowerPlant* element = dynamic_cast<WindPowerPlant*>(BaseClass_ptr1);
	WindGeneratingUnit* element2 = dynamic_cast<WindGeneratingUnit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->WindGeneratingUnits.begin(), element->WindGeneratingUnits.end(), element2) == element->WindGeneratingUnits.end())
		{
			element->WindGeneratingUnits.push_back(element2);
			return assign_WindGeneratingUnit_WindPowerPlant(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char WindPowerPlant::debugName[] = "WindPowerPlant";
const char* WindPowerPlant::debugString() const
{
	return WindPowerPlant::debugName;
}

void WindPowerPlant::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindPowerPlant", &WindPowerPlant_factory);
}

void WindPowerPlant::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindPowerPlant::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindPowerPlant.WindGeneratingUnits", &assign_WindPowerPlant_WindGeneratingUnits);
}

void WindPowerPlant::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addPrimitiveGetFnsToMap(get_map);
}

void WindPowerPlant::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemResource::addClassGetFnsToMap(get_map);
}

void WindPowerPlant::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addEnumGetFnsToMap(get_map);
}

bool WindPowerPlant::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindPowerPlant" &&
		dynamic_cast<WindPowerPlant*>(otherObject) != nullptr;
}

const BaseClassDefiner WindPowerPlant::declare()
{
	return BaseClassDefiner(WindPowerPlant::addConstructToMap, WindPowerPlant::addPrimitiveAssignFnsToMap, WindPowerPlant::addClassAssignFnsToMap, WindPowerPlant::debugName);
}

std::map<std::string, AttrDetails> WindPowerPlant::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PowerSystemResource::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindPowerPlant_factory()
	{
		return new WindPowerPlant;
	}
}
