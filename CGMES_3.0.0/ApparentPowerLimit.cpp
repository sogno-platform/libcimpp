/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ApparentPowerLimit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ApparentPowerLimit(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::EQ,
			CGMESProfile::SSH,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "ApparentPowerLimit.normalValue", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "ApparentPowerLimit.value", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::SSH, } } },
	};
    return ClassAttrDetailsMap;
}

ApparentPowerLimit::ApparentPowerLimit() {}
ApparentPowerLimit::~ApparentPowerLimit() {}

const std::list<std::string>& ApparentPowerLimit::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ApparentPowerLimit::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ApparentPowerLimit::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ApparentPowerLimit::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ApparentPowerLimit::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ApparentPowerLimit::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ApparentPowerLimit::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ApparentPowerLimit_normalValue(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ApparentPowerLimit* element = dynamic_cast<ApparentPowerLimit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->normalValue;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ApparentPowerLimit_value(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ApparentPowerLimit* element = dynamic_cast<ApparentPowerLimit*>(BaseClass_ptr1);
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

bool get_ApparentPowerLimit_normalValue(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ApparentPowerLimit* element = dynamic_cast<const ApparentPowerLimit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->normalValue;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ApparentPowerLimit_value(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ApparentPowerLimit* element = dynamic_cast<const ApparentPowerLimit*>(BaseClass_ptr1);
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

const char ApparentPowerLimit::debugName[] = "ApparentPowerLimit";
const char* ApparentPowerLimit::debugString() const
{
	return ApparentPowerLimit::debugName;
}

void ApparentPowerLimit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ApparentPowerLimit", &ApparentPowerLimit_factory);
}

void ApparentPowerLimit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ApparentPowerLimit.normalValue", &assign_ApparentPowerLimit_normalValue);
	assign_map.emplace("ApparentPowerLimit.value", &assign_ApparentPowerLimit_value);
}

void ApparentPowerLimit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ApparentPowerLimit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OperationalLimit::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ApparentPowerLimit.normalValue", &get_ApparentPowerLimit_normalValue);
	get_map.emplace("ApparentPowerLimit.value", &get_ApparentPowerLimit_value);
}

void ApparentPowerLimit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	OperationalLimit::addClassGetFnsToMap(get_map);
}

void ApparentPowerLimit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OperationalLimit::addEnumGetFnsToMap(get_map);
}

bool ApparentPowerLimit::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ApparentPowerLimit" &&
		dynamic_cast<ApparentPowerLimit*>(otherObject) != nullptr;
}

const BaseClassDefiner ApparentPowerLimit::declare()
{
	return BaseClassDefiner(ApparentPowerLimit::addConstructToMap, ApparentPowerLimit::addPrimitiveAssignFnsToMap, ApparentPowerLimit::addClassAssignFnsToMap, ApparentPowerLimit::debugName);
}

std::map<std::string, AttrDetails> ApparentPowerLimit::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = OperationalLimit::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ApparentPowerLimit_factory()
	{
		return new ApparentPowerLimit;
	}
}
