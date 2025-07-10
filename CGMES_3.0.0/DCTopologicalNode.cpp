/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCTopologicalNode.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "DCBaseTerminal.hpp"
#include "DCEquipmentContainer.hpp"
#include "DCNode.hpp"
#include "DCTopologicalIsland.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		DCTopologicalNode(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::SV,
			CGMESProfile::TP,
		},
		CGMESProfile::TP
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "DCTopologicalNode.DCEquipmentContainer", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::TP, } } },
		{ "DCTopologicalNode.DCNodes", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::TP, } } },
		{ "DCTopologicalNode.DCTerminals", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::TP, } } },
		{ "DCTopologicalNode.DCTopologicalIsland", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SV, } } },
	};
    return ClassAttrDetailsMap;
}

DCTopologicalNode::DCTopologicalNode() : DCEquipmentContainer(nullptr), DCTopologicalIsland(nullptr) {}
DCTopologicalNode::~DCTopologicalNode() {}

const std::list<std::string>& DCTopologicalNode::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& DCTopologicalNode::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& DCTopologicalNode::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& DCTopologicalNode::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& DCTopologicalNode::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& DCTopologicalNode::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& DCTopologicalNode::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
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
	const DCTopologicalNode* element = dynamic_cast<const DCTopologicalNode*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->DCEquipmentContainer != 0)
		{
			BaseClass_list.push_back(element->DCEquipmentContainer);
			return true;
		}
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
	factory_map.emplace("DCTopologicalNode", &DCTopologicalNode_factory);
}

void DCTopologicalNode::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCTopologicalNode::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("DCTopologicalNode.DCEquipmentContainer", &assign_DCTopologicalNode_DCEquipmentContainer);
	assign_map.emplace("DCTopologicalNode.DCNodes", &assign_DCTopologicalNode_DCNodes);
	assign_map.emplace("DCTopologicalNode.DCTerminals", &assign_DCTopologicalNode_DCTerminals);
	assign_map.emplace("DCTopologicalNode.DCTopologicalIsland", &assign_DCTopologicalNode_DCTopologicalIsland);
}

void DCTopologicalNode::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void DCTopologicalNode::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("DCTopologicalNode.DCEquipmentContainer", &get_DCTopologicalNode_DCEquipmentContainer);
}

void DCTopologicalNode::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool DCTopologicalNode::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "DCTopologicalNode" &&
		dynamic_cast<DCTopologicalNode*>(otherObject) != nullptr;
}

const BaseClassDefiner DCTopologicalNode::declare()
{
	return BaseClassDefiner(DCTopologicalNode::addConstructToMap, DCTopologicalNode::addPrimitiveAssignFnsToMap, DCTopologicalNode::addClassAssignFnsToMap, DCTopologicalNode::debugName);
}

std::map<std::string, AttrDetails> DCTopologicalNode::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* DCTopologicalNode_factory()
	{
		return new DCTopologicalNode;
	}
}
