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

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		RegulationSchedule(),
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
		{ "RegulationSchedule.RegulatingControl", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

RegulationSchedule::RegulationSchedule() : RegulatingControl(nullptr) {}
RegulationSchedule::~RegulationSchedule() {}

const std::list<std::string>& RegulationSchedule::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& RegulationSchedule::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& RegulationSchedule::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& RegulationSchedule::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& RegulationSchedule::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& RegulationSchedule::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& RegulationSchedule::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
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
	const RegulationSchedule* element = dynamic_cast<const RegulationSchedule*>(BaseClass_ptr1);
	if (element != nullptr)
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
	factory_map.emplace("RegulationSchedule", &RegulationSchedule_factory);
}

void RegulationSchedule::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void RegulationSchedule::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("RegulationSchedule.RegulatingControl", &assign_RegulationSchedule_RegulatingControl);
}

void RegulationSchedule::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SeasonDayTypeSchedule::addPrimitiveGetFnsToMap(get_map);
}

void RegulationSchedule::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	SeasonDayTypeSchedule::addClassGetFnsToMap(get_map);
	get_map.emplace("RegulationSchedule.RegulatingControl", &get_RegulationSchedule_RegulatingControl);
}

void RegulationSchedule::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SeasonDayTypeSchedule::addEnumGetFnsToMap(get_map);
}

bool RegulationSchedule::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "RegulationSchedule" &&
		dynamic_cast<RegulationSchedule*>(otherObject) != nullptr;
}

const BaseClassDefiner RegulationSchedule::declare()
{
	return BaseClassDefiner(RegulationSchedule::addConstructToMap, RegulationSchedule::addPrimitiveAssignFnsToMap, RegulationSchedule::addClassAssignFnsToMap, RegulationSchedule::debugName);
}

std::map<std::string, AttrDetails> RegulationSchedule::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = SeasonDayTypeSchedule::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* RegulationSchedule_factory()
	{
		return new RegulationSchedule;
	}
}
