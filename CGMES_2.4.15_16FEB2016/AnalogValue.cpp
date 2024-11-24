#include <sstream>
#include "MeasurementValue.hpp"
#include "AnalogValue.hpp"

#include "Analog.hpp"
#include "AnalogControl.hpp"
#include "Simple_Float.hpp"

using namespace CIMPP;

AnalogValue::AnalogValue(): Analog(nullptr), AnalogControl(nullptr) {};

AnalogValue::~AnalogValue() {};




bool assign_AnalogValue_value(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(AnalogValue* element = dynamic_cast<AnalogValue*>(BaseClass_ptr1)) {
                buffer >> element->value;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_Analog_AnalogValues(BaseClass*, BaseClass*);
bool assign_AnalogValue_Analog(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(AnalogValue* element = dynamic_cast<AnalogValue*>(BaseClass_ptr1)) {
                element->Analog = dynamic_cast<Analog*>(BaseClass_ptr2);
                if(element->Analog != nullptr)
                        return assign_Analog_AnalogValues(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_AnalogValue_AnalogControl(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(AnalogValue* element = dynamic_cast<AnalogValue*>(BaseClass_ptr1)) {
                element->AnalogControl = dynamic_cast<AnalogControl*>(BaseClass_ptr2);
                if(element->AnalogControl != nullptr)
                        return true;
        }
        return false;
}


namespace CIMPP {
	BaseClass* AnalogValue_factory() {
		return new AnalogValue;
	}
}

void AnalogValue::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:AnalogValue"), &AnalogValue_factory));
}

void AnalogValue::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
			assign_map.insert(std::make_pair(std::string("cim:AnalogValue.value"), &assign_AnalogValue_value));
}

void AnalogValue::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:AnalogValue.Analog"), &assign_AnalogValue_Analog));
	assign_map.insert(std::make_pair(std::string("cim:AnalogValue.AnalogControl"), &assign_AnalogValue_AnalogControl));
	}

const char AnalogValue::debugName[] = "AnalogValue";
const char* AnalogValue::debugString()
{
	return AnalogValue::debugName;
}

const BaseClassDefiner AnalogValue::declare()
{
	return BaseClassDefiner(AnalogValue::addConstructToMap, AnalogValue::addPrimitiveAssignFnsToMap, AnalogValue::addClassAssignFnsToMap, AnalogValue::debugName);
}
