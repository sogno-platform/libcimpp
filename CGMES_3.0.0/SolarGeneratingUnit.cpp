/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SolarGeneratingUnit.hpp"

#include <algorithm>
#include <sstream>

#include "SolarPowerPlant.hpp"

using namespace CIMPP;

SolarGeneratingUnit::SolarGeneratingUnit() : SolarPowerPlant(nullptr) {};
SolarGeneratingUnit::~SolarGeneratingUnit() {};




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

const char SolarGeneratingUnit::debugName[] = "SolarGeneratingUnit";
const char* SolarGeneratingUnit::debugString() const
{
	return SolarGeneratingUnit::debugName;
}

void SolarGeneratingUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:SolarGeneratingUnit"), &SolarGeneratingUnit_factory));
}

void SolarGeneratingUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void SolarGeneratingUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SolarGeneratingUnit.SolarPowerPlant"), &assign_SolarGeneratingUnit_SolarPowerPlant));
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
