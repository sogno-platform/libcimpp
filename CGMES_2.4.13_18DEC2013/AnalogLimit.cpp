/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AnalogLimit.hpp"

#include <algorithm>
#include <sstream>

#include "AnalogLimitSet.hpp"
#include "Simple_Float.hpp"

using namespace CIMPP;

AnalogLimit::AnalogLimit() : LimitSet(nullptr) {};
AnalogLimit::~AnalogLimit() {};



bool assign_AnalogLimit_value(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AnalogLimit* element = dynamic_cast<AnalogLimit*>(BaseClass_ptr1))
	{
		buffer >> element->value;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_AnalogLimitSet_Limits(BaseClass*, BaseClass*);
bool assign_AnalogLimit_LimitSet(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AnalogLimit* element = dynamic_cast<AnalogLimit*>(BaseClass_ptr1);
	AnalogLimitSet* element2 = dynamic_cast<AnalogLimitSet*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->LimitSet != element2)
		{
			element->LimitSet = element2;
			return assign_AnalogLimitSet_Limits(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char AnalogLimit::debugName[] = "AnalogLimit";
const char* AnalogLimit::debugString() const
{
	return AnalogLimit::debugName;
}

void AnalogLimit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:AnalogLimit"), &AnalogLimit_factory));
}

void AnalogLimit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:AnalogLimit.value"), &assign_AnalogLimit_value));
}

void AnalogLimit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:AnalogLimit.LimitSet"), &assign_AnalogLimit_LimitSet));
}

const BaseClassDefiner AnalogLimit::declare()
{
	return BaseClassDefiner(AnalogLimit::addConstructToMap, AnalogLimit::addPrimitiveAssignFnsToMap, AnalogLimit::addClassAssignFnsToMap, AnalogLimit::debugName);
}

namespace CIMPP
{
	BaseClass* AnalogLimit_factory()
	{
		return new AnalogLimit;
	}
}
