/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Command.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "DiscreteValue.hpp"
#include "ValueAliasSet.hpp"

using namespace CIMPP;

Command::Command() : DiscreteValue(nullptr), ValueAliasSet(nullptr) {}
Command::~Command() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:Command.DiscreteValue", { CGMESProfile::EQ, } },
	{ "cim:Command.ValueAliasSet", { CGMESProfile::EQ, } },
	{ "cim:Command.normalValue", { CGMESProfile::EQ, } },
	{ "cim:Command.value", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
Command::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
Command::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Control::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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

bool assign_Command_normalValue(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Command* element = dynamic_cast<Command*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->normalValue;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Command_value(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Command* element = dynamic_cast<Command*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->value;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_Command_DiscreteValue(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const Command* element = dynamic_cast<const Command*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->DiscreteValue != 0)
		{
			BaseClass_list.push_back(element->DiscreteValue);
			return true;
		}
	}
	return false;
}

bool get_Command_ValueAliasSet(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const Command* element = dynamic_cast<const Command*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->ValueAliasSet != 0)
		{
			BaseClass_list.push_back(element->ValueAliasSet);
			return true;
		}
	}
	return false;
}

bool get_Command_normalValue(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Command* element = dynamic_cast<const Command*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->normalValue;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Command_value(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Command* element = dynamic_cast<const Command*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->value;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char Command::debugName[] = "Command";
const char* Command::debugString() const
{
	return Command::debugName;
}

void Command::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:Command", &Command_factory);
}

void Command::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:Command.normalValue", &assign_Command_normalValue);
	assign_map.emplace("cim:Command.value", &assign_Command_value);
}

void Command::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:Command.DiscreteValue", &assign_Command_DiscreteValue);
	assign_map.emplace("cim:Command.ValueAliasSet", &assign_Command_ValueAliasSet);
}

void Command::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Control::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:Command.normalValue", &get_Command_normalValue);
	get_map.emplace("cim:Command.value", &get_Command_value);
}

void Command::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Control::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:Command.DiscreteValue", &get_Command_DiscreteValue);
	get_map.emplace("cim:Command.ValueAliasSet", &get_Command_ValueAliasSet);
}

void Command::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Control::addEnumGetFnsToMap(get_map);
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
