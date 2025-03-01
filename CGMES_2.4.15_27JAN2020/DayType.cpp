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

DayType::DayType() {}
DayType::~DayType() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:DayType.SeasonDayTypeSchedules", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
DayType::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
DayType::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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
	factory_map.emplace("cim:DayType", &DayType_factory);
}

void DayType::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DayType::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:DayType.SeasonDayTypeSchedules", &assign_DayType_SeasonDayTypeSchedules);
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

const BaseClassDefiner DayType::declare()
{
	return BaseClassDefiner(DayType::addConstructToMap, DayType::addPrimitiveAssignFnsToMap, DayType::addClassAssignFnsToMap, DayType::debugName);
}

namespace CIMPP
{
	BaseClass* DayType_factory()
	{
		return new DayType;
	}
}
