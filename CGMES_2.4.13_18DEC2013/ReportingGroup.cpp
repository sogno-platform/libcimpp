/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ReportingGroup.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "BusNameMarker.hpp"
#include "TopologicalNode.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ReportingGroup(),
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
		{ "ReportingGroup.BusNameMarker", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "ReportingGroup.TopologicalNode", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::TP, } } },
	};
    return ClassAttrDetailsMap;
}

ReportingGroup::ReportingGroup() {}
ReportingGroup::~ReportingGroup() {}

const std::list<std::string>& ReportingGroup::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ReportingGroup::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ReportingGroup::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ReportingGroup::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ReportingGroup::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ReportingGroup::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ReportingGroup::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_BusNameMarker_ReportingGroup(BaseClass*, BaseClass*);
bool assign_ReportingGroup_BusNameMarker(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ReportingGroup* element = dynamic_cast<ReportingGroup*>(BaseClass_ptr1);
	BusNameMarker* element2 = dynamic_cast<BusNameMarker*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->BusNameMarker.begin(), element->BusNameMarker.end(), element2) == element->BusNameMarker.end())
		{
			element->BusNameMarker.push_back(element2);
			return assign_BusNameMarker_ReportingGroup(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_TopologicalNode_ReportingGroup(BaseClass*, BaseClass*);
bool assign_ReportingGroup_TopologicalNode(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ReportingGroup* element = dynamic_cast<ReportingGroup*>(BaseClass_ptr1);
	TopologicalNode* element2 = dynamic_cast<TopologicalNode*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->TopologicalNode.begin(), element->TopologicalNode.end(), element2) == element->TopologicalNode.end())
		{
			element->TopologicalNode.push_back(element2);
			return assign_TopologicalNode_ReportingGroup(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



const char ReportingGroup::debugName[] = "ReportingGroup";
const char* ReportingGroup::debugString() const
{
	return ReportingGroup::debugName;
}

void ReportingGroup::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ReportingGroup", &ReportingGroup_factory);
}

void ReportingGroup::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void ReportingGroup::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("ReportingGroup.BusNameMarker", &assign_ReportingGroup_BusNameMarker);
	assign_map.emplace("ReportingGroup.TopologicalNode", &assign_ReportingGroup_TopologicalNode);
}

void ReportingGroup::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void ReportingGroup::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void ReportingGroup::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool ReportingGroup::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ReportingGroup" &&
		dynamic_cast<ReportingGroup*>(otherObject) != nullptr;
}

const BaseClassDefiner ReportingGroup::declare()
{
	return BaseClassDefiner(ReportingGroup::addConstructToMap, ReportingGroup::addPrimitiveAssignFnsToMap, ReportingGroup::addClassAssignFnsToMap, ReportingGroup::debugName);
}

std::map<std::string, AttrDetails> ReportingGroup::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ReportingGroup_factory()
	{
		return new ReportingGroup;
	}
}
