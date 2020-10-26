#include <sstream>
#include "BaseClass.hpp"
#include "ResistancePerLength.hpp"

#include "Float.hpp"
#include "UnitSymbol.hpp"
#include "UnitMultiplier.hpp"
#include "UnitSymbol.hpp"
#include "UnitMultiplier.hpp"

using namespace CIMPP;

ResistancePerLength::ResistancePerLength(): value(nullptr) {};

ResistancePerLength::~ResistancePerLength() {};


bool assign_ResistancePerLength_value(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ResistancePerLength* element = dynamic_cast<ResistancePerLength*>(BaseClass_ptr1)) {
                element->value = dynamic_cast<Float*>(BaseClass_ptr2);
                if(element->value != nullptr)
                        return true;
        }
        return false;
}







bool assign_ResistancePerLength_unit(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ResistancePerLength* element = dynamic_cast<ResistancePerLength*>(BaseClass_ptr1)) {
                buffer >> element->unit;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ResistancePerLength_multiplier(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ResistancePerLength* element = dynamic_cast<ResistancePerLength*>(BaseClass_ptr1)) {
                buffer >> element->multiplier;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ResistancePerLength_denominatorUnit(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ResistancePerLength* element = dynamic_cast<ResistancePerLength*>(BaseClass_ptr1)) {
                buffer >> element->denominatorUnit;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ResistancePerLength_denominatorMultiplier(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ResistancePerLength* element = dynamic_cast<ResistancePerLength*>(BaseClass_ptr1)) {
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
	BaseClass* ResistancePerLength_factory() {
		return new ResistancePerLength;
	}
}

void ResistancePerLength::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ResistancePerLength"), &ResistancePerLength_factory));
}

void ResistancePerLength::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:ResistancePerLength.unit"), &assign_ResistancePerLength_unit));
	assign_map.insert(std::make_pair(std::string("cim:ResistancePerLength.multiplier"), &assign_ResistancePerLength_multiplier));
	assign_map.insert(std::make_pair(std::string("cim:ResistancePerLength.denominatorUnit"), &assign_ResistancePerLength_denominatorUnit));
	assign_map.insert(std::make_pair(std::string("cim:ResistancePerLength.denominatorMultiplier"), &assign_ResistancePerLength_denominatorMultiplier));
}

void ResistancePerLength::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ResistancePerLength.value"), &assign_ResistancePerLength_value));
				}

const char ResistancePerLength::debugName[] = "ResistancePerLength";
const char* ResistancePerLength::debugString()
{
	return ResistancePerLength::debugName;
}

const BaseClassDefiner ResistancePerLength::declare()
{
	return BaseClassDefiner(ResistancePerLength::addConstructToMap, ResistancePerLength::addPrimitiveAssignFnsToMap, ResistancePerLength::addClassAssignFnsToMap, ResistancePerLength::debugName);
}


