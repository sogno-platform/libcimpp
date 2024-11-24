#include <sstream>
#include "TurbineLoadControllerDynamics.hpp"
#include "TurbineLoadControllerUserDefined.hpp"

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

TurbineLoadControllerUserDefined::TurbineLoadControllerUserDefined() {};

TurbineLoadControllerUserDefined::~TurbineLoadControllerUserDefined() {};



bool assign_TurbineLoadControllerUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TurbineLoadControllerUserDefined* element = dynamic_cast<TurbineLoadControllerUserDefined*>(BaseClass_ptr1)) {
                buffer >> element->proprietary;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_TurbineLoadControllerUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TurbineLoadControllerUserDefined* element = dynamic_cast<TurbineLoadControllerUserDefined*>(BaseClass_ptr1)) {
		if(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2) != nullptr) {
                        element->ProprietaryParameterDynamics.push_back(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


namespace CIMPP {
	BaseClass* TurbineLoadControllerUserDefined_factory() {
		return new TurbineLoadControllerUserDefined;
	}
}

void TurbineLoadControllerUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:TurbineLoadControllerUserDefined"), &TurbineLoadControllerUserDefined_factory));
}

void TurbineLoadControllerUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:TurbineLoadControllerUserDefined.proprietary"), &assign_TurbineLoadControllerUserDefined_proprietary));
}

void TurbineLoadControllerUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:TurbineLoadControllerUserDefined.ProprietaryParameterDynamics"), &assign_TurbineLoadControllerUserDefined_ProprietaryParameterDynamics));
	}

const char TurbineLoadControllerUserDefined::debugName[] = "TurbineLoadControllerUserDefined";
const char* TurbineLoadControllerUserDefined::debugString()
{
	return TurbineLoadControllerUserDefined::debugName;
}

const BaseClassDefiner TurbineLoadControllerUserDefined::declare()
{
	return BaseClassDefiner(TurbineLoadControllerUserDefined::addConstructToMap, TurbineLoadControllerUserDefined::addPrimitiveAssignFnsToMap, TurbineLoadControllerUserDefined::addClassAssignFnsToMap, TurbineLoadControllerUserDefined::debugName);
}
