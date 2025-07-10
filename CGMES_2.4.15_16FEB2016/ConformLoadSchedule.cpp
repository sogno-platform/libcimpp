/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ConformLoadSchedule.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ConformLoadGroup.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ConformLoadSchedule(),
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
		{ "ConformLoadSchedule.ConformLoadGroup", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

ConformLoadSchedule::ConformLoadSchedule() : ConformLoadGroup(nullptr) {}
ConformLoadSchedule::~ConformLoadSchedule() {}

const std::list<std::string>& ConformLoadSchedule::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ConformLoadSchedule::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ConformLoadSchedule::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ConformLoadSchedule::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ConformLoadSchedule::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ConformLoadSchedule::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ConformLoadSchedule::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ConformLoadGroup_ConformLoadSchedules(BaseClass*, BaseClass*);
bool assign_ConformLoadSchedule_ConformLoadGroup(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ConformLoadSchedule* element = dynamic_cast<ConformLoadSchedule*>(BaseClass_ptr1);
	ConformLoadGroup* element2 = dynamic_cast<ConformLoadGroup*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ConformLoadGroup != element2)
		{
			element->ConformLoadGroup = element2;
			return assign_ConformLoadGroup_ConformLoadSchedules(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_ConformLoadSchedule_ConformLoadGroup(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ConformLoadSchedule* element = dynamic_cast<const ConformLoadSchedule*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->ConformLoadGroup != 0)
		{
			BaseClass_list.push_back(element->ConformLoadGroup);
			return true;
		}
	}
	return false;
}

const char ConformLoadSchedule::debugName[] = "ConformLoadSchedule";
const char* ConformLoadSchedule::debugString() const
{
	return ConformLoadSchedule::debugName;
}

void ConformLoadSchedule::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ConformLoadSchedule", &ConformLoadSchedule_factory);
}

void ConformLoadSchedule::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void ConformLoadSchedule::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("ConformLoadSchedule.ConformLoadGroup", &assign_ConformLoadSchedule_ConformLoadGroup);
}

void ConformLoadSchedule::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SeasonDayTypeSchedule::addPrimitiveGetFnsToMap(get_map);
}

void ConformLoadSchedule::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	SeasonDayTypeSchedule::addClassGetFnsToMap(get_map);
	get_map.emplace("ConformLoadSchedule.ConformLoadGroup", &get_ConformLoadSchedule_ConformLoadGroup);
}

void ConformLoadSchedule::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SeasonDayTypeSchedule::addEnumGetFnsToMap(get_map);
}

bool ConformLoadSchedule::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ConformLoadSchedule" &&
		dynamic_cast<ConformLoadSchedule*>(otherObject) != nullptr;
}

const BaseClassDefiner ConformLoadSchedule::declare()
{
	return BaseClassDefiner(ConformLoadSchedule::addConstructToMap, ConformLoadSchedule::addPrimitiveAssignFnsToMap, ConformLoadSchedule::addClassAssignFnsToMap, ConformLoadSchedule::debugName);
}

std::map<std::string, AttrDetails> ConformLoadSchedule::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = SeasonDayTypeSchedule::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ConformLoadSchedule_factory()
	{
		return new ConformLoadSchedule;
	}
}
