/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AccumulatorLimit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "AccumulatorLimitSet.hpp"
#include "Integer.hpp"

using namespace CIMPP;

AccumulatorLimit::AccumulatorLimit() : LimitSet(nullptr) {};
AccumulatorLimit::~AccumulatorLimit() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:AccumulatorLimit.LimitSet", { CGMESProfile::EQ, } },
	{ "cim:AccumulatorLimit.value", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
AccumulatorLimit::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
AccumulatorLimit::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Limit::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_AccumulatorLimit_value(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AccumulatorLimit* element = dynamic_cast<AccumulatorLimit*>(BaseClass_ptr1))
	{
		buffer >> element->value;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_AccumulatorLimitSet_Limits(BaseClass*, BaseClass*);
bool assign_AccumulatorLimit_LimitSet(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AccumulatorLimit* element = dynamic_cast<AccumulatorLimit*>(BaseClass_ptr1);
	AccumulatorLimitSet* element2 = dynamic_cast<AccumulatorLimitSet*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->LimitSet != element2)
		{
			element->LimitSet = element2;
			return assign_AccumulatorLimitSet_Limits(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_AccumulatorLimit_value(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const AccumulatorLimit* element = dynamic_cast<const AccumulatorLimit*>(BaseClass_ptr1))
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


bool get_AccumulatorLimit_LimitSet(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const AccumulatorLimit* element = dynamic_cast<const AccumulatorLimit*>(BaseClass_ptr1))
	{
		if (element->LimitSet != 0)
		{
			BaseClass_list.push_back(element->LimitSet);
			return true;
		}
	}
	return false;
}


const char AccumulatorLimit::debugName[] = "AccumulatorLimit";
const char* AccumulatorLimit::debugString() const
{
	return AccumulatorLimit::debugName;
}

void AccumulatorLimit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:AccumulatorLimit"), &AccumulatorLimit_factory));
}

void AccumulatorLimit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:AccumulatorLimit.value"), &assign_AccumulatorLimit_value));
}

void AccumulatorLimit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:AccumulatorLimit.LimitSet"), &assign_AccumulatorLimit_LimitSet));
}

void AccumulatorLimit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Limit::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:AccumulatorLimit.value", &get_AccumulatorLimit_value);
}

void AccumulatorLimit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Limit::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:AccumulatorLimit.LimitSet", &get_AccumulatorLimit_LimitSet);
}

void AccumulatorLimit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Limit::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner AccumulatorLimit::declare()
{
	return BaseClassDefiner(AccumulatorLimit::addConstructToMap, AccumulatorLimit::addPrimitiveAssignFnsToMap, AccumulatorLimit::addClassAssignFnsToMap, AccumulatorLimit::debugName);
}

namespace CIMPP
{
	BaseClass* AccumulatorLimit_factory()
	{
		return new AccumulatorLimit;
	}
}
