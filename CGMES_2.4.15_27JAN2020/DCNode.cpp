#include <sstream>
#include "IdentifiedObject.hpp"
#include "DCNode.hpp"

#include "DCEquipmentContainer.hpp"
#include "DCBaseTerminal.hpp"
#include "DCTopologicalNode.hpp"

using namespace CIMPP;

DCNode::DCNode(): DCEquipmentContainer(nullptr), DCTopologicalNode(nullptr) {};

DCNode::~DCNode() {};






bool assign_DCEquipmentContainer_DCNodes(BaseClass*, BaseClass*);
bool assign_DCNode_DCEquipmentContainer(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DCNode* element = dynamic_cast<DCNode*>(BaseClass_ptr1)) {
                element->DCEquipmentContainer = dynamic_cast<DCEquipmentContainer*>(BaseClass_ptr2);
                if(element->DCEquipmentContainer != nullptr)
                        return assign_DCEquipmentContainer_DCNodes(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_DCNode_DCTerminals(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DCNode* element = dynamic_cast<DCNode*>(BaseClass_ptr1)) {
		if(dynamic_cast<DCBaseTerminal*>(BaseClass_ptr2) != nullptr) {
                        element->DCTerminals.push_back(dynamic_cast<DCBaseTerminal*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_DCTopologicalNode_DCNodes(BaseClass*, BaseClass*);
bool assign_DCNode_DCTopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DCNode* element = dynamic_cast<DCNode*>(BaseClass_ptr1)) {
                element->DCTopologicalNode = dynamic_cast<DCTopologicalNode*>(BaseClass_ptr2);
                if(element->DCTopologicalNode != nullptr)
                        return assign_DCTopologicalNode_DCNodes(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

namespace CIMPP {
	BaseClass* DCNode_factory() {
		return new DCNode;
	}
}

void DCNode::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DCNode"), &DCNode_factory));
}

void DCNode::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
			}

void DCNode::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:DCNode.DCEquipmentContainer"), &assign_DCNode_DCEquipmentContainer));
	assign_map.insert(std::make_pair(std::string("cim:DCNode.DCTerminals"), &assign_DCNode_DCTerminals));
	assign_map.insert(std::make_pair(std::string("cim:DCNode.DCTopologicalNode"), &assign_DCNode_DCTopologicalNode));
}

const char DCNode::debugName[] = "DCNode";
const char* DCNode::debugString()
{
	return DCNode::debugName;
}

const BaseClassDefiner DCNode::declare()
{
	return BaseClassDefiner(DCNode::addConstructToMap, DCNode::addPrimitiveAssignFnsToMap, DCNode::addClassAssignFnsToMap, DCNode::debugName);
}
