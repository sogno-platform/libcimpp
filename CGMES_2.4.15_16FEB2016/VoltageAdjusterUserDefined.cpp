#include <sstream>
#include "VoltageAdjusterDynamics.hpp"
#include "VoltageAdjusterUserDefined.hpp"

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

VoltageAdjusterUserDefined::VoltageAdjusterUserDefined() {};

VoltageAdjusterUserDefined::~VoltageAdjusterUserDefined() {};



bool assign_VoltageAdjusterUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VoltageAdjusterUserDefined* element = dynamic_cast<VoltageAdjusterUserDefined*>(BaseClass_ptr1)) {
                buffer >> element->proprietary;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_VoltageAdjusterUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(VoltageAdjusterUserDefined* element = dynamic_cast<VoltageAdjusterUserDefined*>(BaseClass_ptr1)) {
		if(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2) != nullptr) {
                        element->ProprietaryParameterDynamics.push_back(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


namespace CIMPP {
	BaseClass* VoltageAdjusterUserDefined_factory() {
		return new VoltageAdjusterUserDefined;
	}
}

void VoltageAdjusterUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:VoltageAdjusterUserDefined"), &VoltageAdjusterUserDefined_factory));
}

void VoltageAdjusterUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:VoltageAdjusterUserDefined.proprietary"), &assign_VoltageAdjusterUserDefined_proprietary));
}

void VoltageAdjusterUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:VoltageAdjusterUserDefined.ProprietaryParameterDynamics"), &assign_VoltageAdjusterUserDefined_ProprietaryParameterDynamics));
	}

const char VoltageAdjusterUserDefined::debugName[] = "VoltageAdjusterUserDefined";
const char* VoltageAdjusterUserDefined::debugString()
{
	return VoltageAdjusterUserDefined::debugName;
}

const BaseClassDefiner VoltageAdjusterUserDefined::declare()
{
	return BaseClassDefiner(VoltageAdjusterUserDefined::addConstructToMap, VoltageAdjusterUserDefined::addPrimitiveAssignFnsToMap, VoltageAdjusterUserDefined::addClassAssignFnsToMap, VoltageAdjusterUserDefined::debugName);
}
