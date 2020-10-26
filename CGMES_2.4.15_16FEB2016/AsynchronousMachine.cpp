#include <sstream>
#include "RotatingMachine.hpp"
#include "AsynchronousMachine.hpp"

#include "AsynchronousMachineDynamics.hpp"
#include "Frequency.hpp"
#include "RotationSpeed.hpp"
#include "Boolean.hpp"
#include "PerCent.hpp"
#include "Simple_Float.hpp"
#include "Integer.hpp"
#include "ActivePower.hpp"
#include "Boolean.hpp"
#include "Simple_Float.hpp"
#include "AsynchronousMachineKind.hpp"

using namespace CIMPP;

AsynchronousMachine::AsynchronousMachine(): AsynchronousMachineDynamics(nullptr), nominalSpeed(nullptr) {};

AsynchronousMachine::~AsynchronousMachine() {};


bool assign_AsynchronousMachine_AsynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1)) {
                element->AsynchronousMachineDynamics = dynamic_cast<AsynchronousMachineDynamics*>(BaseClass_ptr2);
                if(element->AsynchronousMachineDynamics != nullptr)
                        return true;
        }
        return false;
}


bool assign_AsynchronousMachine_nominalSpeed(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1)) {
                element->nominalSpeed = dynamic_cast<RotationSpeed*>(BaseClass_ptr2);
                if(element->nominalSpeed != nullptr)
                        return true;
        }
        return false;
}











bool assign_AsynchronousMachine_nominalFrequency(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1)) {
                buffer >> element->nominalFrequency;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_AsynchronousMachine_converterFedDrive(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1)) {
                buffer >> element->converterFedDrive;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_AsynchronousMachine_efficiency(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1)) {
                buffer >> element->efficiency;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_AsynchronousMachine_iaIrRatio(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1)) {
                buffer >> element->iaIrRatio;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_AsynchronousMachine_polePairNumber(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1)) {
                buffer >> element->polePairNumber;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_AsynchronousMachine_ratedMechanicalPower(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1)) {
                buffer >> element->ratedMechanicalPower;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_AsynchronousMachine_reversible(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1)) {
                buffer >> element->reversible;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_AsynchronousMachine_rxLockedRotorRatio(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1)) {
                buffer >> element->rxLockedRotorRatio;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_AsynchronousMachine_asynchronousMachineType(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1)) {
                buffer >> element->asynchronousMachineType;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* AsynchronousMachine_factory() {
		return new AsynchronousMachine;
	}
}

void AsynchronousMachine::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:AsynchronousMachine"), &AsynchronousMachine_factory));
}

void AsynchronousMachine::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachine.nominalFrequency"), &assign_AsynchronousMachine_nominalFrequency));
		assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachine.converterFedDrive"), &assign_AsynchronousMachine_converterFedDrive));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachine.efficiency"), &assign_AsynchronousMachine_efficiency));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachine.iaIrRatio"), &assign_AsynchronousMachine_iaIrRatio));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachine.polePairNumber"), &assign_AsynchronousMachine_polePairNumber));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachine.ratedMechanicalPower"), &assign_AsynchronousMachine_ratedMechanicalPower));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachine.reversible"), &assign_AsynchronousMachine_reversible));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachine.rxLockedRotorRatio"), &assign_AsynchronousMachine_rxLockedRotorRatio));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachine.asynchronousMachineType"), &assign_AsynchronousMachine_asynchronousMachineType));
}

void AsynchronousMachine::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachine.AsynchronousMachineDynamics"), &assign_AsynchronousMachine_AsynchronousMachineDynamics));
		assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachine.nominalSpeed"), &assign_AsynchronousMachine_nominalSpeed));
								}

const char AsynchronousMachine::debugName[] = "AsynchronousMachine";
const char* AsynchronousMachine::debugString()
{
	return AsynchronousMachine::debugName;
}

const BaseClassDefiner AsynchronousMachine::declare()
{
	return BaseClassDefiner(AsynchronousMachine::addConstructToMap, AsynchronousMachine::addPrimitiveAssignFnsToMap, AsynchronousMachine::addClassAssignFnsToMap, AsynchronousMachine::debugName);
}


