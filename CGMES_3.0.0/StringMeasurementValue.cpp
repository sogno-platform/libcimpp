/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "StringMeasurementValue.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "StringMeasurement.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		StringMeasurementValue(),
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
		{ "StringMeasurementValue.StringMeasurement", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::OP, } } },
	};
    return ClassAttrDetailsMap;
}

StringMeasurementValue::StringMeasurementValue() : StringMeasurement(nullptr) {}
StringMeasurementValue::~StringMeasurementValue() {}

const std::list<std::string>& StringMeasurementValue::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& StringMeasurementValue::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& StringMeasurementValue::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& StringMeasurementValue::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& StringMeasurementValue::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& StringMeasurementValue::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& StringMeasurementValue::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_StringMeasurement_StringMeasurementValues(BaseClass*, BaseClass*);
bool assign_StringMeasurementValue_StringMeasurement(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	StringMeasurementValue* element = dynamic_cast<StringMeasurementValue*>(BaseClass_ptr1);
	StringMeasurement* element2 = dynamic_cast<StringMeasurement*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->StringMeasurement != element2)
		{
			element->StringMeasurement = element2;
			return assign_StringMeasurement_StringMeasurementValues(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_StringMeasurementValue_StringMeasurement(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const StringMeasurementValue* element = dynamic_cast<const StringMeasurementValue*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->StringMeasurement != 0)
		{
			BaseClass_list.push_back(element->StringMeasurement);
			return true;
		}
	}
	return false;
}

const char StringMeasurementValue::debugName[] = "StringMeasurementValue";
const char* StringMeasurementValue::debugString() const
{
	return StringMeasurementValue::debugName;
}

void StringMeasurementValue::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("StringMeasurementValue", &StringMeasurementValue_factory);
}

void StringMeasurementValue::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void StringMeasurementValue::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("StringMeasurementValue.StringMeasurement", &assign_StringMeasurementValue_StringMeasurement);
}

void StringMeasurementValue::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	MeasurementValue::addPrimitiveGetFnsToMap(get_map);
}

void StringMeasurementValue::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	MeasurementValue::addClassGetFnsToMap(get_map);
	get_map.emplace("StringMeasurementValue.StringMeasurement", &get_StringMeasurementValue_StringMeasurement);
}

void StringMeasurementValue::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	MeasurementValue::addEnumGetFnsToMap(get_map);
}

bool StringMeasurementValue::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "StringMeasurementValue" &&
		dynamic_cast<StringMeasurementValue*>(otherObject) != nullptr;
}

const BaseClassDefiner StringMeasurementValue::declare()
{
	return BaseClassDefiner(StringMeasurementValue::addConstructToMap, StringMeasurementValue::addPrimitiveAssignFnsToMap, StringMeasurementValue::addClassAssignFnsToMap, StringMeasurementValue::debugName);
}

std::map<std::string, AttrDetails> StringMeasurementValue::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = MeasurementValue::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* StringMeasurementValue_factory()
	{
		return new StringMeasurementValue;
	}
}
