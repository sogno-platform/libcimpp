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

StringMeasurementValue::StringMeasurementValue() : StringMeasurement(nullptr) {}
StringMeasurementValue::~StringMeasurementValue() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:StringMeasurementValue.StringMeasurement", { CGMESProfile::EQ, } },
	{ "cim:StringMeasurementValue.value", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
StringMeasurementValue::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
StringMeasurementValue::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = MeasurementValue::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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

bool assign_StringMeasurementValue_value(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	StringMeasurementValue* element = dynamic_cast<StringMeasurementValue*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->value = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
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

bool get_StringMeasurementValue_value(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const StringMeasurementValue* element = dynamic_cast<const StringMeasurementValue*>(BaseClass_ptr1);
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

const char StringMeasurementValue::debugName[] = "StringMeasurementValue";
const char* StringMeasurementValue::debugString() const
{
	return StringMeasurementValue::debugName;
}

void StringMeasurementValue::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:StringMeasurementValue", &StringMeasurementValue_factory);
}

void StringMeasurementValue::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:StringMeasurementValue.value", &assign_StringMeasurementValue_value);
}

void StringMeasurementValue::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:StringMeasurementValue.StringMeasurement", &assign_StringMeasurementValue_StringMeasurement);
}

void StringMeasurementValue::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	MeasurementValue::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:StringMeasurementValue.value", &get_StringMeasurementValue_value);
}

void StringMeasurementValue::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	MeasurementValue::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:StringMeasurementValue.StringMeasurement", &get_StringMeasurementValue_StringMeasurement);
}

void StringMeasurementValue::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	MeasurementValue::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner StringMeasurementValue::declare()
{
	return BaseClassDefiner(StringMeasurementValue::addConstructToMap, StringMeasurementValue::addPrimitiveAssignFnsToMap, StringMeasurementValue::addClassAssignFnsToMap, StringMeasurementValue::debugName);
}

namespace CIMPP
{
	BaseClass* StringMeasurementValue_factory()
	{
		return new StringMeasurementValue;
	}
}
