/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ThermalGeneratingUnit.hpp"

#include <algorithm>
#include <sstream>

#include "CAESPlant.hpp"
#include "CogenerationPlant.hpp"
#include "CombinedCyclePlant.hpp"
#include "FossilFuel.hpp"

using namespace CIMPP;

ThermalGeneratingUnit::ThermalGeneratingUnit() : CAESPlant(nullptr), CogenerationPlant(nullptr), CombinedCyclePlant(nullptr) {};
ThermalGeneratingUnit::~ThermalGeneratingUnit() {};







bool assign_CAESPlant_ThermalGeneratingUnit(BaseClass*, BaseClass*);
bool assign_ThermalGeneratingUnit_CAESPlant(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ThermalGeneratingUnit* element = dynamic_cast<ThermalGeneratingUnit*>(BaseClass_ptr1);
	CAESPlant* element2 = dynamic_cast<CAESPlant*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->CAESPlant != element2)
		{
			element->CAESPlant = element2;
			return assign_CAESPlant_ThermalGeneratingUnit(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_CogenerationPlant_ThermalGeneratingUnits(BaseClass*, BaseClass*);
bool assign_ThermalGeneratingUnit_CogenerationPlant(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ThermalGeneratingUnit* element = dynamic_cast<ThermalGeneratingUnit*>(BaseClass_ptr1);
	CogenerationPlant* element2 = dynamic_cast<CogenerationPlant*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->CogenerationPlant != element2)
		{
			element->CogenerationPlant = element2;
			return assign_CogenerationPlant_ThermalGeneratingUnits(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_CombinedCyclePlant_ThermalGeneratingUnits(BaseClass*, BaseClass*);
bool assign_ThermalGeneratingUnit_CombinedCyclePlant(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ThermalGeneratingUnit* element = dynamic_cast<ThermalGeneratingUnit*>(BaseClass_ptr1);
	CombinedCyclePlant* element2 = dynamic_cast<CombinedCyclePlant*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->CombinedCyclePlant != element2)
		{
			element->CombinedCyclePlant = element2;
			return assign_CombinedCyclePlant_ThermalGeneratingUnits(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_FossilFuel_ThermalGeneratingUnit(BaseClass*, BaseClass*);
bool assign_ThermalGeneratingUnit_FossilFuels(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ThermalGeneratingUnit* element = dynamic_cast<ThermalGeneratingUnit*>(BaseClass_ptr1);
	FossilFuel* element2 = dynamic_cast<FossilFuel*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->FossilFuels.begin(), element->FossilFuels.end(), element2) == element->FossilFuels.end())
		{
			element->FossilFuels.push_back(element2);
			return assign_FossilFuel_ThermalGeneratingUnit(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char ThermalGeneratingUnit::debugName[] = "ThermalGeneratingUnit";
const char* ThermalGeneratingUnit::debugString() const
{
	return ThermalGeneratingUnit::debugName;
}

void ThermalGeneratingUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ThermalGeneratingUnit"), &ThermalGeneratingUnit_factory));
}

void ThermalGeneratingUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void ThermalGeneratingUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ThermalGeneratingUnit.CAESPlant"), &assign_ThermalGeneratingUnit_CAESPlant));
	assign_map.insert(std::make_pair(std::string("cim:ThermalGeneratingUnit.CogenerationPlant"), &assign_ThermalGeneratingUnit_CogenerationPlant));
	assign_map.insert(std::make_pair(std::string("cim:ThermalGeneratingUnit.CombinedCyclePlant"), &assign_ThermalGeneratingUnit_CombinedCyclePlant));
	assign_map.insert(std::make_pair(std::string("cim:ThermalGeneratingUnit.FossilFuels"), &assign_ThermalGeneratingUnit_FossilFuels));
}

const BaseClassDefiner ThermalGeneratingUnit::declare()
{
	return BaseClassDefiner(ThermalGeneratingUnit::addConstructToMap, ThermalGeneratingUnit::addPrimitiveAssignFnsToMap, ThermalGeneratingUnit::addClassAssignFnsToMap, ThermalGeneratingUnit::debugName);
}

namespace CIMPP
{
	BaseClass* ThermalGeneratingUnit_factory()
	{
		return new ThermalGeneratingUnit;
	}
}
