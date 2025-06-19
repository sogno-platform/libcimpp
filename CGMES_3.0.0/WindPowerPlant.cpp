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

WindPowerPlant::WindPowerPlant() {}
WindPowerPlant::~WindPowerPlant() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindPowerPlant.WindGeneratingUnits", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
WindPowerPlant::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindPowerPlant::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PowerSystemResource::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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
	factory_map.emplace("cim:WindPowerPlant", &WindPowerPlant_factory);
}

void WindPowerPlant::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindPowerPlant::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:WindPowerPlant.WindGeneratingUnits", &assign_WindPowerPlant_WindGeneratingUnits);
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

const BaseClassDefiner WindPowerPlant::declare()
{
	return BaseClassDefiner(WindPowerPlant::addConstructToMap, WindPowerPlant::addPrimitiveAssignFnsToMap, WindPowerPlant::addClassAssignFnsToMap, WindPowerPlant::debugName);
}

namespace CIMPP
{
	BaseClass* WindPowerPlant_factory()
	{
		return new WindPowerPlant;
	}
}
