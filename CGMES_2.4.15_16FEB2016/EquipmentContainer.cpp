#include <sstream>
#include "ConnectivityNodeContainer.hpp"
#include "EquipmentContainer.hpp"

#include "Equipment.hpp"

using namespace CIMPP;

EquipmentContainer::EquipmentContainer() {};

EquipmentContainer::~EquipmentContainer() {};




bool assign_EquipmentContainer_Equipments(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(EquipmentContainer* element = dynamic_cast<EquipmentContainer*>(BaseClass_ptr1)) {
		if(dynamic_cast<Equipment*>(BaseClass_ptr2) != nullptr) {
                        element->Equipments.push_back(dynamic_cast<Equipment*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

namespace CIMPP {
	BaseClass* EquipmentContainer_factory() {
		return new EquipmentContainer;
	}
}

void EquipmentContainer::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:EquipmentContainer"), &EquipmentContainer_factory));
}

void EquipmentContainer::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void EquipmentContainer::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:EquipmentContainer.Equipments"), &assign_EquipmentContainer_Equipments));
}

const char EquipmentContainer::debugName[] = "EquipmentContainer";
const char* EquipmentContainer::debugString()
{
	return EquipmentContainer::debugName;
}

const BaseClassDefiner EquipmentContainer::declare()
{
	return BaseClassDefiner(EquipmentContainer::addConstructToMap, EquipmentContainer::addPrimitiveAssignFnsToMap, EquipmentContainer::addClassAssignFnsToMap, EquipmentContainer::debugName);
}
