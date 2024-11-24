/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ApparentPowerLimit.hpp"

#include <algorithm>
#include <sstream>

#include "ApparentPower.hpp"

using namespace CIMPP;

ApparentPowerLimit::ApparentPowerLimit() {};
ApparentPowerLimit::~ApparentPowerLimit() {};


bool assign_ApparentPowerLimit_value(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ApparentPowerLimit* element = dynamic_cast<ApparentPowerLimit*>(BaseClass_ptr1))
	{
		buffer >> element->value;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



const char ApparentPowerLimit::debugName[] = "ApparentPowerLimit";
const char* ApparentPowerLimit::debugString() const
{
	return ApparentPowerLimit::debugName;
}

void ApparentPowerLimit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ApparentPowerLimit"), &ApparentPowerLimit_factory));
}

void ApparentPowerLimit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ApparentPowerLimit.value"), &assign_ApparentPowerLimit_value));
}

void ApparentPowerLimit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner ApparentPowerLimit::declare()
{
	return BaseClassDefiner(ApparentPowerLimit::addConstructToMap, ApparentPowerLimit::addPrimitiveAssignFnsToMap, ApparentPowerLimit::addClassAssignFnsToMap, ApparentPowerLimit::debugName);
}

namespace CIMPP
{
	BaseClass* ApparentPowerLimit_factory()
	{
		return new ApparentPowerLimit;
	}
}
