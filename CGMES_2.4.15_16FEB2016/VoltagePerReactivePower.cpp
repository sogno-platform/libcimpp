#include <sstream>
#include "BaseClass.hpp"
#include "VoltagePerReactivePower.hpp"

#include "Float.hpp"
#include "UnitSymbol.hpp"
#include "UnitMultiplier.hpp"
#include "UnitMultiplier.hpp"
#include "UnitSymbol.hpp"

using namespace CIMPP;

VoltagePerReactivePower::VoltagePerReactivePower(): value(nullptr) {};

VoltagePerReactivePower::~VoltagePerReactivePower() {};


bool assign_VoltagePerReactivePower_value(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(VoltagePerReactivePower* element = dynamic_cast<VoltagePerReactivePower*>(BaseClass_ptr1)) {
                element->value = dynamic_cast<Float*>(BaseClass_ptr2);
                if(element->value != nullptr)
                        return true;
        }
        return false;
}







bool assign_VoltagePerReactivePower_unit(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VoltagePerReactivePower* element = dynamic_cast<VoltagePerReactivePower*>(BaseClass_ptr1)) {
                buffer >> element->unit;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_VoltagePerReactivePower_denominatorMultiplier(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VoltagePerReactivePower* element = dynamic_cast<VoltagePerReactivePower*>(BaseClass_ptr1)) {
                buffer >> element->denominatorMultiplier;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_VoltagePerReactivePower_multiplier(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VoltagePerReactivePower* element = dynamic_cast<VoltagePerReactivePower*>(BaseClass_ptr1)) {
                buffer >> element->multiplier;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_VoltagePerReactivePower_denominatorUnit(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(VoltagePerReactivePower* element = dynamic_cast<VoltagePerReactivePower*>(BaseClass_ptr1)) {
                buffer >> element->denominatorUnit;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* VoltagePerReactivePower_factory() {
		return new VoltagePerReactivePower;
	}
}

void VoltagePerReactivePower::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:VoltagePerReactivePower"), &VoltagePerReactivePower_factory));
}

void VoltagePerReactivePower::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:VoltagePerReactivePower.unit"), &assign_VoltagePerReactivePower_unit));
	assign_map.insert(std::make_pair(std::string("cim:VoltagePerReactivePower.denominatorMultiplier"), &assign_VoltagePerReactivePower_denominatorMultiplier));
	assign_map.insert(std::make_pair(std::string("cim:VoltagePerReactivePower.multiplier"), &assign_VoltagePerReactivePower_multiplier));
	assign_map.insert(std::make_pair(std::string("cim:VoltagePerReactivePower.denominatorUnit"), &assign_VoltagePerReactivePower_denominatorUnit));
}

void VoltagePerReactivePower::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:VoltagePerReactivePower.value"), &assign_VoltagePerReactivePower_value));
				}

const char VoltagePerReactivePower::debugName[] = "VoltagePerReactivePower";
const char* VoltagePerReactivePower::debugString()
{
	return VoltagePerReactivePower::debugName;
}

const BaseClassDefiner VoltagePerReactivePower::declare()
{
	return BaseClassDefiner(VoltagePerReactivePower::addConstructToMap, VoltagePerReactivePower::addPrimitiveAssignFnsToMap, VoltagePerReactivePower::addClassAssignFnsToMap, VoltagePerReactivePower::debugName);
}


