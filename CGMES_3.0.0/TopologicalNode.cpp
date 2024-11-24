/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TopologicalNode.hpp"

#include <algorithm>
#include <sstream>

#include "TopologicalIsland.hpp"
#include "BaseVoltage.hpp"
#include "ConnectivityNodeContainer.hpp"
#include "ConnectivityNode.hpp"
#include "ReportingGroup.hpp"
#include "SvInjection.hpp"
#include "SvVoltage.hpp"
#include "Terminal.hpp"
#include "TopologicalIsland.hpp"

using namespace CIMPP;

TopologicalNode::TopologicalNode() : AngleRefTopologicalIsland(nullptr), BaseVoltage(nullptr), ConnectivityNodeContainer(nullptr), ReportingGroup(nullptr), SvInjection(nullptr), SvVoltage(nullptr), TopologicalIsland(nullptr) {};
TopologicalNode::~TopologicalNode() {};












bool assign_TopologicalIsland_AngleRefTopologicalNode(BaseClass*, BaseClass*);
bool assign_TopologicalNode_AngleRefTopologicalIsland(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TopologicalNode* element = dynamic_cast<TopologicalNode*>(BaseClass_ptr1);
	TopologicalIsland* element2 = dynamic_cast<TopologicalIsland*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->AngleRefTopologicalIsland != element2)
		{
			element->AngleRefTopologicalIsland = element2;
			return assign_TopologicalIsland_AngleRefTopologicalNode(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_BaseVoltage_TopologicalNode(BaseClass*, BaseClass*);
bool assign_TopologicalNode_BaseVoltage(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TopologicalNode* element = dynamic_cast<TopologicalNode*>(BaseClass_ptr1);
	BaseVoltage* element2 = dynamic_cast<BaseVoltage*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->BaseVoltage != element2)
		{
			element->BaseVoltage = element2;
			return assign_BaseVoltage_TopologicalNode(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_ConnectivityNodeContainer_TopologicalNode(BaseClass*, BaseClass*);
bool assign_TopologicalNode_ConnectivityNodeContainer(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TopologicalNode* element = dynamic_cast<TopologicalNode*>(BaseClass_ptr1);
	ConnectivityNodeContainer* element2 = dynamic_cast<ConnectivityNodeContainer*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ConnectivityNodeContainer != element2)
		{
			element->ConnectivityNodeContainer = element2;
			return assign_ConnectivityNodeContainer_TopologicalNode(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_ConnectivityNode_TopologicalNode(BaseClass*, BaseClass*);
bool assign_TopologicalNode_ConnectivityNodes(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TopologicalNode* element = dynamic_cast<TopologicalNode*>(BaseClass_ptr1);
	ConnectivityNode* element2 = dynamic_cast<ConnectivityNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ConnectivityNodes.begin(), element->ConnectivityNodes.end(), element2) == element->ConnectivityNodes.end())
		{
			element->ConnectivityNodes.push_back(element2);
			return assign_ConnectivityNode_TopologicalNode(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_ReportingGroup_TopologicalNode(BaseClass*, BaseClass*);
bool assign_TopologicalNode_ReportingGroup(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TopologicalNode* element = dynamic_cast<TopologicalNode*>(BaseClass_ptr1);
	ReportingGroup* element2 = dynamic_cast<ReportingGroup*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ReportingGroup != element2)
		{
			element->ReportingGroup = element2;
			return assign_ReportingGroup_TopologicalNode(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SvInjection_TopologicalNode(BaseClass*, BaseClass*);
bool assign_TopologicalNode_SvInjection(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TopologicalNode* element = dynamic_cast<TopologicalNode*>(BaseClass_ptr1);
	SvInjection* element2 = dynamic_cast<SvInjection*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->SvInjection != element2)
		{
			element->SvInjection = element2;
			return assign_SvInjection_TopologicalNode(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SvVoltage_TopologicalNode(BaseClass*, BaseClass*);
bool assign_TopologicalNode_SvVoltage(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TopologicalNode* element = dynamic_cast<TopologicalNode*>(BaseClass_ptr1);
	SvVoltage* element2 = dynamic_cast<SvVoltage*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->SvVoltage != element2)
		{
			element->SvVoltage = element2;
			return assign_SvVoltage_TopologicalNode(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Terminal_TopologicalNode(BaseClass*, BaseClass*);
bool assign_TopologicalNode_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TopologicalNode* element = dynamic_cast<TopologicalNode*>(BaseClass_ptr1);
	Terminal* element2 = dynamic_cast<Terminal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Terminal.begin(), element->Terminal.end(), element2) == element->Terminal.end())
		{
			element->Terminal.push_back(element2);
			return assign_Terminal_TopologicalNode(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_TopologicalIsland_TopologicalNodes(BaseClass*, BaseClass*);
bool assign_TopologicalNode_TopologicalIsland(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TopologicalNode* element = dynamic_cast<TopologicalNode*>(BaseClass_ptr1);
	TopologicalIsland* element2 = dynamic_cast<TopologicalIsland*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->TopologicalIsland != element2)
		{
			element->TopologicalIsland = element2;
			return assign_TopologicalIsland_TopologicalNodes(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char TopologicalNode::debugName[] = "TopologicalNode";
const char* TopologicalNode::debugString() const
{
	return TopologicalNode::debugName;
}

void TopologicalNode::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:TopologicalNode"), &TopologicalNode_factory));
}

void TopologicalNode::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void TopologicalNode::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:TopologicalNode.AngleRefTopologicalIsland"), &assign_TopologicalNode_AngleRefTopologicalIsland));
	assign_map.insert(std::make_pair(std::string("cim:TopologicalNode.BaseVoltage"), &assign_TopologicalNode_BaseVoltage));
	assign_map.insert(std::make_pair(std::string("cim:TopologicalNode.ConnectivityNodeContainer"), &assign_TopologicalNode_ConnectivityNodeContainer));
	assign_map.insert(std::make_pair(std::string("cim:TopologicalNode.ConnectivityNodes"), &assign_TopologicalNode_ConnectivityNodes));
	assign_map.insert(std::make_pair(std::string("cim:TopologicalNode.ReportingGroup"), &assign_TopologicalNode_ReportingGroup));
	assign_map.insert(std::make_pair(std::string("cim:TopologicalNode.SvInjection"), &assign_TopologicalNode_SvInjection));
	assign_map.insert(std::make_pair(std::string("cim:TopologicalNode.SvVoltage"), &assign_TopologicalNode_SvVoltage));
	assign_map.insert(std::make_pair(std::string("cim:TopologicalNode.Terminal"), &assign_TopologicalNode_Terminal));
	assign_map.insert(std::make_pair(std::string("cim:TopologicalNode.TopologicalIsland"), &assign_TopologicalNode_TopologicalIsland));
}

const BaseClassDefiner TopologicalNode::declare()
{
	return BaseClassDefiner(TopologicalNode::addConstructToMap, TopologicalNode::addPrimitiveAssignFnsToMap, TopologicalNode::addClassAssignFnsToMap, TopologicalNode::debugName);
}

namespace CIMPP
{
	BaseClass* TopologicalNode_factory()
	{
		return new TopologicalNode;
	}
}
