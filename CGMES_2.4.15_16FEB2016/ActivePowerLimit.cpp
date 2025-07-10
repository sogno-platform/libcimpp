/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ActivePowerLimit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ActivePowerLimit(),
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
		{ "ActivePowerLimit.value", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

ActivePowerLimit::ActivePowerLimit() {}
ActivePowerLimit::~ActivePowerLimit() {}

const std::list<std::string>& ActivePowerLimit::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ActivePowerLimit::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ActivePowerLimit::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ActivePowerLimit::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ActivePowerLimit::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ActivePowerLimit::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ActivePowerLimit::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ActivePowerLimit_value(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ActivePowerLimit* element = dynamic_cast<ActivePowerLimit*>(BaseClass_ptr1);
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

bool get_ActivePowerLimit_value(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ActivePowerLimit* element = dynamic_cast<const ActivePowerLimit*>(BaseClass_ptr1);
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

const char ActivePowerLimit::debugName[] = "ActivePowerLimit";
const char* ActivePowerLimit::debugString() const
{
	return ActivePowerLimit::debugName;
}

void ActivePowerLimit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ActivePowerLimit", &ActivePowerLimit_factory);
}

void ActivePowerLimit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ActivePowerLimit.value", &assign_ActivePowerLimit_value);
}

void ActivePowerLimit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ActivePowerLimit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OperationalLimit::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ActivePowerLimit.value", &get_ActivePowerLimit_value);
}

void ActivePowerLimit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	OperationalLimit::addClassGetFnsToMap(get_map);
}

void ActivePowerLimit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OperationalLimit::addEnumGetFnsToMap(get_map);
}

bool ActivePowerLimit::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ActivePowerLimit" &&
		dynamic_cast<ActivePowerLimit*>(otherObject) != nullptr;
}

const BaseClassDefiner ActivePowerLimit::declare()
{
	return BaseClassDefiner(ActivePowerLimit::addConstructToMap, ActivePowerLimit::addPrimitiveAssignFnsToMap, ActivePowerLimit::addClassAssignFnsToMap, ActivePowerLimit::debugName);
}

std::map<std::string, AttrDetails> ActivePowerLimit::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = OperationalLimit::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ActivePowerLimit_factory()
	{
		return new ActivePowerLimit;
	}
}
