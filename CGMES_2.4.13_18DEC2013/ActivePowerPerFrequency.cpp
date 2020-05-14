#include <sstream>
#include "BaseClass.hpp"
#include "ActivePowerPerFrequency.hpp"

#include "UnitMultiplier.hpp"
#include "UnitSymbol.hpp"
#include "UnitMultiplier.hpp"
#include "UnitSymbol.hpp"
#include "Float.hpp"

using namespace CIMPP;

ActivePowerPerFrequency::ActivePowerPerFrequency() {};

ActivePowerPerFrequency::~ActivePowerPerFrequency() {};






bool assign_ActivePowerPerFrequency_value(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ActivePowerPerFrequency* element = dynamic_cast<ActivePowerPerFrequency*>(BaseClass_ptr1)) {
                element->value = dynamic_cast<Float*>(BaseClass_ptr2);
                if(element->value != nullptr)
                        return true;
        }
        return false;
}


bool assign_ActivePowerPerFrequency_denominatorMultiplier(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ActivePowerPerFrequency* element = dynamic_cast<ActivePowerPerFrequency*>(BaseClass_ptr1)) {
                buffer >> element->denominatorMultiplier;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ActivePowerPerFrequency_denominatorUnit(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ActivePowerPerFrequency* element = dynamic_cast<ActivePowerPerFrequency*>(BaseClass_ptr1)) {
                buffer >> element->denominatorUnit;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ActivePowerPerFrequency_multiplier(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ActivePowerPerFrequency* element = dynamic_cast<ActivePowerPerFrequency*>(BaseClass_ptr1)) {
                buffer >> element->multiplier;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ActivePowerPerFrequency_unit(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ActivePowerPerFrequency* element = dynamic_cast<ActivePowerPerFrequency*>(BaseClass_ptr1)) {
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
	BaseClass* ActivePowerPerFrequency_factory() {
		return new ActivePowerPerFrequency;
	}
}

void ActivePowerPerFrequency::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ActivePowerPerFrequency"), &ActivePowerPerFrequency_factory));
}

void ActivePowerPerFrequency::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ActivePowerPerFrequency.denominatorMultiplier"), &assign_ActivePowerPerFrequency_denominatorMultiplier));
	assign_map.insert(std::make_pair(std::string("cim:ActivePowerPerFrequency.denominatorUnit"), &assign_ActivePowerPerFrequency_denominatorUnit));
	assign_map.insert(std::make_pair(std::string("cim:ActivePowerPerFrequency.multiplier"), &assign_ActivePowerPerFrequency_multiplier));
	assign_map.insert(std::make_pair(std::string("cim:ActivePowerPerFrequency.unit"), &assign_ActivePowerPerFrequency_unit));
	}

void ActivePowerPerFrequency::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
					assign_map.insert(std::make_pair(std::string("cim:ActivePowerPerFrequency.value"), &assign_ActivePowerPerFrequency_value));
}

const char ActivePowerPerFrequency::debugName[] = "ActivePowerPerFrequency";
const char* ActivePowerPerFrequency::debugString()
{
	return ActivePowerPerFrequency::debugName;
}

const BaseClassDefiner ActivePowerPerFrequency::declare()
{
	return BaseClassDefiner(ActivePowerPerFrequency::addConstructToMap, ActivePowerPerFrequency::addPrimitiveAssignFnsToMap, ActivePowerPerFrequency::addClassAssignFnsToMap, ActivePowerPerFrequency::debugName);
}


