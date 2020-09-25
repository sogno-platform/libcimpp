#include <sstream>
#include "VoltageCompensatorDynamics.hpp"
#include "VoltageCompensatorUserDefined.hpp"

#include "Boolean.hpp"
#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

VoltageCompensatorUserDefined::VoltageCompensatorUserDefined() {};

VoltageCompensatorUserDefined::~VoltageCompensatorUserDefined() {};



bool assign_VoltageCompensatorUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(VoltageCompensatorUserDefined* element = dynamic_cast<VoltageCompensatorUserDefined*>(BaseClass_ptr1)) {
		if(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2) != nullptr) {
                        element->ProprietaryParameterDynamics.push_back(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


bool assign_VoltageCompensatorUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VoltageCompensatorUserDefined* element = dynamic_cast<VoltageCompensatorUserDefined*>(BaseClass_ptr1)) {
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
	BaseClass* VoltageCompensatorUserDefined_factory() {
		return new VoltageCompensatorUserDefined;
	}
}

void VoltageCompensatorUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:VoltageCompensatorUserDefined"), &VoltageCompensatorUserDefined_factory));
}

void VoltageCompensatorUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:VoltageCompensatorUserDefined.proprietary"), &assign_VoltageCompensatorUserDefined_proprietary));
	}

void VoltageCompensatorUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:VoltageCompensatorUserDefined.ProprietaryParameterDynamics"), &assign_VoltageCompensatorUserDefined_ProprietaryParameterDynamics));
}

const char VoltageCompensatorUserDefined::debugName[] = "VoltageCompensatorUserDefined";
const char* VoltageCompensatorUserDefined::debugString()
{
	return VoltageCompensatorUserDefined::debugName;
}

const BaseClassDefiner VoltageCompensatorUserDefined::declare()
{
	return BaseClassDefiner(VoltageCompensatorUserDefined::addConstructToMap, VoltageCompensatorUserDefined::addPrimitiveAssignFnsToMap, VoltageCompensatorUserDefined::addClassAssignFnsToMap, VoltageCompensatorUserDefined::debugName);
}


