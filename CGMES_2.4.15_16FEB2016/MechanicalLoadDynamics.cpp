#include <sstream>
#include "DynamicsFunctionBlock.hpp"
#include "MechanicalLoadDynamics.hpp"

#include "SynchronousMachineDynamics.hpp"
#include "AsynchronousMachineDynamics.hpp"

using namespace CIMPP;

MechanicalLoadDynamics::MechanicalLoadDynamics() {};

MechanicalLoadDynamics::~MechanicalLoadDynamics() {};


bool assign_SynchronousMachineDynamics_MechanicalLoadDynamics(BaseClass*, BaseClass*);
bool assign_MechanicalLoadDynamics_SynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(MechanicalLoadDynamics* element = dynamic_cast<MechanicalLoadDynamics*>(BaseClass_ptr1)) {
                element->SynchronousMachineDynamics = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr2);
                if(element->SynchronousMachineDynamics != nullptr)
                        return assign_SynchronousMachineDynamics_MechanicalLoadDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_AsynchronousMachineDynamics_MechanicalLoadDynamics(BaseClass*, BaseClass*);
bool assign_MechanicalLoadDynamics_AsynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(MechanicalLoadDynamics* element = dynamic_cast<MechanicalLoadDynamics*>(BaseClass_ptr1)) {
                element->AsynchronousMachineDynamics = dynamic_cast<AsynchronousMachineDynamics*>(BaseClass_ptr2);
                if(element->AsynchronousMachineDynamics != nullptr)
                        return assign_AsynchronousMachineDynamics_MechanicalLoadDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}




namespace CIMPP {
	BaseClass* MechanicalLoadDynamics_factory() {
		return new MechanicalLoadDynamics;
	}
}

void MechanicalLoadDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:MechanicalLoadDynamics"), &MechanicalLoadDynamics_factory));
}

void MechanicalLoadDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void MechanicalLoadDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:MechanicalLoadDynamics.SynchronousMachineDynamics"), &assign_MechanicalLoadDynamics_SynchronousMachineDynamics));
	assign_map.insert(std::make_pair(std::string("cim:MechanicalLoadDynamics.AsynchronousMachineDynamics"), &assign_MechanicalLoadDynamics_AsynchronousMachineDynamics));
}

const char MechanicalLoadDynamics::debugName[] = "MechanicalLoadDynamics";
const char* MechanicalLoadDynamics::debugString()
{
	return MechanicalLoadDynamics::debugName;
}

const BaseClassDefiner MechanicalLoadDynamics::declare()
{
	return BaseClassDefiner(MechanicalLoadDynamics::addConstructToMap, MechanicalLoadDynamics::addPrimitiveAssignFnsToMap, MechanicalLoadDynamics::addClassAssignFnsToMap, MechanicalLoadDynamics::debugName);
}


