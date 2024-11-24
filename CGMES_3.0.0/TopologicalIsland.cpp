/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TopologicalIsland.hpp"

#include <algorithm>
#include <sstream>

#include "TopologicalNode.hpp"
#include "TopologicalNode.hpp"

using namespace CIMPP;

TopologicalIsland::TopologicalIsland() : AngleRefTopologicalNode(nullptr) {};
TopologicalIsland::~TopologicalIsland() {};





bool assign_TopologicalNode_AngleRefTopologicalIsland(BaseClass*, BaseClass*);
bool assign_TopologicalIsland_AngleRefTopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TopologicalIsland* element = dynamic_cast<TopologicalIsland*>(BaseClass_ptr1);
	TopologicalNode* element2 = dynamic_cast<TopologicalNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->AngleRefTopologicalNode != element2)
		{
			element->AngleRefTopologicalNode = element2;
			return assign_TopologicalNode_AngleRefTopologicalIsland(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_TopologicalNode_TopologicalIsland(BaseClass*, BaseClass*);
bool assign_TopologicalIsland_TopologicalNodes(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TopologicalIsland* element = dynamic_cast<TopologicalIsland*>(BaseClass_ptr1);
	TopologicalNode* element2 = dynamic_cast<TopologicalNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->TopologicalNodes.begin(), element->TopologicalNodes.end(), element2) == element->TopologicalNodes.end())
		{
			element->TopologicalNodes.push_back(element2);
			return assign_TopologicalNode_TopologicalIsland(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char TopologicalIsland::debugName[] = "TopologicalIsland";
const char* TopologicalIsland::debugString() const
{
	return TopologicalIsland::debugName;
}

void TopologicalIsland::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:TopologicalIsland"), &TopologicalIsland_factory));
}

void TopologicalIsland::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void TopologicalIsland::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:TopologicalIsland.AngleRefTopologicalNode"), &assign_TopologicalIsland_AngleRefTopologicalNode));
	assign_map.insert(std::make_pair(std::string("cim:TopologicalIsland.TopologicalNodes"), &assign_TopologicalIsland_TopologicalNodes));
}

const BaseClassDefiner TopologicalIsland::declare()
{
	return BaseClassDefiner(TopologicalIsland::addConstructToMap, TopologicalIsland::addPrimitiveAssignFnsToMap, TopologicalIsland::addClassAssignFnsToMap, TopologicalIsland::debugName);
}

namespace CIMPP
{
	BaseClass* TopologicalIsland_factory()
	{
		return new TopologicalIsland;
	}
}
