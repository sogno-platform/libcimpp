/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "NonConformLoadSchedule.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "NonConformLoadGroup.hpp"

using namespace CIMPP;

NonConformLoadSchedule::NonConformLoadSchedule() : NonConformLoadGroup(nullptr) {};
NonConformLoadSchedule::~NonConformLoadSchedule() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:NonConformLoadSchedule.NonConformLoadGroup", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
NonConformLoadSchedule::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
NonConformLoadSchedule::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = SeasonDayTypeSchedule::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



bool assign_NonConformLoadGroup_NonConformLoadSchedules(BaseClass*, BaseClass*);
bool assign_NonConformLoadSchedule_NonConformLoadGroup(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	NonConformLoadSchedule* element = dynamic_cast<NonConformLoadSchedule*>(BaseClass_ptr1);
	NonConformLoadGroup* element2 = dynamic_cast<NonConformLoadGroup*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->NonConformLoadGroup != element2)
		{
			element->NonConformLoadGroup = element2;
			return assign_NonConformLoadGroup_NonConformLoadSchedules(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


bool get_NonConformLoadSchedule_NonConformLoadGroup(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const NonConformLoadSchedule* element = dynamic_cast<const NonConformLoadSchedule*>(BaseClass_ptr1))
	{
		if (element->NonConformLoadGroup != 0)
		{
			BaseClass_list.push_back(element->NonConformLoadGroup);
			return true;
		}
	}
	return false;
}


const char NonConformLoadSchedule::debugName[] = "NonConformLoadSchedule";
const char* NonConformLoadSchedule::debugString() const
{
	return NonConformLoadSchedule::debugName;
}

void NonConformLoadSchedule::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:NonConformLoadSchedule"), &NonConformLoadSchedule_factory));
}

void NonConformLoadSchedule::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void NonConformLoadSchedule::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:NonConformLoadSchedule.NonConformLoadGroup"), &assign_NonConformLoadSchedule_NonConformLoadGroup));
}

void NonConformLoadSchedule::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SeasonDayTypeSchedule::addPrimitiveGetFnsToMap(get_map);
}

void NonConformLoadSchedule::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	SeasonDayTypeSchedule::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:NonConformLoadSchedule.NonConformLoadGroup", &get_NonConformLoadSchedule_NonConformLoadGroup);
}

void NonConformLoadSchedule::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SeasonDayTypeSchedule::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner NonConformLoadSchedule::declare()
{
	return BaseClassDefiner(NonConformLoadSchedule::addConstructToMap, NonConformLoadSchedule::addPrimitiveAssignFnsToMap, NonConformLoadSchedule::addClassAssignFnsToMap, NonConformLoadSchedule::debugName);
}

namespace CIMPP
{
	BaseClass* NonConformLoadSchedule_factory()
	{
		return new NonConformLoadSchedule;
	}
}
