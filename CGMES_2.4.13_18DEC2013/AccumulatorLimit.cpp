/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AccumulatorLimit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "AccumulatorLimitSet.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		AccumulatorLimit(),
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
		{ "AccumulatorLimit.LimitSet", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "AccumulatorLimit.value", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

AccumulatorLimit::AccumulatorLimit() : LimitSet(nullptr) {}
AccumulatorLimit::~AccumulatorLimit() {}

const std::list<std::string>& AccumulatorLimit::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& AccumulatorLimit::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& AccumulatorLimit::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& AccumulatorLimit::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& AccumulatorLimit::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& AccumulatorLimit::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& AccumulatorLimit::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_AccumulatorLimitSet_Limits(BaseClass*, BaseClass*);
bool assign_AccumulatorLimit_LimitSet(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AccumulatorLimit* element = dynamic_cast<AccumulatorLimit*>(BaseClass_ptr1);
	AccumulatorLimitSet* element2 = dynamic_cast<AccumulatorLimitSet*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->LimitSet != element2)
		{
			element->LimitSet = element2;
			return assign_AccumulatorLimitSet_Limits(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_AccumulatorLimit_value(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AccumulatorLimit* element = dynamic_cast<AccumulatorLimit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->value;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_AccumulatorLimit_LimitSet(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const AccumulatorLimit* element = dynamic_cast<const AccumulatorLimit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->LimitSet != 0)
		{
			BaseClass_list.push_back(element->LimitSet);
			return true;
		}
	}
	return false;
}

bool get_AccumulatorLimit_value(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AccumulatorLimit* element = dynamic_cast<const AccumulatorLimit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->value;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char AccumulatorLimit::debugName[] = "AccumulatorLimit";
const char* AccumulatorLimit::debugString() const
{
	return AccumulatorLimit::debugName;
}

void AccumulatorLimit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("AccumulatorLimit", &AccumulatorLimit_factory);
}

void AccumulatorLimit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("AccumulatorLimit.value", &assign_AccumulatorLimit_value);
}

void AccumulatorLimit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("AccumulatorLimit.LimitSet", &assign_AccumulatorLimit_LimitSet);
}

void AccumulatorLimit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Limit::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("AccumulatorLimit.value", &get_AccumulatorLimit_value);
}

void AccumulatorLimit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Limit::addClassGetFnsToMap(get_map);
	get_map.emplace("AccumulatorLimit.LimitSet", &get_AccumulatorLimit_LimitSet);
}

void AccumulatorLimit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Limit::addEnumGetFnsToMap(get_map);
}

bool AccumulatorLimit::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "AccumulatorLimit" &&
		dynamic_cast<AccumulatorLimit*>(otherObject) != nullptr;
}

const BaseClassDefiner AccumulatorLimit::declare()
{
	return BaseClassDefiner(AccumulatorLimit::addConstructToMap, AccumulatorLimit::addPrimitiveAssignFnsToMap, AccumulatorLimit::addClassAssignFnsToMap, AccumulatorLimit::debugName);
}

std::map<std::string, AttrDetails> AccumulatorLimit::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = Limit::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* AccumulatorLimit_factory()
	{
		return new AccumulatorLimit;
	}
}
