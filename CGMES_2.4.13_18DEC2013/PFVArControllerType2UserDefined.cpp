#include <sstream>
#include "PFVArControllerType2Dynamics.hpp"
#include "PFVArControllerType2UserDefined.hpp"

#include "Boolean.hpp"
#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

PFVArControllerType2UserDefined::PFVArControllerType2UserDefined() {};

PFVArControllerType2UserDefined::~PFVArControllerType2UserDefined() {};



bool assign_PFVArControllerType2UserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(PFVArControllerType2UserDefined* element = dynamic_cast<PFVArControllerType2UserDefined*>(BaseClass_ptr1)) {
		if(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2) != nullptr) {
                        element->ProprietaryParameterDynamics.push_back(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


bool assign_PFVArControllerType2UserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PFVArControllerType2UserDefined* element = dynamic_cast<PFVArControllerType2UserDefined*>(BaseClass_ptr1)) {
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
	BaseClass* PFVArControllerType2UserDefined_factory() {
		return new PFVArControllerType2UserDefined;
	}
}

void PFVArControllerType2UserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:PFVArControllerType2UserDefined"), &PFVArControllerType2UserDefined_factory));
}

void PFVArControllerType2UserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:PFVArControllerType2UserDefined.proprietary"), &assign_PFVArControllerType2UserDefined_proprietary));
	}

void PFVArControllerType2UserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:PFVArControllerType2UserDefined.ProprietaryParameterDynamics"), &assign_PFVArControllerType2UserDefined_ProprietaryParameterDynamics));
}

const char PFVArControllerType2UserDefined::debugName[] = "PFVArControllerType2UserDefined";
const char* PFVArControllerType2UserDefined::debugString()
{
	return PFVArControllerType2UserDefined::debugName;
}

const BaseClassDefiner PFVArControllerType2UserDefined::declare()
{
	return BaseClassDefiner(PFVArControllerType2UserDefined::addConstructToMap, PFVArControllerType2UserDefined::addPrimitiveAssignFnsToMap, PFVArControllerType2UserDefined::addClassAssignFnsToMap, PFVArControllerType2UserDefined::debugName);
}


