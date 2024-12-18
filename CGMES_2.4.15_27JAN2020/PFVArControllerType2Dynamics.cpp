/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PFVArControllerType2Dynamics.hpp"

#include <algorithm>
#include <sstream>

#include "ExcitationSystemDynamics.hpp"

using namespace CIMPP;

PFVArControllerType2Dynamics::PFVArControllerType2Dynamics() : ExcitationSystemDynamics(nullptr) {};
PFVArControllerType2Dynamics::~PFVArControllerType2Dynamics() {};




bool assign_ExcitationSystemDynamics_PFVArControllerType2Dynamics(BaseClass*, BaseClass*);
bool assign_PFVArControllerType2Dynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PFVArControllerType2Dynamics* element = dynamic_cast<PFVArControllerType2Dynamics*>(BaseClass_ptr1);
	ExcitationSystemDynamics* element2 = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ExcitationSystemDynamics != element2)
		{
			element->ExcitationSystemDynamics = element2;
			return assign_ExcitationSystemDynamics_PFVArControllerType2Dynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char PFVArControllerType2Dynamics::debugName[] = "PFVArControllerType2Dynamics";
const char* PFVArControllerType2Dynamics::debugString() const
{
	return PFVArControllerType2Dynamics::debugName;
}

void PFVArControllerType2Dynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PFVArControllerType2Dynamics"), &PFVArControllerType2Dynamics_factory));
}

void PFVArControllerType2Dynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void PFVArControllerType2Dynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PFVArControllerType2Dynamics.ExcitationSystemDynamics"), &assign_PFVArControllerType2Dynamics_ExcitationSystemDynamics));
}

const BaseClassDefiner PFVArControllerType2Dynamics::declare()
{
	return BaseClassDefiner(PFVArControllerType2Dynamics::addConstructToMap, PFVArControllerType2Dynamics::addPrimitiveAssignFnsToMap, PFVArControllerType2Dynamics::addClassAssignFnsToMap, PFVArControllerType2Dynamics::debugName);
}

namespace CIMPP
{
	BaseClass* PFVArControllerType2Dynamics_factory()
	{
		return new PFVArControllerType2Dynamics;
	}
}
