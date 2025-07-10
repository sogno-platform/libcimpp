/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TopologicalNode.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "BaseVoltage.hpp"
#include "ConnectivityNode.hpp"
#include "ConnectivityNodeContainer.hpp"
#include "ReportingGroup.hpp"
#include "SvInjection.hpp"
#include "SvVoltage.hpp"
#include "Terminal.hpp"
#include "TopologicalIsland.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		TopologicalNode(),
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
		{ "TopologicalNode.AngleRefTopologicalIsland", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SV, } } },
		{ "TopologicalNode.BaseVoltage", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::TP, } } },
		{ "TopologicalNode.ConnectivityNodeContainer", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::TP, } } },
		{ "TopologicalNode.ConnectivityNodes", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::TP, } } },
		{ "TopologicalNode.ReportingGroup", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::TP, } } },
		{ "TopologicalNode.SvInjection", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SV, } } },
		{ "TopologicalNode.SvVoltage", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SV, } } },
		{ "TopologicalNode.Terminal", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::TP, } } },
		{ "TopologicalNode.TopologicalIsland", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SV, } } },
	};
    return ClassAttrDetailsMap;
}

TopologicalNode::TopologicalNode() : AngleRefTopologicalIsland(nullptr), BaseVoltage(nullptr), ConnectivityNodeContainer(nullptr), ReportingGroup(nullptr), SvInjection(nullptr), SvVoltage(nullptr), TopologicalIsland(nullptr) {}
TopologicalNode::~TopologicalNode() {}

const std::list<std::string>& TopologicalNode::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& TopologicalNode::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& TopologicalNode::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& TopologicalNode::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& TopologicalNode::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& TopologicalNode::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& TopologicalNode::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

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


bool get_TopologicalNode_BaseVoltage(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const TopologicalNode* element = dynamic_cast<const TopologicalNode*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->BaseVoltage != 0)
		{
			BaseClass_list.push_back(element->BaseVoltage);
			return true;
		}
	}
	return false;
}

bool get_TopologicalNode_ConnectivityNodeContainer(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const TopologicalNode* element = dynamic_cast<const TopologicalNode*>(BaseClass_ptr1);
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


bool get_TopologicalNode_ReportingGroup(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const TopologicalNode* element = dynamic_cast<const TopologicalNode*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->ReportingGroup != 0)
		{
			BaseClass_list.push_back(element->ReportingGroup);
			return true;
		}
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
	factory_map.emplace("TopologicalNode", &TopologicalNode_factory);
}

void TopologicalNode::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void TopologicalNode::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("TopologicalNode.AngleRefTopologicalIsland", &assign_TopologicalNode_AngleRefTopologicalIsland);
	assign_map.emplace("TopologicalNode.BaseVoltage", &assign_TopologicalNode_BaseVoltage);
	assign_map.emplace("TopologicalNode.ConnectivityNodeContainer", &assign_TopologicalNode_ConnectivityNodeContainer);
	assign_map.emplace("TopologicalNode.ConnectivityNodes", &assign_TopologicalNode_ConnectivityNodes);
	assign_map.emplace("TopologicalNode.ReportingGroup", &assign_TopologicalNode_ReportingGroup);
	assign_map.emplace("TopologicalNode.SvInjection", &assign_TopologicalNode_SvInjection);
	assign_map.emplace("TopologicalNode.SvVoltage", &assign_TopologicalNode_SvVoltage);
	assign_map.emplace("TopologicalNode.Terminal", &assign_TopologicalNode_Terminal);
	assign_map.emplace("TopologicalNode.TopologicalIsland", &assign_TopologicalNode_TopologicalIsland);
}

void TopologicalNode::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void TopologicalNode::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("TopologicalNode.BaseVoltage", &get_TopologicalNode_BaseVoltage);
	get_map.emplace("TopologicalNode.ConnectivityNodeContainer", &get_TopologicalNode_ConnectivityNodeContainer);
	get_map.emplace("TopologicalNode.ReportingGroup", &get_TopologicalNode_ReportingGroup);
}

void TopologicalNode::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool TopologicalNode::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "TopologicalNode" &&
		dynamic_cast<TopologicalNode*>(otherObject) != nullptr;
}

const BaseClassDefiner TopologicalNode::declare()
{
	return BaseClassDefiner(TopologicalNode::addConstructToMap, TopologicalNode::addPrimitiveAssignFnsToMap, TopologicalNode::addClassAssignFnsToMap, TopologicalNode::debugName);
}

std::map<std::string, AttrDetails> TopologicalNode::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* TopologicalNode_factory()
	{
		return new TopologicalNode;
	}
}
