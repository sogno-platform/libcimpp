/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Command.hpp"

#include <algorithm>
#include <sstream>

#include "DiscreteValue.hpp"
#include "ValueAliasSet.hpp"
#include "Integer.hpp"
#include "Integer.hpp"

using namespace CIMPP;

Command::Command() : DiscreteValue(nullptr), ValueAliasSet(nullptr) {};
Command::~Command() {};




bool assign_Command_normalValue(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (Command* element = dynamic_cast<Command*>(BaseClass_ptr1))
	{
		buffer >> element->normalValue;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_Command_value(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (Command* element = dynamic_cast<Command*>(BaseClass_ptr1))
	{
		buffer >> element->value;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_DiscreteValue_Command(BaseClass*, BaseClass*);
bool assign_Command_DiscreteValue(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Command* element = dynamic_cast<Command*>(BaseClass_ptr1);
	DiscreteValue* element2 = dynamic_cast<DiscreteValue*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->DiscreteValue != element2)
		{
			element->DiscreteValue = element2;
			return assign_DiscreteValue_Command(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_ValueAliasSet_Commands(BaseClass*, BaseClass*);
bool assign_Command_ValueAliasSet(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Command* element = dynamic_cast<Command*>(BaseClass_ptr1);
	ValueAliasSet* element2 = dynamic_cast<ValueAliasSet*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ValueAliasSet != element2)
		{
			element->ValueAliasSet = element2;
			return assign_ValueAliasSet_Commands(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



const char Command::debugName[] = "Command";
const char* Command::debugString() const
{
	return Command::debugName;
}

void Command::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:Command"), &Command_factory));
}

void Command::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:Command.normalValue"), &assign_Command_normalValue));
	assign_map.insert(std::make_pair(std::string("cim:Command.value"), &assign_Command_value));
}

void Command::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:Command.DiscreteValue"), &assign_Command_DiscreteValue));
	assign_map.insert(std::make_pair(std::string("cim:Command.ValueAliasSet"), &assign_Command_ValueAliasSet));
}

const BaseClassDefiner Command::declare()
{
	return BaseClassDefiner(Command::addConstructToMap, Command::addPrimitiveAssignFnsToMap, Command::addClassAssignFnsToMap, Command::debugName);
}

namespace CIMPP
{
	BaseClass* Command_factory()
	{
		return new Command;
	}
}
