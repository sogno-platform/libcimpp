#include <sstream>
#include "DynamicsFunctionBlock.hpp"
#include "TurbineGovernorDynamics.hpp"

#include "SynchronousMachineDynamics.hpp"
#include "AsynchronousMachineDynamics.hpp"
#include "TurbineLoadControllerDynamics.hpp"

using namespace CIMPP;

TurbineGovernorDynamics::TurbineGovernorDynamics(): AsynchronousMachineDynamics(nullptr), TurbineLoadControllerDynamics(nullptr) {};

TurbineGovernorDynamics::~TurbineGovernorDynamics() {};


bool assign_TurbineGovernorDynamics_SynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TurbineGovernorDynamics* element = dynamic_cast<TurbineGovernorDynamics*>(BaseClass_ptr1)) {
		if(dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr2) != nullptr) {
                        element->SynchronousMachineDynamics.push_back(dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_AsynchronousMachineDynamics_TurbineGovernorDynamics(BaseClass*, BaseClass*);
bool assign_TurbineGovernorDynamics_AsynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TurbineGovernorDynamics* element = dynamic_cast<TurbineGovernorDynamics*>(BaseClass_ptr1)) {
                element->AsynchronousMachineDynamics = dynamic_cast<AsynchronousMachineDynamics*>(BaseClass_ptr2);
                if(element->AsynchronousMachineDynamics != nullptr)
                        return assign_AsynchronousMachineDynamics_TurbineGovernorDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_TurbineGovernorDynamics_TurbineLoadControllerDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TurbineGovernorDynamics* element = dynamic_cast<TurbineGovernorDynamics*>(BaseClass_ptr1)) {
                element->TurbineLoadControllerDynamics = dynamic_cast<TurbineLoadControllerDynamics*>(BaseClass_ptr2);
                if(element->TurbineLoadControllerDynamics != nullptr)
                        return true;
        }
        return false;
}





namespace CIMPP {
	BaseClass* TurbineGovernorDynamics_factory() {
		return new TurbineGovernorDynamics;
	}
}

void TurbineGovernorDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:TurbineGovernorDynamics"), &TurbineGovernorDynamics_factory));
}

void TurbineGovernorDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
			}

void TurbineGovernorDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:TurbineGovernorDynamics.SynchronousMachineDynamics"), &assign_TurbineGovernorDynamics_SynchronousMachineDynamics));
	assign_map.insert(std::make_pair(std::string("cim:TurbineGovernorDynamics.AsynchronousMachineDynamics"), &assign_TurbineGovernorDynamics_AsynchronousMachineDynamics));
	assign_map.insert(std::make_pair(std::string("cim:TurbineGovernorDynamics.TurbineLoadControllerDynamics"), &assign_TurbineGovernorDynamics_TurbineLoadControllerDynamics));
}

const char TurbineGovernorDynamics::debugName[] = "TurbineGovernorDynamics";
const char* TurbineGovernorDynamics::debugString()
{
	return TurbineGovernorDynamics::debugName;
}

const BaseClassDefiner TurbineGovernorDynamics::declare()
{
	return BaseClassDefiner(TurbineGovernorDynamics::addConstructToMap, TurbineGovernorDynamics::addPrimitiveAssignFnsToMap, TurbineGovernorDynamics::addClassAssignFnsToMap, TurbineGovernorDynamics::debugName);
}


