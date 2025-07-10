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

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		DCNode(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::EQ,
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
		{ "DCNode.DCTerminals", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, CGMESProfile::TP, } } },
		{ "DCNode.DCTopologicalNode", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::TP, } } },
	};
    return ClassAttrDetailsMap;
}

DCNode::DCNode() : DCTopologicalNode(nullptr) {}
DCNode::~DCNode() {}

const std::list<std::string>& DCNode::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& DCNode::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& DCNode::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& DCNode::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& DCNode::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& DCNode::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& DCNode::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
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
	factory_map.emplace("DCNode", &DCNode_factory);
}

void DCNode::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCNode::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("DCNode.DCTerminals", &assign_DCNode_DCTerminals);
	assign_map.emplace("DCNode.DCTopologicalNode", &assign_DCNode_DCTopologicalNode);
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

bool DCNode::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "DCNode" &&
		dynamic_cast<DCNode*>(otherObject) != nullptr;
}

const BaseClassDefiner DCNode::declare()
{
	return BaseClassDefiner(DCNode::addConstructToMap, DCNode::addPrimitiveAssignFnsToMap, DCNode::addClassAssignFnsToMap, DCNode::debugName);
}

std::map<std::string, AttrDetails> DCNode::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* DCNode_factory()
	{
		return new DCNode;
	}
}
