/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TapSchedule.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "TapChanger.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		TapSchedule(),
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
		{ "TapSchedule.TapChanger", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

TapSchedule::TapSchedule() : TapChanger(nullptr) {}
TapSchedule::~TapSchedule() {}

const std::list<std::string>& TapSchedule::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& TapSchedule::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& TapSchedule::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& TapSchedule::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& TapSchedule::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& TapSchedule::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& TapSchedule::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_TapChanger_TapSchedules(BaseClass*, BaseClass*);
bool assign_TapSchedule_TapChanger(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TapSchedule* element = dynamic_cast<TapSchedule*>(BaseClass_ptr1);
	TapChanger* element2 = dynamic_cast<TapChanger*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->TapChanger != element2)
		{
			element->TapChanger = element2;
			return assign_TapChanger_TapSchedules(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_TapSchedule_TapChanger(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const TapSchedule* element = dynamic_cast<const TapSchedule*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->TapChanger != 0)
		{
			BaseClass_list.push_back(element->TapChanger);
			return true;
		}
	}
	return false;
}

const char TapSchedule::debugName[] = "TapSchedule";
const char* TapSchedule::debugString() const
{
	return TapSchedule::debugName;
}

void TapSchedule::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("TapSchedule", &TapSchedule_factory);
}

void TapSchedule::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void TapSchedule::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("TapSchedule.TapChanger", &assign_TapSchedule_TapChanger);
}

void TapSchedule::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SeasonDayTypeSchedule::addPrimitiveGetFnsToMap(get_map);
}

void TapSchedule::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	SeasonDayTypeSchedule::addClassGetFnsToMap(get_map);
	get_map.emplace("TapSchedule.TapChanger", &get_TapSchedule_TapChanger);
}

void TapSchedule::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SeasonDayTypeSchedule::addEnumGetFnsToMap(get_map);
}

bool TapSchedule::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "TapSchedule" &&
		dynamic_cast<TapSchedule*>(otherObject) != nullptr;
}

const BaseClassDefiner TapSchedule::declare()
{
	return BaseClassDefiner(TapSchedule::addConstructToMap, TapSchedule::addPrimitiveAssignFnsToMap, TapSchedule::addClassAssignFnsToMap, TapSchedule::debugName);
}

std::map<std::string, AttrDetails> TapSchedule::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = SeasonDayTypeSchedule::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* TapSchedule_factory()
	{
		return new TapSchedule;
	}
}
