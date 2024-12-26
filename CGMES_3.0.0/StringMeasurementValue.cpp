/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "StringMeasurementValue.hpp"

#include <algorithm>
#include <sstream>

#include "StringMeasurement.hpp"

using namespace CIMPP;

StringMeasurementValue::StringMeasurementValue() : StringMeasurement(nullptr) {};
StringMeasurementValue::~StringMeasurementValue() {};




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

const char StringMeasurementValue::debugName[] = "StringMeasurementValue";
const char* StringMeasurementValue::debugString() const
{
	return StringMeasurementValue::debugName;
}

void StringMeasurementValue::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:StringMeasurementValue"), &StringMeasurementValue_factory));
}

void StringMeasurementValue::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void StringMeasurementValue::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:StringMeasurementValue.StringMeasurement"), &assign_StringMeasurementValue_StringMeasurement));
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
