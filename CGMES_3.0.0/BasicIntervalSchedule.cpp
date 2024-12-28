/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "BasicIntervalSchedule.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "DateTime.hpp"
#include "UnitSymbol.hpp"
#include "UnitSymbol.hpp"

using namespace CIMPP;

BasicIntervalSchedule::BasicIntervalSchedule() {};
BasicIntervalSchedule::~BasicIntervalSchedule() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:BasicIntervalSchedule.startTime", { CGMESProfile::EQ, } },
	{ "cim:BasicIntervalSchedule.value1Unit", { CGMESProfile::EQ, } },
	{ "cim:BasicIntervalSchedule.value2Unit", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
BasicIntervalSchedule::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
BasicIntervalSchedule::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_BasicIntervalSchedule_startTime(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (BasicIntervalSchedule* element = dynamic_cast<BasicIntervalSchedule*>(BaseClass_ptr1))
	{
		element->startTime = buffer.str();
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



bool get_BasicIntervalSchedule_startTime(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const BasicIntervalSchedule* element = dynamic_cast<const BasicIntervalSchedule*>(BaseClass_ptr1))
	{
		buffer << element->startTime;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



bool get_BasicIntervalSchedule_value1Unit(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const BasicIntervalSchedule* element = dynamic_cast<const BasicIntervalSchedule*>(BaseClass_ptr1))
	{
		buffer << element->value1Unit;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_BasicIntervalSchedule_value2Unit(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const BasicIntervalSchedule* element = dynamic_cast<const BasicIntervalSchedule*>(BaseClass_ptr1))
	{
		buffer << element->value2Unit;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
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

void BasicIntervalSchedule::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:BasicIntervalSchedule.startTime", &get_BasicIntervalSchedule_startTime);
}

void BasicIntervalSchedule::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void BasicIntervalSchedule::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:BasicIntervalSchedule.value1Unit", &get_BasicIntervalSchedule_value1Unit);
	get_map.emplace("cim:BasicIntervalSchedule.value2Unit", &get_BasicIntervalSchedule_value2Unit);
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
