/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VoltageAdjusterDynamics.hpp"

#include <algorithm>
#include <sstream>

#include "PFVArControllerType1Dynamics.hpp"

using namespace CIMPP;

VoltageAdjusterDynamics::VoltageAdjusterDynamics() : PFVArControllerType1Dynamics(nullptr) {};
VoltageAdjusterDynamics::~VoltageAdjusterDynamics() {};




bool assign_PFVArControllerType1Dynamics_VoltageAdjusterDynamics(BaseClass*, BaseClass*);
bool assign_VoltageAdjusterDynamics_PFVArControllerType1Dynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VoltageAdjusterDynamics* element = dynamic_cast<VoltageAdjusterDynamics*>(BaseClass_ptr1);
	PFVArControllerType1Dynamics* element2 = dynamic_cast<PFVArControllerType1Dynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PFVArControllerType1Dynamics != element2)
		{
			element->PFVArControllerType1Dynamics = element2;
			return assign_PFVArControllerType1Dynamics_VoltageAdjusterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char VoltageAdjusterDynamics::debugName[] = "VoltageAdjusterDynamics";
const char* VoltageAdjusterDynamics::debugString() const
{
	return VoltageAdjusterDynamics::debugName;
}

void VoltageAdjusterDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:VoltageAdjusterDynamics"), &VoltageAdjusterDynamics_factory));
}

void VoltageAdjusterDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void VoltageAdjusterDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:VoltageAdjusterDynamics.PFVArControllerType1Dynamics"), &assign_VoltageAdjusterDynamics_PFVArControllerType1Dynamics));
}

const BaseClassDefiner VoltageAdjusterDynamics::declare()
{
	return BaseClassDefiner(VoltageAdjusterDynamics::addConstructToMap, VoltageAdjusterDynamics::addPrimitiveAssignFnsToMap, VoltageAdjusterDynamics::addClassAssignFnsToMap, VoltageAdjusterDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* VoltageAdjusterDynamics_factory()
	{
		return new VoltageAdjusterDynamics;
	}
}
