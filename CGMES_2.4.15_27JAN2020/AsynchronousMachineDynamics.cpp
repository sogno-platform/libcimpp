#include <sstream>
#include "RotatingMachineDynamics.hpp"
#include "AsynchronousMachineDynamics.hpp"

#include "AsynchronousMachine.hpp"
#include "MechanicalLoadDynamics.hpp"
#include "WindTurbineType1or2Dynamics.hpp"
#include "TurbineGovernorDynamics.hpp"

using namespace CIMPP;

AsynchronousMachineDynamics::AsynchronousMachineDynamics() {};

AsynchronousMachineDynamics::~AsynchronousMachineDynamics() {};


bool assign_AsynchronousMachine_AsynchronousMachineDynamics(BaseClass*, BaseClass*);
bool assign_AsynchronousMachineDynamics_AsynchronousMachine(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(AsynchronousMachineDynamics* element = dynamic_cast<AsynchronousMachineDynamics*>(BaseClass_ptr1)) {
                element->AsynchronousMachine = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr2);
                if(element->AsynchronousMachine != nullptr)
                        return assign_AsynchronousMachine_AsynchronousMachineDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_AsynchronousMachineDynamics_MechanicalLoadDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(AsynchronousMachineDynamics* element = dynamic_cast<AsynchronousMachineDynamics*>(BaseClass_ptr1)) {
                element->MechanicalLoadDynamics = dynamic_cast<MechanicalLoadDynamics*>(BaseClass_ptr2);
                if(element->MechanicalLoadDynamics != nullptr)
                        return true;
        }
        return false;
}

bool assign_AsynchronousMachineDynamics_WindTurbineType1or2Dynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(AsynchronousMachineDynamics* element = dynamic_cast<AsynchronousMachineDynamics*>(BaseClass_ptr1)) {
                element->WindTurbineType1or2Dynamics = dynamic_cast<WindTurbineType1or2Dynamics*>(BaseClass_ptr2);
                if(element->WindTurbineType1or2Dynamics != nullptr)
                        return true;
        }
        return false;
}

bool assign_AsynchronousMachineDynamics_TurbineGovernorDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(AsynchronousMachineDynamics* element = dynamic_cast<AsynchronousMachineDynamics*>(BaseClass_ptr1)) {
                element->TurbineGovernorDynamics = dynamic_cast<TurbineGovernorDynamics*>(BaseClass_ptr2);
                if(element->TurbineGovernorDynamics != nullptr)
                        return true;
        }
        return false;
}






namespace CIMPP {
	BaseClass* AsynchronousMachineDynamics_factory() {
		return new AsynchronousMachineDynamics;
	}
}

void AsynchronousMachineDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:AsynchronousMachineDynamics"), &AsynchronousMachineDynamics_factory));
}

void AsynchronousMachineDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
				}

void AsynchronousMachineDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachineDynamics.AsynchronousMachine"), &assign_AsynchronousMachineDynamics_AsynchronousMachine));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachineDynamics.MechanicalLoadDynamics"), &assign_AsynchronousMachineDynamics_MechanicalLoadDynamics));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachineDynamics.WindTurbineType1or2Dynamics"), &assign_AsynchronousMachineDynamics_WindTurbineType1or2Dynamics));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachineDynamics.TurbineGovernorDynamics"), &assign_AsynchronousMachineDynamics_TurbineGovernorDynamics));
}

const char AsynchronousMachineDynamics::debugName[] = "AsynchronousMachineDynamics";
const char* AsynchronousMachineDynamics::debugString()
{
	return AsynchronousMachineDynamics::debugName;
}

const BaseClassDefiner AsynchronousMachineDynamics::declare()
{
	return BaseClassDefiner(AsynchronousMachineDynamics::addConstructToMap, AsynchronousMachineDynamics::addPrimitiveAssignFnsToMap, AsynchronousMachineDynamics::addClassAssignFnsToMap, AsynchronousMachineDynamics::debugName);
}


