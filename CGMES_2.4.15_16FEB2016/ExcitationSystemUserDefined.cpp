#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcitationSystemUserDefined.hpp"

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

ExcitationSystemUserDefined::ExcitationSystemUserDefined() {};

ExcitationSystemUserDefined::~ExcitationSystemUserDefined() {};



bool assign_ExcitationSystemUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcitationSystemUserDefined* element = dynamic_cast<ExcitationSystemUserDefined*>(BaseClass_ptr1)) {
                buffer >> element->proprietary;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_ExcitationSystemUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ExcitationSystemUserDefined* element = dynamic_cast<ExcitationSystemUserDefined*>(BaseClass_ptr1)) {
		if(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2) != nullptr) {
                        element->ProprietaryParameterDynamics.push_back(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


namespace CIMPP {
	BaseClass* ExcitationSystemUserDefined_factory() {
		return new ExcitationSystemUserDefined;
	}
}

void ExcitationSystemUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcitationSystemUserDefined"), &ExcitationSystemUserDefined_factory));
}

void ExcitationSystemUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:ExcitationSystemUserDefined.proprietary"), &assign_ExcitationSystemUserDefined_proprietary));
}

void ExcitationSystemUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcitationSystemUserDefined.ProprietaryParameterDynamics"), &assign_ExcitationSystemUserDefined_ProprietaryParameterDynamics));
	}

const char ExcitationSystemUserDefined::debugName[] = "ExcitationSystemUserDefined";
const char* ExcitationSystemUserDefined::debugString()
{
	return ExcitationSystemUserDefined::debugName;
}

const BaseClassDefiner ExcitationSystemUserDefined::declare()
{
	return BaseClassDefiner(ExcitationSystemUserDefined::addConstructToMap, ExcitationSystemUserDefined::addPrimitiveAssignFnsToMap, ExcitationSystemUserDefined::addClassAssignFnsToMap, ExcitationSystemUserDefined::debugName);
}
