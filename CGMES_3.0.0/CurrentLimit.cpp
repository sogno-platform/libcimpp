/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CurrentLimit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "CurrentFlow.hpp"
#include "CurrentFlow.hpp"

using namespace CIMPP;

CurrentLimit::CurrentLimit() {};
CurrentLimit::~CurrentLimit() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:CurrentLimit.normalValue", { CGMESProfile::EQ, } },
	{ "cim:CurrentLimit.value", { CGMESProfile::SSH, } },
};

std::list<CGMESProfile>
CurrentLimit::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
CurrentLimit::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = OperationalLimit::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_CurrentLimit_normalValue(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (CurrentLimit* element = dynamic_cast<CurrentLimit*>(BaseClass_ptr1))
	{
		buffer >> element->normalValue;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_CurrentLimit_value(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (CurrentLimit* element = dynamic_cast<CurrentLimit*>(BaseClass_ptr1))
	{
		buffer >> element->value;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_CurrentLimit_normalValue(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const CurrentLimit* element = dynamic_cast<const CurrentLimit*>(BaseClass_ptr1))
	{
		buffer << element->normalValue;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_CurrentLimit_value(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const CurrentLimit* element = dynamic_cast<const CurrentLimit*>(BaseClass_ptr1))
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



const char CurrentLimit::debugName[] = "CurrentLimit";
const char* CurrentLimit::debugString() const
{
	return CurrentLimit::debugName;
}

void CurrentLimit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:CurrentLimit"), &CurrentLimit_factory));
}

void CurrentLimit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:CurrentLimit.normalValue"), &assign_CurrentLimit_normalValue));
	assign_map.insert(std::make_pair(std::string("cim:CurrentLimit.value"), &assign_CurrentLimit_value));
}

void CurrentLimit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void CurrentLimit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OperationalLimit::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:CurrentLimit.normalValue", &get_CurrentLimit_normalValue);
	get_map.emplace("cim:CurrentLimit.value", &get_CurrentLimit_value);
}

void CurrentLimit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	OperationalLimit::addClassGetFnsToMap(get_map);
}

void CurrentLimit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OperationalLimit::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner CurrentLimit::declare()
{
	return BaseClassDefiner(CurrentLimit::addConstructToMap, CurrentLimit::addPrimitiveAssignFnsToMap, CurrentLimit::addClassAssignFnsToMap, CurrentLimit::debugName);
}

namespace CIMPP
{
	BaseClass* CurrentLimit_factory()
	{
		return new CurrentLimit;
	}
}
