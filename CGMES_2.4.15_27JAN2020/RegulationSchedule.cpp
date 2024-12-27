/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RegulationSchedule.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "RegulatingControl.hpp"

using namespace CIMPP;

RegulationSchedule::RegulationSchedule() : RegulatingControl(nullptr) {};
RegulationSchedule::~RegulationSchedule() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:RegulationSchedule.RegulatingControl", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
RegulationSchedule::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
RegulationSchedule::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = SeasonDayTypeSchedule::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



bool assign_RegulatingControl_RegulationSchedule(BaseClass*, BaseClass*);
bool assign_RegulationSchedule_RegulatingControl(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RegulationSchedule* element = dynamic_cast<RegulationSchedule*>(BaseClass_ptr1);
	RegulatingControl* element2 = dynamic_cast<RegulatingControl*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->RegulatingControl != element2)
		{
			element->RegulatingControl = element2;
			return assign_RegulatingControl_RegulationSchedule(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


bool get_RegulationSchedule_RegulatingControl(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const RegulationSchedule* element = dynamic_cast<const RegulationSchedule*>(BaseClass_ptr1))
	{
		if (element->RegulatingControl != 0)
		{
			BaseClass_list.push_back(element->RegulatingControl);
			return true;
		}
	}
	return false;
}


const char RegulationSchedule::debugName[] = "RegulationSchedule";
const char* RegulationSchedule::debugString() const
{
	return RegulationSchedule::debugName;
}

void RegulationSchedule::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:RegulationSchedule"), &RegulationSchedule_factory));
}

void RegulationSchedule::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void RegulationSchedule::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:RegulationSchedule.RegulatingControl"), &assign_RegulationSchedule_RegulatingControl));
}

void RegulationSchedule::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SeasonDayTypeSchedule::addPrimitiveGetFnsToMap(get_map);
}

void RegulationSchedule::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	SeasonDayTypeSchedule::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:RegulationSchedule.RegulatingControl", &get_RegulationSchedule_RegulatingControl);
}

void RegulationSchedule::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SeasonDayTypeSchedule::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner RegulationSchedule::declare()
{
	return BaseClassDefiner(RegulationSchedule::addConstructToMap, RegulationSchedule::addPrimitiveAssignFnsToMap, RegulationSchedule::addClassAssignFnsToMap, RegulationSchedule::debugName);
}

namespace CIMPP
{
	BaseClass* RegulationSchedule_factory()
	{
		return new RegulationSchedule;
	}
}
