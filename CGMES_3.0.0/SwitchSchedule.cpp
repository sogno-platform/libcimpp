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

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		SwitchSchedule(),
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
		{ "SwitchSchedule.Switch", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

SwitchSchedule::SwitchSchedule() : Switch(nullptr) {}
SwitchSchedule::~SwitchSchedule() {}

const std::list<std::string>& SwitchSchedule::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& SwitchSchedule::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& SwitchSchedule::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& SwitchSchedule::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& SwitchSchedule::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& SwitchSchedule::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& SwitchSchedule::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
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
	factory_map.emplace("SwitchSchedule", &SwitchSchedule_factory);
}

void SwitchSchedule::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void SwitchSchedule::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("SwitchSchedule.Switch", &assign_SwitchSchedule_Switch);
}

void SwitchSchedule::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SeasonDayTypeSchedule::addPrimitiveGetFnsToMap(get_map);
}

void SwitchSchedule::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	SeasonDayTypeSchedule::addClassGetFnsToMap(get_map);
	get_map.emplace("SwitchSchedule.Switch", &get_SwitchSchedule_Switch);
}

void SwitchSchedule::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SeasonDayTypeSchedule::addEnumGetFnsToMap(get_map);
}

bool SwitchSchedule::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "SwitchSchedule" &&
		dynamic_cast<SwitchSchedule*>(otherObject) != nullptr;
}

const BaseClassDefiner SwitchSchedule::declare()
{
	return BaseClassDefiner(SwitchSchedule::addConstructToMap, SwitchSchedule::addPrimitiveAssignFnsToMap, SwitchSchedule::addClassAssignFnsToMap, SwitchSchedule::debugName);
}

std::map<std::string, AttrDetails> SwitchSchedule::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = SeasonDayTypeSchedule::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* SwitchSchedule_factory()
	{
		return new SwitchSchedule;
	}
}
