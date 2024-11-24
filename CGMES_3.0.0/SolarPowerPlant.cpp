/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SolarPowerPlant.hpp"

#include <algorithm>
#include <sstream>

#include "SolarGeneratingUnit.hpp"

using namespace CIMPP;

SolarPowerPlant::SolarPowerPlant() {};
SolarPowerPlant::~SolarPowerPlant() {};




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
	factory_map.insert(std::make_pair(std::string("cim:SolarPowerPlant"), &SolarPowerPlant_factory));
}

void SolarPowerPlant::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void SolarPowerPlant::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SolarPowerPlant.SolarGeneratingUnits"), &assign_SolarPowerPlant_SolarGeneratingUnits));
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
