/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AccumulatorLimitSet.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Accumulator.hpp"
#include "AccumulatorLimit.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		AccumulatorLimitSet(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::OP,
		},
		CGMESProfile::OP
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "AccumulatorLimitSet.Limits", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::OP, } } },
		{ "AccumulatorLimitSet.Measurements", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::OP, } } },
	};
    return ClassAttrDetailsMap;
}

AccumulatorLimitSet::AccumulatorLimitSet() {}
AccumulatorLimitSet::~AccumulatorLimitSet() {}

const std::list<std::string>& AccumulatorLimitSet::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& AccumulatorLimitSet::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& AccumulatorLimitSet::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& AccumulatorLimitSet::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& AccumulatorLimitSet::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& AccumulatorLimitSet::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& AccumulatorLimitSet::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_AccumulatorLimit_LimitSet(BaseClass*, BaseClass*);
bool assign_AccumulatorLimitSet_Limits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AccumulatorLimitSet* element = dynamic_cast<AccumulatorLimitSet*>(BaseClass_ptr1);
	AccumulatorLimit* element2 = dynamic_cast<AccumulatorLimit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Limits.begin(), element->Limits.end(), element2) == element->Limits.end())
		{
			element->Limits.push_back(element2);
			return assign_AccumulatorLimit_LimitSet(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Accumulator_LimitSets(BaseClass*, BaseClass*);
bool assign_AccumulatorLimitSet_Measurements(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AccumulatorLimitSet* element = dynamic_cast<AccumulatorLimitSet*>(BaseClass_ptr1);
	Accumulator* element2 = dynamic_cast<Accumulator*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Measurements.begin(), element->Measurements.end(), element2) == element->Measurements.end())
		{
			element->Measurements.push_back(element2);
			return assign_Accumulator_LimitSets(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


bool get_AccumulatorLimitSet_Measurements(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const AccumulatorLimitSet* element = dynamic_cast<const AccumulatorLimitSet*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		std::copy(element->Measurements.begin(), element->Measurements.end(), std::back_inserter(BaseClass_list));
		return !BaseClass_list.empty();
	}
	return false;
}

const char AccumulatorLimitSet::debugName[] = "AccumulatorLimitSet";
const char* AccumulatorLimitSet::debugString() const
{
	return AccumulatorLimitSet::debugName;
}

void AccumulatorLimitSet::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("AccumulatorLimitSet", &AccumulatorLimitSet_factory);
}

void AccumulatorLimitSet::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void AccumulatorLimitSet::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("AccumulatorLimitSet.Limits", &assign_AccumulatorLimitSet_Limits);
	assign_map.emplace("AccumulatorLimitSet.Measurements", &assign_AccumulatorLimitSet_Measurements);
}

void AccumulatorLimitSet::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	LimitSet::addPrimitiveGetFnsToMap(get_map);
}

void AccumulatorLimitSet::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	LimitSet::addClassGetFnsToMap(get_map);
	get_map.emplace("AccumulatorLimitSet.Measurements", &get_AccumulatorLimitSet_Measurements);
}

void AccumulatorLimitSet::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	LimitSet::addEnumGetFnsToMap(get_map);
}

bool AccumulatorLimitSet::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "AccumulatorLimitSet" &&
		dynamic_cast<AccumulatorLimitSet*>(otherObject) != nullptr;
}

const BaseClassDefiner AccumulatorLimitSet::declare()
{
	return BaseClassDefiner(AccumulatorLimitSet::addConstructToMap, AccumulatorLimitSet::addPrimitiveAssignFnsToMap, AccumulatorLimitSet::addClassAssignFnsToMap, AccumulatorLimitSet::debugName);
}

std::map<std::string, AttrDetails> AccumulatorLimitSet::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = LimitSet::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* AccumulatorLimitSet_factory()
	{
		return new AccumulatorLimitSet;
	}
}
