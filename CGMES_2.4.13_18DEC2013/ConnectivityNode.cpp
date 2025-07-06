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

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ConnectivityNode(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::EQ_BD,
			CGMESProfile::EQ,
			CGMESProfile::TP_BD,
			CGMESProfile::TP,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "ConnectivityNode.ConnectivityNodeContainer", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ_BD, CGMESProfile::EQ, } } },
		{ "ConnectivityNode.Terminals", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ConnectivityNode.TopologicalNode", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::TP_BD, CGMESProfile::TP, } } },
		{ "ConnectivityNode.boundaryPoint", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ_BD, } } },
		{ "ConnectivityNode.fromEndIsoCode", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ_BD, } } },
		{ "ConnectivityNode.fromEndName", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ_BD, } } },
		{ "ConnectivityNode.fromEndNameTso", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ_BD, } } },
		{ "ConnectivityNode.toEndIsoCode", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ_BD, } } },
		{ "ConnectivityNode.toEndName", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ_BD, } } },
		{ "ConnectivityNode.toEndNameTso", { "http://entsoe.eu/CIM/SchemaExtension/3/1#", { CGMESProfile::EQ_BD, } } },
	};
    return ClassAttrDetailsMap;
}

ConnectivityNode::ConnectivityNode() : ConnectivityNodeContainer(nullptr), TopologicalNode(nullptr) {}
ConnectivityNode::~ConnectivityNode() {}

const std::list<std::string>& ConnectivityNode::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ConnectivityNode::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ConnectivityNode::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ConnectivityNode::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ConnectivityNode::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ConnectivityNode::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ConnectivityNode::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
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

bool assign_ConnectivityNode_boundaryPoint(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ConnectivityNode* element = dynamic_cast<ConnectivityNode*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->boundaryPoint;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ConnectivityNode_fromEndIsoCode(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ConnectivityNode* element = dynamic_cast<ConnectivityNode*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->fromEndIsoCode = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ConnectivityNode_fromEndName(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ConnectivityNode* element = dynamic_cast<ConnectivityNode*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->fromEndName = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ConnectivityNode_fromEndNameTso(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ConnectivityNode* element = dynamic_cast<ConnectivityNode*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->fromEndNameTso = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ConnectivityNode_toEndIsoCode(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ConnectivityNode* element = dynamic_cast<ConnectivityNode*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->toEndIsoCode = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ConnectivityNode_toEndName(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ConnectivityNode* element = dynamic_cast<ConnectivityNode*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->toEndName = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ConnectivityNode_toEndNameTso(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ConnectivityNode* element = dynamic_cast<ConnectivityNode*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->toEndNameTso = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ConnectivityNode_ConnectivityNodeContainer(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ConnectivityNode* element = dynamic_cast<const ConnectivityNode*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const ConnectivityNode* element = dynamic_cast<const ConnectivityNode*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->TopologicalNode != 0)
		{
			BaseClass_list.push_back(element->TopologicalNode);
			return true;
		}
	}
	return false;
}

bool get_ConnectivityNode_boundaryPoint(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ConnectivityNode* element = dynamic_cast<const ConnectivityNode*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const ConnectivityNode* element = dynamic_cast<const ConnectivityNode*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const ConnectivityNode* element = dynamic_cast<const ConnectivityNode*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const ConnectivityNode* element = dynamic_cast<const ConnectivityNode*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const ConnectivityNode* element = dynamic_cast<const ConnectivityNode*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const ConnectivityNode* element = dynamic_cast<const ConnectivityNode*>(BaseClass_ptr1);
	if (element != nullptr)
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
	const ConnectivityNode* element = dynamic_cast<const ConnectivityNode*>(BaseClass_ptr1);
	if (element != nullptr)
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

const char ConnectivityNode::debugName[] = "ConnectivityNode";
const char* ConnectivityNode::debugString() const
{
	return ConnectivityNode::debugName;
}

void ConnectivityNode::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ConnectivityNode", &ConnectivityNode_factory);
}

void ConnectivityNode::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ConnectivityNode.boundaryPoint", &assign_ConnectivityNode_boundaryPoint);
	assign_map.emplace("ConnectivityNode.fromEndIsoCode", &assign_ConnectivityNode_fromEndIsoCode);
	assign_map.emplace("ConnectivityNode.fromEndName", &assign_ConnectivityNode_fromEndName);
	assign_map.emplace("ConnectivityNode.fromEndNameTso", &assign_ConnectivityNode_fromEndNameTso);
	assign_map.emplace("ConnectivityNode.toEndIsoCode", &assign_ConnectivityNode_toEndIsoCode);
	assign_map.emplace("ConnectivityNode.toEndName", &assign_ConnectivityNode_toEndName);
	assign_map.emplace("ConnectivityNode.toEndNameTso", &assign_ConnectivityNode_toEndNameTso);
}

void ConnectivityNode::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("ConnectivityNode.ConnectivityNodeContainer", &assign_ConnectivityNode_ConnectivityNodeContainer);
	assign_map.emplace("ConnectivityNode.Terminals", &assign_ConnectivityNode_Terminals);
	assign_map.emplace("ConnectivityNode.TopologicalNode", &assign_ConnectivityNode_TopologicalNode);
}

void ConnectivityNode::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ConnectivityNode.boundaryPoint", &get_ConnectivityNode_boundaryPoint);
	get_map.emplace("ConnectivityNode.fromEndIsoCode", &get_ConnectivityNode_fromEndIsoCode);
	get_map.emplace("ConnectivityNode.fromEndName", &get_ConnectivityNode_fromEndName);
	get_map.emplace("ConnectivityNode.fromEndNameTso", &get_ConnectivityNode_fromEndNameTso);
	get_map.emplace("ConnectivityNode.toEndIsoCode", &get_ConnectivityNode_toEndIsoCode);
	get_map.emplace("ConnectivityNode.toEndName", &get_ConnectivityNode_toEndName);
	get_map.emplace("ConnectivityNode.toEndNameTso", &get_ConnectivityNode_toEndNameTso);
}

void ConnectivityNode::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("ConnectivityNode.ConnectivityNodeContainer", &get_ConnectivityNode_ConnectivityNodeContainer);
	get_map.emplace("ConnectivityNode.TopologicalNode", &get_ConnectivityNode_TopologicalNode);
}

void ConnectivityNode::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool ConnectivityNode::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ConnectivityNode" &&
		dynamic_cast<ConnectivityNode*>(otherObject) != nullptr;
}

const BaseClassDefiner ConnectivityNode::declare()
{
	return BaseClassDefiner(ConnectivityNode::addConstructToMap, ConnectivityNode::addPrimitiveAssignFnsToMap, ConnectivityNode::addClassAssignFnsToMap, ConnectivityNode::debugName);
}

std::map<std::string, AttrDetails> ConnectivityNode::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ConnectivityNode_factory()
	{
		return new ConnectivityNode;
	}
}
