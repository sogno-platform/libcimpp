/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AnalogLimit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "AnalogLimitSet.hpp"
#include "Simple_Float.hpp"

using namespace CIMPP;

AnalogLimit::AnalogLimit() : LimitSet(nullptr) {};
AnalogLimit::~AnalogLimit() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:AnalogLimit.LimitSet", { CGMESProfile::EQ, } },
	{ "cim:AnalogLimit.value", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
AnalogLimit::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
AnalogLimit::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Limit::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_AnalogLimit_value(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AnalogLimit* element = dynamic_cast<AnalogLimit*>(BaseClass_ptr1))
	{
		buffer >> element->value;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_AnalogLimitSet_Limits(BaseClass*, BaseClass*);
bool assign_AnalogLimit_LimitSet(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AnalogLimit* element = dynamic_cast<AnalogLimit*>(BaseClass_ptr1);
	AnalogLimitSet* element2 = dynamic_cast<AnalogLimitSet*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->LimitSet != element2)
		{
			element->LimitSet = element2;
			return assign_AnalogLimitSet_Limits(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_AnalogLimit_value(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const AnalogLimit* element = dynamic_cast<const AnalogLimit*>(BaseClass_ptr1))
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


bool get_AnalogLimit_LimitSet(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const AnalogLimit* element = dynamic_cast<const AnalogLimit*>(BaseClass_ptr1))
	{
		if (element->LimitSet != 0)
		{
			BaseClass_list.push_back(element->LimitSet);
			return true;
		}
	}
	return false;
}


const char AnalogLimit::debugName[] = "AnalogLimit";
const char* AnalogLimit::debugString() const
{
	return AnalogLimit::debugName;
}

void AnalogLimit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:AnalogLimit"), &AnalogLimit_factory));
}

void AnalogLimit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:AnalogLimit.value"), &assign_AnalogLimit_value));
}

void AnalogLimit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:AnalogLimit.LimitSet"), &assign_AnalogLimit_LimitSet));
}

void AnalogLimit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Limit::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:AnalogLimit.value", &get_AnalogLimit_value);
}

void AnalogLimit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Limit::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:AnalogLimit.LimitSet", &get_AnalogLimit_LimitSet);
}

void AnalogLimit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Limit::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner AnalogLimit::declare()
{
	return BaseClassDefiner(AnalogLimit::addConstructToMap, AnalogLimit::addPrimitiveAssignFnsToMap, AnalogLimit::addClassAssignFnsToMap, AnalogLimit::debugName);
}

namespace CIMPP
{
	BaseClass* AnalogLimit_factory()
	{
		return new AnalogLimit;
	}
}
