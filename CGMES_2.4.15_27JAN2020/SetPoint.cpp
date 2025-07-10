/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SetPoint.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		SetPoint(),
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
		{ "SetPoint.normalValue", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "SetPoint.value", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

SetPoint::SetPoint() {}
SetPoint::~SetPoint() {}

const std::list<std::string>& SetPoint::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& SetPoint::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& SetPoint::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& SetPoint::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& SetPoint::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& SetPoint::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& SetPoint::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_SetPoint_normalValue(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SetPoint* element = dynamic_cast<SetPoint*>(BaseClass_ptr1);
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

bool assign_SetPoint_value(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SetPoint* element = dynamic_cast<SetPoint*>(BaseClass_ptr1);
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

bool get_SetPoint_normalValue(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SetPoint* element = dynamic_cast<const SetPoint*>(BaseClass_ptr1);
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

bool get_SetPoint_value(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SetPoint* element = dynamic_cast<const SetPoint*>(BaseClass_ptr1);
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

const char SetPoint::debugName[] = "SetPoint";
const char* SetPoint::debugString() const
{
	return SetPoint::debugName;
}

void SetPoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("SetPoint", &SetPoint_factory);
}

void SetPoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("SetPoint.normalValue", &assign_SetPoint_normalValue);
	assign_map.emplace("SetPoint.value", &assign_SetPoint_value);
}

void SetPoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void SetPoint::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AnalogControl::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("SetPoint.normalValue", &get_SetPoint_normalValue);
	get_map.emplace("SetPoint.value", &get_SetPoint_value);
}

void SetPoint::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	AnalogControl::addClassGetFnsToMap(get_map);
}

void SetPoint::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AnalogControl::addEnumGetFnsToMap(get_map);
}

bool SetPoint::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "SetPoint" &&
		dynamic_cast<SetPoint*>(otherObject) != nullptr;
}

const BaseClassDefiner SetPoint::declare()
{
	return BaseClassDefiner(SetPoint::addConstructToMap, SetPoint::addPrimitiveAssignFnsToMap, SetPoint::addClassAssignFnsToMap, SetPoint::debugName);
}

std::map<std::string, AttrDetails> SetPoint::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = AnalogControl::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* SetPoint_factory()
	{
		return new SetPoint;
	}
}
