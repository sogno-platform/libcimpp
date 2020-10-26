#include <sstream>
#include "BaseClass.hpp"
#include "CapacitancePerLength.hpp"

#include "Float.hpp"
#include "UnitSymbol.hpp"
#include "UnitMultiplier.hpp"
#include "UnitSymbol.hpp"
#include "UnitMultiplier.hpp"

using namespace CIMPP;

CapacitancePerLength::CapacitancePerLength(): value(nullptr) {};

CapacitancePerLength::~CapacitancePerLength() {};


bool assign_CapacitancePerLength_value(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(CapacitancePerLength* element = dynamic_cast<CapacitancePerLength*>(BaseClass_ptr1)) {
                element->value = dynamic_cast<Float*>(BaseClass_ptr2);
                if(element->value != nullptr)
                        return true;
        }
        return false;
}







bool assign_CapacitancePerLength_unit(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(CapacitancePerLength* element = dynamic_cast<CapacitancePerLength*>(BaseClass_ptr1)) {
                buffer >> element->unit;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_CapacitancePerLength_multiplier(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(CapacitancePerLength* element = dynamic_cast<CapacitancePerLength*>(BaseClass_ptr1)) {
                buffer >> element->multiplier;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_CapacitancePerLength_denominatorUnit(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(CapacitancePerLength* element = dynamic_cast<CapacitancePerLength*>(BaseClass_ptr1)) {
                buffer >> element->denominatorUnit;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_CapacitancePerLength_denominatorMultiplier(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(CapacitancePerLength* element = dynamic_cast<CapacitancePerLength*>(BaseClass_ptr1)) {
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
	BaseClass* CapacitancePerLength_factory() {
		return new CapacitancePerLength;
	}
}

void CapacitancePerLength::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:CapacitancePerLength"), &CapacitancePerLength_factory));
}

void CapacitancePerLength::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:CapacitancePerLength.unit"), &assign_CapacitancePerLength_unit));
	assign_map.insert(std::make_pair(std::string("cim:CapacitancePerLength.multiplier"), &assign_CapacitancePerLength_multiplier));
	assign_map.insert(std::make_pair(std::string("cim:CapacitancePerLength.denominatorUnit"), &assign_CapacitancePerLength_denominatorUnit));
	assign_map.insert(std::make_pair(std::string("cim:CapacitancePerLength.denominatorMultiplier"), &assign_CapacitancePerLength_denominatorMultiplier));
}

void CapacitancePerLength::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:CapacitancePerLength.value"), &assign_CapacitancePerLength_value));
				}

const char CapacitancePerLength::debugName[] = "CapacitancePerLength";
const char* CapacitancePerLength::debugString()
{
	return CapacitancePerLength::debugName;
}

const BaseClassDefiner CapacitancePerLength::declare()
{
	return BaseClassDefiner(CapacitancePerLength::addConstructToMap, CapacitancePerLength::addPrimitiveAssignFnsToMap, CapacitancePerLength::addClassAssignFnsToMap, CapacitancePerLength::debugName);
}


