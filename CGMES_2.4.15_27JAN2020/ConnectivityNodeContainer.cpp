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

ConnectivityNodeContainer::ConnectivityNodeContainer() {};
ConnectivityNodeContainer::~ConnectivityNodeContainer() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ_BD,
	CGMESProfile::EQ,
	CGMESProfile::TP_BD,
	CGMESProfile::TP,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ConnectivityNodeContainer.ConnectivityNodes", { CGMESProfile::EQ_BD, CGMESProfile::EQ, } },
	{ "cim:ConnectivityNodeContainer.TopologicalNode", { CGMESProfile::TP_BD, CGMESProfile::TP, } },
};

std::list<CGMESProfile>
ConnectivityNodeContainer::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ConnectivityNodeContainer::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PowerSystemResource::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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
	factory_map.insert(std::make_pair(std::string("cim:ConnectivityNodeContainer"), &ConnectivityNodeContainer_factory));
}

void ConnectivityNodeContainer::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void ConnectivityNodeContainer::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ConnectivityNodeContainer.ConnectivityNodes"), &assign_ConnectivityNodeContainer_ConnectivityNodes));
	assign_map.insert(std::make_pair(std::string("cim:ConnectivityNodeContainer.TopologicalNode"), &assign_ConnectivityNodeContainer_TopologicalNode));
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

const BaseClassDefiner ConnectivityNodeContainer::declare()
{
	return BaseClassDefiner(ConnectivityNodeContainer::addConstructToMap, ConnectivityNodeContainer::addPrimitiveAssignFnsToMap, ConnectivityNodeContainer::addClassAssignFnsToMap, ConnectivityNodeContainer::debugName);
}

namespace CIMPP
{
	BaseClass* ConnectivityNodeContainer_factory()
	{
		return new ConnectivityNodeContainer;
	}
}
