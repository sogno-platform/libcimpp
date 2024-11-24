/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AnalogControl.hpp"

#include <algorithm>
#include <sstream>

#include "AnalogValue.hpp"
#include "Float.hpp"
#include "Float.hpp"

using namespace CIMPP;

AnalogControl::AnalogControl() : AnalogValue(nullptr) {};
AnalogControl::~AnalogControl() {};



bool assign_AnalogControl_maxValue(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AnalogControl* element = dynamic_cast<AnalogControl*>(BaseClass_ptr1))
	{
		buffer >> element->maxValue;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_AnalogControl_minValue(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AnalogControl* element = dynamic_cast<AnalogControl*>(BaseClass_ptr1))
	{
		buffer >> element->minValue;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_AnalogValue_AnalogControl(BaseClass*, BaseClass*);
bool assign_AnalogControl_AnalogValue(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AnalogControl* element = dynamic_cast<AnalogControl*>(BaseClass_ptr1);
	AnalogValue* element2 = dynamic_cast<AnalogValue*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->AnalogValue != element2)
		{
			element->AnalogValue = element2;
			return assign_AnalogValue_AnalogControl(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



const char AnalogControl::debugName[] = "AnalogControl";
const char* AnalogControl::debugString() const
{
	return AnalogControl::debugName;
}

void AnalogControl::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:AnalogControl"), &AnalogControl_factory));
}

void AnalogControl::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:AnalogControl.maxValue"), &assign_AnalogControl_maxValue));
	assign_map.insert(std::make_pair(std::string("cim:AnalogControl.minValue"), &assign_AnalogControl_minValue));
}

void AnalogControl::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:AnalogControl.AnalogValue"), &assign_AnalogControl_AnalogValue));
}

const BaseClassDefiner AnalogControl::declare()
{
	return BaseClassDefiner(AnalogControl::addConstructToMap, AnalogControl::addPrimitiveAssignFnsToMap, AnalogControl::addClassAssignFnsToMap, AnalogControl::debugName);
}

namespace CIMPP
{
	BaseClass* AnalogControl_factory()
	{
		return new AnalogControl;
	}
}
