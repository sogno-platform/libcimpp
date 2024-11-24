/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Control.hpp"

#include <algorithm>
#include <sstream>

#include "PowerSystemResource.hpp"
#include "String.hpp"
#include "Boolean.hpp"
#include "DateTime.hpp"
#include "UnitMultiplier.hpp"
#include "UnitSymbol.hpp"

using namespace CIMPP;

Control::Control() : PowerSystemResource(nullptr) {};
Control::~Control() {};



bool assign_Control_controlType(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (Control* element = dynamic_cast<Control*>(BaseClass_ptr1))
	{
		buffer >> element->controlType;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_Control_operationInProgress(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (Control* element = dynamic_cast<Control*>(BaseClass_ptr1))
	{
		buffer >> element->operationInProgress;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_Control_timeStamp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (Control* element = dynamic_cast<Control*>(BaseClass_ptr1))
	{
		buffer >> element->timeStamp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_Control_unitMultiplier(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (Control* element = dynamic_cast<Control*>(BaseClass_ptr1))
	{
		buffer >> element->unitMultiplier;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_Control_unitSymbol(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (Control* element = dynamic_cast<Control*>(BaseClass_ptr1))
	{
		buffer >> element->unitSymbol;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_PowerSystemResource_Controls(BaseClass*, BaseClass*);
bool assign_Control_PowerSystemResource(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Control* element = dynamic_cast<Control*>(BaseClass_ptr1);
	PowerSystemResource* element2 = dynamic_cast<PowerSystemResource*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PowerSystemResource != element2)
		{
			element->PowerSystemResource = element2;
			return assign_PowerSystemResource_Controls(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}






const char Control::debugName[] = "Control";
const char* Control::debugString() const
{
	return Control::debugName;
}

void Control::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:Control"), &Control_factory));
}

void Control::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:Control.controlType"), &assign_Control_controlType));
	assign_map.insert(std::make_pair(std::string("cim:Control.operationInProgress"), &assign_Control_operationInProgress));
	assign_map.insert(std::make_pair(std::string("cim:Control.timeStamp"), &assign_Control_timeStamp));
	assign_map.insert(std::make_pair(std::string("cim:Control.unitMultiplier"), &assign_Control_unitMultiplier));
	assign_map.insert(std::make_pair(std::string("cim:Control.unitSymbol"), &assign_Control_unitSymbol));
}

void Control::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:Control.PowerSystemResource"), &assign_Control_PowerSystemResource));
}

const BaseClassDefiner Control::declare()
{
	return BaseClassDefiner(Control::addConstructToMap, Control::addPrimitiveAssignFnsToMap, Control::addClassAssignFnsToMap, Control::debugName);
}

namespace CIMPP
{
	BaseClass* Control_factory()
	{
		return new Control;
	}
}
