#include <sstream>
#include "IdentifiedObject.hpp"
#include "LoadDynamics.hpp"

#include "EnergyConsumer.hpp"

using namespace CIMPP;

LoadDynamics::LoadDynamics() {};

LoadDynamics::~LoadDynamics() {};




bool assign_LoadDynamics_EnergyConsumer(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(LoadDynamics* element = dynamic_cast<LoadDynamics*>(BaseClass_ptr1)) {
		if(dynamic_cast<EnergyConsumer*>(BaseClass_ptr2) != nullptr) {
                        element->EnergyConsumer.push_back(dynamic_cast<EnergyConsumer*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

namespace CIMPP {
	BaseClass* LoadDynamics_factory() {
		return new LoadDynamics;
	}
}

void LoadDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:LoadDynamics"), &LoadDynamics_factory));
}

void LoadDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void LoadDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:LoadDynamics.EnergyConsumer"), &assign_LoadDynamics_EnergyConsumer));
}

const char LoadDynamics::debugName[] = "LoadDynamics";
const char* LoadDynamics::debugString()
{
	return LoadDynamics::debugName;
}

const BaseClassDefiner LoadDynamics::declare()
{
	return BaseClassDefiner(LoadDynamics::addConstructToMap, LoadDynamics::addPrimitiveAssignFnsToMap, LoadDynamics::addClassAssignFnsToMap, LoadDynamics::debugName);
}
