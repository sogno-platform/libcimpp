#include <sstream>
#include "DynamicsFunctionBlock.hpp"
#include "VoltageCompensatorDynamics.hpp"

#include "RemoteInputSignal.hpp"
#include "ExcitationSystemDynamics.hpp"

using namespace CIMPP;

VoltageCompensatorDynamics::VoltageCompensatorDynamics(): RemoteInputSignal(nullptr), ExcitationSystemDynamics(nullptr) {};

VoltageCompensatorDynamics::~VoltageCompensatorDynamics() {};


bool assign_VoltageCompensatorDynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(VoltageCompensatorDynamics* element = dynamic_cast<VoltageCompensatorDynamics*>(BaseClass_ptr1)) {
                element->RemoteInputSignal = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr2);
                if(element->RemoteInputSignal != nullptr)
                        return true;
        }
        return false;
}

bool assign_ExcitationSystemDynamics_VoltageCompensatorDynamics(BaseClass*, BaseClass*);
bool assign_VoltageCompensatorDynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(VoltageCompensatorDynamics* element = dynamic_cast<VoltageCompensatorDynamics*>(BaseClass_ptr1)) {
                element->ExcitationSystemDynamics = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr2);
                if(element->ExcitationSystemDynamics != nullptr)
                        return assign_ExcitationSystemDynamics_VoltageCompensatorDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}




namespace CIMPP {
	BaseClass* VoltageCompensatorDynamics_factory() {
		return new VoltageCompensatorDynamics;
	}
}

void VoltageCompensatorDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:VoltageCompensatorDynamics"), &VoltageCompensatorDynamics_factory));
}

void VoltageCompensatorDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void VoltageCompensatorDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:VoltageCompensatorDynamics.RemoteInputSignal"), &assign_VoltageCompensatorDynamics_RemoteInputSignal));
	assign_map.insert(std::make_pair(std::string("cim:VoltageCompensatorDynamics.ExcitationSystemDynamics"), &assign_VoltageCompensatorDynamics_ExcitationSystemDynamics));
}

const char VoltageCompensatorDynamics::debugName[] = "VoltageCompensatorDynamics";
const char* VoltageCompensatorDynamics::debugString()
{
	return VoltageCompensatorDynamics::debugName;
}

const BaseClassDefiner VoltageCompensatorDynamics::declare()
{
	return BaseClassDefiner(VoltageCompensatorDynamics::addConstructToMap, VoltageCompensatorDynamics::addPrimitiveAssignFnsToMap, VoltageCompensatorDynamics::addClassAssignFnsToMap, VoltageCompensatorDynamics::debugName);
}


