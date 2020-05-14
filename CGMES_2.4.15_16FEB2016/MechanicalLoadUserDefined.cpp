#include <sstream>
#include "MechanicalLoadDynamics.hpp"
#include "MechanicalLoadUserDefined.hpp"

#include "Boolean.hpp"
#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

MechanicalLoadUserDefined::MechanicalLoadUserDefined() {};

MechanicalLoadUserDefined::~MechanicalLoadUserDefined() {};



bool assign_MechanicalLoadUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(MechanicalLoadUserDefined* element = dynamic_cast<MechanicalLoadUserDefined*>(BaseClass_ptr1)) {
		if(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2) != nullptr) {
                        element->ProprietaryParameterDynamics.push_back(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


bool assign_MechanicalLoadUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(MechanicalLoadUserDefined* element = dynamic_cast<MechanicalLoadUserDefined*>(BaseClass_ptr1)) {
                buffer >> element->proprietary;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


namespace CIMPP {
	BaseClass* MechanicalLoadUserDefined_factory() {
		return new MechanicalLoadUserDefined;
	}
}

void MechanicalLoadUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:MechanicalLoadUserDefined"), &MechanicalLoadUserDefined_factory));
}

void MechanicalLoadUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:MechanicalLoadUserDefined.proprietary"), &assign_MechanicalLoadUserDefined_proprietary));
	}

void MechanicalLoadUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:MechanicalLoadUserDefined.ProprietaryParameterDynamics"), &assign_MechanicalLoadUserDefined_ProprietaryParameterDynamics));
}

const char MechanicalLoadUserDefined::debugName[] = "MechanicalLoadUserDefined";
const char* MechanicalLoadUserDefined::debugString()
{
	return MechanicalLoadUserDefined::debugName;
}

const BaseClassDefiner MechanicalLoadUserDefined::declare()
{
	return BaseClassDefiner(MechanicalLoadUserDefined::addConstructToMap, MechanicalLoadUserDefined::addPrimitiveAssignFnsToMap, MechanicalLoadUserDefined::addClassAssignFnsToMap, MechanicalLoadUserDefined::debugName);
}


