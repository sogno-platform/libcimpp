#include <sstream>
#include "Control.hpp"
#include "AnalogControl.hpp"

#include "AnalogValue.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"

using namespace CIMPP;

AnalogControl::AnalogControl(): AnalogValue(nullptr) {};

AnalogControl::~AnalogControl() {};



bool assign_AnalogControl_maxValue(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(AnalogControl* element = dynamic_cast<AnalogControl*>(BaseClass_ptr1)) {
                buffer >> element->maxValue;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_AnalogControl_minValue(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(AnalogControl* element = dynamic_cast<AnalogControl*>(BaseClass_ptr1)) {
                buffer >> element->minValue;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_AnalogValue_AnalogControl(BaseClass*, BaseClass*);
bool assign_AnalogControl_AnalogValue(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(AnalogControl* element = dynamic_cast<AnalogControl*>(BaseClass_ptr1)) {
                element->AnalogValue = dynamic_cast<AnalogValue*>(BaseClass_ptr2);
                if(element->AnalogValue != nullptr)
                        return assign_AnalogValue_AnalogControl(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}



namespace CIMPP {
	BaseClass* AnalogControl_factory() {
		return new AnalogControl;
	}
}

void AnalogControl::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:AnalogControl"), &AnalogControl_factory));
}

void AnalogControl::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:AnalogControl.maxValue"), &assign_AnalogControl_maxValue));
	assign_map.insert(std::make_pair(std::string("cim:AnalogControl.minValue"), &assign_AnalogControl_minValue));
}

void AnalogControl::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:AnalogControl.AnalogValue"), &assign_AnalogControl_AnalogValue));
		}

const char AnalogControl::debugName[] = "AnalogControl";
const char* AnalogControl::debugString()
{
	return AnalogControl::debugName;
}

const BaseClassDefiner AnalogControl::declare()
{
	return BaseClassDefiner(AnalogControl::addConstructToMap, AnalogControl::addPrimitiveAssignFnsToMap, AnalogControl::addClassAssignFnsToMap, AnalogControl::debugName);
}
