#include <sstream>
#include "EquipmentContainer.hpp"
#include "DCEquipmentContainer.hpp"

#include "DCNode.hpp"
#include "DCTopologicalNode.hpp"

using namespace CIMPP;

DCEquipmentContainer::DCEquipmentContainer() {};

DCEquipmentContainer::~DCEquipmentContainer() {};





bool assign_DCEquipmentContainer_DCNodes(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DCEquipmentContainer* element = dynamic_cast<DCEquipmentContainer*>(BaseClass_ptr1)) {
		if(dynamic_cast<DCNode*>(BaseClass_ptr2) != nullptr) {
                        element->DCNodes.push_back(dynamic_cast<DCNode*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_DCEquipmentContainer_DCTopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DCEquipmentContainer* element = dynamic_cast<DCEquipmentContainer*>(BaseClass_ptr1)) {
		if(dynamic_cast<DCTopologicalNode*>(BaseClass_ptr2) != nullptr) {
                        element->DCTopologicalNode.push_back(dynamic_cast<DCTopologicalNode*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

namespace CIMPP {
	BaseClass* DCEquipmentContainer_factory() {
		return new DCEquipmentContainer;
	}
}

void DCEquipmentContainer::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DCEquipmentContainer"), &DCEquipmentContainer_factory));
}

void DCEquipmentContainer::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void DCEquipmentContainer::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:DCEquipmentContainer.DCNodes"), &assign_DCEquipmentContainer_DCNodes));
	assign_map.insert(std::make_pair(std::string("cim:DCEquipmentContainer.DCTopologicalNode"), &assign_DCEquipmentContainer_DCTopologicalNode));
}

const char DCEquipmentContainer::debugName[] = "DCEquipmentContainer";
const char* DCEquipmentContainer::debugString()
{
	return DCEquipmentContainer::debugName;
}

const BaseClassDefiner DCEquipmentContainer::declare()
{
	return BaseClassDefiner(DCEquipmentContainer::addConstructToMap, DCEquipmentContainer::addPrimitiveAssignFnsToMap, DCEquipmentContainer::addClassAssignFnsToMap, DCEquipmentContainer::debugName);
}
