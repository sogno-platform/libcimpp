/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SolarGeneratingUnit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "SolarPowerPlant.hpp"

using namespace CIMPP;

SolarGeneratingUnit::SolarGeneratingUnit() : SolarPowerPlant(nullptr) {}
SolarGeneratingUnit::~SolarGeneratingUnit() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:SolarGeneratingUnit.SolarPowerPlant", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
SolarGeneratingUnit::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
SolarGeneratingUnit::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = GeneratingUnit::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_SolarPowerPlant_SolarGeneratingUnits(BaseClass*, BaseClass*);
bool assign_SolarGeneratingUnit_SolarPowerPlant(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SolarGeneratingUnit* element = dynamic_cast<SolarGeneratingUnit*>(BaseClass_ptr1);
	SolarPowerPlant* element2 = dynamic_cast<SolarPowerPlant*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->SolarPowerPlant != element2)
		{
			element->SolarPowerPlant = element2;
			return assign_SolarPowerPlant_SolarGeneratingUnits(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_SolarGeneratingUnit_SolarPowerPlant(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const SolarGeneratingUnit* element = dynamic_cast<const SolarGeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->SolarPowerPlant != 0)
		{
			BaseClass_list.push_back(element->SolarPowerPlant);
			return true;
		}
	}
	return false;
}

const char SolarGeneratingUnit::debugName[] = "SolarGeneratingUnit";
const char* SolarGeneratingUnit::debugString() const
{
	return SolarGeneratingUnit::debugName;
}

void SolarGeneratingUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:SolarGeneratingUnit", &SolarGeneratingUnit_factory);
}

void SolarGeneratingUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void SolarGeneratingUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:SolarGeneratingUnit.SolarPowerPlant", &assign_SolarGeneratingUnit_SolarPowerPlant);
}

void SolarGeneratingUnit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	GeneratingUnit::addPrimitiveGetFnsToMap(get_map);
}

void SolarGeneratingUnit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	GeneratingUnit::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:SolarGeneratingUnit.SolarPowerPlant", &get_SolarGeneratingUnit_SolarPowerPlant);
}

void SolarGeneratingUnit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	GeneratingUnit::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner SolarGeneratingUnit::declare()
{
	return BaseClassDefiner(SolarGeneratingUnit::addConstructToMap, SolarGeneratingUnit::addPrimitiveAssignFnsToMap, SolarGeneratingUnit::addClassAssignFnsToMap, SolarGeneratingUnit::debugName);
}

namespace CIMPP
{
	BaseClass* SolarGeneratingUnit_factory()
	{
		return new SolarGeneratingUnit;
	}
}
