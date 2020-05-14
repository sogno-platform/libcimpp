#include <sstream>
#include "Measurement.hpp"
#include "StringMeasurement.hpp"

#include "StringMeasurementValue.hpp"

using namespace CIMPP;

StringMeasurement::StringMeasurement() {};

StringMeasurement::~StringMeasurement() {};


bool assign_StringMeasurement_StringMeasurementValues(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(StringMeasurement* element = dynamic_cast<StringMeasurement*>(BaseClass_ptr1)) {
		if(dynamic_cast<StringMeasurementValue*>(BaseClass_ptr2) != nullptr) {
                        element->StringMeasurementValues.push_back(dynamic_cast<StringMeasurementValue*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}



namespace CIMPP {
	BaseClass* StringMeasurement_factory() {
		return new StringMeasurement;
	}
}

void StringMeasurement::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:StringMeasurement"), &StringMeasurement_factory));
}

void StringMeasurement::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void StringMeasurement::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:StringMeasurement.StringMeasurementValues"), &assign_StringMeasurement_StringMeasurementValues));
}

const char StringMeasurement::debugName[] = "StringMeasurement";
const char* StringMeasurement::debugString()
{
	return StringMeasurement::debugName;
}

const BaseClassDefiner StringMeasurement::declare()
{
	return BaseClassDefiner(StringMeasurement::addConstructToMap, StringMeasurement::addPrimitiveAssignFnsToMap, StringMeasurement::addClassAssignFnsToMap, StringMeasurement::debugName);
}


