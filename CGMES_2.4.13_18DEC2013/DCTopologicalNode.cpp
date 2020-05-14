#include <sstream>
#include "IdentifiedObject.hpp"
#include "DCTopologicalNode.hpp"

#include "DCBaseTerminal.hpp"
#include "DCEquipmentContainer.hpp"
#include "DCNode.hpp"
#include "DCTopologicalIsland.hpp"

using namespace CIMPP;

DCTopologicalNode::DCTopologicalNode() {};

DCTopologicalNode::~DCTopologicalNode() {};


bool assign_DCTopologicalNode_DCTerminals(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DCTopologicalNode* element = dynamic_cast<DCTopologicalNode*>(BaseClass_ptr1)) {
		if(dynamic_cast<DCBaseTerminal*>(BaseClass_ptr2) != nullptr) {
                        element->DCTerminals.push_back(dynamic_cast<DCBaseTerminal*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_DCEquipmentContainer_DCTopologicalNode(BaseClass*, BaseClass*);
bool assign_DCTopologicalNode_DCEquipmentContainer(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DCTopologicalNode* element = dynamic_cast<DCTopologicalNode*>(BaseClass_ptr1)) {
                element->DCEquipmentContainer = dynamic_cast<DCEquipmentContainer*>(BaseClass_ptr2);
                if(element->DCEquipmentContainer != nullptr)
                        return assign_DCEquipmentContainer_DCTopologicalNode(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_DCTopologicalNode_DCNodes(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DCTopologicalNode* element = dynamic_cast<DCTopologicalNode*>(BaseClass_ptr1)) {
		if(dynamic_cast<DCNode*>(BaseClass_ptr2) != nullptr) {
                        element->DCNodes.push_back(dynamic_cast<DCNode*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_DCTopologicalNode_DCTopologicalIsland(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DCTopologicalNode* element = dynamic_cast<DCTopologicalNode*>(BaseClass_ptr1)) {
                element->DCTopologicalIsland = dynamic_cast<DCTopologicalIsland*>(BaseClass_ptr2);
                if(element->DCTopologicalIsland != nullptr)
                        return true;
        }
        return false;
}






namespace CIMPP {
	BaseClass* DCTopologicalNode_factory() {
		return new DCTopologicalNode;
	}
}

void DCTopologicalNode::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DCTopologicalNode"), &DCTopologicalNode_factory));
}

void DCTopologicalNode::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
				}

void DCTopologicalNode::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:DCTopologicalNode.DCTerminals"), &assign_DCTopologicalNode_DCTerminals));
	assign_map.insert(std::make_pair(std::string("cim:DCTopologicalNode.DCEquipmentContainer"), &assign_DCTopologicalNode_DCEquipmentContainer));
	assign_map.insert(std::make_pair(std::string("cim:DCTopologicalNode.DCNodes"), &assign_DCTopologicalNode_DCNodes));
	assign_map.insert(std::make_pair(std::string("cim:DCTopologicalNode.DCTopologicalIsland"), &assign_DCTopologicalNode_DCTopologicalIsland));
}

const char DCTopologicalNode::debugName[] = "DCTopologicalNode";
const char* DCTopologicalNode::debugString()
{
	return DCTopologicalNode::debugName;
}

const BaseClassDefiner DCTopologicalNode::declare()
{
	return BaseClassDefiner(DCTopologicalNode::addConstructToMap, DCTopologicalNode::addPrimitiveAssignFnsToMap, DCTopologicalNode::addClassAssignFnsToMap, DCTopologicalNode::debugName);
}


