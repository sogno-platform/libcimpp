#include <sstream>
#include "MeasurementValue.hpp"
#include "StringMeasurementValue.hpp"

#include "StringMeasurement.hpp"
#include "String.hpp"

using namespace CIMPP;

StringMeasurementValue::StringMeasurementValue(): StringMeasurement(nullptr) {};

StringMeasurementValue::~StringMeasurementValue() {};


bool assign_StringMeasurement_StringMeasurementValues(BaseClass*, BaseClass*);
bool assign_StringMeasurementValue_StringMeasurement(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(StringMeasurementValue* element = dynamic_cast<StringMeasurementValue*>(BaseClass_ptr1)) {
                element->StringMeasurement = dynamic_cast<StringMeasurement*>(BaseClass_ptr2);
                if(element->StringMeasurement != nullptr)
                        return assign_StringMeasurement_StringMeasurementValues(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}




bool assign_StringMeasurementValue_value(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(StringMeasurementValue* element = dynamic_cast<StringMeasurementValue*>(BaseClass_ptr1)) {
		element->value = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

namespace CIMPP {
	BaseClass* StringMeasurementValue_factory() {
		return new StringMeasurementValue;
	}
}

void StringMeasurementValue::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:StringMeasurementValue"), &StringMeasurementValue_factory));
}

void StringMeasurementValue::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:StringMeasurementValue.value"), &assign_StringMeasurementValue_value));
}

void StringMeasurementValue::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:StringMeasurementValue.StringMeasurement"), &assign_StringMeasurementValue_StringMeasurement));
	}

const char StringMeasurementValue::debugName[] = "StringMeasurementValue";
const char* StringMeasurementValue::debugString()
{
	return StringMeasurementValue::debugName;
}

const BaseClassDefiner StringMeasurementValue::declare()
{
	return BaseClassDefiner(StringMeasurementValue::addConstructToMap, StringMeasurementValue::addPrimitiveAssignFnsToMap, StringMeasurementValue::addClassAssignFnsToMap, StringMeasurementValue::debugName);
}


