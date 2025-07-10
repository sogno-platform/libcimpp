/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RegularIntervalSchedule.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "RegularTimePoint.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		RegularIntervalSchedule(),
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
		{ "RegularIntervalSchedule.TimePoints", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "RegularIntervalSchedule.endTime", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "RegularIntervalSchedule.timeStep", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

RegularIntervalSchedule::RegularIntervalSchedule() {}
RegularIntervalSchedule::~RegularIntervalSchedule() {}

const std::list<std::string>& RegularIntervalSchedule::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& RegularIntervalSchedule::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& RegularIntervalSchedule::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& RegularIntervalSchedule::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& RegularIntervalSchedule::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& RegularIntervalSchedule::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& RegularIntervalSchedule::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_RegularTimePoint_IntervalSchedule(BaseClass*, BaseClass*);
bool assign_RegularIntervalSchedule_TimePoints(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RegularIntervalSchedule* element = dynamic_cast<RegularIntervalSchedule*>(BaseClass_ptr1);
	RegularTimePoint* element2 = dynamic_cast<RegularTimePoint*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->TimePoints.begin(), element->TimePoints.end(), element2) == element->TimePoints.end())
		{
			element->TimePoints.push_back(element2);
			return assign_RegularTimePoint_IntervalSchedule(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_RegularIntervalSchedule_endTime(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	RegularIntervalSchedule* element = dynamic_cast<RegularIntervalSchedule*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->endTime = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_RegularIntervalSchedule_timeStep(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	RegularIntervalSchedule* element = dynamic_cast<RegularIntervalSchedule*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->timeStep;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_RegularIntervalSchedule_endTime(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const RegularIntervalSchedule* element = dynamic_cast<const RegularIntervalSchedule*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->endTime;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_RegularIntervalSchedule_timeStep(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const RegularIntervalSchedule* element = dynamic_cast<const RegularIntervalSchedule*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->timeStep;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char RegularIntervalSchedule::debugName[] = "RegularIntervalSchedule";
const char* RegularIntervalSchedule::debugString() const
{
	return RegularIntervalSchedule::debugName;
}

void RegularIntervalSchedule::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("RegularIntervalSchedule", &RegularIntervalSchedule_factory);
}

void RegularIntervalSchedule::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("RegularIntervalSchedule.endTime", &assign_RegularIntervalSchedule_endTime);
	assign_map.emplace("RegularIntervalSchedule.timeStep", &assign_RegularIntervalSchedule_timeStep);
}

void RegularIntervalSchedule::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("RegularIntervalSchedule.TimePoints", &assign_RegularIntervalSchedule_TimePoints);
}

void RegularIntervalSchedule::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BasicIntervalSchedule::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("RegularIntervalSchedule.endTime", &get_RegularIntervalSchedule_endTime);
	get_map.emplace("RegularIntervalSchedule.timeStep", &get_RegularIntervalSchedule_timeStep);
}

void RegularIntervalSchedule::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BasicIntervalSchedule::addClassGetFnsToMap(get_map);
}

void RegularIntervalSchedule::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BasicIntervalSchedule::addEnumGetFnsToMap(get_map);
}

bool RegularIntervalSchedule::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "RegularIntervalSchedule" &&
		dynamic_cast<RegularIntervalSchedule*>(otherObject) != nullptr;
}

const BaseClassDefiner RegularIntervalSchedule::declare()
{
	return BaseClassDefiner(RegularIntervalSchedule::addConstructToMap, RegularIntervalSchedule::addPrimitiveAssignFnsToMap, RegularIntervalSchedule::addClassAssignFnsToMap, RegularIntervalSchedule::debugName);
}

std::map<std::string, AttrDetails> RegularIntervalSchedule::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = BasicIntervalSchedule::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* RegularIntervalSchedule_factory()
	{
		return new RegularIntervalSchedule;
	}
}
