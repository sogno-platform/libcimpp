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

SeasonDayTypeSchedule::SeasonDayTypeSchedule() : DayType(nullptr), Season(nullptr) {};
SeasonDayTypeSchedule::~SeasonDayTypeSchedule() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:SeasonDayTypeSchedule.DayType", { CGMESProfile::EQ, } },
	{ "cim:SeasonDayTypeSchedule.Season", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
SeasonDayTypeSchedule::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
SeasonDayTypeSchedule::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = RegularIntervalSchedule::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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
	if (const SeasonDayTypeSchedule* element = dynamic_cast<const SeasonDayTypeSchedule*>(BaseClass_ptr1))
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
	if (const SeasonDayTypeSchedule* element = dynamic_cast<const SeasonDayTypeSchedule*>(BaseClass_ptr1))
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
	factory_map.insert(std::make_pair(std::string("cim:SeasonDayTypeSchedule"), &SeasonDayTypeSchedule_factory));
}

void SeasonDayTypeSchedule::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void SeasonDayTypeSchedule::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SeasonDayTypeSchedule.DayType"), &assign_SeasonDayTypeSchedule_DayType));
	assign_map.insert(std::make_pair(std::string("cim:SeasonDayTypeSchedule.Season"), &assign_SeasonDayTypeSchedule_Season));
}

void SeasonDayTypeSchedule::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RegularIntervalSchedule::addPrimitiveGetFnsToMap(get_map);
}

void SeasonDayTypeSchedule::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	RegularIntervalSchedule::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:SeasonDayTypeSchedule.DayType", &get_SeasonDayTypeSchedule_DayType);
	get_map.emplace("cim:SeasonDayTypeSchedule.Season", &get_SeasonDayTypeSchedule_Season);
}

void SeasonDayTypeSchedule::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RegularIntervalSchedule::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner SeasonDayTypeSchedule::declare()
{
	return BaseClassDefiner(SeasonDayTypeSchedule::addConstructToMap, SeasonDayTypeSchedule::addPrimitiveAssignFnsToMap, SeasonDayTypeSchedule::addClassAssignFnsToMap, SeasonDayTypeSchedule::debugName);
}

namespace CIMPP
{
	BaseClass* SeasonDayTypeSchedule_factory()
	{
		return new SeasonDayTypeSchedule;
	}
}
