/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "HydroGeneratingUnit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "HydroPowerPlant.hpp"

using namespace CIMPP;

HydroGeneratingUnit::HydroGeneratingUnit() : HydroPowerPlant(nullptr) {}
HydroGeneratingUnit::~HydroGeneratingUnit() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:HydroGeneratingUnit.HydroPowerPlant", { CGMESProfile::EQ, } },
	{ "cim:HydroGeneratingUnit.energyConversionCapability", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
HydroGeneratingUnit::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
HydroGeneratingUnit::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = GeneratingUnit::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_HydroPowerPlant_HydroGeneratingUnits(BaseClass*, BaseClass*);
bool assign_HydroGeneratingUnit_HydroPowerPlant(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	HydroGeneratingUnit* element = dynamic_cast<HydroGeneratingUnit*>(BaseClass_ptr1);
	HydroPowerPlant* element2 = dynamic_cast<HydroPowerPlant*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->HydroPowerPlant != element2)
		{
			element->HydroPowerPlant = element2;
			return assign_HydroPowerPlant_HydroGeneratingUnits(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_HydroGeneratingUnit_energyConversionCapability(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	HydroGeneratingUnit* element = dynamic_cast<HydroGeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->energyConversionCapability;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_HydroGeneratingUnit_HydroPowerPlant(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const HydroGeneratingUnit* element = dynamic_cast<const HydroGeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->HydroPowerPlant != 0)
		{
			BaseClass_list.push_back(element->HydroPowerPlant);
			return true;
		}
	}
	return false;
}

bool get_HydroGeneratingUnit_energyConversionCapability(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const HydroGeneratingUnit* element = dynamic_cast<const HydroGeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->energyConversionCapability;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char HydroGeneratingUnit::debugName[] = "HydroGeneratingUnit";
const char* HydroGeneratingUnit::debugString() const
{
	return HydroGeneratingUnit::debugName;
}

void HydroGeneratingUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:HydroGeneratingUnit", &HydroGeneratingUnit_factory);
}

void HydroGeneratingUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:HydroGeneratingUnit.energyConversionCapability", &assign_HydroGeneratingUnit_energyConversionCapability);
}

void HydroGeneratingUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:HydroGeneratingUnit.HydroPowerPlant", &assign_HydroGeneratingUnit_HydroPowerPlant);
}

void HydroGeneratingUnit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	GeneratingUnit::addPrimitiveGetFnsToMap(get_map);
}

void HydroGeneratingUnit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	GeneratingUnit::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:HydroGeneratingUnit.HydroPowerPlant", &get_HydroGeneratingUnit_HydroPowerPlant);
}

void HydroGeneratingUnit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	GeneratingUnit::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:HydroGeneratingUnit.energyConversionCapability", &get_HydroGeneratingUnit_energyConversionCapability);
}

const BaseClassDefiner HydroGeneratingUnit::declare()
{
	return BaseClassDefiner(HydroGeneratingUnit::addConstructToMap, HydroGeneratingUnit::addPrimitiveAssignFnsToMap, HydroGeneratingUnit::addClassAssignFnsToMap, HydroGeneratingUnit::debugName);
}

namespace CIMPP
{
	BaseClass* HydroGeneratingUnit_factory()
	{
		return new HydroGeneratingUnit;
	}
}
