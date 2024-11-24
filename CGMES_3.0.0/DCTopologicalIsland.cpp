/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCTopologicalIsland.hpp"

#include <algorithm>
#include <sstream>

#include "DCTopologicalNode.hpp"

using namespace CIMPP;

DCTopologicalIsland::DCTopologicalIsland() {};
DCTopologicalIsland::~DCTopologicalIsland() {};




bool assign_DCTopologicalNode_DCTopologicalIsland(BaseClass*, BaseClass*);
bool assign_DCTopologicalIsland_DCTopologicalNodes(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DCTopologicalIsland* element = dynamic_cast<DCTopologicalIsland*>(BaseClass_ptr1);
	DCTopologicalNode* element2 = dynamic_cast<DCTopologicalNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->DCTopologicalNodes.begin(), element->DCTopologicalNodes.end(), element2) == element->DCTopologicalNodes.end())
		{
			element->DCTopologicalNodes.push_back(element2);
			return assign_DCTopologicalNode_DCTopologicalIsland(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char DCTopologicalIsland::debugName[] = "DCTopologicalIsland";
const char* DCTopologicalIsland::debugString() const
{
	return DCTopologicalIsland::debugName;
}

void DCTopologicalIsland::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DCTopologicalIsland"), &DCTopologicalIsland_factory));
}

void DCTopologicalIsland::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCTopologicalIsland::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:DCTopologicalIsland.DCTopologicalNodes"), &assign_DCTopologicalIsland_DCTopologicalNodes));
}

const BaseClassDefiner DCTopologicalIsland::declare()
{
	return BaseClassDefiner(DCTopologicalIsland::addConstructToMap, DCTopologicalIsland::addPrimitiveAssignFnsToMap, DCTopologicalIsland::addClassAssignFnsToMap, DCTopologicalIsland::debugName);
}

namespace CIMPP
{
	BaseClass* DCTopologicalIsland_factory()
	{
		return new DCTopologicalIsland;
	}
}
