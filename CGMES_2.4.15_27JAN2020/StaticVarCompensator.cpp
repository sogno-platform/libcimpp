/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "StaticVarCompensator.hpp"

#include <algorithm>
#include <sstream>

#include "Reactance.hpp"
#include "Reactance.hpp"
#include "ReactivePower.hpp"
#include "SVCControlMode.hpp"
#include "VoltagePerReactivePower.hpp"
#include "Voltage.hpp"

using namespace CIMPP;

StaticVarCompensator::StaticVarCompensator() {};
StaticVarCompensator::~StaticVarCompensator() {};


bool assign_StaticVarCompensator_capacitiveRating(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StaticVarCompensator* element = dynamic_cast<StaticVarCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->capacitiveRating;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StaticVarCompensator_inductiveRating(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StaticVarCompensator* element = dynamic_cast<StaticVarCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->inductiveRating;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StaticVarCompensator_q(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StaticVarCompensator* element = dynamic_cast<StaticVarCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->q;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StaticVarCompensator_sVCControlMode(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StaticVarCompensator* element = dynamic_cast<StaticVarCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->sVCControlMode;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StaticVarCompensator_slope(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StaticVarCompensator* element = dynamic_cast<StaticVarCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->slope;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_StaticVarCompensator_voltageSetPoint(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (StaticVarCompensator* element = dynamic_cast<StaticVarCompensator*>(BaseClass_ptr1))
	{
		buffer >> element->voltageSetPoint;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}








const char StaticVarCompensator::debugName[] = "StaticVarCompensator";
const char* StaticVarCompensator::debugString() const
{
	return StaticVarCompensator::debugName;
}

void StaticVarCompensator::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:StaticVarCompensator"), &StaticVarCompensator_factory));
}

void StaticVarCompensator::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:StaticVarCompensator.capacitiveRating"), &assign_StaticVarCompensator_capacitiveRating));
	assign_map.insert(std::make_pair(std::string("cim:StaticVarCompensator.inductiveRating"), &assign_StaticVarCompensator_inductiveRating));
	assign_map.insert(std::make_pair(std::string("cim:StaticVarCompensator.q"), &assign_StaticVarCompensator_q));
	assign_map.insert(std::make_pair(std::string("cim:StaticVarCompensator.sVCControlMode"), &assign_StaticVarCompensator_sVCControlMode));
	assign_map.insert(std::make_pair(std::string("cim:StaticVarCompensator.slope"), &assign_StaticVarCompensator_slope));
	assign_map.insert(std::make_pair(std::string("cim:StaticVarCompensator.voltageSetPoint"), &assign_StaticVarCompensator_voltageSetPoint));
}

void StaticVarCompensator::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner StaticVarCompensator::declare()
{
	return BaseClassDefiner(StaticVarCompensator::addConstructToMap, StaticVarCompensator::addPrimitiveAssignFnsToMap, StaticVarCompensator::addClassAssignFnsToMap, StaticVarCompensator::debugName);
}

namespace CIMPP
{
	BaseClass* StaticVarCompensator_factory()
	{
		return new StaticVarCompensator;
	}
}
