#include <sstream>
#include "WindPlantDynamics.hpp"
#include "WindPlantUserDefined.hpp"

#include "Boolean.hpp"
#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

WindPlantUserDefined::WindPlantUserDefined() {};

WindPlantUserDefined::~WindPlantUserDefined() {};



bool assign_WindPlantUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindPlantUserDefined* element = dynamic_cast<WindPlantUserDefined*>(BaseClass_ptr1)) {
		if(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2) != nullptr) {
                        element->ProprietaryParameterDynamics.push_back(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


bool assign_WindPlantUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindPlantUserDefined* element = dynamic_cast<WindPlantUserDefined*>(BaseClass_ptr1)) {
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
	BaseClass* WindPlantUserDefined_factory() {
		return new WindPlantUserDefined;
	}
}

void WindPlantUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:WindPlantUserDefined"), &WindPlantUserDefined_factory));
}

void WindPlantUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:WindPlantUserDefined.proprietary"), &assign_WindPlantUserDefined_proprietary));
	}

void WindPlantUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:WindPlantUserDefined.ProprietaryParameterDynamics"), &assign_WindPlantUserDefined_ProprietaryParameterDynamics));
}

const char WindPlantUserDefined::debugName[] = "WindPlantUserDefined";
const char* WindPlantUserDefined::debugString()
{
	return WindPlantUserDefined::debugName;
}

const BaseClassDefiner WindPlantUserDefined::declare()
{
	return BaseClassDefiner(WindPlantUserDefined::addConstructToMap, WindPlantUserDefined::addPrimitiveAssignFnsToMap, WindPlantUserDefined::addClassAssignFnsToMap, WindPlantUserDefined::debugName);
}


