/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindGeneratingUnit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindPowerPlant.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindGeneratingUnit(),
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
		{ "WindGeneratingUnit.WindPowerPlant", { "http://iec.ch/TC57/CIM100-European#", { CGMESProfile::EQ, } } },
		{ "WindGeneratingUnit.windGenUnitType", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

WindGeneratingUnit::WindGeneratingUnit() : WindPowerPlant(nullptr) {}
WindGeneratingUnit::~WindGeneratingUnit() {}

const std::list<std::string>& WindGeneratingUnit::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindGeneratingUnit::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindGeneratingUnit::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindGeneratingUnit::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindGeneratingUnit::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindGeneratingUnit::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindGeneratingUnit::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindPowerPlant_WindGeneratingUnits(BaseClass*, BaseClass*);
bool assign_WindGeneratingUnit_WindPowerPlant(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindGeneratingUnit* element = dynamic_cast<WindGeneratingUnit*>(BaseClass_ptr1);
	WindPowerPlant* element2 = dynamic_cast<WindPowerPlant*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindPowerPlant != element2)
		{
			element->WindPowerPlant = element2;
			return assign_WindPowerPlant_WindGeneratingUnits(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindGeneratingUnit_windGenUnitType(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindGeneratingUnit* element = dynamic_cast<WindGeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->windGenUnitType;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_WindGeneratingUnit_WindPowerPlant(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindGeneratingUnit* element = dynamic_cast<const WindGeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindPowerPlant != 0)
		{
			BaseClass_list.push_back(element->WindPowerPlant);
			return true;
		}
	}
	return false;
}

bool get_WindGeneratingUnit_windGenUnitType(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindGeneratingUnit* element = dynamic_cast<const WindGeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->windGenUnitType;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char WindGeneratingUnit::debugName[] = "WindGeneratingUnit";
const char* WindGeneratingUnit::debugString() const
{
	return WindGeneratingUnit::debugName;
}

void WindGeneratingUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindGeneratingUnit", &WindGeneratingUnit_factory);
}

void WindGeneratingUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("WindGeneratingUnit.windGenUnitType", &assign_WindGeneratingUnit_windGenUnitType);
}

void WindGeneratingUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindGeneratingUnit.WindPowerPlant", &assign_WindGeneratingUnit_WindPowerPlant);
}

void WindGeneratingUnit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	GeneratingUnit::addPrimitiveGetFnsToMap(get_map);
}

void WindGeneratingUnit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	GeneratingUnit::addClassGetFnsToMap(get_map);
	get_map.emplace("WindGeneratingUnit.WindPowerPlant", &get_WindGeneratingUnit_WindPowerPlant);
}

void WindGeneratingUnit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	GeneratingUnit::addEnumGetFnsToMap(get_map);
	get_map.emplace("WindGeneratingUnit.windGenUnitType", &get_WindGeneratingUnit_windGenUnitType);
}

bool WindGeneratingUnit::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindGeneratingUnit" &&
		dynamic_cast<WindGeneratingUnit*>(otherObject) != nullptr;
}

const BaseClassDefiner WindGeneratingUnit::declare()
{
	return BaseClassDefiner(WindGeneratingUnit::addConstructToMap, WindGeneratingUnit::addPrimitiveAssignFnsToMap, WindGeneratingUnit::addClassAssignFnsToMap, WindGeneratingUnit::debugName);
}

std::map<std::string, AttrDetails> WindGeneratingUnit::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = GeneratingUnit::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindGeneratingUnit_factory()
	{
		return new WindGeneratingUnit;
	}
}
