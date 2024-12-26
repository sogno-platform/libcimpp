#include <sstream>
#include "ConnectivityNodeContainer.hpp"
#include "EquivalentNetwork.hpp"

#include "EquivalentEquipment.hpp"

using namespace CIMPP;

EquivalentNetwork::EquivalentNetwork() {};

EquivalentNetwork::~EquivalentNetwork() {};




bool assign_EquivalentNetwork_EquivalentEquipments(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(EquivalentNetwork* element = dynamic_cast<EquivalentNetwork*>(BaseClass_ptr1)) {
		if(dynamic_cast<EquivalentEquipment*>(BaseClass_ptr2) != nullptr) {
                        element->EquivalentEquipments.push_back(dynamic_cast<EquivalentEquipment*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

namespace CIMPP {
	BaseClass* EquivalentNetwork_factory() {
		return new EquivalentNetwork;
	}
}

void EquivalentNetwork::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:EquivalentNetwork"), &EquivalentNetwork_factory));
}

void EquivalentNetwork::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void EquivalentNetwork::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:EquivalentNetwork.EquivalentEquipments"), &assign_EquivalentNetwork_EquivalentEquipments));
}

const char EquivalentNetwork::debugName[] = "EquivalentNetwork";
const char* EquivalentNetwork::debugString()
{
	return EquivalentNetwork::debugName;
}

const BaseClassDefiner EquivalentNetwork::declare()
{
	return BaseClassDefiner(EquivalentNetwork::addConstructToMap, EquivalentNetwork::addPrimitiveAssignFnsToMap, EquivalentNetwork::addClassAssignFnsToMap, EquivalentNetwork::debugName);
}
