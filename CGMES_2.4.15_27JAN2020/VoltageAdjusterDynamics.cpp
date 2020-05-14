#include <sstream>
#include "DynamicsFunctionBlock.hpp"
#include "VoltageAdjusterDynamics.hpp"

#include "PFVArControllerType1Dynamics.hpp"

using namespace CIMPP;

VoltageAdjusterDynamics::VoltageAdjusterDynamics() {};

VoltageAdjusterDynamics::~VoltageAdjusterDynamics() {};


bool assign_PFVArControllerType1Dynamics_VoltageAdjusterDynamics(BaseClass*, BaseClass*);
bool assign_VoltageAdjusterDynamics_PFVArControllerType1Dynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(VoltageAdjusterDynamics* element = dynamic_cast<VoltageAdjusterDynamics*>(BaseClass_ptr1)) {
                element->PFVArControllerType1Dynamics = dynamic_cast<PFVArControllerType1Dynamics*>(BaseClass_ptr2);
                if(element->PFVArControllerType1Dynamics != nullptr)
                        return assign_PFVArControllerType1Dynamics_VoltageAdjusterDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}



namespace CIMPP {
	BaseClass* VoltageAdjusterDynamics_factory() {
		return new VoltageAdjusterDynamics;
	}
}

void VoltageAdjusterDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:VoltageAdjusterDynamics"), &VoltageAdjusterDynamics_factory));
}

void VoltageAdjusterDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void VoltageAdjusterDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:VoltageAdjusterDynamics.PFVArControllerType1Dynamics"), &assign_VoltageAdjusterDynamics_PFVArControllerType1Dynamics));
}

const char VoltageAdjusterDynamics::debugName[] = "VoltageAdjusterDynamics";
const char* VoltageAdjusterDynamics::debugString()
{
	return VoltageAdjusterDynamics::debugName;
}

const BaseClassDefiner VoltageAdjusterDynamics::declare()
{
	return BaseClassDefiner(VoltageAdjusterDynamics::addConstructToMap, VoltageAdjusterDynamics::addPrimitiveAssignFnsToMap, VoltageAdjusterDynamics::addClassAssignFnsToMap, VoltageAdjusterDynamics::debugName);
}


