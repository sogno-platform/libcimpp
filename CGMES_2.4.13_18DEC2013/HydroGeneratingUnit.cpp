/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "HydroGeneratingUnit.hpp"

#include <algorithm>
#include <sstream>

#include "HydroPowerPlant.hpp"
#include "HydroEnergyConversionKind.hpp"

using namespace CIMPP;

HydroGeneratingUnit::HydroGeneratingUnit() : HydroPowerPlant(nullptr) {};
HydroGeneratingUnit::~HydroGeneratingUnit() {};



bool assign_HydroGeneratingUnit_energyConversionCapability(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (HydroGeneratingUnit* element = dynamic_cast<HydroGeneratingUnit*>(BaseClass_ptr1))
	{
		buffer >> element->energyConversionCapability;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
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


const char HydroGeneratingUnit::debugName[] = "HydroGeneratingUnit";
const char* HydroGeneratingUnit::debugString() const
{
	return HydroGeneratingUnit::debugName;
}

void HydroGeneratingUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:HydroGeneratingUnit"), &HydroGeneratingUnit_factory));
}

void HydroGeneratingUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:HydroGeneratingUnit.energyConversionCapability"), &assign_HydroGeneratingUnit_energyConversionCapability));
}

void HydroGeneratingUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:HydroGeneratingUnit.HydroPowerPlant"), &assign_HydroGeneratingUnit_HydroPowerPlant));
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
