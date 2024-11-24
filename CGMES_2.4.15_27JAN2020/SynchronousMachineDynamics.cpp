#include <sstream>
#include "RotatingMachineDynamics.hpp"
#include "SynchronousMachineDynamics.hpp"

#include "ExcitationSystemDynamics.hpp"
#include "GenICompensationForGenJ.hpp"
#include "MechanicalLoadDynamics.hpp"
#include "SynchronousMachine.hpp"
#include "TurbineGovernorDynamics.hpp"

using namespace CIMPP;

SynchronousMachineDynamics::SynchronousMachineDynamics(): ExcitationSystemDynamics(nullptr), MechanicalLoadDynamics(nullptr), SynchronousMachine(nullptr) {};

SynchronousMachineDynamics::~SynchronousMachineDynamics() {};








bool assign_SynchronousMachineDynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(SynchronousMachineDynamics* element = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr1)) {
                element->ExcitationSystemDynamics = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr2);
                if(element->ExcitationSystemDynamics != nullptr)
                        return true;
        }
        return false;
}

bool assign_SynchronousMachineDynamics_GenICompensationForGenJ(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(SynchronousMachineDynamics* element = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr1)) {
		if(dynamic_cast<GenICompensationForGenJ*>(BaseClass_ptr2) != nullptr) {
                        element->GenICompensationForGenJ.push_back(dynamic_cast<GenICompensationForGenJ*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_SynchronousMachineDynamics_MechanicalLoadDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(SynchronousMachineDynamics* element = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr1)) {
                element->MechanicalLoadDynamics = dynamic_cast<MechanicalLoadDynamics*>(BaseClass_ptr2);
                if(element->MechanicalLoadDynamics != nullptr)
                        return true;
        }
        return false;
}

bool assign_SynchronousMachine_SynchronousMachineDynamics(BaseClass*, BaseClass*);
bool assign_SynchronousMachineDynamics_SynchronousMachine(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(SynchronousMachineDynamics* element = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr1)) {
                element->SynchronousMachine = dynamic_cast<SynchronousMachine*>(BaseClass_ptr2);
                if(element->SynchronousMachine != nullptr)
                        return assign_SynchronousMachine_SynchronousMachineDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_SynchronousMachineDynamics_TurbineGovernorDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(SynchronousMachineDynamics* element = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr1)) {
		if(dynamic_cast<TurbineGovernorDynamics*>(BaseClass_ptr2) != nullptr) {
                        element->TurbineGovernorDynamics.push_back(dynamic_cast<TurbineGovernorDynamics*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

namespace CIMPP {
	BaseClass* SynchronousMachineDynamics_factory() {
		return new SynchronousMachineDynamics;
	}
}

void SynchronousMachineDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:SynchronousMachineDynamics"), &SynchronousMachineDynamics_factory));
}

void SynchronousMachineDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
					}

void SynchronousMachineDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineDynamics.ExcitationSystemDynamics"), &assign_SynchronousMachineDynamics_ExcitationSystemDynamics));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineDynamics.GenICompensationForGenJ"), &assign_SynchronousMachineDynamics_GenICompensationForGenJ));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineDynamics.MechanicalLoadDynamics"), &assign_SynchronousMachineDynamics_MechanicalLoadDynamics));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineDynamics.SynchronousMachine"), &assign_SynchronousMachineDynamics_SynchronousMachine));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineDynamics.TurbineGovernorDynamics"), &assign_SynchronousMachineDynamics_TurbineGovernorDynamics));
}

const char SynchronousMachineDynamics::debugName[] = "SynchronousMachineDynamics";
const char* SynchronousMachineDynamics::debugString()
{
	return SynchronousMachineDynamics::debugName;
}

const BaseClassDefiner SynchronousMachineDynamics::declare()
{
	return BaseClassDefiner(SynchronousMachineDynamics::addConstructToMap, SynchronousMachineDynamics::addPrimitiveAssignFnsToMap, SynchronousMachineDynamics::addClassAssignFnsToMap, SynchronousMachineDynamics::debugName);
}
