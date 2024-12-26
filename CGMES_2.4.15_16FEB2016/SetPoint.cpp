#include <sstream>
#include "AnalogControl.hpp"
#include "SetPoint.hpp"

#include "Simple_Float.hpp"
#include "Simple_Float.hpp"

using namespace CIMPP;

SetPoint::SetPoint() {};

SetPoint::~SetPoint() {};


bool assign_SetPoint_normalValue(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(SetPoint* element = dynamic_cast<SetPoint*>(BaseClass_ptr1)) {
                buffer >> element->normalValue;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_SetPoint_value(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(SetPoint* element = dynamic_cast<SetPoint*>(BaseClass_ptr1)) {
                buffer >> element->value;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}




namespace CIMPP {
	BaseClass* SetPoint_factory() {
		return new SetPoint;
	}
}

void SetPoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:SetPoint"), &SetPoint_factory));
}

void SetPoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:SetPoint.normalValue"), &assign_SetPoint_normalValue));
	assign_map.insert(std::make_pair(std::string("cim:SetPoint.value"), &assign_SetPoint_value));
}

void SetPoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
		}

const char SetPoint::debugName[] = "SetPoint";
const char* SetPoint::debugString()
{
	return SetPoint::debugName;
}

const BaseClassDefiner SetPoint::declare()
{
	return BaseClassDefiner(SetPoint::addConstructToMap, SetPoint::addPrimitiveAssignFnsToMap, SetPoint::addClassAssignFnsToMap, SetPoint::debugName);
}
