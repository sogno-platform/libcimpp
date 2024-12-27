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

ReportingGroup::ReportingGroup() {};
ReportingGroup::~ReportingGroup() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::TP,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ReportingGroup.BusNameMarker", { CGMESProfile::EQ, } },
	{ "cim:ReportingGroup.TopologicalNode", { CGMESProfile::TP, } },
};

std::list<CGMESProfile>
ReportingGroup::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ReportingGroup::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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
	factory_map.insert(std::make_pair(std::string("cim:ReportingGroup"), &ReportingGroup_factory));
}

void ReportingGroup::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void ReportingGroup::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ReportingGroup.BusNameMarker"), &assign_ReportingGroup_BusNameMarker));
	assign_map.insert(std::make_pair(std::string("cim:ReportingGroup.TopologicalNode"), &assign_ReportingGroup_TopologicalNode));
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

const BaseClassDefiner ReportingGroup::declare()
{
	return BaseClassDefiner(ReportingGroup::addConstructToMap, ReportingGroup::addPrimitiveAssignFnsToMap, ReportingGroup::addClassAssignFnsToMap, ReportingGroup::debugName);
}

namespace CIMPP
{
	BaseClass* ReportingGroup_factory()
	{
		return new ReportingGroup;
	}
}
