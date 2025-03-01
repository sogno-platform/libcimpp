/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCNode.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "DCBaseTerminal.hpp"
#include "DCTopologicalNode.hpp"

using namespace CIMPP;

DCNode::DCNode() : DCTopologicalNode(nullptr) {}
DCNode::~DCNode() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::TP,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:DCNode.DCTerminals", { CGMESProfile::EQ, CGMESProfile::TP, } },
	{ "cim:DCNode.DCTopologicalNode", { CGMESProfile::TP, } },
};

std::list<CGMESProfile>
DCNode::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
DCNode::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_DCBaseTerminal_DCNode(BaseClass*, BaseClass*);
bool assign_DCNode_DCTerminals(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DCNode* element = dynamic_cast<DCNode*>(BaseClass_ptr1);
	DCBaseTerminal* element2 = dynamic_cast<DCBaseTerminal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->DCTerminals.begin(), element->DCTerminals.end(), element2) == element->DCTerminals.end())
		{
			element->DCTerminals.push_back(element2);
			return assign_DCBaseTerminal_DCNode(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_DCTopologicalNode_DCNodes(BaseClass*, BaseClass*);
bool assign_DCNode_DCTopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DCNode* element = dynamic_cast<DCNode*>(BaseClass_ptr1);
	DCTopologicalNode* element2 = dynamic_cast<DCTopologicalNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->DCTopologicalNode != element2)
		{
			element->DCTopologicalNode = element2;
			return assign_DCTopologicalNode_DCNodes(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



const char DCNode::debugName[] = "DCNode";
const char* DCNode::debugString() const
{
	return DCNode::debugName;
}

void DCNode::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:DCNode", &DCNode_factory);
}

void DCNode::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCNode::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:DCNode.DCTerminals", &assign_DCNode_DCTerminals);
	assign_map.emplace("cim:DCNode.DCTopologicalNode", &assign_DCNode_DCTopologicalNode);
}

void DCNode::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void DCNode::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void DCNode::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner DCNode::declare()
{
	return BaseClassDefiner(DCNode::addConstructToMap, DCNode::addPrimitiveAssignFnsToMap, DCNode::addClassAssignFnsToMap, DCNode::debugName);
}

namespace CIMPP
{
	BaseClass* DCNode_factory()
	{
		return new DCNode;
	}
}
