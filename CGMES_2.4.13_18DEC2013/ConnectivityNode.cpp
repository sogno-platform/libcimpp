/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ConnectivityNode.hpp"

#include <algorithm>
#include <sstream>

#include "ConnectivityNodeContainer.hpp"
#include "Terminal.hpp"
#include "TopologicalNode.hpp"
#include "Boolean.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"
#include "String.hpp"

using namespace CIMPP;

ConnectivityNode::ConnectivityNode() : ConnectivityNodeContainer(nullptr), TopologicalNode(nullptr) {};
ConnectivityNode::~ConnectivityNode() {};





bool assign_ConnectivityNode_boundaryPoint(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ConnectivityNode* element = dynamic_cast<ConnectivityNode*>(BaseClass_ptr1))
	{
		buffer >> element->boundaryPoint;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ConnectivityNode_fromEndIsoCode(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ConnectivityNode* element = dynamic_cast<ConnectivityNode*>(BaseClass_ptr1))
	{
		buffer >> element->fromEndIsoCode;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ConnectivityNode_fromEndName(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ConnectivityNode* element = dynamic_cast<ConnectivityNode*>(BaseClass_ptr1))
	{
		buffer >> element->fromEndName;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ConnectivityNode_fromEndNameTso(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ConnectivityNode* element = dynamic_cast<ConnectivityNode*>(BaseClass_ptr1))
	{
		buffer >> element->fromEndNameTso;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ConnectivityNode_toEndIsoCode(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ConnectivityNode* element = dynamic_cast<ConnectivityNode*>(BaseClass_ptr1))
	{
		buffer >> element->toEndIsoCode;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ConnectivityNode_toEndName(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ConnectivityNode* element = dynamic_cast<ConnectivityNode*>(BaseClass_ptr1))
	{
		buffer >> element->toEndName;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ConnectivityNode_toEndNameTso(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ConnectivityNode* element = dynamic_cast<ConnectivityNode*>(BaseClass_ptr1))
	{
		buffer >> element->toEndNameTso;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ConnectivityNodeContainer_ConnectivityNodes(BaseClass*, BaseClass*);
bool assign_ConnectivityNode_ConnectivityNodeContainer(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ConnectivityNode* element = dynamic_cast<ConnectivityNode*>(BaseClass_ptr1);
	ConnectivityNodeContainer* element2 = dynamic_cast<ConnectivityNodeContainer*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ConnectivityNodeContainer != element2)
		{
			element->ConnectivityNodeContainer = element2;
			return assign_ConnectivityNodeContainer_ConnectivityNodes(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Terminal_ConnectivityNode(BaseClass*, BaseClass*);
bool assign_ConnectivityNode_Terminals(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ConnectivityNode* element = dynamic_cast<ConnectivityNode*>(BaseClass_ptr1);
	Terminal* element2 = dynamic_cast<Terminal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Terminals.begin(), element->Terminals.end(), element2) == element->Terminals.end())
		{
			element->Terminals.push_back(element2);
			return assign_Terminal_ConnectivityNode(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_TopologicalNode_ConnectivityNodes(BaseClass*, BaseClass*);
bool assign_ConnectivityNode_TopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ConnectivityNode* element = dynamic_cast<ConnectivityNode*>(BaseClass_ptr1);
	TopologicalNode* element2 = dynamic_cast<TopologicalNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->TopologicalNode != element2)
		{
			element->TopologicalNode = element2;
			return assign_TopologicalNode_ConnectivityNodes(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}








const char ConnectivityNode::debugName[] = "ConnectivityNode";
const char* ConnectivityNode::debugString() const
{
	return ConnectivityNode::debugName;
}

void ConnectivityNode::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ConnectivityNode"), &ConnectivityNode_factory));
}

void ConnectivityNode::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ConnectivityNode.boundaryPoint"), &assign_ConnectivityNode_boundaryPoint));
	assign_map.insert(std::make_pair(std::string("cim:ConnectivityNode.fromEndIsoCode"), &assign_ConnectivityNode_fromEndIsoCode));
	assign_map.insert(std::make_pair(std::string("cim:ConnectivityNode.fromEndName"), &assign_ConnectivityNode_fromEndName));
	assign_map.insert(std::make_pair(std::string("cim:ConnectivityNode.fromEndNameTso"), &assign_ConnectivityNode_fromEndNameTso));
	assign_map.insert(std::make_pair(std::string("cim:ConnectivityNode.toEndIsoCode"), &assign_ConnectivityNode_toEndIsoCode));
	assign_map.insert(std::make_pair(std::string("cim:ConnectivityNode.toEndName"), &assign_ConnectivityNode_toEndName));
	assign_map.insert(std::make_pair(std::string("cim:ConnectivityNode.toEndNameTso"), &assign_ConnectivityNode_toEndNameTso));
}

void ConnectivityNode::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ConnectivityNode.ConnectivityNodeContainer"), &assign_ConnectivityNode_ConnectivityNodeContainer));
	assign_map.insert(std::make_pair(std::string("cim:ConnectivityNode.Terminals"), &assign_ConnectivityNode_Terminals));
	assign_map.insert(std::make_pair(std::string("cim:ConnectivityNode.TopologicalNode"), &assign_ConnectivityNode_TopologicalNode));
}

const BaseClassDefiner ConnectivityNode::declare()
{
	return BaseClassDefiner(ConnectivityNode::addConstructToMap, ConnectivityNode::addPrimitiveAssignFnsToMap, ConnectivityNode::addClassAssignFnsToMap, ConnectivityNode::debugName);
}

namespace CIMPP
{
	BaseClass* ConnectivityNode_factory()
	{
		return new ConnectivityNode;
	}
}
