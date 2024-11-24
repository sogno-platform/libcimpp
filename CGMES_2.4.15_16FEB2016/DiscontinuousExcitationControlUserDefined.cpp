#include <sstream>
#include "DiscontinuousExcitationControlDynamics.hpp"
#include "DiscontinuousExcitationControlUserDefined.hpp"

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

DiscontinuousExcitationControlUserDefined::DiscontinuousExcitationControlUserDefined() {};

DiscontinuousExcitationControlUserDefined::~DiscontinuousExcitationControlUserDefined() {};



bool assign_DiscontinuousExcitationControlUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DiscontinuousExcitationControlUserDefined* element = dynamic_cast<DiscontinuousExcitationControlUserDefined*>(BaseClass_ptr1)) {
                buffer >> element->proprietary;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_DiscontinuousExcitationControlUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DiscontinuousExcitationControlUserDefined* element = dynamic_cast<DiscontinuousExcitationControlUserDefined*>(BaseClass_ptr1)) {
		if(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2) != nullptr) {
                        element->ProprietaryParameterDynamics.push_back(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


namespace CIMPP {
	BaseClass* DiscontinuousExcitationControlUserDefined_factory() {
		return new DiscontinuousExcitationControlUserDefined;
	}
}

void DiscontinuousExcitationControlUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DiscontinuousExcitationControlUserDefined"), &DiscontinuousExcitationControlUserDefined_factory));
}

void DiscontinuousExcitationControlUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:DiscontinuousExcitationControlUserDefined.proprietary"), &assign_DiscontinuousExcitationControlUserDefined_proprietary));
}

void DiscontinuousExcitationControlUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:DiscontinuousExcitationControlUserDefined.ProprietaryParameterDynamics"), &assign_DiscontinuousExcitationControlUserDefined_ProprietaryParameterDynamics));
	}

const char DiscontinuousExcitationControlUserDefined::debugName[] = "DiscontinuousExcitationControlUserDefined";
const char* DiscontinuousExcitationControlUserDefined::debugString()
{
	return DiscontinuousExcitationControlUserDefined::debugName;
}

const BaseClassDefiner DiscontinuousExcitationControlUserDefined::declare()
{
	return BaseClassDefiner(DiscontinuousExcitationControlUserDefined::addConstructToMap, DiscontinuousExcitationControlUserDefined::addPrimitiveAssignFnsToMap, DiscontinuousExcitationControlUserDefined::addClassAssignFnsToMap, DiscontinuousExcitationControlUserDefined::debugName);
}
