/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "BatteryUnit.hpp"

#include <algorithm>
#include <sstream>

#include "BatteryStateKind.hpp"
#include "RealEnergy.hpp"
#include "RealEnergy.hpp"

using namespace CIMPP;

BatteryUnit::BatteryUnit() {};
BatteryUnit::~BatteryUnit() {};


bool assign_BatteryUnit_batteryState(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (BatteryUnit* element = dynamic_cast<BatteryUnit*>(BaseClass_ptr1))
	{
		buffer >> element->batteryState;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_BatteryUnit_ratedE(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (BatteryUnit* element = dynamic_cast<BatteryUnit*>(BaseClass_ptr1))
	{
		buffer >> element->ratedE;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_BatteryUnit_storedE(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (BatteryUnit* element = dynamic_cast<BatteryUnit*>(BaseClass_ptr1))
	{
		buffer >> element->storedE;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}





const char BatteryUnit::debugName[] = "BatteryUnit";
const char* BatteryUnit::debugString() const
{
	return BatteryUnit::debugName;
}

void BatteryUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:BatteryUnit"), &BatteryUnit_factory));
}

void BatteryUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:BatteryUnit.batteryState"), &assign_BatteryUnit_batteryState));
	assign_map.insert(std::make_pair(std::string("cim:BatteryUnit.ratedE"), &assign_BatteryUnit_ratedE));
	assign_map.insert(std::make_pair(std::string("cim:BatteryUnit.storedE"), &assign_BatteryUnit_storedE));
}

void BatteryUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner BatteryUnit::declare()
{
	return BaseClassDefiner(BatteryUnit::addConstructToMap, BatteryUnit::addPrimitiveAssignFnsToMap, BatteryUnit::addClassAssignFnsToMap, BatteryUnit::debugName);
}

namespace CIMPP
{
	BaseClass* BatteryUnit_factory()
	{
		return new BatteryUnit;
	}
}
