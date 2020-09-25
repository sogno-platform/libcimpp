#include <sstream>
#include "OperationalLimit.hpp"
#include "ActivePowerLimit.hpp"

#include "ActivePower.hpp"

using namespace CIMPP;

ActivePowerLimit::ActivePowerLimit() {};

ActivePowerLimit::~ActivePowerLimit() {};




bool assign_ActivePowerLimit_value(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ActivePowerLimit* element = dynamic_cast<ActivePowerLimit*>(BaseClass_ptr1)) {
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
	BaseClass* ActivePowerLimit_factory() {
		return new ActivePowerLimit;
	}
}

void ActivePowerLimit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ActivePowerLimit"), &ActivePowerLimit_factory));
}

void ActivePowerLimit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ActivePowerLimit.value"), &assign_ActivePowerLimit_value));
}

void ActivePowerLimit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	}

const char ActivePowerLimit::debugName[] = "ActivePowerLimit";
const char* ActivePowerLimit::debugString()
{
	return ActivePowerLimit::debugName;
}

const BaseClassDefiner ActivePowerLimit::declare()
{
	return BaseClassDefiner(ActivePowerLimit::addConstructToMap, ActivePowerLimit::addPrimitiveAssignFnsToMap, ActivePowerLimit::addClassAssignFnsToMap, ActivePowerLimit::debugName);
}


