/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CogenerationPlant.hpp"

#include <algorithm>
#include <sstream>

#include "ThermalGeneratingUnit.hpp"

using namespace CIMPP;

CogenerationPlant::CogenerationPlant() {};
CogenerationPlant::~CogenerationPlant() {};




bool assign_ThermalGeneratingUnit_CogenerationPlant(BaseClass*, BaseClass*);
bool assign_CogenerationPlant_ThermalGeneratingUnits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	CogenerationPlant* element = dynamic_cast<CogenerationPlant*>(BaseClass_ptr1);
	ThermalGeneratingUnit* element2 = dynamic_cast<ThermalGeneratingUnit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ThermalGeneratingUnits.begin(), element->ThermalGeneratingUnits.end(), element2) == element->ThermalGeneratingUnits.end())
		{
			element->ThermalGeneratingUnits.push_back(element2);
			return assign_ThermalGeneratingUnit_CogenerationPlant(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char CogenerationPlant::debugName[] = "CogenerationPlant";
const char* CogenerationPlant::debugString() const
{
	return CogenerationPlant::debugName;
}

void CogenerationPlant::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:CogenerationPlant"), &CogenerationPlant_factory));
}

void CogenerationPlant::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void CogenerationPlant::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:CogenerationPlant.ThermalGeneratingUnits"), &assign_CogenerationPlant_ThermalGeneratingUnits));
}

const BaseClassDefiner CogenerationPlant::declare()
{
	return BaseClassDefiner(CogenerationPlant::addConstructToMap, CogenerationPlant::addPrimitiveAssignFnsToMap, CogenerationPlant::addClassAssignFnsToMap, CogenerationPlant::debugName);
}

namespace CIMPP
{
	BaseClass* CogenerationPlant_factory()
	{
		return new CogenerationPlant;
	}
}
