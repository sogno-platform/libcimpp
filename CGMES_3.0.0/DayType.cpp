/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DayType.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "SeasonDayTypeSchedule.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		DayType(),
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
		{ "DayType.SeasonDayTypeSchedules", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

DayType::DayType() {}
DayType::~DayType() {}

const std::list<std::string>& DayType::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& DayType::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& DayType::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& DayType::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& DayType::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& DayType::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& DayType::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_SeasonDayTypeSchedule_DayType(BaseClass*, BaseClass*);
bool assign_DayType_SeasonDayTypeSchedules(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DayType* element = dynamic_cast<DayType*>(BaseClass_ptr1);
	SeasonDayTypeSchedule* element2 = dynamic_cast<SeasonDayTypeSchedule*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->SeasonDayTypeSchedules.begin(), element->SeasonDayTypeSchedules.end(), element2) == element->SeasonDayTypeSchedules.end())
		{
			element->SeasonDayTypeSchedules.push_back(element2);
			return assign_SeasonDayTypeSchedule_DayType(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char DayType::debugName[] = "DayType";
const char* DayType::debugString() const
{
	return DayType::debugName;
}

void DayType::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("DayType", &DayType_factory);
}

void DayType::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DayType::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("DayType.SeasonDayTypeSchedules", &assign_DayType_SeasonDayTypeSchedules);
}

void DayType::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void DayType::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void DayType::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool DayType::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "DayType" &&
		dynamic_cast<DayType*>(otherObject) != nullptr;
}

const BaseClassDefiner DayType::declare()
{
	return BaseClassDefiner(DayType::addConstructToMap, DayType::addPrimitiveAssignFnsToMap, DayType::addClassAssignFnsToMap, DayType::debugName);
}

std::map<std::string, AttrDetails> DayType::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* DayType_factory()
	{
		return new DayType;
	}
}
