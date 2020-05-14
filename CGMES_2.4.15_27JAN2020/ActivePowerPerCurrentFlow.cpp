#include <sstream>
#include "BaseClass.hpp"
#include "ActivePowerPerCurrentFlow.hpp"

#include "UnitMultiplier.hpp"
#include "UnitSymbol.hpp"
#include "UnitMultiplier.hpp"
#include "UnitSymbol.hpp"
#include "Float.hpp"

using namespace CIMPP;

ActivePowerPerCurrentFlow::ActivePowerPerCurrentFlow() {};

ActivePowerPerCurrentFlow::~ActivePowerPerCurrentFlow() {};






bool assign_ActivePowerPerCurrentFlow_value(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ActivePowerPerCurrentFlow* element = dynamic_cast<ActivePowerPerCurrentFlow*>(BaseClass_ptr1)) {
                element->value = dynamic_cast<Float*>(BaseClass_ptr2);
                if(element->value != nullptr)
                        return true;
        }
        return false;
}


bool assign_ActivePowerPerCurrentFlow_denominatorMultiplier(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ActivePowerPerCurrentFlow* element = dynamic_cast<ActivePowerPerCurrentFlow*>(BaseClass_ptr1)) {
                buffer >> element->denominatorMultiplier;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ActivePowerPerCurrentFlow_denominatorUnit(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ActivePowerPerCurrentFlow* element = dynamic_cast<ActivePowerPerCurrentFlow*>(BaseClass_ptr1)) {
                buffer >> element->denominatorUnit;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ActivePowerPerCurrentFlow_multiplier(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ActivePowerPerCurrentFlow* element = dynamic_cast<ActivePowerPerCurrentFlow*>(BaseClass_ptr1)) {
                buffer >> element->multiplier;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ActivePowerPerCurrentFlow_unit(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ActivePowerPerCurrentFlow* element = dynamic_cast<ActivePowerPerCurrentFlow*>(BaseClass_ptr1)) {
                buffer >> element->unit;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


namespace CIMPP {
	BaseClass* ActivePowerPerCurrentFlow_factory() {
		return new ActivePowerPerCurrentFlow;
	}
}

void ActivePowerPerCurrentFlow::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ActivePowerPerCurrentFlow"), &ActivePowerPerCurrentFlow_factory));
}

void ActivePowerPerCurrentFlow::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ActivePowerPerCurrentFlow.denominatorMultiplier"), &assign_ActivePowerPerCurrentFlow_denominatorMultiplier));
	assign_map.insert(std::make_pair(std::string("cim:ActivePowerPerCurrentFlow.denominatorUnit"), &assign_ActivePowerPerCurrentFlow_denominatorUnit));
	assign_map.insert(std::make_pair(std::string("cim:ActivePowerPerCurrentFlow.multiplier"), &assign_ActivePowerPerCurrentFlow_multiplier));
	assign_map.insert(std::make_pair(std::string("cim:ActivePowerPerCurrentFlow.unit"), &assign_ActivePowerPerCurrentFlow_unit));
	}

void ActivePowerPerCurrentFlow::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
					assign_map.insert(std::make_pair(std::string("cim:ActivePowerPerCurrentFlow.value"), &assign_ActivePowerPerCurrentFlow_value));
}

const char ActivePowerPerCurrentFlow::debugName[] = "ActivePowerPerCurrentFlow";
const char* ActivePowerPerCurrentFlow::debugString()
{
	return ActivePowerPerCurrentFlow::debugName;
}

const BaseClassDefiner ActivePowerPerCurrentFlow::declare()
{
	return BaseClassDefiner(ActivePowerPerCurrentFlow::addConstructToMap, ActivePowerPerCurrentFlow::addPrimitiveAssignFnsToMap, ActivePowerPerCurrentFlow::addClassAssignFnsToMap, ActivePowerPerCurrentFlow::debugName);
}


