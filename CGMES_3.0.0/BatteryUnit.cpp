/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "BatteryUnit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "BatteryStateKind.hpp"
#include "RealEnergy.hpp"
#include "RealEnergy.hpp"

using namespace CIMPP;

BatteryUnit::BatteryUnit() {};
BatteryUnit::~BatteryUnit() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:BatteryUnit.batteryState", { CGMESProfile::SSH, } },
	{ "cim:BatteryUnit.ratedE", { CGMESProfile::EQ, } },
	{ "cim:BatteryUnit.storedE", { CGMESProfile::SSH, } },
};

std::list<CGMESProfile>
BatteryUnit::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
BatteryUnit::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PowerElectronicsUnit::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


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



bool get_BatteryUnit_ratedE(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const BatteryUnit* element = dynamic_cast<const BatteryUnit*>(BaseClass_ptr1))
	{
		buffer << element->ratedE;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_BatteryUnit_storedE(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const BatteryUnit* element = dynamic_cast<const BatteryUnit*>(BaseClass_ptr1))
	{
		buffer << element->storedE;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



bool get_BatteryUnit_batteryState(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const BatteryUnit* element = dynamic_cast<const BatteryUnit*>(BaseClass_ptr1))
	{
		buffer << element->batteryState;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
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

void BatteryUnit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerElectronicsUnit::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:BatteryUnit.ratedE", &get_BatteryUnit_ratedE);
	get_map.emplace("cim:BatteryUnit.storedE", &get_BatteryUnit_storedE);
}

void BatteryUnit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerElectronicsUnit::addClassGetFnsToMap(get_map);
}

void BatteryUnit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerElectronicsUnit::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:BatteryUnit.batteryState", &get_BatteryUnit_batteryState);
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
