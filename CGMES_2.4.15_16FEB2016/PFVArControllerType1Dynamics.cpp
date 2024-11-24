/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PFVArControllerType1Dynamics.hpp"

#include <algorithm>
#include <sstream>

#include "ExcitationSystemDynamics.hpp"
#include "RemoteInputSignal.hpp"
#include "VoltageAdjusterDynamics.hpp"

using namespace CIMPP;

PFVArControllerType1Dynamics::PFVArControllerType1Dynamics() : ExcitationSystemDynamics(nullptr), RemoteInputSignal(nullptr), VoltageAdjusterDynamics(nullptr) {};
PFVArControllerType1Dynamics::~PFVArControllerType1Dynamics() {};






bool assign_ExcitationSystemDynamics_PFVArControllerType1Dynamics(BaseClass*, BaseClass*);
bool assign_PFVArControllerType1Dynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PFVArControllerType1Dynamics* element = dynamic_cast<PFVArControllerType1Dynamics*>(BaseClass_ptr1);
	ExcitationSystemDynamics* element2 = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ExcitationSystemDynamics != element2)
		{
			element->ExcitationSystemDynamics = element2;
			return assign_ExcitationSystemDynamics_PFVArControllerType1Dynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_RemoteInputSignal_PFVArControllerType1Dynamics(BaseClass*, BaseClass*);
bool assign_PFVArControllerType1Dynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PFVArControllerType1Dynamics* element = dynamic_cast<PFVArControllerType1Dynamics*>(BaseClass_ptr1);
	RemoteInputSignal* element2 = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->RemoteInputSignal != element2)
		{
			element->RemoteInputSignal = element2;
			return assign_RemoteInputSignal_PFVArControllerType1Dynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_VoltageAdjusterDynamics_PFVArControllerType1Dynamics(BaseClass*, BaseClass*);
bool assign_PFVArControllerType1Dynamics_VoltageAdjusterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PFVArControllerType1Dynamics* element = dynamic_cast<PFVArControllerType1Dynamics*>(BaseClass_ptr1);
	VoltageAdjusterDynamics* element2 = dynamic_cast<VoltageAdjusterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->VoltageAdjusterDynamics != element2)
		{
			element->VoltageAdjusterDynamics = element2;
			return assign_VoltageAdjusterDynamics_PFVArControllerType1Dynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char PFVArControllerType1Dynamics::debugName[] = "PFVArControllerType1Dynamics";
const char* PFVArControllerType1Dynamics::debugString() const
{
	return PFVArControllerType1Dynamics::debugName;
}

void PFVArControllerType1Dynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PFVArControllerType1Dynamics"), &PFVArControllerType1Dynamics_factory));
}

void PFVArControllerType1Dynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void PFVArControllerType1Dynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PFVArControllerType1Dynamics.ExcitationSystemDynamics"), &assign_PFVArControllerType1Dynamics_ExcitationSystemDynamics));
	assign_map.insert(std::make_pair(std::string("cim:PFVArControllerType1Dynamics.RemoteInputSignal"), &assign_PFVArControllerType1Dynamics_RemoteInputSignal));
	assign_map.insert(std::make_pair(std::string("cim:PFVArControllerType1Dynamics.VoltageAdjusterDynamics"), &assign_PFVArControllerType1Dynamics_VoltageAdjusterDynamics));
}

const BaseClassDefiner PFVArControllerType1Dynamics::declare()
{
	return BaseClassDefiner(PFVArControllerType1Dynamics::addConstructToMap, PFVArControllerType1Dynamics::addPrimitiveAssignFnsToMap, PFVArControllerType1Dynamics::addClassAssignFnsToMap, PFVArControllerType1Dynamics::debugName);
}

namespace CIMPP
{
	BaseClass* PFVArControllerType1Dynamics_factory()
	{
		return new PFVArControllerType1Dynamics;
	}
}
