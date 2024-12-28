/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ConnectivityNode.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
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

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ_BD,
	CGMESProfile::EQ,
	CGMESProfile::TP_BD,
	CGMESProfile::TP,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ConnectivityNode.ConnectivityNodeContainer", { CGMESProfile::EQ_BD, CGMESProfile::EQ, } },
	{ "cim:ConnectivityNode.Terminals", { CGMESProfile::EQ, } },
	{ "cim:ConnectivityNode.TopologicalNode", { CGMESProfile::TP_BD, CGMESProfile::TP, } },
	{ "cim:ConnectivityNode.boundaryPoint", { CGMESProfile::EQ_BD, } },
	{ "cim:ConnectivityNode.fromEndIsoCode", { CGMESProfile::EQ_BD, } },
	{ "cim:ConnectivityNode.fromEndName", { CGMESProfile::EQ_BD, } },
	{ "cim:ConnectivityNode.fromEndNameTso", { CGMESProfile::EQ_BD, } },
	{ "cim:ConnectivityNode.toEndIsoCode", { CGMESProfile::EQ_BD, } },
	{ "cim:ConnectivityNode.toEndName", { CGMESProfile::EQ_BD, } },
	{ "cim:ConnectivityNode.toEndNameTso", { CGMESProfile::EQ_BD, } },
};

std::list<CGMESProfile>
ConnectivityNode::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ConnectivityNode::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


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
		element->fromEndIsoCode = buffer.str();
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
		element->fromEndName = buffer.str();
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
		element->fromEndNameTso = buffer.str();
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
		element->toEndIsoCode = buffer.str();
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
		element->toEndName = buffer.str();
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
		element->toEndNameTso = buffer.str();
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

bool get_ConnectivityNode_boundaryPoint(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ConnectivityNode* element = dynamic_cast<const ConnectivityNode*>(BaseClass_ptr1))
	{
		buffer << element->boundaryPoint;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ConnectivityNode_fromEndIsoCode(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ConnectivityNode* element = dynamic_cast<const ConnectivityNode*>(BaseClass_ptr1))
	{
		buffer << element->fromEndIsoCode;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ConnectivityNode_fromEndName(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ConnectivityNode* element = dynamic_cast<const ConnectivityNode*>(BaseClass_ptr1))
	{
		buffer << element->fromEndName;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ConnectivityNode_fromEndNameTso(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ConnectivityNode* element = dynamic_cast<const ConnectivityNode*>(BaseClass_ptr1))
	{
		buffer << element->fromEndNameTso;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ConnectivityNode_toEndIsoCode(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ConnectivityNode* element = dynamic_cast<const ConnectivityNode*>(BaseClass_ptr1))
	{
		buffer << element->toEndIsoCode;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ConnectivityNode_toEndName(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ConnectivityNode* element = dynamic_cast<const ConnectivityNode*>(BaseClass_ptr1))
	{
		buffer << element->toEndName;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ConnectivityNode_toEndNameTso(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ConnectivityNode* element = dynamic_cast<const ConnectivityNode*>(BaseClass_ptr1))
	{
		buffer << element->toEndNameTso;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}


bool get_ConnectivityNode_ConnectivityNodeContainer(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const ConnectivityNode* element = dynamic_cast<const ConnectivityNode*>(BaseClass_ptr1))
	{
		if (element->ConnectivityNodeContainer != 0)
		{
			BaseClass_list.push_back(element->ConnectivityNodeContainer);
			return true;
		}
	}
	return false;
}

bool get_ConnectivityNode_TopologicalNode(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const ConnectivityNode* element = dynamic_cast<const ConnectivityNode*>(BaseClass_ptr1))
	{
		if (element->TopologicalNode != 0)
		{
			BaseClass_list.push_back(element->TopologicalNode);
			return true;
		}
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

void ConnectivityNode::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ConnectivityNode.boundaryPoint", &get_ConnectivityNode_boundaryPoint);
	get_map.emplace("cim:ConnectivityNode.fromEndIsoCode", &get_ConnectivityNode_fromEndIsoCode);
	get_map.emplace("cim:ConnectivityNode.fromEndName", &get_ConnectivityNode_fromEndName);
	get_map.emplace("cim:ConnectivityNode.fromEndNameTso", &get_ConnectivityNode_fromEndNameTso);
	get_map.emplace("cim:ConnectivityNode.toEndIsoCode", &get_ConnectivityNode_toEndIsoCode);
	get_map.emplace("cim:ConnectivityNode.toEndName", &get_ConnectivityNode_toEndName);
	get_map.emplace("cim:ConnectivityNode.toEndNameTso", &get_ConnectivityNode_toEndNameTso);
}

void ConnectivityNode::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:ConnectivityNode.ConnectivityNodeContainer", &get_ConnectivityNode_ConnectivityNodeContainer);
	get_map.emplace("cim:ConnectivityNode.TopologicalNode", &get_ConnectivityNode_TopologicalNode);
}

void ConnectivityNode::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
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
