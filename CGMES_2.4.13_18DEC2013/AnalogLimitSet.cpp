/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AnalogLimitSet.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Analog.hpp"
#include "AnalogLimit.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		AnalogLimitSet(),
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
		{ "AnalogLimitSet.Limits", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "AnalogLimitSet.Measurements", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "AnalogLimitSet.isPercentageLimits", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

AnalogLimitSet::AnalogLimitSet() {}
AnalogLimitSet::~AnalogLimitSet() {}

const std::list<std::string>& AnalogLimitSet::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& AnalogLimitSet::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& AnalogLimitSet::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& AnalogLimitSet::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& AnalogLimitSet::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& AnalogLimitSet::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& AnalogLimitSet::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_AnalogLimit_LimitSet(BaseClass*, BaseClass*);
bool assign_AnalogLimitSet_Limits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AnalogLimitSet* element = dynamic_cast<AnalogLimitSet*>(BaseClass_ptr1);
	AnalogLimit* element2 = dynamic_cast<AnalogLimit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Limits.begin(), element->Limits.end(), element2) == element->Limits.end())
		{
			element->Limits.push_back(element2);
			return assign_AnalogLimit_LimitSet(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Analog_LimitSets(BaseClass*, BaseClass*);
bool assign_AnalogLimitSet_Measurements(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AnalogLimitSet* element = dynamic_cast<AnalogLimitSet*>(BaseClass_ptr1);
	Analog* element2 = dynamic_cast<Analog*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Measurements.begin(), element->Measurements.end(), element2) == element->Measurements.end())
		{
			element->Measurements.push_back(element2);
			return assign_Analog_LimitSets(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_AnalogLimitSet_isPercentageLimits(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AnalogLimitSet* element = dynamic_cast<AnalogLimitSet*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->isPercentageLimits;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_AnalogLimitSet_Measurements(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const AnalogLimitSet* element = dynamic_cast<const AnalogLimitSet*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		std::copy(element->Measurements.begin(), element->Measurements.end(), std::back_inserter(BaseClass_list));
		return !BaseClass_list.empty();
	}
	return false;
}

bool get_AnalogLimitSet_isPercentageLimits(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AnalogLimitSet* element = dynamic_cast<const AnalogLimitSet*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->isPercentageLimits;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char AnalogLimitSet::debugName[] = "AnalogLimitSet";
const char* AnalogLimitSet::debugString() const
{
	return AnalogLimitSet::debugName;
}

void AnalogLimitSet::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("AnalogLimitSet", &AnalogLimitSet_factory);
}

void AnalogLimitSet::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("AnalogLimitSet.isPercentageLimits", &assign_AnalogLimitSet_isPercentageLimits);
}

void AnalogLimitSet::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("AnalogLimitSet.Limits", &assign_AnalogLimitSet_Limits);
	assign_map.emplace("AnalogLimitSet.Measurements", &assign_AnalogLimitSet_Measurements);
}

void AnalogLimitSet::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	LimitSet::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("AnalogLimitSet.isPercentageLimits", &get_AnalogLimitSet_isPercentageLimits);
}

void AnalogLimitSet::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	LimitSet::addClassGetFnsToMap(get_map);
	get_map.emplace("AnalogLimitSet.Measurements", &get_AnalogLimitSet_Measurements);
}

void AnalogLimitSet::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	LimitSet::addEnumGetFnsToMap(get_map);
}

bool AnalogLimitSet::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "AnalogLimitSet" &&
		dynamic_cast<AnalogLimitSet*>(otherObject) != nullptr;
}

const BaseClassDefiner AnalogLimitSet::declare()
{
	return BaseClassDefiner(AnalogLimitSet::addConstructToMap, AnalogLimitSet::addPrimitiveAssignFnsToMap, AnalogLimitSet::addClassAssignFnsToMap, AnalogLimitSet::debugName);
}

std::map<std::string, AttrDetails> AnalogLimitSet::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = LimitSet::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* AnalogLimitSet_factory()
	{
		return new AnalogLimitSet;
	}
}
