/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "StaticVarCompensatorDynamics.hpp"

#include <algorithm>
#include <sstream>

#include "StaticVarCompensator.hpp"

using namespace CIMPP;

StaticVarCompensatorDynamics::StaticVarCompensatorDynamics() : StaticVarCompensator(nullptr) {};
StaticVarCompensatorDynamics::~StaticVarCompensatorDynamics() {};




bool assign_StaticVarCompensator_StaticVarCompensatorDynamics(BaseClass*, BaseClass*);
bool assign_StaticVarCompensatorDynamics_StaticVarCompensator(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	StaticVarCompensatorDynamics* element = dynamic_cast<StaticVarCompensatorDynamics*>(BaseClass_ptr1);
	StaticVarCompensator* element2 = dynamic_cast<StaticVarCompensator*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->StaticVarCompensator != element2)
		{
			element->StaticVarCompensator = element2;
			return assign_StaticVarCompensator_StaticVarCompensatorDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char StaticVarCompensatorDynamics::debugName[] = "StaticVarCompensatorDynamics";
const char* StaticVarCompensatorDynamics::debugString() const
{
	return StaticVarCompensatorDynamics::debugName;
}

void StaticVarCompensatorDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:StaticVarCompensatorDynamics"), &StaticVarCompensatorDynamics_factory));
}

void StaticVarCompensatorDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void StaticVarCompensatorDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:StaticVarCompensatorDynamics.StaticVarCompensator"), &assign_StaticVarCompensatorDynamics_StaticVarCompensator));
}

const BaseClassDefiner StaticVarCompensatorDynamics::declare()
{
	return BaseClassDefiner(StaticVarCompensatorDynamics::addConstructToMap, StaticVarCompensatorDynamics::addPrimitiveAssignFnsToMap, StaticVarCompensatorDynamics::addClassAssignFnsToMap, StaticVarCompensatorDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* StaticVarCompensatorDynamics_factory()
	{
		return new StaticVarCompensatorDynamics;
	}
}
