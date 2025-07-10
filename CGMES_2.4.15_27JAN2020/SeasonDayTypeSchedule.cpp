/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SeasonDayTypeSchedule.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "DayType.hpp"
#include "Season.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		SeasonDayTypeSchedule(),
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
		{ "SeasonDayTypeSchedule.DayType", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "SeasonDayTypeSchedule.Season", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

SeasonDayTypeSchedule::SeasonDayTypeSchedule() : DayType(nullptr), Season(nullptr) {}
SeasonDayTypeSchedule::~SeasonDayTypeSchedule() {}

const std::list<std::string>& SeasonDayTypeSchedule::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& SeasonDayTypeSchedule::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& SeasonDayTypeSchedule::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& SeasonDayTypeSchedule::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& SeasonDayTypeSchedule::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& SeasonDayTypeSchedule::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& SeasonDayTypeSchedule::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_DayType_SeasonDayTypeSchedules(BaseClass*, BaseClass*);
bool assign_SeasonDayTypeSchedule_DayType(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SeasonDayTypeSchedule* element = dynamic_cast<SeasonDayTypeSchedule*>(BaseClass_ptr1);
	DayType* element2 = dynamic_cast<DayType*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->DayType != element2)
		{
			element->DayType = element2;
			return assign_DayType_SeasonDayTypeSchedules(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Season_SeasonDayTypeSchedules(BaseClass*, BaseClass*);
bool assign_SeasonDayTypeSchedule_Season(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SeasonDayTypeSchedule* element = dynamic_cast<SeasonDayTypeSchedule*>(BaseClass_ptr1);
	Season* element2 = dynamic_cast<Season*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Season != element2)
		{
			element->Season = element2;
			return assign_Season_SeasonDayTypeSchedules(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_SeasonDayTypeSchedule_DayType(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const SeasonDayTypeSchedule* element = dynamic_cast<const SeasonDayTypeSchedule*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->DayType != 0)
		{
			BaseClass_list.push_back(element->DayType);
			return true;
		}
	}
	return false;
}

bool get_SeasonDayTypeSchedule_Season(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const SeasonDayTypeSchedule* element = dynamic_cast<const SeasonDayTypeSchedule*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->Season != 0)
		{
			BaseClass_list.push_back(element->Season);
			return true;
		}
	}
	return false;
}

const char SeasonDayTypeSchedule::debugName[] = "SeasonDayTypeSchedule";
const char* SeasonDayTypeSchedule::debugString() const
{
	return SeasonDayTypeSchedule::debugName;
}

void SeasonDayTypeSchedule::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("SeasonDayTypeSchedule", &SeasonDayTypeSchedule_factory);
}

void SeasonDayTypeSchedule::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void SeasonDayTypeSchedule::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("SeasonDayTypeSchedule.DayType", &assign_SeasonDayTypeSchedule_DayType);
	assign_map.emplace("SeasonDayTypeSchedule.Season", &assign_SeasonDayTypeSchedule_Season);
}

void SeasonDayTypeSchedule::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RegularIntervalSchedule::addPrimitiveGetFnsToMap(get_map);
}

void SeasonDayTypeSchedule::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	RegularIntervalSchedule::addClassGetFnsToMap(get_map);
	get_map.emplace("SeasonDayTypeSchedule.DayType", &get_SeasonDayTypeSchedule_DayType);
	get_map.emplace("SeasonDayTypeSchedule.Season", &get_SeasonDayTypeSchedule_Season);
}

void SeasonDayTypeSchedule::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RegularIntervalSchedule::addEnumGetFnsToMap(get_map);
}

bool SeasonDayTypeSchedule::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "SeasonDayTypeSchedule" &&
		dynamic_cast<SeasonDayTypeSchedule*>(otherObject) != nullptr;
}

const BaseClassDefiner SeasonDayTypeSchedule::declare()
{
	return BaseClassDefiner(SeasonDayTypeSchedule::addConstructToMap, SeasonDayTypeSchedule::addPrimitiveAssignFnsToMap, SeasonDayTypeSchedule::addClassAssignFnsToMap, SeasonDayTypeSchedule::debugName);
}

std::map<std::string, AttrDetails> SeasonDayTypeSchedule::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = RegularIntervalSchedule::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* SeasonDayTypeSchedule_factory()
	{
		return new SeasonDayTypeSchedule;
	}
}
