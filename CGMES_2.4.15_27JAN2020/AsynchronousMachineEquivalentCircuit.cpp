#include <sstream>
#include "AsynchronousMachineDynamics.hpp"
#include "AsynchronousMachineEquivalentCircuit.hpp"

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

AsynchronousMachineEquivalentCircuit::AsynchronousMachineEquivalentCircuit() {};

AsynchronousMachineEquivalentCircuit::~AsynchronousMachineEquivalentCircuit() {};








bool assign_AsynchronousMachineEquivalentCircuit_xm(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(AsynchronousMachineEquivalentCircuit* element = dynamic_cast<AsynchronousMachineEquivalentCircuit*>(BaseClass_ptr1)) {
                buffer >> element->xm;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_AsynchronousMachineEquivalentCircuit_rr1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(AsynchronousMachineEquivalentCircuit* element = dynamic_cast<AsynchronousMachineEquivalentCircuit*>(BaseClass_ptr1)) {
                buffer >> element->rr1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_AsynchronousMachineEquivalentCircuit_xlr1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(AsynchronousMachineEquivalentCircuit* element = dynamic_cast<AsynchronousMachineEquivalentCircuit*>(BaseClass_ptr1)) {
                buffer >> element->xlr1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_AsynchronousMachineEquivalentCircuit_rr2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(AsynchronousMachineEquivalentCircuit* element = dynamic_cast<AsynchronousMachineEquivalentCircuit*>(BaseClass_ptr1)) {
                buffer >> element->rr2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_AsynchronousMachineEquivalentCircuit_xlr2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(AsynchronousMachineEquivalentCircuit* element = dynamic_cast<AsynchronousMachineEquivalentCircuit*>(BaseClass_ptr1)) {
                buffer >> element->xlr2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* AsynchronousMachineEquivalentCircuit_factory() {
		return new AsynchronousMachineEquivalentCircuit;
	}
}

void AsynchronousMachineEquivalentCircuit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:AsynchronousMachineEquivalentCircuit"), &AsynchronousMachineEquivalentCircuit_factory));
}

void AsynchronousMachineEquivalentCircuit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachineEquivalentCircuit.xm"), &assign_AsynchronousMachineEquivalentCircuit_xm));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachineEquivalentCircuit.rr1"), &assign_AsynchronousMachineEquivalentCircuit_rr1));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachineEquivalentCircuit.xlr1"), &assign_AsynchronousMachineEquivalentCircuit_xlr1));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachineEquivalentCircuit.rr2"), &assign_AsynchronousMachineEquivalentCircuit_rr2));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachineEquivalentCircuit.xlr2"), &assign_AsynchronousMachineEquivalentCircuit_xlr2));
}

void AsynchronousMachineEquivalentCircuit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
					}

const char AsynchronousMachineEquivalentCircuit::debugName[] = "AsynchronousMachineEquivalentCircuit";
const char* AsynchronousMachineEquivalentCircuit::debugString()
{
	return AsynchronousMachineEquivalentCircuit::debugName;
}

const BaseClassDefiner AsynchronousMachineEquivalentCircuit::declare()
{
	return BaseClassDefiner(AsynchronousMachineEquivalentCircuit::addConstructToMap, AsynchronousMachineEquivalentCircuit::addPrimitiveAssignFnsToMap, AsynchronousMachineEquivalentCircuit::addClassAssignFnsToMap, AsynchronousMachineEquivalentCircuit::debugName);
}


