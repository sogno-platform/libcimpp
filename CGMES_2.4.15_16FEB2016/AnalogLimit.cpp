#include <sstream>
#include "Limit.hpp"
#include "AnalogLimit.hpp"

#include "Simple_Float.hpp"
#include "AnalogLimitSet.hpp"

using namespace CIMPP;

AnalogLimit::AnalogLimit() {};

AnalogLimit::~AnalogLimit() {};



bool assign_AnalogLimitSet_Limits(BaseClass*, BaseClass*);
bool assign_AnalogLimit_LimitSet(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(AnalogLimit* element = dynamic_cast<AnalogLimit*>(BaseClass_ptr1)) {
                element->LimitSet = dynamic_cast<AnalogLimitSet*>(BaseClass_ptr2);
                if(element->LimitSet != nullptr)
                        return assign_AnalogLimitSet_Limits(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}


bool assign_AnalogLimit_value(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(AnalogLimit* element = dynamic_cast<AnalogLimit*>(BaseClass_ptr1)) {
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
	BaseClass* AnalogLimit_factory() {
		return new AnalogLimit;
	}
}

void AnalogLimit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:AnalogLimit"), &AnalogLimit_factory));
}

void AnalogLimit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:AnalogLimit.value"), &assign_AnalogLimit_value));
	}

void AnalogLimit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:AnalogLimit.LimitSet"), &assign_AnalogLimit_LimitSet));
}

const char AnalogLimit::debugName[] = "AnalogLimit";
const char* AnalogLimit::debugString()
{
	return AnalogLimit::debugName;
}

const BaseClassDefiner AnalogLimit::declare()
{
	return BaseClassDefiner(AnalogLimit::addConstructToMap, AnalogLimit::addPrimitiveAssignFnsToMap, AnalogLimit::addClassAssignFnsToMap, AnalogLimit::debugName);
}


