#include <sstream>
#include "AsynchronousMachineDynamics.hpp"
#include "AsynchronousMachineUserDefined.hpp"

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

AsynchronousMachineUserDefined::AsynchronousMachineUserDefined() {};

AsynchronousMachineUserDefined::~AsynchronousMachineUserDefined() {};



bool assign_AsynchronousMachineUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(AsynchronousMachineUserDefined* element = dynamic_cast<AsynchronousMachineUserDefined*>(BaseClass_ptr1)) {
                buffer >> element->proprietary;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_AsynchronousMachineUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(AsynchronousMachineUserDefined* element = dynamic_cast<AsynchronousMachineUserDefined*>(BaseClass_ptr1)) {
		if(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2) != nullptr) {
                        element->ProprietaryParameterDynamics.push_back(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


namespace CIMPP {
	BaseClass* AsynchronousMachineUserDefined_factory() {
		return new AsynchronousMachineUserDefined;
	}
}

void AsynchronousMachineUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:AsynchronousMachineUserDefined"), &AsynchronousMachineUserDefined_factory));
}

void AsynchronousMachineUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachineUserDefined.proprietary"), &assign_AsynchronousMachineUserDefined_proprietary));
}

void AsynchronousMachineUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachineUserDefined.ProprietaryParameterDynamics"), &assign_AsynchronousMachineUserDefined_ProprietaryParameterDynamics));
	}

const char AsynchronousMachineUserDefined::debugName[] = "AsynchronousMachineUserDefined";
const char* AsynchronousMachineUserDefined::debugString()
{
	return AsynchronousMachineUserDefined::debugName;
}

const BaseClassDefiner AsynchronousMachineUserDefined::declare()
{
	return BaseClassDefiner(AsynchronousMachineUserDefined::addConstructToMap, AsynchronousMachineUserDefined::addPrimitiveAssignFnsToMap, AsynchronousMachineUserDefined::addClassAssignFnsToMap, AsynchronousMachineUserDefined::debugName);
}
