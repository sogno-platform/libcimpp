/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CurrentLimit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		CurrentLimit(),
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
		{ "CurrentLimit.value", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

CurrentLimit::CurrentLimit() {}
CurrentLimit::~CurrentLimit() {}

const std::list<std::string>& CurrentLimit::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& CurrentLimit::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& CurrentLimit::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& CurrentLimit::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& CurrentLimit::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& CurrentLimit::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& CurrentLimit::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_CurrentLimit_value(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	CurrentLimit* element = dynamic_cast<CurrentLimit*>(BaseClass_ptr1);
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

bool get_CurrentLimit_value(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const CurrentLimit* element = dynamic_cast<const CurrentLimit*>(BaseClass_ptr1);
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

const char CurrentLimit::debugName[] = "CurrentLimit";
const char* CurrentLimit::debugString() const
{
	return CurrentLimit::debugName;
}

void CurrentLimit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("CurrentLimit", &CurrentLimit_factory);
}

void CurrentLimit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("CurrentLimit.value", &assign_CurrentLimit_value);
}

void CurrentLimit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void CurrentLimit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OperationalLimit::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("CurrentLimit.value", &get_CurrentLimit_value);
}

void CurrentLimit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	OperationalLimit::addClassGetFnsToMap(get_map);
}

void CurrentLimit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OperationalLimit::addEnumGetFnsToMap(get_map);
}

bool CurrentLimit::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "CurrentLimit" &&
		dynamic_cast<CurrentLimit*>(otherObject) != nullptr;
}

const BaseClassDefiner CurrentLimit::declare()
{
	return BaseClassDefiner(CurrentLimit::addConstructToMap, CurrentLimit::addPrimitiveAssignFnsToMap, CurrentLimit::addClassAssignFnsToMap, CurrentLimit::debugName);
}

std::map<std::string, AttrDetails> CurrentLimit::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = OperationalLimit::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* CurrentLimit_factory()
	{
		return new CurrentLimit;
	}
}
