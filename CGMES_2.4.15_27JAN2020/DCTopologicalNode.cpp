/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCTopologicalNode.hpp"

#include <algorithm>
#include <sstream>

#include "DCEquipmentContainer.hpp"
#include "DCNode.hpp"
#include "DCBaseTerminal.hpp"
#include "DCTopologicalIsland.hpp"

using namespace CIMPP;

DCTopologicalNode::DCTopologicalNode() : DCEquipmentContainer(nullptr), DCTopologicalIsland(nullptr) {};
DCTopologicalNode::~DCTopologicalNode() {};







bool assign_DCEquipmentContainer_DCTopologicalNode(BaseClass*, BaseClass*);
bool assign_DCTopologicalNode_DCEquipmentContainer(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DCTopologicalNode* element = dynamic_cast<DCTopologicalNode*>(BaseClass_ptr1);
	DCEquipmentContainer* element2 = dynamic_cast<DCEquipmentContainer*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->DCEquipmentContainer != element2)
		{
			element->DCEquipmentContainer = element2;
			return assign_DCEquipmentContainer_DCTopologicalNode(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_DCNode_DCTopologicalNode(BaseClass*, BaseClass*);
bool assign_DCTopologicalNode_DCNodes(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DCTopologicalNode* element = dynamic_cast<DCTopologicalNode*>(BaseClass_ptr1);
	DCNode* element2 = dynamic_cast<DCNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->DCNodes.begin(), element->DCNodes.end(), element2) == element->DCNodes.end())
		{
			element->DCNodes.push_back(element2);
			return assign_DCNode_DCTopologicalNode(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_DCBaseTerminal_DCTopologicalNode(BaseClass*, BaseClass*);
bool assign_DCTopologicalNode_DCTerminals(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DCTopologicalNode* element = dynamic_cast<DCTopologicalNode*>(BaseClass_ptr1);
	DCBaseTerminal* element2 = dynamic_cast<DCBaseTerminal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->DCTerminals.begin(), element->DCTerminals.end(), element2) == element->DCTerminals.end())
		{
			element->DCTerminals.push_back(element2);
			return assign_DCBaseTerminal_DCTopologicalNode(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_DCTopologicalIsland_DCTopologicalNodes(BaseClass*, BaseClass*);
bool assign_DCTopologicalNode_DCTopologicalIsland(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DCTopologicalNode* element = dynamic_cast<DCTopologicalNode*>(BaseClass_ptr1);
	DCTopologicalIsland* element2 = dynamic_cast<DCTopologicalIsland*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->DCTopologicalIsland != element2)
		{
			element->DCTopologicalIsland = element2;
			return assign_DCTopologicalIsland_DCTopologicalNodes(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char DCTopologicalNode::debugName[] = "DCTopologicalNode";
const char* DCTopologicalNode::debugString() const
{
	return DCTopologicalNode::debugName;
}

void DCTopologicalNode::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DCTopologicalNode"), &DCTopologicalNode_factory));
}

void DCTopologicalNode::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCTopologicalNode::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:DCTopologicalNode.DCEquipmentContainer"), &assign_DCTopologicalNode_DCEquipmentContainer));
	assign_map.insert(std::make_pair(std::string("cim:DCTopologicalNode.DCNodes"), &assign_DCTopologicalNode_DCNodes));
	assign_map.insert(std::make_pair(std::string("cim:DCTopologicalNode.DCTerminals"), &assign_DCTopologicalNode_DCTerminals));
	assign_map.insert(std::make_pair(std::string("cim:DCTopologicalNode.DCTopologicalIsland"), &assign_DCTopologicalNode_DCTopologicalIsland));
}

const BaseClassDefiner DCTopologicalNode::declare()
{
	return BaseClassDefiner(DCTopologicalNode::addConstructToMap, DCTopologicalNode::addPrimitiveAssignFnsToMap, DCTopologicalNode::addClassAssignFnsToMap, DCTopologicalNode::debugName);
}

namespace CIMPP
{
	BaseClass* DCTopologicalNode_factory()
	{
		return new DCTopologicalNode;
	}
}
