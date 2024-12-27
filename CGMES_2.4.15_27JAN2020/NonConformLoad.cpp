/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "NonConformLoad.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "NonConformLoadGroup.hpp"

using namespace CIMPP;

NonConformLoad::NonConformLoad() : LoadGroup(nullptr) {};
NonConformLoad::~NonConformLoad() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:NonConformLoad.LoadGroup", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
NonConformLoad::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
NonConformLoad::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = EnergyConsumer::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



bool assign_NonConformLoadGroup_EnergyConsumers(BaseClass*, BaseClass*);
bool assign_NonConformLoad_LoadGroup(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	NonConformLoad* element = dynamic_cast<NonConformLoad*>(BaseClass_ptr1);
	NonConformLoadGroup* element2 = dynamic_cast<NonConformLoadGroup*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->LoadGroup != element2)
		{
			element->LoadGroup = element2;
			return assign_NonConformLoadGroup_EnergyConsumers(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


bool get_NonConformLoad_LoadGroup(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const NonConformLoad* element = dynamic_cast<const NonConformLoad*>(BaseClass_ptr1))
	{
		if (element->LoadGroup != 0)
		{
			BaseClass_list.push_back(element->LoadGroup);
			return true;
		}
	}
	return false;
}


const char NonConformLoad::debugName[] = "NonConformLoad";
const char* NonConformLoad::debugString() const
{
	return NonConformLoad::debugName;
}

void NonConformLoad::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:NonConformLoad"), &NonConformLoad_factory));
}

void NonConformLoad::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void NonConformLoad::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:NonConformLoad.LoadGroup"), &assign_NonConformLoad_LoadGroup));
}

void NonConformLoad::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EnergyConsumer::addPrimitiveGetFnsToMap(get_map);
}

void NonConformLoad::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EnergyConsumer::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:NonConformLoad.LoadGroup", &get_NonConformLoad_LoadGroup);
}

void NonConformLoad::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EnergyConsumer::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner NonConformLoad::declare()
{
	return BaseClassDefiner(NonConformLoad::addConstructToMap, NonConformLoad::addPrimitiveAssignFnsToMap, NonConformLoad::addClassAssignFnsToMap, NonConformLoad::debugName);
}

namespace CIMPP
{
	BaseClass* NonConformLoad_factory()
	{
		return new NonConformLoad;
	}
}
