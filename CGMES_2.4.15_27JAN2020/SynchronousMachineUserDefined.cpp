#include <sstream>
#include "SynchronousMachineDynamics.hpp"
#include "SynchronousMachineUserDefined.hpp"

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

SynchronousMachineUserDefined::SynchronousMachineUserDefined() {};

SynchronousMachineUserDefined::~SynchronousMachineUserDefined() {};



bool assign_SynchronousMachineUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(SynchronousMachineUserDefined* element = dynamic_cast<SynchronousMachineUserDefined*>(BaseClass_ptr1)) {
                buffer >> element->proprietary;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_SynchronousMachineUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(SynchronousMachineUserDefined* element = dynamic_cast<SynchronousMachineUserDefined*>(BaseClass_ptr1)) {
		if(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2) != nullptr) {
                        element->ProprietaryParameterDynamics.push_back(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


namespace CIMPP {
	BaseClass* SynchronousMachineUserDefined_factory() {
		return new SynchronousMachineUserDefined;
	}
}

void SynchronousMachineUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:SynchronousMachineUserDefined"), &SynchronousMachineUserDefined_factory));
}

void SynchronousMachineUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineUserDefined.proprietary"), &assign_SynchronousMachineUserDefined_proprietary));
}

void SynchronousMachineUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineUserDefined.ProprietaryParameterDynamics"), &assign_SynchronousMachineUserDefined_ProprietaryParameterDynamics));
	}

const char SynchronousMachineUserDefined::debugName[] = "SynchronousMachineUserDefined";
const char* SynchronousMachineUserDefined::debugString()
{
	return SynchronousMachineUserDefined::debugName;
}

const BaseClassDefiner SynchronousMachineUserDefined::declare()
{
	return BaseClassDefiner(SynchronousMachineUserDefined::addConstructToMap, SynchronousMachineUserDefined::addPrimitiveAssignFnsToMap, SynchronousMachineUserDefined::addClassAssignFnsToMap, SynchronousMachineUserDefined::debugName);
}
