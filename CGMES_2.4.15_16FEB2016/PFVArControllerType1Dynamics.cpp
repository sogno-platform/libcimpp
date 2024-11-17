#include <sstream>
#include "DynamicsFunctionBlock.hpp"
#include "PFVArControllerType1Dynamics.hpp"

#include "ExcitationSystemDynamics.hpp"
#include "RemoteInputSignal.hpp"
#include "VoltageAdjusterDynamics.hpp"

using namespace CIMPP;

PFVArControllerType1Dynamics::PFVArControllerType1Dynamics(): ExcitationSystemDynamics(nullptr), RemoteInputSignal(nullptr), VoltageAdjusterDynamics(nullptr) {};

PFVArControllerType1Dynamics::~PFVArControllerType1Dynamics() {};






bool assign_ExcitationSystemDynamics_PFVArControllerType1Dynamics(BaseClass*, BaseClass*);
bool assign_PFVArControllerType1Dynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(PFVArControllerType1Dynamics* element = dynamic_cast<PFVArControllerType1Dynamics*>(BaseClass_ptr1)) {
                element->ExcitationSystemDynamics = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr2);
                if(element->ExcitationSystemDynamics != nullptr)
                        return assign_ExcitationSystemDynamics_PFVArControllerType1Dynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_PFVArControllerType1Dynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(PFVArControllerType1Dynamics* element = dynamic_cast<PFVArControllerType1Dynamics*>(BaseClass_ptr1)) {
                element->RemoteInputSignal = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr2);
                if(element->RemoteInputSignal != nullptr)
                        return true;
        }
        return false;
}

bool assign_PFVArControllerType1Dynamics_VoltageAdjusterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(PFVArControllerType1Dynamics* element = dynamic_cast<PFVArControllerType1Dynamics*>(BaseClass_ptr1)) {
                element->VoltageAdjusterDynamics = dynamic_cast<VoltageAdjusterDynamics*>(BaseClass_ptr2);
                if(element->VoltageAdjusterDynamics != nullptr)
                        return true;
        }
        return false;
}

namespace CIMPP {
	BaseClass* PFVArControllerType1Dynamics_factory() {
		return new PFVArControllerType1Dynamics;
	}
}

void PFVArControllerType1Dynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:PFVArControllerType1Dynamics"), &PFVArControllerType1Dynamics_factory));
}

void PFVArControllerType1Dynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
			}

void PFVArControllerType1Dynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:PFVArControllerType1Dynamics.ExcitationSystemDynamics"), &assign_PFVArControllerType1Dynamics_ExcitationSystemDynamics));
	assign_map.insert(std::make_pair(std::string("cim:PFVArControllerType1Dynamics.RemoteInputSignal"), &assign_PFVArControllerType1Dynamics_RemoteInputSignal));
	assign_map.insert(std::make_pair(std::string("cim:PFVArControllerType1Dynamics.VoltageAdjusterDynamics"), &assign_PFVArControllerType1Dynamics_VoltageAdjusterDynamics));
}

const char PFVArControllerType1Dynamics::debugName[] = "PFVArControllerType1Dynamics";
const char* PFVArControllerType1Dynamics::debugString()
{
	return PFVArControllerType1Dynamics::debugName;
}

const BaseClassDefiner PFVArControllerType1Dynamics::declare()
{
	return BaseClassDefiner(PFVArControllerType1Dynamics::addConstructToMap, PFVArControllerType1Dynamics::addPrimitiveAssignFnsToMap, PFVArControllerType1Dynamics::addClassAssignFnsToMap, PFVArControllerType1Dynamics::debugName);
}
