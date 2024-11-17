#include <sstream>
#include "OverexcitationLimiterDynamics.hpp"
#include "OverexcitationLimiterUserDefined.hpp"

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

OverexcitationLimiterUserDefined::OverexcitationLimiterUserDefined() {};

OverexcitationLimiterUserDefined::~OverexcitationLimiterUserDefined() {};



bool assign_OverexcitationLimiterUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(OverexcitationLimiterUserDefined* element = dynamic_cast<OverexcitationLimiterUserDefined*>(BaseClass_ptr1)) {
                buffer >> element->proprietary;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_OverexcitationLimiterUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(OverexcitationLimiterUserDefined* element = dynamic_cast<OverexcitationLimiterUserDefined*>(BaseClass_ptr1)) {
		if(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2) != nullptr) {
                        element->ProprietaryParameterDynamics.push_back(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


namespace CIMPP {
	BaseClass* OverexcitationLimiterUserDefined_factory() {
		return new OverexcitationLimiterUserDefined;
	}
}

void OverexcitationLimiterUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:OverexcitationLimiterUserDefined"), &OverexcitationLimiterUserDefined_factory));
}

void OverexcitationLimiterUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:OverexcitationLimiterUserDefined.proprietary"), &assign_OverexcitationLimiterUserDefined_proprietary));
}

void OverexcitationLimiterUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:OverexcitationLimiterUserDefined.ProprietaryParameterDynamics"), &assign_OverexcitationLimiterUserDefined_ProprietaryParameterDynamics));
	}

const char OverexcitationLimiterUserDefined::debugName[] = "OverexcitationLimiterUserDefined";
const char* OverexcitationLimiterUserDefined::debugString()
{
	return OverexcitationLimiterUserDefined::debugName;
}

const BaseClassDefiner OverexcitationLimiterUserDefined::declare()
{
	return BaseClassDefiner(OverexcitationLimiterUserDefined::addConstructToMap, OverexcitationLimiterUserDefined::addPrimitiveAssignFnsToMap, OverexcitationLimiterUserDefined::addClassAssignFnsToMap, OverexcitationLimiterUserDefined::debugName);
}
