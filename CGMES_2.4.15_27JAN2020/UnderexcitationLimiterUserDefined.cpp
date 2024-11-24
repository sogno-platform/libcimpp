#include <sstream>
#include "UnderexcitationLimiterDynamics.hpp"
#include "UnderexcitationLimiterUserDefined.hpp"

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

UnderexcitationLimiterUserDefined::UnderexcitationLimiterUserDefined() {};

UnderexcitationLimiterUserDefined::~UnderexcitationLimiterUserDefined() {};



bool assign_UnderexcitationLimiterUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(UnderexcitationLimiterUserDefined* element = dynamic_cast<UnderexcitationLimiterUserDefined*>(BaseClass_ptr1)) {
                buffer >> element->proprietary;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_UnderexcitationLimiterUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(UnderexcitationLimiterUserDefined* element = dynamic_cast<UnderexcitationLimiterUserDefined*>(BaseClass_ptr1)) {
		if(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2) != nullptr) {
                        element->ProprietaryParameterDynamics.push_back(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


namespace CIMPP {
	BaseClass* UnderexcitationLimiterUserDefined_factory() {
		return new UnderexcitationLimiterUserDefined;
	}
}

void UnderexcitationLimiterUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:UnderexcitationLimiterUserDefined"), &UnderexcitationLimiterUserDefined_factory));
}

void UnderexcitationLimiterUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:UnderexcitationLimiterUserDefined.proprietary"), &assign_UnderexcitationLimiterUserDefined_proprietary));
}

void UnderexcitationLimiterUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:UnderexcitationLimiterUserDefined.ProprietaryParameterDynamics"), &assign_UnderexcitationLimiterUserDefined_ProprietaryParameterDynamics));
	}

const char UnderexcitationLimiterUserDefined::debugName[] = "UnderexcitationLimiterUserDefined";
const char* UnderexcitationLimiterUserDefined::debugString()
{
	return UnderexcitationLimiterUserDefined::debugName;
}

const BaseClassDefiner UnderexcitationLimiterUserDefined::declare()
{
	return BaseClassDefiner(UnderexcitationLimiterUserDefined::addConstructToMap, UnderexcitationLimiterUserDefined::addPrimitiveAssignFnsToMap, UnderexcitationLimiterUserDefined::addClassAssignFnsToMap, UnderexcitationLimiterUserDefined::debugName);
}
