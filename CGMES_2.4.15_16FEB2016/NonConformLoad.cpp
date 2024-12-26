/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "NonConformLoad.hpp"

#include <algorithm>
#include <sstream>

#include "NonConformLoadGroup.hpp"

using namespace CIMPP;

NonConformLoad::NonConformLoad() : LoadGroup(nullptr) {};
NonConformLoad::~NonConformLoad() {};




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
