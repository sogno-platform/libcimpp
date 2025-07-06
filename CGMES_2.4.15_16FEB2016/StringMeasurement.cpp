/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "StringMeasurement.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "StringMeasurementValue.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		StringMeasurement(),
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
		{ "StringMeasurement.StringMeasurementValues", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

StringMeasurement::StringMeasurement() {}
StringMeasurement::~StringMeasurement() {}

const std::list<std::string>& StringMeasurement::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& StringMeasurement::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& StringMeasurement::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& StringMeasurement::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& StringMeasurement::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& StringMeasurement::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& StringMeasurement::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_StringMeasurementValue_StringMeasurement(BaseClass*, BaseClass*);
bool assign_StringMeasurement_StringMeasurementValues(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	StringMeasurement* element = dynamic_cast<StringMeasurement*>(BaseClass_ptr1);
	StringMeasurementValue* element2 = dynamic_cast<StringMeasurementValue*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->StringMeasurementValues.begin(), element->StringMeasurementValues.end(), element2) == element->StringMeasurementValues.end())
		{
			element->StringMeasurementValues.push_back(element2);
			return assign_StringMeasurementValue_StringMeasurement(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char StringMeasurement::debugName[] = "StringMeasurement";
const char* StringMeasurement::debugString() const
{
	return StringMeasurement::debugName;
}

void StringMeasurement::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("StringMeasurement", &StringMeasurement_factory);
}

void StringMeasurement::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void StringMeasurement::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("StringMeasurement.StringMeasurementValues", &assign_StringMeasurement_StringMeasurementValues);
}

void StringMeasurement::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Measurement::addPrimitiveGetFnsToMap(get_map);
}

void StringMeasurement::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Measurement::addClassGetFnsToMap(get_map);
}

void StringMeasurement::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Measurement::addEnumGetFnsToMap(get_map);
}

bool StringMeasurement::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "StringMeasurement" &&
		dynamic_cast<StringMeasurement*>(otherObject) != nullptr;
}

const BaseClassDefiner StringMeasurement::declare()
{
	return BaseClassDefiner(StringMeasurement::addConstructToMap, StringMeasurement::addPrimitiveAssignFnsToMap, StringMeasurement::addClassAssignFnsToMap, StringMeasurement::debugName);
}

std::map<std::string, AttrDetails> StringMeasurement::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = Measurement::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* StringMeasurement_factory()
	{
		return new StringMeasurement;
	}
}
