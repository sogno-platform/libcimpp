#include <sstream>
#include "Control.hpp"
#include "Command.hpp"

#include "DiscreteValue.hpp"
#include "ValueAliasSet.hpp"
#include "Integer.hpp"
#include "Integer.hpp"

using namespace CIMPP;

Command::Command(): DiscreteValue(nullptr), ValueAliasSet(nullptr) {};

Command::~Command() {};




bool assign_Command_normalValue(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Command* element = dynamic_cast<Command*>(BaseClass_ptr1)) {
                buffer >> element->normalValue;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Command_value(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Command* element = dynamic_cast<Command*>(BaseClass_ptr1)) {
                buffer >> element->value;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_DiscreteValue_Command(BaseClass*, BaseClass*);
bool assign_Command_DiscreteValue(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Command* element = dynamic_cast<Command*>(BaseClass_ptr1)) {
                element->DiscreteValue = dynamic_cast<DiscreteValue*>(BaseClass_ptr2);
                if(element->DiscreteValue != nullptr)
                        return assign_DiscreteValue_Command(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_ValueAliasSet_Commands(BaseClass*, BaseClass*);
bool assign_Command_ValueAliasSet(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Command* element = dynamic_cast<Command*>(BaseClass_ptr1)) {
                element->ValueAliasSet = dynamic_cast<ValueAliasSet*>(BaseClass_ptr2);
                if(element->ValueAliasSet != nullptr)
                        return assign_ValueAliasSet_Commands(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}



namespace CIMPP {
	BaseClass* Command_factory() {
		return new Command;
	}
}

void Command::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:Command"), &Command_factory));
}

void Command::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
			assign_map.insert(std::make_pair(std::string("cim:Command.normalValue"), &assign_Command_normalValue));
	assign_map.insert(std::make_pair(std::string("cim:Command.value"), &assign_Command_value));
}

void Command::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:Command.DiscreteValue"), &assign_Command_DiscreteValue));
	assign_map.insert(std::make_pair(std::string("cim:Command.ValueAliasSet"), &assign_Command_ValueAliasSet));
		}

const char Command::debugName[] = "Command";
const char* Command::debugString()
{
	return Command::debugName;
}

const BaseClassDefiner Command::declare()
{
	return BaseClassDefiner(Command::addConstructToMap, Command::addPrimitiveAssignFnsToMap, Command::addClassAssignFnsToMap, Command::debugName);
}
