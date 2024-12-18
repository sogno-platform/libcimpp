/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "StringMeasurement.hpp"

#include <algorithm>
#include <sstream>

#include "StringMeasurementValue.hpp"

using namespace CIMPP;

StringMeasurement::StringMeasurement() {};
StringMeasurement::~StringMeasurement() {};




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
	factory_map.insert(std::make_pair(std::string("cim:StringMeasurement"), &StringMeasurement_factory));
}

void StringMeasurement::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void StringMeasurement::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:StringMeasurement.StringMeasurementValues"), &assign_StringMeasurement_StringMeasurementValues));
}

const BaseClassDefiner StringMeasurement::declare()
{
	return BaseClassDefiner(StringMeasurement::addConstructToMap, StringMeasurement::addPrimitiveAssignFnsToMap, StringMeasurement::addClassAssignFnsToMap, StringMeasurement::debugName);
}

namespace CIMPP
{
	BaseClass* StringMeasurement_factory()
	{
		return new StringMeasurement;
	}
}
