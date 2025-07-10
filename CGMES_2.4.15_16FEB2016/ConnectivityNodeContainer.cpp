/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ConnectivityNodeContainer.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ConnectivityNode.hpp"
#include "TopologicalNode.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ConnectivityNodeContainer(),
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
		{ "ConnectivityNodeContainer.ConnectivityNodes", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ_BD, CGMESProfile::EQ, } } },
		{ "ConnectivityNodeContainer.TopologicalNode", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::TP_BD, CGMESProfile::TP, } } },
	};
    return ClassAttrDetailsMap;
}

ConnectivityNodeContainer::ConnectivityNodeContainer() {}
ConnectivityNodeContainer::~ConnectivityNodeContainer() {}

const std::list<std::string>& ConnectivityNodeContainer::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ConnectivityNodeContainer::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ConnectivityNodeContainer::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ConnectivityNodeContainer::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ConnectivityNodeContainer::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ConnectivityNodeContainer::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ConnectivityNodeContainer::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ConnectivityNode_ConnectivityNodeContainer(BaseClass*, BaseClass*);
bool assign_ConnectivityNodeContainer_ConnectivityNodes(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ConnectivityNodeContainer* element = dynamic_cast<ConnectivityNodeContainer*>(BaseClass_ptr1);
	ConnectivityNode* element2 = dynamic_cast<ConnectivityNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ConnectivityNodes.begin(), element->ConnectivityNodes.end(), element2) == element->ConnectivityNodes.end())
		{
			element->ConnectivityNodes.push_back(element2);
			return assign_ConnectivityNode_ConnectivityNodeContainer(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_TopologicalNode_ConnectivityNodeContainer(BaseClass*, BaseClass*);
bool assign_ConnectivityNodeContainer_TopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ConnectivityNodeContainer* element = dynamic_cast<ConnectivityNodeContainer*>(BaseClass_ptr1);
	TopologicalNode* element2 = dynamic_cast<TopologicalNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->TopologicalNode.begin(), element->TopologicalNode.end(), element2) == element->TopologicalNode.end())
		{
			element->TopologicalNode.push_back(element2);
			return assign_TopologicalNode_ConnectivityNodeContainer(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



const char ConnectivityNodeContainer::debugName[] = "ConnectivityNodeContainer";
const char* ConnectivityNodeContainer::debugString() const
{
	return ConnectivityNodeContainer::debugName;
}

void ConnectivityNodeContainer::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ConnectivityNodeContainer", &ConnectivityNodeContainer_factory);
}

void ConnectivityNodeContainer::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void ConnectivityNodeContainer::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("ConnectivityNodeContainer.ConnectivityNodes", &assign_ConnectivityNodeContainer_ConnectivityNodes);
	assign_map.emplace("ConnectivityNodeContainer.TopologicalNode", &assign_ConnectivityNodeContainer_TopologicalNode);
}

void ConnectivityNodeContainer::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addPrimitiveGetFnsToMap(get_map);
}

void ConnectivityNodeContainer::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemResource::addClassGetFnsToMap(get_map);
}

void ConnectivityNodeContainer::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addEnumGetFnsToMap(get_map);
}

bool ConnectivityNodeContainer::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ConnectivityNodeContainer" &&
		dynamic_cast<ConnectivityNodeContainer*>(otherObject) != nullptr;
}

const BaseClassDefiner ConnectivityNodeContainer::declare()
{
	return BaseClassDefiner(ConnectivityNodeContainer::addConstructToMap, ConnectivityNodeContainer::addPrimitiveAssignFnsToMap, ConnectivityNodeContainer::addClassAssignFnsToMap, ConnectivityNodeContainer::debugName);
}

std::map<std::string, AttrDetails> ConnectivityNodeContainer::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PowerSystemResource::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ConnectivityNodeContainer_factory()
	{
		return new ConnectivityNodeContainer;
	}
}
