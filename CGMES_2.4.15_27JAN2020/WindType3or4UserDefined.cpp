#include <sstream>
#include "WindTurbineType3or4Dynamics.hpp"
#include "WindType3or4UserDefined.hpp"

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

WindType3or4UserDefined::WindType3or4UserDefined() {};

WindType3or4UserDefined::~WindType3or4UserDefined() {};



bool assign_WindType3or4UserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindType3or4UserDefined* element = dynamic_cast<WindType3or4UserDefined*>(BaseClass_ptr1)) {
                buffer >> element->proprietary;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_WindType3or4UserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindType3or4UserDefined* element = dynamic_cast<WindType3or4UserDefined*>(BaseClass_ptr1)) {
		if(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2) != nullptr) {
                        element->ProprietaryParameterDynamics.push_back(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


namespace CIMPP {
	BaseClass* WindType3or4UserDefined_factory() {
		return new WindType3or4UserDefined;
	}
}

void WindType3or4UserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:WindType3or4UserDefined"), &WindType3or4UserDefined_factory));
}

void WindType3or4UserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:WindType3or4UserDefined.proprietary"), &assign_WindType3or4UserDefined_proprietary));
}

void WindType3or4UserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:WindType3or4UserDefined.ProprietaryParameterDynamics"), &assign_WindType3or4UserDefined_ProprietaryParameterDynamics));
	}

const char WindType3or4UserDefined::debugName[] = "WindType3or4UserDefined";
const char* WindType3or4UserDefined::debugString()
{
	return WindType3or4UserDefined::debugName;
}

const BaseClassDefiner WindType3or4UserDefined::declare()
{
	return BaseClassDefiner(WindType3or4UserDefined::addConstructToMap, WindType3or4UserDefined::addPrimitiveAssignFnsToMap, WindType3or4UserDefined::addClassAssignFnsToMap, WindType3or4UserDefined::debugName);
}
