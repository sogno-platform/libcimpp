/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Season.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "SeasonDayTypeSchedule.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		Season(),
		"http://iec.ch/TC57/CIM100#",
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
		{ "Season.SeasonDayTypeSchedules", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "Season.endDate", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "Season.startDate", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

Season::Season() {}
Season::~Season() {}

const std::list<std::string>& Season::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& Season::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& Season::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& Season::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& Season::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& Season::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& Season::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_SeasonDayTypeSchedule_Season(BaseClass*, BaseClass*);
bool assign_Season_SeasonDayTypeSchedules(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Season* element = dynamic_cast<Season*>(BaseClass_ptr1);
	SeasonDayTypeSchedule* element2 = dynamic_cast<SeasonDayTypeSchedule*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->SeasonDayTypeSchedules.begin(), element->SeasonDayTypeSchedules.end(), element2) == element->SeasonDayTypeSchedules.end())
		{
			element->SeasonDayTypeSchedules.push_back(element2);
			return assign_SeasonDayTypeSchedule_Season(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Season_endDate(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Season* element = dynamic_cast<Season*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->endDate = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Season_startDate(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Season* element = dynamic_cast<Season*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->startDate = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_Season_endDate(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Season* element = dynamic_cast<const Season*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->endDate;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Season_startDate(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Season* element = dynamic_cast<const Season*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->startDate;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char Season::debugName[] = "Season";
const char* Season::debugString() const
{
	return Season::debugName;
}

void Season::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("Season", &Season_factory);
}

void Season::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("Season.endDate", &assign_Season_endDate);
	assign_map.emplace("Season.startDate", &assign_Season_startDate);
}

void Season::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("Season.SeasonDayTypeSchedules", &assign_Season_SeasonDayTypeSchedules);
}

void Season::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("Season.endDate", &get_Season_endDate);
	get_map.emplace("Season.startDate", &get_Season_startDate);
}

void Season::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void Season::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool Season::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "Season" &&
		dynamic_cast<Season*>(otherObject) != nullptr;
}

const BaseClassDefiner Season::declare()
{
	return BaseClassDefiner(Season::addConstructToMap, Season::addPrimitiveAssignFnsToMap, Season::addClassAssignFnsToMap, Season::debugName);
}

std::map<std::string, AttrDetails> Season::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* Season_factory()
	{
		return new Season;
	}
}
