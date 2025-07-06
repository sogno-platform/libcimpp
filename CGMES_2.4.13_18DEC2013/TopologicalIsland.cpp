/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TopologicalIsland.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "TopologicalNode.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		TopologicalIsland(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::SV,
		},
		CGMESProfile::SV
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "TopologicalIsland.AngleRefTopologicalNode", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SV, } } },
		{ "TopologicalIsland.TopologicalNodes", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SV, } } },
	};
    return ClassAttrDetailsMap;
}

TopologicalIsland::TopologicalIsland() : AngleRefTopologicalNode(nullptr) {}
TopologicalIsland::~TopologicalIsland() {}

const std::list<std::string>& TopologicalIsland::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& TopologicalIsland::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& TopologicalIsland::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& TopologicalIsland::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& TopologicalIsland::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& TopologicalIsland::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& TopologicalIsland::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_TopologicalNode_AngleRefTopologicalIsland(BaseClass*, BaseClass*);
bool assign_TopologicalIsland_AngleRefTopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TopologicalIsland* element = dynamic_cast<TopologicalIsland*>(BaseClass_ptr1);
	TopologicalNode* element2 = dynamic_cast<TopologicalNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->AngleRefTopologicalNode != element2)
		{
			element->AngleRefTopologicalNode = element2;
			return assign_TopologicalNode_AngleRefTopologicalIsland(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_TopologicalNode_TopologicalIsland(BaseClass*, BaseClass*);
bool assign_TopologicalIsland_TopologicalNodes(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TopologicalIsland* element = dynamic_cast<TopologicalIsland*>(BaseClass_ptr1);
	TopologicalNode* element2 = dynamic_cast<TopologicalNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->TopologicalNodes.begin(), element->TopologicalNodes.end(), element2) == element->TopologicalNodes.end())
		{
			element->TopologicalNodes.push_back(element2);
			return assign_TopologicalNode_TopologicalIsland(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_TopologicalIsland_AngleRefTopologicalNode(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const TopologicalIsland* element = dynamic_cast<const TopologicalIsland*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->AngleRefTopologicalNode != 0)
		{
			BaseClass_list.push_back(element->AngleRefTopologicalNode);
			return true;
		}
	}
	return false;
}

bool get_TopologicalIsland_TopologicalNodes(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const TopologicalIsland* element = dynamic_cast<const TopologicalIsland*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		std::copy(element->TopologicalNodes.begin(), element->TopologicalNodes.end(), std::back_inserter(BaseClass_list));
		return !BaseClass_list.empty();
	}
	return false;
}

const char TopologicalIsland::debugName[] = "TopologicalIsland";
const char* TopologicalIsland::debugString() const
{
	return TopologicalIsland::debugName;
}

void TopologicalIsland::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("TopologicalIsland", &TopologicalIsland_factory);
}

void TopologicalIsland::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void TopologicalIsland::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("TopologicalIsland.AngleRefTopologicalNode", &assign_TopologicalIsland_AngleRefTopologicalNode);
	assign_map.emplace("TopologicalIsland.TopologicalNodes", &assign_TopologicalIsland_TopologicalNodes);
}

void TopologicalIsland::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void TopologicalIsland::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("TopologicalIsland.AngleRefTopologicalNode", &get_TopologicalIsland_AngleRefTopologicalNode);
	get_map.emplace("TopologicalIsland.TopologicalNodes", &get_TopologicalIsland_TopologicalNodes);
}

void TopologicalIsland::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool TopologicalIsland::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "TopologicalIsland" &&
		dynamic_cast<TopologicalIsland*>(otherObject) != nullptr;
}

const BaseClassDefiner TopologicalIsland::declare()
{
	return BaseClassDefiner(TopologicalIsland::addConstructToMap, TopologicalIsland::addPrimitiveAssignFnsToMap, TopologicalIsland::addClassAssignFnsToMap, TopologicalIsland::debugName);
}

std::map<std::string, AttrDetails> TopologicalIsland::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* TopologicalIsland_factory()
	{
		return new TopologicalIsland;
	}
}
