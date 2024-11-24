/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "OverexcitationLimiterDynamics.hpp"

#include <algorithm>
#include <sstream>

#include "ExcitationSystemDynamics.hpp"

using namespace CIMPP;

OverexcitationLimiterDynamics::OverexcitationLimiterDynamics() : ExcitationSystemDynamics(nullptr) {};
OverexcitationLimiterDynamics::~OverexcitationLimiterDynamics() {};




bool assign_ExcitationSystemDynamics_OverexcitationLimiterDynamics(BaseClass*, BaseClass*);
bool assign_OverexcitationLimiterDynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	OverexcitationLimiterDynamics* element = dynamic_cast<OverexcitationLimiterDynamics*>(BaseClass_ptr1);
	ExcitationSystemDynamics* element2 = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ExcitationSystemDynamics != element2)
		{
			element->ExcitationSystemDynamics = element2;
			return assign_ExcitationSystemDynamics_OverexcitationLimiterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char OverexcitationLimiterDynamics::debugName[] = "OverexcitationLimiterDynamics";
const char* OverexcitationLimiterDynamics::debugString() const
{
	return OverexcitationLimiterDynamics::debugName;
}

void OverexcitationLimiterDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:OverexcitationLimiterDynamics"), &OverexcitationLimiterDynamics_factory));
}

void OverexcitationLimiterDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void OverexcitationLimiterDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:OverexcitationLimiterDynamics.ExcitationSystemDynamics"), &assign_OverexcitationLimiterDynamics_ExcitationSystemDynamics));
}

const BaseClassDefiner OverexcitationLimiterDynamics::declare()
{
	return BaseClassDefiner(OverexcitationLimiterDynamics::addConstructToMap, OverexcitationLimiterDynamics::addPrimitiveAssignFnsToMap, OverexcitationLimiterDynamics::addClassAssignFnsToMap, OverexcitationLimiterDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* OverexcitationLimiterDynamics_factory()
	{
		return new OverexcitationLimiterDynamics;
	}
}
