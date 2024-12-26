/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CAESPlant.hpp"

#include <algorithm>
#include <sstream>

#include "ThermalGeneratingUnit.hpp"

using namespace CIMPP;

CAESPlant::CAESPlant() : ThermalGeneratingUnit(nullptr) {};
CAESPlant::~CAESPlant() {};




bool assign_ThermalGeneratingUnit_CAESPlant(BaseClass*, BaseClass*);
bool assign_CAESPlant_ThermalGeneratingUnit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	CAESPlant* element = dynamic_cast<CAESPlant*>(BaseClass_ptr1);
	ThermalGeneratingUnit* element2 = dynamic_cast<ThermalGeneratingUnit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ThermalGeneratingUnit != element2)
		{
			element->ThermalGeneratingUnit = element2;
			return assign_ThermalGeneratingUnit_CAESPlant(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char CAESPlant::debugName[] = "CAESPlant";
const char* CAESPlant::debugString() const
{
	return CAESPlant::debugName;
}

void CAESPlant::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:CAESPlant"), &CAESPlant_factory));
}

void CAESPlant::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void CAESPlant::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:CAESPlant.ThermalGeneratingUnit"), &assign_CAESPlant_ThermalGeneratingUnit));
}

const BaseClassDefiner CAESPlant::declare()
{
	return BaseClassDefiner(CAESPlant::addConstructToMap, CAESPlant::addPrimitiveAssignFnsToMap, CAESPlant::addClassAssignFnsToMap, CAESPlant::debugName);
}

namespace CIMPP
{
	BaseClass* CAESPlant_factory()
	{
		return new CAESPlant;
	}
}
