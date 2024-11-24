/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Analog.hpp"

#include <algorithm>
#include <sstream>

#include "AnalogValue.hpp"
#include "AnalogLimitSet.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

Analog::Analog() {};
Analog::~Analog() {};




bool assign_Analog_positiveFlowIn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (Analog* element = dynamic_cast<Analog*>(BaseClass_ptr1))
	{
		buffer >> element->positiveFlowIn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_AnalogValue_Analog(BaseClass*, BaseClass*);
bool assign_Analog_AnalogValues(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Analog* element = dynamic_cast<Analog*>(BaseClass_ptr1);
	AnalogValue* element2 = dynamic_cast<AnalogValue*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->AnalogValues.begin(), element->AnalogValues.end(), element2) == element->AnalogValues.end())
		{
			element->AnalogValues.push_back(element2);
			return assign_AnalogValue_Analog(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_AnalogLimitSet_Measurements(BaseClass*, BaseClass*);
bool assign_Analog_LimitSets(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Analog* element = dynamic_cast<Analog*>(BaseClass_ptr1);
	AnalogLimitSet* element2 = dynamic_cast<AnalogLimitSet*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->LimitSets.begin(), element->LimitSets.end(), element2) == element->LimitSets.end())
		{
			element->LimitSets.push_back(element2);
			return assign_AnalogLimitSet_Measurements(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char Analog::debugName[] = "Analog";
const char* Analog::debugString() const
{
	return Analog::debugName;
}

void Analog::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:Analog"), &Analog_factory));
}

void Analog::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:Analog.positiveFlowIn"), &assign_Analog_positiveFlowIn));
}

void Analog::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:Analog.AnalogValues"), &assign_Analog_AnalogValues));
	assign_map.insert(std::make_pair(std::string("cim:Analog.LimitSets"), &assign_Analog_LimitSets));
}

const BaseClassDefiner Analog::declare()
{
	return BaseClassDefiner(Analog::addConstructToMap, Analog::addPrimitiveAssignFnsToMap, Analog::addClassAssignFnsToMap, Analog::debugName);
}

namespace CIMPP
{
	BaseClass* Analog_factory()
	{
		return new Analog;
	}
}
