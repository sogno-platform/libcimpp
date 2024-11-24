/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "BasicIntervalSchedule.hpp"

#include <algorithm>
#include <sstream>

#include "DateTime.hpp"
#include "UnitSymbol.hpp"
#include "UnitSymbol.hpp"

using namespace CIMPP;

BasicIntervalSchedule::BasicIntervalSchedule() {};
BasicIntervalSchedule::~BasicIntervalSchedule() {};


bool assign_BasicIntervalSchedule_startTime(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (BasicIntervalSchedule* element = dynamic_cast<BasicIntervalSchedule*>(BaseClass_ptr1))
	{
		buffer >> element->startTime;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_BasicIntervalSchedule_value1Unit(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (BasicIntervalSchedule* element = dynamic_cast<BasicIntervalSchedule*>(BaseClass_ptr1))
	{
		buffer >> element->value1Unit;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_BasicIntervalSchedule_value2Unit(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (BasicIntervalSchedule* element = dynamic_cast<BasicIntervalSchedule*>(BaseClass_ptr1))
	{
		buffer >> element->value2Unit;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}





const char BasicIntervalSchedule::debugName[] = "BasicIntervalSchedule";
const char* BasicIntervalSchedule::debugString() const
{
	return BasicIntervalSchedule::debugName;
}

void BasicIntervalSchedule::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:BasicIntervalSchedule"), &BasicIntervalSchedule_factory));
}

void BasicIntervalSchedule::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:BasicIntervalSchedule.startTime"), &assign_BasicIntervalSchedule_startTime));
	assign_map.insert(std::make_pair(std::string("cim:BasicIntervalSchedule.value1Unit"), &assign_BasicIntervalSchedule_value1Unit));
	assign_map.insert(std::make_pair(std::string("cim:BasicIntervalSchedule.value2Unit"), &assign_BasicIntervalSchedule_value2Unit));
}

void BasicIntervalSchedule::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner BasicIntervalSchedule::declare()
{
	return BaseClassDefiner(BasicIntervalSchedule::addConstructToMap, BasicIntervalSchedule::addPrimitiveAssignFnsToMap, BasicIntervalSchedule::addClassAssignFnsToMap, BasicIntervalSchedule::debugName);
}

namespace CIMPP
{
	BaseClass* BasicIntervalSchedule_factory()
	{
		return new BasicIntervalSchedule;
	}
}
