/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCTopologicalIsland.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "DCTopologicalNode.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		DCTopologicalIsland(),
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
		{ "DCTopologicalIsland.DCTopologicalNodes", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::SV, } } },
	};
    return ClassAttrDetailsMap;
}

DCTopologicalIsland::DCTopologicalIsland() {}
DCTopologicalIsland::~DCTopologicalIsland() {}

const std::list<std::string>& DCTopologicalIsland::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& DCTopologicalIsland::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& DCTopologicalIsland::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& DCTopologicalIsland::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& DCTopologicalIsland::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& DCTopologicalIsland::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& DCTopologicalIsland::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_DCTopologicalNode_DCTopologicalIsland(BaseClass*, BaseClass*);
bool assign_DCTopologicalIsland_DCTopologicalNodes(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DCTopologicalIsland* element = dynamic_cast<DCTopologicalIsland*>(BaseClass_ptr1);
	DCTopologicalNode* element2 = dynamic_cast<DCTopologicalNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->DCTopologicalNodes.begin(), element->DCTopologicalNodes.end(), element2) == element->DCTopologicalNodes.end())
		{
			element->DCTopologicalNodes.push_back(element2);
			return assign_DCTopologicalNode_DCTopologicalIsland(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_DCTopologicalIsland_DCTopologicalNodes(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const DCTopologicalIsland* element = dynamic_cast<const DCTopologicalIsland*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		std::copy(element->DCTopologicalNodes.begin(), element->DCTopologicalNodes.end(), std::back_inserter(BaseClass_list));
		return !BaseClass_list.empty();
	}
	return false;
}

const char DCTopologicalIsland::debugName[] = "DCTopologicalIsland";
const char* DCTopologicalIsland::debugString() const
{
	return DCTopologicalIsland::debugName;
}

void DCTopologicalIsland::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("DCTopologicalIsland", &DCTopologicalIsland_factory);
}

void DCTopologicalIsland::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCTopologicalIsland::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("DCTopologicalIsland.DCTopologicalNodes", &assign_DCTopologicalIsland_DCTopologicalNodes);
}

void DCTopologicalIsland::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void DCTopologicalIsland::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("DCTopologicalIsland.DCTopologicalNodes", &get_DCTopologicalIsland_DCTopologicalNodes);
}

void DCTopologicalIsland::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool DCTopologicalIsland::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "DCTopologicalIsland" &&
		dynamic_cast<DCTopologicalIsland*>(otherObject) != nullptr;
}

const BaseClassDefiner DCTopologicalIsland::declare()
{
	return BaseClassDefiner(DCTopologicalIsland::addConstructToMap, DCTopologicalIsland::addPrimitiveAssignFnsToMap, DCTopologicalIsland::addClassAssignFnsToMap, DCTopologicalIsland::debugName);
}

std::map<std::string, AttrDetails> DCTopologicalIsland::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* DCTopologicalIsland_factory()
	{
		return new DCTopologicalIsland;
	}
}
