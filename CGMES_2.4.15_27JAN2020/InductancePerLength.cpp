#include <sstream>
#include "BaseClass.hpp"
#include "InductancePerLength.hpp"

#include "Float.hpp"
#include "UnitSymbol.hpp"
#include "UnitMultiplier.hpp"
#include "UnitSymbol.hpp"
#include "UnitMultiplier.hpp"

using namespace CIMPP;

InductancePerLength::InductancePerLength(): value(nullptr) {};

InductancePerLength::~InductancePerLength() {};


bool assign_InductancePerLength_value(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(InductancePerLength* element = dynamic_cast<InductancePerLength*>(BaseClass_ptr1)) {
                element->value = dynamic_cast<Float*>(BaseClass_ptr2);
                if(element->value != nullptr)
                        return true;
        }
        return false;
}







bool assign_InductancePerLength_unit(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(InductancePerLength* element = dynamic_cast<InductancePerLength*>(BaseClass_ptr1)) {
                buffer >> element->unit;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_InductancePerLength_multiplier(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(InductancePerLength* element = dynamic_cast<InductancePerLength*>(BaseClass_ptr1)) {
                buffer >> element->multiplier;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_InductancePerLength_denominatorUnit(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(InductancePerLength* element = dynamic_cast<InductancePerLength*>(BaseClass_ptr1)) {
                buffer >> element->denominatorUnit;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_InductancePerLength_denominatorMultiplier(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(InductancePerLength* element = dynamic_cast<InductancePerLength*>(BaseClass_ptr1)) {
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
	BaseClass* InductancePerLength_factory() {
		return new InductancePerLength;
	}
}

void InductancePerLength::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:InductancePerLength"), &InductancePerLength_factory));
}

void InductancePerLength::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:InductancePerLength.unit"), &assign_InductancePerLength_unit));
	assign_map.insert(std::make_pair(std::string("cim:InductancePerLength.multiplier"), &assign_InductancePerLength_multiplier));
	assign_map.insert(std::make_pair(std::string("cim:InductancePerLength.denominatorUnit"), &assign_InductancePerLength_denominatorUnit));
	assign_map.insert(std::make_pair(std::string("cim:InductancePerLength.denominatorMultiplier"), &assign_InductancePerLength_denominatorMultiplier));
}

void InductancePerLength::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:InductancePerLength.value"), &assign_InductancePerLength_value));
				}

const char InductancePerLength::debugName[] = "InductancePerLength";
const char* InductancePerLength::debugString()
{
	return InductancePerLength::debugName;
}

const BaseClassDefiner InductancePerLength::declare()
{
	return BaseClassDefiner(InductancePerLength::addConstructToMap, InductancePerLength::addPrimitiveAssignFnsToMap, InductancePerLength::addClassAssignFnsToMap, InductancePerLength::debugName);
}


