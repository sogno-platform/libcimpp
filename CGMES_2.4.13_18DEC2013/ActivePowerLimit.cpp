/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ActivePowerLimit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

ActivePowerLimit::ActivePowerLimit() {}
ActivePowerLimit::~ActivePowerLimit() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ActivePowerLimit.value", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
ActivePowerLimit::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ActivePowerLimit::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = OperationalLimit::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ActivePowerLimit_value(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ActivePowerLimit* element = dynamic_cast<ActivePowerLimit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->value;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ActivePowerLimit_value(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ActivePowerLimit* element = dynamic_cast<const ActivePowerLimit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->value;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ActivePowerLimit::debugName[] = "ActivePowerLimit";
const char* ActivePowerLimit::debugString() const
{
	return ActivePowerLimit::debugName;
}

void ActivePowerLimit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:ActivePowerLimit", &ActivePowerLimit_factory);
}

void ActivePowerLimit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:ActivePowerLimit.value", &assign_ActivePowerLimit_value);
}

void ActivePowerLimit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ActivePowerLimit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OperationalLimit::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ActivePowerLimit.value", &get_ActivePowerLimit_value);
}

void ActivePowerLimit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	OperationalLimit::addClassGetFnsToMap(get_map);
}

void ActivePowerLimit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OperationalLimit::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ActivePowerLimit::declare()
{
	return BaseClassDefiner(ActivePowerLimit::addConstructToMap, ActivePowerLimit::addPrimitiveAssignFnsToMap, ActivePowerLimit::addClassAssignFnsToMap, ActivePowerLimit::debugName);
}

namespace CIMPP
{
	BaseClass* ActivePowerLimit_factory()
	{
		return new ActivePowerLimit;
	}
}
