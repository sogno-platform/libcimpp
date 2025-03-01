/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SolarPowerPlant.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "SolarGeneratingUnit.hpp"

using namespace CIMPP;

SolarPowerPlant::SolarPowerPlant() {}
SolarPowerPlant::~SolarPowerPlant() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:SolarPowerPlant.SolarGeneratingUnits", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
SolarPowerPlant::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
SolarPowerPlant::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PowerSystemResource::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_SolarGeneratingUnit_SolarPowerPlant(BaseClass*, BaseClass*);
bool assign_SolarPowerPlant_SolarGeneratingUnits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SolarPowerPlant* element = dynamic_cast<SolarPowerPlant*>(BaseClass_ptr1);
	SolarGeneratingUnit* element2 = dynamic_cast<SolarGeneratingUnit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->SolarGeneratingUnits.begin(), element->SolarGeneratingUnits.end(), element2) == element->SolarGeneratingUnits.end())
		{
			element->SolarGeneratingUnits.push_back(element2);
			return assign_SolarGeneratingUnit_SolarPowerPlant(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char SolarPowerPlant::debugName[] = "SolarPowerPlant";
const char* SolarPowerPlant::debugString() const
{
	return SolarPowerPlant::debugName;
}

void SolarPowerPlant::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:SolarPowerPlant", &SolarPowerPlant_factory);
}

void SolarPowerPlant::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void SolarPowerPlant::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:SolarPowerPlant.SolarGeneratingUnits", &assign_SolarPowerPlant_SolarGeneratingUnits);
}

void SolarPowerPlant::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addPrimitiveGetFnsToMap(get_map);
}

void SolarPowerPlant::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemResource::addClassGetFnsToMap(get_map);
}

void SolarPowerPlant::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner SolarPowerPlant::declare()
{
	return BaseClassDefiner(SolarPowerPlant::addConstructToMap, SolarPowerPlant::addPrimitiveAssignFnsToMap, SolarPowerPlant::addClassAssignFnsToMap, SolarPowerPlant::debugName);
}

namespace CIMPP
{
	BaseClass* SolarPowerPlant_factory()
	{
		return new SolarPowerPlant;
	}
}
