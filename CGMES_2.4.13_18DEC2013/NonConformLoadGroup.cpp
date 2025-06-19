/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "NonConformLoadGroup.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "NonConformLoad.hpp"
#include "NonConformLoadSchedule.hpp"

using namespace CIMPP;

NonConformLoadGroup::NonConformLoadGroup() {}
NonConformLoadGroup::~NonConformLoadGroup() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:NonConformLoadGroup.EnergyConsumers", { CGMESProfile::EQ, } },
	{ "cim:NonConformLoadGroup.NonConformLoadSchedules", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
NonConformLoadGroup::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
NonConformLoadGroup::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = LoadGroup::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_NonConformLoad_LoadGroup(BaseClass*, BaseClass*);
bool assign_NonConformLoadGroup_EnergyConsumers(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	NonConformLoadGroup* element = dynamic_cast<NonConformLoadGroup*>(BaseClass_ptr1);
	NonConformLoad* element2 = dynamic_cast<NonConformLoad*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->EnergyConsumers.begin(), element->EnergyConsumers.end(), element2) == element->EnergyConsumers.end())
		{
			element->EnergyConsumers.push_back(element2);
			return assign_NonConformLoad_LoadGroup(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_NonConformLoadSchedule_NonConformLoadGroup(BaseClass*, BaseClass*);
bool assign_NonConformLoadGroup_NonConformLoadSchedules(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	NonConformLoadGroup* element = dynamic_cast<NonConformLoadGroup*>(BaseClass_ptr1);
	NonConformLoadSchedule* element2 = dynamic_cast<NonConformLoadSchedule*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->NonConformLoadSchedules.begin(), element->NonConformLoadSchedules.end(), element2) == element->NonConformLoadSchedules.end())
		{
			element->NonConformLoadSchedules.push_back(element2);
			return assign_NonConformLoadSchedule_NonConformLoadGroup(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



const char NonConformLoadGroup::debugName[] = "NonConformLoadGroup";
const char* NonConformLoadGroup::debugString() const
{
	return NonConformLoadGroup::debugName;
}

void NonConformLoadGroup::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:NonConformLoadGroup", &NonConformLoadGroup_factory);
}

void NonConformLoadGroup::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void NonConformLoadGroup::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:NonConformLoadGroup.EnergyConsumers", &assign_NonConformLoadGroup_EnergyConsumers);
	assign_map.emplace("cim:NonConformLoadGroup.NonConformLoadSchedules", &assign_NonConformLoadGroup_NonConformLoadSchedules);
}

void NonConformLoadGroup::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	LoadGroup::addPrimitiveGetFnsToMap(get_map);
}

void NonConformLoadGroup::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	LoadGroup::addClassGetFnsToMap(get_map);
}

void NonConformLoadGroup::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	LoadGroup::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner NonConformLoadGroup::declare()
{
	return BaseClassDefiner(NonConformLoadGroup::addConstructToMap, NonConformLoadGroup::addPrimitiveAssignFnsToMap, NonConformLoadGroup::addClassAssignFnsToMap, NonConformLoadGroup::debugName);
}

namespace CIMPP
{
	BaseClass* NonConformLoadGroup_factory()
	{
		return new NonConformLoadGroup;
	}
}
