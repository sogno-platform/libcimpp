/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AccumulatorReset.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "AccumulatorValue.hpp"

using namespace CIMPP;

AccumulatorReset::AccumulatorReset() : AccumulatorValue(nullptr) {};
AccumulatorReset::~AccumulatorReset() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:AccumulatorReset.AccumulatorValue", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
AccumulatorReset::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
AccumulatorReset::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Control::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



bool assign_AccumulatorValue_AccumulatorReset(BaseClass*, BaseClass*);
bool assign_AccumulatorReset_AccumulatorValue(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AccumulatorReset* element = dynamic_cast<AccumulatorReset*>(BaseClass_ptr1);
	AccumulatorValue* element2 = dynamic_cast<AccumulatorValue*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->AccumulatorValue != element2)
		{
			element->AccumulatorValue = element2;
			return assign_AccumulatorValue_AccumulatorReset(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


bool get_AccumulatorReset_AccumulatorValue(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const AccumulatorReset* element = dynamic_cast<const AccumulatorReset*>(BaseClass_ptr1))
	{
		if (element->AccumulatorValue != 0)
		{
			BaseClass_list.push_back(element->AccumulatorValue);
			return true;
		}
	}
	return false;
}


const char AccumulatorReset::debugName[] = "AccumulatorReset";
const char* AccumulatorReset::debugString() const
{
	return AccumulatorReset::debugName;
}

void AccumulatorReset::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:AccumulatorReset"), &AccumulatorReset_factory));
}

void AccumulatorReset::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void AccumulatorReset::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:AccumulatorReset.AccumulatorValue"), &assign_AccumulatorReset_AccumulatorValue));
}

void AccumulatorReset::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Control::addPrimitiveGetFnsToMap(get_map);
}

void AccumulatorReset::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Control::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:AccumulatorReset.AccumulatorValue", &get_AccumulatorReset_AccumulatorValue);
}

void AccumulatorReset::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Control::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner AccumulatorReset::declare()
{
	return BaseClassDefiner(AccumulatorReset::addConstructToMap, AccumulatorReset::addPrimitiveAssignFnsToMap, AccumulatorReset::addClassAssignFnsToMap, AccumulatorReset::debugName);
}

namespace CIMPP
{
	BaseClass* AccumulatorReset_factory()
	{
		return new AccumulatorReset;
	}
}
