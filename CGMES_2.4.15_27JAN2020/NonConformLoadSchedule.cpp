/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "NonConformLoadSchedule.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "NonConformLoadGroup.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		NonConformLoadSchedule(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::EQ,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "NonConformLoadSchedule.NonConformLoadGroup", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

NonConformLoadSchedule::NonConformLoadSchedule() : NonConformLoadGroup(nullptr) {}
NonConformLoadSchedule::~NonConformLoadSchedule() {}

const std::list<std::string>& NonConformLoadSchedule::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& NonConformLoadSchedule::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& NonConformLoadSchedule::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& NonConformLoadSchedule::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& NonConformLoadSchedule::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& NonConformLoadSchedule::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& NonConformLoadSchedule::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_NonConformLoadGroup_NonConformLoadSchedules(BaseClass*, BaseClass*);
bool assign_NonConformLoadSchedule_NonConformLoadGroup(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	NonConformLoadSchedule* element = dynamic_cast<NonConformLoadSchedule*>(BaseClass_ptr1);
	NonConformLoadGroup* element2 = dynamic_cast<NonConformLoadGroup*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->NonConformLoadGroup != element2)
		{
			element->NonConformLoadGroup = element2;
			return assign_NonConformLoadGroup_NonConformLoadSchedules(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_NonConformLoadSchedule_NonConformLoadGroup(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const NonConformLoadSchedule* element = dynamic_cast<const NonConformLoadSchedule*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->NonConformLoadGroup != 0)
		{
			BaseClass_list.push_back(element->NonConformLoadGroup);
			return true;
		}
	}
	return false;
}

const char NonConformLoadSchedule::debugName[] = "NonConformLoadSchedule";
const char* NonConformLoadSchedule::debugString() const
{
	return NonConformLoadSchedule::debugName;
}

void NonConformLoadSchedule::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("NonConformLoadSchedule", &NonConformLoadSchedule_factory);
}

void NonConformLoadSchedule::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void NonConformLoadSchedule::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("NonConformLoadSchedule.NonConformLoadGroup", &assign_NonConformLoadSchedule_NonConformLoadGroup);
}

void NonConformLoadSchedule::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SeasonDayTypeSchedule::addPrimitiveGetFnsToMap(get_map);
}

void NonConformLoadSchedule::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	SeasonDayTypeSchedule::addClassGetFnsToMap(get_map);
	get_map.emplace("NonConformLoadSchedule.NonConformLoadGroup", &get_NonConformLoadSchedule_NonConformLoadGroup);
}

void NonConformLoadSchedule::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SeasonDayTypeSchedule::addEnumGetFnsToMap(get_map);
}

bool NonConformLoadSchedule::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "NonConformLoadSchedule" &&
		dynamic_cast<NonConformLoadSchedule*>(otherObject) != nullptr;
}

const BaseClassDefiner NonConformLoadSchedule::declare()
{
	return BaseClassDefiner(NonConformLoadSchedule::addConstructToMap, NonConformLoadSchedule::addPrimitiveAssignFnsToMap, NonConformLoadSchedule::addClassAssignFnsToMap, NonConformLoadSchedule::debugName);
}

std::map<std::string, AttrDetails> NonConformLoadSchedule::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = SeasonDayTypeSchedule::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* NonConformLoadSchedule_factory()
	{
		return new NonConformLoadSchedule;
	}
}
