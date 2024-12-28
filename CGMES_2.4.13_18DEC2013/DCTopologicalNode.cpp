/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCTopologicalNode.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "DCEquipmentContainer.hpp"
#include "DCNode.hpp"
#include "DCBaseTerminal.hpp"
#include "DCTopologicalIsland.hpp"

using namespace CIMPP;

DCTopologicalNode::DCTopologicalNode() : DCEquipmentContainer(nullptr), DCTopologicalIsland(nullptr) {};
DCTopologicalNode::~DCTopologicalNode() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::SV,
	CGMESProfile::TP,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:DCTopologicalNode.DCEquipmentContainer", { CGMESProfile::TP, } },
	{ "cim:DCTopologicalNode.DCNodes", { CGMESProfile::TP, } },
	{ "cim:DCTopologicalNode.DCTerminals", { CGMESProfile::TP, } },
	{ "cim:DCTopologicalNode.DCTopologicalIsland", { CGMESProfile::SV, } },
};

std::list<CGMESProfile>
DCTopologicalNode::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
DCTopologicalNode::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



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


bool get_DCTopologicalNode_DCEquipmentContainer(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const DCTopologicalNode* element = dynamic_cast<const DCTopologicalNode*>(BaseClass_ptr1))
	{
		if (element->DCEquipmentContainer != 0)
		{
			BaseClass_list.push_back(element->DCEquipmentContainer);
			return true;
		}
	}
	return false;
}

bool get_DCTopologicalNode_DCNodes(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const DCTopologicalNode* element = dynamic_cast<const DCTopologicalNode*>(BaseClass_ptr1))
	{
		std::copy(element->DCNodes.begin(), element->DCNodes.end(), std::back_inserter(BaseClass_list));
		return !BaseClass_list.empty();
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

void DCTopologicalNode::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void DCTopologicalNode::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:DCTopologicalNode.DCEquipmentContainer", &get_DCTopologicalNode_DCEquipmentContainer);
	get_map.emplace("cim:DCTopologicalNode.DCNodes", &get_DCTopologicalNode_DCNodes);
}

void DCTopologicalNode::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
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
