#include <sstream>
#include "WindTurbineType1or2Dynamics.hpp"
#include "WindType1or2UserDefined.hpp"

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

WindType1or2UserDefined::WindType1or2UserDefined() {};

WindType1or2UserDefined::~WindType1or2UserDefined() {};



bool assign_WindType1or2UserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindType1or2UserDefined* element = dynamic_cast<WindType1or2UserDefined*>(BaseClass_ptr1)) {
                buffer >> element->proprietary;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_WindType1or2UserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindType1or2UserDefined* element = dynamic_cast<WindType1or2UserDefined*>(BaseClass_ptr1)) {
		if(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2) != nullptr) {
                        element->ProprietaryParameterDynamics.push_back(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


namespace CIMPP {
	BaseClass* WindType1or2UserDefined_factory() {
		return new WindType1or2UserDefined;
	}
}

void WindType1or2UserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:WindType1or2UserDefined"), &WindType1or2UserDefined_factory));
}

void WindType1or2UserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:WindType1or2UserDefined.proprietary"), &assign_WindType1or2UserDefined_proprietary));
}

void WindType1or2UserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:WindType1or2UserDefined.ProprietaryParameterDynamics"), &assign_WindType1or2UserDefined_ProprietaryParameterDynamics));
	}

const char WindType1or2UserDefined::debugName[] = "WindType1or2UserDefined";
const char* WindType1or2UserDefined::debugString()
{
	return WindType1or2UserDefined::debugName;
}

const BaseClassDefiner WindType1or2UserDefined::declare()
{
	return BaseClassDefiner(WindType1or2UserDefined::addConstructToMap, WindType1or2UserDefined::addPrimitiveAssignFnsToMap, WindType1or2UserDefined::addClassAssignFnsToMap, WindType1or2UserDefined::debugName);
}
