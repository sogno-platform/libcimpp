/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AnalogLimit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "AnalogLimitSet.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		AnalogLimit(),
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
		{ "AnalogLimit.LimitSet", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::OP, } } },
		{ "AnalogLimit.value", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::OP, } } },
	};
    return ClassAttrDetailsMap;
}

AnalogLimit::AnalogLimit() : LimitSet(nullptr) {}
AnalogLimit::~AnalogLimit() {}

const std::list<std::string>& AnalogLimit::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& AnalogLimit::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& AnalogLimit::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& AnalogLimit::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& AnalogLimit::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& AnalogLimit::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& AnalogLimit::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_AnalogLimitSet_Limits(BaseClass*, BaseClass*);
bool assign_AnalogLimit_LimitSet(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AnalogLimit* element = dynamic_cast<AnalogLimit*>(BaseClass_ptr1);
	AnalogLimitSet* element2 = dynamic_cast<AnalogLimitSet*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->LimitSet != element2)
		{
			element->LimitSet = element2;
			return assign_AnalogLimitSet_Limits(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_AnalogLimit_value(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AnalogLimit* element = dynamic_cast<AnalogLimit*>(BaseClass_ptr1);
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

bool get_AnalogLimit_LimitSet(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const AnalogLimit* element = dynamic_cast<const AnalogLimit*>(BaseClass_ptr1);
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

bool get_AnalogLimit_value(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AnalogLimit* element = dynamic_cast<const AnalogLimit*>(BaseClass_ptr1);
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

const char AnalogLimit::debugName[] = "AnalogLimit";
const char* AnalogLimit::debugString() const
{
	return AnalogLimit::debugName;
}

void AnalogLimit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("AnalogLimit", &AnalogLimit_factory);
}

void AnalogLimit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("AnalogLimit.value", &assign_AnalogLimit_value);
}

void AnalogLimit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("AnalogLimit.LimitSet", &assign_AnalogLimit_LimitSet);
}

void AnalogLimit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Limit::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("AnalogLimit.value", &get_AnalogLimit_value);
}

void AnalogLimit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Limit::addClassGetFnsToMap(get_map);
	get_map.emplace("AnalogLimit.LimitSet", &get_AnalogLimit_LimitSet);
}

void AnalogLimit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Limit::addEnumGetFnsToMap(get_map);
}

bool AnalogLimit::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "AnalogLimit" &&
		dynamic_cast<AnalogLimit*>(otherObject) != nullptr;
}

const BaseClassDefiner AnalogLimit::declare()
{
	return BaseClassDefiner(AnalogLimit::addConstructToMap, AnalogLimit::addPrimitiveAssignFnsToMap, AnalogLimit::addClassAssignFnsToMap, AnalogLimit::debugName);
}

std::map<std::string, AttrDetails> AnalogLimit::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = Limit::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* AnalogLimit_factory()
	{
		return new AnalogLimit;
	}
}
