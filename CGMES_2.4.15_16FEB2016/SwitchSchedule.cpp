/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SwitchSchedule.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Switch.hpp"

using namespace CIMPP;

SwitchSchedule::SwitchSchedule() : Switch(nullptr) {}
SwitchSchedule::~SwitchSchedule() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:SwitchSchedule.Switch", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
SwitchSchedule::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
SwitchSchedule::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = SeasonDayTypeSchedule::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_Switch_SwitchSchedules(BaseClass*, BaseClass*);
bool assign_SwitchSchedule_Switch(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SwitchSchedule* element = dynamic_cast<SwitchSchedule*>(BaseClass_ptr1);
	Switch* element2 = dynamic_cast<Switch*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Switch != element2)
		{
			element->Switch = element2;
			return assign_Switch_SwitchSchedules(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_SwitchSchedule_Switch(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const SwitchSchedule* element = dynamic_cast<const SwitchSchedule*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->Switch != 0)
		{
			BaseClass_list.push_back(element->Switch);
			return true;
		}
	}
	return false;
}

const char SwitchSchedule::debugName[] = "SwitchSchedule";
const char* SwitchSchedule::debugString() const
{
	return SwitchSchedule::debugName;
}

void SwitchSchedule::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:SwitchSchedule", &SwitchSchedule_factory);
}

void SwitchSchedule::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void SwitchSchedule::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:SwitchSchedule.Switch", &assign_SwitchSchedule_Switch);
}

void SwitchSchedule::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SeasonDayTypeSchedule::addPrimitiveGetFnsToMap(get_map);
}

void SwitchSchedule::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	SeasonDayTypeSchedule::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:SwitchSchedule.Switch", &get_SwitchSchedule_Switch);
}

void SwitchSchedule::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SeasonDayTypeSchedule::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner SwitchSchedule::declare()
{
	return BaseClassDefiner(SwitchSchedule::addConstructToMap, SwitchSchedule::addPrimitiveAssignFnsToMap, SwitchSchedule::addClassAssignFnsToMap, SwitchSchedule::debugName);
}

namespace CIMPP
{
	BaseClass* SwitchSchedule_factory()
	{
		return new SwitchSchedule;
	}
}
