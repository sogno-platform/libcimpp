#include <sstream>
#include "LoadDynamics.hpp"
#include "LoadUserDefined.hpp"

#include "Boolean.hpp"
#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

LoadUserDefined::LoadUserDefined() {};

LoadUserDefined::~LoadUserDefined() {};



bool assign_LoadUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(LoadUserDefined* element = dynamic_cast<LoadUserDefined*>(BaseClass_ptr1)) {
		if(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2) != nullptr) {
                        element->ProprietaryParameterDynamics.push_back(dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


bool assign_LoadUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(LoadUserDefined* element = dynamic_cast<LoadUserDefined*>(BaseClass_ptr1)) {
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
	BaseClass* LoadUserDefined_factory() {
		return new LoadUserDefined;
	}
}

void LoadUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:LoadUserDefined"), &LoadUserDefined_factory));
}

void LoadUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:LoadUserDefined.proprietary"), &assign_LoadUserDefined_proprietary));
	}

void LoadUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:LoadUserDefined.ProprietaryParameterDynamics"), &assign_LoadUserDefined_ProprietaryParameterDynamics));
}

const char LoadUserDefined::debugName[] = "LoadUserDefined";
const char* LoadUserDefined::debugString()
{
	return LoadUserDefined::debugName;
}

const BaseClassDefiner LoadUserDefined::declare()
{
	return BaseClassDefiner(LoadUserDefined::addConstructToMap, LoadUserDefined::addPrimitiveAssignFnsToMap, LoadUserDefined::addClassAssignFnsToMap, LoadUserDefined::debugName);
}


