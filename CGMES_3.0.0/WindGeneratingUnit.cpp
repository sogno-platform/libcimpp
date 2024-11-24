/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindGeneratingUnit.hpp"

#include <algorithm>
#include <sstream>

#include "WindPowerPlant.hpp"
#include "WindGenUnitKind.hpp"

using namespace CIMPP;

WindGeneratingUnit::WindGeneratingUnit() : WindPowerPlant(nullptr) {};
WindGeneratingUnit::~WindGeneratingUnit() {};



bool assign_WindGeneratingUnit_windGenUnitType(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindGeneratingUnit* element = dynamic_cast<WindGeneratingUnit*>(BaseClass_ptr1))
	{
		buffer >> element->windGenUnitType;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
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


const char WindGeneratingUnit::debugName[] = "WindGeneratingUnit";
const char* WindGeneratingUnit::debugString() const
{
	return WindGeneratingUnit::debugName;
}

void WindGeneratingUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindGeneratingUnit"), &WindGeneratingUnit_factory));
}

void WindGeneratingUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindGeneratingUnit.windGenUnitType"), &assign_WindGeneratingUnit_windGenUnitType));
}

void WindGeneratingUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindGeneratingUnit.WindPowerPlant"), &assign_WindGeneratingUnit_WindPowerPlant));
}

const BaseClassDefiner WindGeneratingUnit::declare()
{
	return BaseClassDefiner(WindGeneratingUnit::addConstructToMap, WindGeneratingUnit::addPrimitiveAssignFnsToMap, WindGeneratingUnit::addClassAssignFnsToMap, WindGeneratingUnit::debugName);
}

namespace CIMPP
{
	BaseClass* WindGeneratingUnit_factory()
	{
		return new WindGeneratingUnit;
	}
}
