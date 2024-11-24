/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CurrentLimit.hpp"

#include <algorithm>
#include <sstream>

#include "CurrentFlow.hpp"
#include "CurrentFlow.hpp"

using namespace CIMPP;

CurrentLimit::CurrentLimit() {};
CurrentLimit::~CurrentLimit() {};


bool assign_CurrentLimit_normalValue(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (CurrentLimit* element = dynamic_cast<CurrentLimit*>(BaseClass_ptr1))
	{
		buffer >> element->normalValue;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_CurrentLimit_value(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (CurrentLimit* element = dynamic_cast<CurrentLimit*>(BaseClass_ptr1))
	{
		buffer >> element->value;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}




const char CurrentLimit::debugName[] = "CurrentLimit";
const char* CurrentLimit::debugString() const
{
	return CurrentLimit::debugName;
}

void CurrentLimit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:CurrentLimit"), &CurrentLimit_factory));
}

void CurrentLimit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:CurrentLimit.normalValue"), &assign_CurrentLimit_normalValue));
	assign_map.insert(std::make_pair(std::string("cim:CurrentLimit.value"), &assign_CurrentLimit_value));
}

void CurrentLimit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner CurrentLimit::declare()
{
	return BaseClassDefiner(CurrentLimit::addConstructToMap, CurrentLimit::addPrimitiveAssignFnsToMap, CurrentLimit::addClassAssignFnsToMap, CurrentLimit::debugName);
}

namespace CIMPP
{
	BaseClass* CurrentLimit_factory()
	{
		return new CurrentLimit;
	}
}
