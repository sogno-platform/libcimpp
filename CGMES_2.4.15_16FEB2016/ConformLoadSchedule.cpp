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

ConformLoadSchedule::ConformLoadSchedule() : ConformLoadGroup(nullptr) {}
ConformLoadSchedule::~ConformLoadSchedule() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ConformLoadSchedule.ConformLoadGroup", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
ConformLoadSchedule::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ConformLoadSchedule::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = SeasonDayTypeSchedule::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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
	factory_map.emplace("cim:ConformLoadSchedule", &ConformLoadSchedule_factory);
}

void ConformLoadSchedule::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void ConformLoadSchedule::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:ConformLoadSchedule.ConformLoadGroup", &assign_ConformLoadSchedule_ConformLoadGroup);
}

void ConformLoadSchedule::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SeasonDayTypeSchedule::addPrimitiveGetFnsToMap(get_map);
}

void ConformLoadSchedule::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	SeasonDayTypeSchedule::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:ConformLoadSchedule.ConformLoadGroup", &get_ConformLoadSchedule_ConformLoadGroup);
}

void ConformLoadSchedule::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SeasonDayTypeSchedule::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ConformLoadSchedule::declare()
{
	return BaseClassDefiner(ConformLoadSchedule::addConstructToMap, ConformLoadSchedule::addPrimitiveAssignFnsToMap, ConformLoadSchedule::addClassAssignFnsToMap, ConformLoadSchedule::debugName);
}

namespace CIMPP
{
	BaseClass* ConformLoadSchedule_factory()
	{
		return new ConformLoadSchedule;
	}
}
