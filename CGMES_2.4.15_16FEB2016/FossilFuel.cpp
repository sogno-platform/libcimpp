/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "FossilFuel.hpp"

#include <algorithm>
#include <sstream>

#include "ThermalGeneratingUnit.hpp"
#include "FuelType.hpp"

using namespace CIMPP;

FossilFuel::FossilFuel() : ThermalGeneratingUnit(nullptr) {};
FossilFuel::~FossilFuel() {};



bool assign_FossilFuel_fossilFuelType(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (FossilFuel* element = dynamic_cast<FossilFuel*>(BaseClass_ptr1))
	{
		buffer >> element->fossilFuelType;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ThermalGeneratingUnit_FossilFuels(BaseClass*, BaseClass*);
bool assign_FossilFuel_ThermalGeneratingUnit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	FossilFuel* element = dynamic_cast<FossilFuel*>(BaseClass_ptr1);
	ThermalGeneratingUnit* element2 = dynamic_cast<ThermalGeneratingUnit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ThermalGeneratingUnit != element2)
		{
			element->ThermalGeneratingUnit = element2;
			return assign_ThermalGeneratingUnit_FossilFuels(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char FossilFuel::debugName[] = "FossilFuel";
const char* FossilFuel::debugString() const
{
	return FossilFuel::debugName;
}

void FossilFuel::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:FossilFuel"), &FossilFuel_factory));
}

void FossilFuel::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:FossilFuel.fossilFuelType"), &assign_FossilFuel_fossilFuelType));
}

void FossilFuel::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:FossilFuel.ThermalGeneratingUnit"), &assign_FossilFuel_ThermalGeneratingUnit));
}

const BaseClassDefiner FossilFuel::declare()
{
	return BaseClassDefiner(FossilFuel::addConstructToMap, FossilFuel::addPrimitiveAssignFnsToMap, FossilFuel::addClassAssignFnsToMap, FossilFuel::debugName);
}

namespace CIMPP
{
	BaseClass* FossilFuel_factory()
	{
		return new FossilFuel;
	}
}
