#include <sstream>
#include "TurbineGovernorDynamics.hpp"
#include "TurbineGovernorUserDefined.hpp"

#include "Boolean.hpp"
#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

TurbineGovernorUserDefined::TurbineGovernorUserDefined() {};

TurbineGovernorUserDefined::~TurbineGovernorUserDefined() {};



bool assign_TurbineGovernorUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TurbineGovernorUserDefined* element = dynamic_cast<TurbineGovernorUserDefined*>(BaseClass_ptr1)) {
		if(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2) != nullptr) {
                        element->ProprietaryParameterDynamics.push_back(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


bool assign_TurbineGovernorUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TurbineGovernorUserDefined* element = dynamic_cast<TurbineGovernorUserDefined*>(BaseClass_ptr1)) {
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
	BaseClass* TurbineGovernorUserDefined_factory() {
		return new TurbineGovernorUserDefined;
	}
}

void TurbineGovernorUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:TurbineGovernorUserDefined"), &TurbineGovernorUserDefined_factory));
}

void TurbineGovernorUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:TurbineGovernorUserDefined.proprietary"), &assign_TurbineGovernorUserDefined_proprietary));
	}

void TurbineGovernorUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:TurbineGovernorUserDefined.ProprietaryParameterDynamics"), &assign_TurbineGovernorUserDefined_ProprietaryParameterDynamics));
}

const char TurbineGovernorUserDefined::debugName[] = "TurbineGovernorUserDefined";
const char* TurbineGovernorUserDefined::debugString()
{
	return TurbineGovernorUserDefined::debugName;
}

const BaseClassDefiner TurbineGovernorUserDefined::declare()
{
	return BaseClassDefiner(TurbineGovernorUserDefined::addConstructToMap, TurbineGovernorUserDefined::addPrimitiveAssignFnsToMap, TurbineGovernorUserDefined::addClassAssignFnsToMap, TurbineGovernorUserDefined::debugName);
}


