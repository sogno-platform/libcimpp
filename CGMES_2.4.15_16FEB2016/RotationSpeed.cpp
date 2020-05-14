#include <sstream>
#include "BaseClass.hpp"
#include "RotationSpeed.hpp"

#include "Float.hpp"
#include "UnitSymbol.hpp"
#include "UnitMultiplier.hpp"
#include "UnitSymbol.hpp"
#include "UnitMultiplier.hpp"

using namespace CIMPP;

RotationSpeed::RotationSpeed() {};

RotationSpeed::~RotationSpeed() {};


bool assign_RotationSpeed_value(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(RotationSpeed* element = dynamic_cast<RotationSpeed*>(BaseClass_ptr1)) {
                element->value = dynamic_cast<Float*>(BaseClass_ptr2);
                if(element->value != nullptr)
                        return true;
        }
        return false;
}







bool assign_RotationSpeed_unit(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(RotationSpeed* element = dynamic_cast<RotationSpeed*>(BaseClass_ptr1)) {
                buffer >> element->unit;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_RotationSpeed_multiplier(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(RotationSpeed* element = dynamic_cast<RotationSpeed*>(BaseClass_ptr1)) {
                buffer >> element->multiplier;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_RotationSpeed_denominatorUnit(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(RotationSpeed* element = dynamic_cast<RotationSpeed*>(BaseClass_ptr1)) {
                buffer >> element->denominatorUnit;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_RotationSpeed_denominatorMultiplier(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(RotationSpeed* element = dynamic_cast<RotationSpeed*>(BaseClass_ptr1)) {
                buffer >> element->denominatorMultiplier;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* RotationSpeed_factory() {
		return new RotationSpeed;
	}
}

void RotationSpeed::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:RotationSpeed"), &RotationSpeed_factory));
}

void RotationSpeed::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:RotationSpeed.unit"), &assign_RotationSpeed_unit));
	assign_map.insert(std::make_pair(std::string("cim:RotationSpeed.multiplier"), &assign_RotationSpeed_multiplier));
	assign_map.insert(std::make_pair(std::string("cim:RotationSpeed.denominatorUnit"), &assign_RotationSpeed_denominatorUnit));
	assign_map.insert(std::make_pair(std::string("cim:RotationSpeed.denominatorMultiplier"), &assign_RotationSpeed_denominatorMultiplier));
}

void RotationSpeed::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:RotationSpeed.value"), &assign_RotationSpeed_value));
				}

const char RotationSpeed::debugName[] = "RotationSpeed";
const char* RotationSpeed::debugString()
{
	return RotationSpeed::debugName;
}

const BaseClassDefiner RotationSpeed::declare()
{
	return BaseClassDefiner(RotationSpeed::addConstructToMap, RotationSpeed::addPrimitiveAssignFnsToMap, RotationSpeed::addClassAssignFnsToMap, RotationSpeed::debugName);
}


