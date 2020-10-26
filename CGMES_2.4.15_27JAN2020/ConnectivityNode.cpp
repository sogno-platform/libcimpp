#include <sstream>
#include "IdentifiedObject.hpp"
#include "ConnectivityNode.hpp"

#include "Terminal.hpp"
#include "ConnectivityNodeContainer.hpp"
#include "TopologicalNode.hpp"
#include "Boolean.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"

using namespace CIMPP;

ConnectivityNode::ConnectivityNode(): ConnectivityNodeContainer(nullptr), TopologicalNode(nullptr) {};

ConnectivityNode::~ConnectivityNode() {};


bool assign_ConnectivityNode_Terminals(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ConnectivityNode* element = dynamic_cast<ConnectivityNode*>(BaseClass_ptr1)) {
		if(dynamic_cast<Terminal*>(BaseClass_ptr2) != nullptr) {
                        element->Terminals.push_back(dynamic_cast<Terminal*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ConnectivityNodeContainer_ConnectivityNodes(BaseClass*, BaseClass*);
bool assign_ConnectivityNode_ConnectivityNodeContainer(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ConnectivityNode* element = dynamic_cast<ConnectivityNode*>(BaseClass_ptr1)) {
                element->ConnectivityNodeContainer = dynamic_cast<ConnectivityNodeContainer*>(BaseClass_ptr2);
                if(element->ConnectivityNodeContainer != nullptr)
                        return assign_ConnectivityNodeContainer_ConnectivityNodes(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_TopologicalNode_ConnectivityNodes(BaseClass*, BaseClass*);
bool assign_ConnectivityNode_TopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ConnectivityNode* element = dynamic_cast<ConnectivityNode*>(BaseClass_ptr1)) {
                element->TopologicalNode = dynamic_cast<TopologicalNode*>(BaseClass_ptr2);
                if(element->TopologicalNode != nullptr)
                        return assign_TopologicalNode_ConnectivityNodes(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}












bool assign_ConnectivityNode_boundaryPoint(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ConnectivityNode* element = dynamic_cast<ConnectivityNode*>(BaseClass_ptr1)) {
                buffer >> element->boundaryPoint;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ConnectivityNode_fromEndIsoCode(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ConnectivityNode* element = dynamic_cast<ConnectivityNode*>(BaseClass_ptr1)) {
		element->fromEndIsoCode = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ConnectivityNode_fromEndName(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ConnectivityNode* element = dynamic_cast<ConnectivityNode*>(BaseClass_ptr1)) {
		element->fromEndName = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ConnectivityNode_fromEndNameTso(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ConnectivityNode* element = dynamic_cast<ConnectivityNode*>(BaseClass_ptr1)) {
		element->fromEndNameTso = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ConnectivityNode_toEndIsoCode(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ConnectivityNode* element = dynamic_cast<ConnectivityNode*>(BaseClass_ptr1)) {
		element->toEndIsoCode = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ConnectivityNode_toEndName(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ConnectivityNode* element = dynamic_cast<ConnectivityNode*>(BaseClass_ptr1)) {
		element->toEndName = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ConnectivityNode_toEndNameTso(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ConnectivityNode* element = dynamic_cast<ConnectivityNode*>(BaseClass_ptr1)) {
		element->toEndNameTso = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

namespace CIMPP {
	BaseClass* ConnectivityNode_factory() {
		return new ConnectivityNode;
	}
}

void ConnectivityNode::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ConnectivityNode"), &ConnectivityNode_factory));
}

void ConnectivityNode::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
				assign_map.insert(std::make_pair(std::string("cim:ConnectivityNode.boundaryPoint"), &assign_ConnectivityNode_boundaryPoint));
	assign_map.insert(std::make_pair(std::string("cim:ConnectivityNode.fromEndIsoCode"), &assign_ConnectivityNode_fromEndIsoCode));
	assign_map.insert(std::make_pair(std::string("cim:ConnectivityNode.fromEndName"), &assign_ConnectivityNode_fromEndName));
	assign_map.insert(std::make_pair(std::string("cim:ConnectivityNode.fromEndNameTso"), &assign_ConnectivityNode_fromEndNameTso));
	assign_map.insert(std::make_pair(std::string("cim:ConnectivityNode.toEndIsoCode"), &assign_ConnectivityNode_toEndIsoCode));
	assign_map.insert(std::make_pair(std::string("cim:ConnectivityNode.toEndName"), &assign_ConnectivityNode_toEndName));
	assign_map.insert(std::make_pair(std::string("cim:ConnectivityNode.toEndNameTso"), &assign_ConnectivityNode_toEndNameTso));
}

void ConnectivityNode::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ConnectivityNode.Terminals"), &assign_ConnectivityNode_Terminals));
	assign_map.insert(std::make_pair(std::string("cim:ConnectivityNode.ConnectivityNodeContainer"), &assign_ConnectivityNode_ConnectivityNodeContainer));
	assign_map.insert(std::make_pair(std::string("cim:ConnectivityNode.TopologicalNode"), &assign_ConnectivityNode_TopologicalNode));
							}

const char ConnectivityNode::debugName[] = "ConnectivityNode";
const char* ConnectivityNode::debugString()
{
	return ConnectivityNode::debugName;
}

const BaseClassDefiner ConnectivityNode::declare()
{
	return BaseClassDefiner(ConnectivityNode::addConstructToMap, ConnectivityNode::addPrimitiveAssignFnsToMap, ConnectivityNode::addClassAssignFnsToMap, ConnectivityNode::debugName);
}


