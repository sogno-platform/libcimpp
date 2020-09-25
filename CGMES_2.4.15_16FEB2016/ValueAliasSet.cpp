#include <sstream>
#include "IdentifiedObject.hpp"
#include "ValueAliasSet.hpp"

#include "Command.hpp"
#include "Discrete.hpp"
#include "RaiseLowerCommand.hpp"
#include "ValueToAlias.hpp"

using namespace CIMPP;

ValueAliasSet::ValueAliasSet() {};

ValueAliasSet::~ValueAliasSet() {};


bool assign_ValueAliasSet_Commands(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ValueAliasSet* element = dynamic_cast<ValueAliasSet*>(BaseClass_ptr1)) {
		if(dynamic_cast<Command*>(BaseClass_ptr2) != nullptr) {
                        element->Commands.push_back(dynamic_cast<Command*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ValueAliasSet_Discretes(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ValueAliasSet* element = dynamic_cast<ValueAliasSet*>(BaseClass_ptr1)) {
		if(dynamic_cast<Discrete*>(BaseClass_ptr2) != nullptr) {
                        element->Discretes.push_back(dynamic_cast<Discrete*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ValueAliasSet_RaiseLowerCommands(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ValueAliasSet* element = dynamic_cast<ValueAliasSet*>(BaseClass_ptr1)) {
		if(dynamic_cast<RaiseLowerCommand*>(BaseClass_ptr2) != nullptr) {
                        element->RaiseLowerCommands.push_back(dynamic_cast<RaiseLowerCommand*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ValueAliasSet_Values(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ValueAliasSet* element = dynamic_cast<ValueAliasSet*>(BaseClass_ptr1)) {
		if(dynamic_cast<ValueToAlias*>(BaseClass_ptr2) != nullptr) {
                        element->Values.push_back(dynamic_cast<ValueToAlias*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}






namespace CIMPP {
	BaseClass* ValueAliasSet_factory() {
		return new ValueAliasSet;
	}
}

void ValueAliasSet::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ValueAliasSet"), &ValueAliasSet_factory));
}

void ValueAliasSet::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
				}

void ValueAliasSet::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ValueAliasSet.Commands"), &assign_ValueAliasSet_Commands));
	assign_map.insert(std::make_pair(std::string("cim:ValueAliasSet.Discretes"), &assign_ValueAliasSet_Discretes));
	assign_map.insert(std::make_pair(std::string("cim:ValueAliasSet.RaiseLowerCommands"), &assign_ValueAliasSet_RaiseLowerCommands));
	assign_map.insert(std::make_pair(std::string("cim:ValueAliasSet.Values"), &assign_ValueAliasSet_Values));
}

const char ValueAliasSet::debugName[] = "ValueAliasSet";
const char* ValueAliasSet::debugString()
{
	return ValueAliasSet::debugName;
}

const BaseClassDefiner ValueAliasSet::declare()
{
	return BaseClassDefiner(ValueAliasSet::addConstructToMap, ValueAliasSet::addPrimitiveAssignFnsToMap, ValueAliasSet::addClassAssignFnsToMap, ValueAliasSet::debugName);
}


