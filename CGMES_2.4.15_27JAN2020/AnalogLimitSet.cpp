/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AnalogLimitSet.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Analog.hpp"
#include "AnalogLimit.hpp"

using namespace CIMPP;

AnalogLimitSet::AnalogLimitSet() {}
AnalogLimitSet::~AnalogLimitSet() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:AnalogLimitSet.Limits", { CGMESProfile::EQ, } },
	{ "cim:AnalogLimitSet.Measurements", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
AnalogLimitSet::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
AnalogLimitSet::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = LimitSet::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_AnalogLimit_LimitSet(BaseClass*, BaseClass*);
bool assign_AnalogLimitSet_Limits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AnalogLimitSet* element = dynamic_cast<AnalogLimitSet*>(BaseClass_ptr1);
	AnalogLimit* element2 = dynamic_cast<AnalogLimit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Limits.begin(), element->Limits.end(), element2) == element->Limits.end())
		{
			element->Limits.push_back(element2);
			return assign_AnalogLimit_LimitSet(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Analog_LimitSets(BaseClass*, BaseClass*);
bool assign_AnalogLimitSet_Measurements(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AnalogLimitSet* element = dynamic_cast<AnalogLimitSet*>(BaseClass_ptr1);
	Analog* element2 = dynamic_cast<Analog*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Measurements.begin(), element->Measurements.end(), element2) == element->Measurements.end())
		{
			element->Measurements.push_back(element2);
			return assign_Analog_LimitSets(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


bool get_AnalogLimitSet_Measurements(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const AnalogLimitSet* element = dynamic_cast<const AnalogLimitSet*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		std::copy(element->Measurements.begin(), element->Measurements.end(), std::back_inserter(BaseClass_list));
		return !BaseClass_list.empty();
	}
	return false;
}

const char AnalogLimitSet::debugName[] = "AnalogLimitSet";
const char* AnalogLimitSet::debugString() const
{
	return AnalogLimitSet::debugName;
}

void AnalogLimitSet::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:AnalogLimitSet", &AnalogLimitSet_factory);
}

void AnalogLimitSet::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void AnalogLimitSet::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:AnalogLimitSet.Limits", &assign_AnalogLimitSet_Limits);
	assign_map.emplace("cim:AnalogLimitSet.Measurements", &assign_AnalogLimitSet_Measurements);
}

void AnalogLimitSet::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	LimitSet::addPrimitiveGetFnsToMap(get_map);
}

void AnalogLimitSet::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	LimitSet::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:AnalogLimitSet.Measurements", &get_AnalogLimitSet_Measurements);
}

void AnalogLimitSet::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	LimitSet::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner AnalogLimitSet::declare()
{
	return BaseClassDefiner(AnalogLimitSet::addConstructToMap, AnalogLimitSet::addPrimitiveAssignFnsToMap, AnalogLimitSet::addClassAssignFnsToMap, AnalogLimitSet::debugName);
}

namespace CIMPP
{
	BaseClass* AnalogLimitSet_factory()
	{
		return new AnalogLimitSet;
	}
}
