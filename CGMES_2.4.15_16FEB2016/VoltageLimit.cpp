/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VoltageLimit.hpp"

#include <algorithm>
#include <sstream>

#include "Voltage.hpp"

using namespace CIMPP;

VoltageLimit::VoltageLimit() {};
VoltageLimit::~VoltageLimit() {};


bool assign_VoltageLimit_value(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VoltageLimit* element = dynamic_cast<VoltageLimit*>(BaseClass_ptr1))
	{
		buffer >> element->value;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



const char VoltageLimit::debugName[] = "VoltageLimit";
const char* VoltageLimit::debugString() const
{
	return VoltageLimit::debugName;
}

void VoltageLimit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:VoltageLimit"), &VoltageLimit_factory));
}

void VoltageLimit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:VoltageLimit.value"), &assign_VoltageLimit_value));
}

void VoltageLimit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner VoltageLimit::declare()
{
	return BaseClassDefiner(VoltageLimit::addConstructToMap, VoltageLimit::addPrimitiveAssignFnsToMap, VoltageLimit::addClassAssignFnsToMap, VoltageLimit::debugName);
}

namespace CIMPP
{
	BaseClass* VoltageLimit_factory()
	{
		return new VoltageLimit;
	}
}
