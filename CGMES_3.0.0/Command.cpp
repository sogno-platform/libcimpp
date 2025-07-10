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

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		Command(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::OP,
		},
		CGMESProfile::OP
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "Command.DiscreteValue", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::OP, } } },
		{ "Command.ValueAliasSet", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::OP, } } },
		{ "Command.normalValue", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::OP, } } },
		{ "Command.value", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::OP, } } },
	};
    return ClassAttrDetailsMap;
}

Command::Command() : DiscreteValue(nullptr), ValueAliasSet(nullptr) {}
Command::~Command() {}

const std::list<std::string>& Command::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& Command::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& Command::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& Command::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& Command::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& Command::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& Command::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
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
	factory_map.emplace("Command", &Command_factory);
}

void Command::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("Command.normalValue", &assign_Command_normalValue);
	assign_map.emplace("Command.value", &assign_Command_value);
}

void Command::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("Command.DiscreteValue", &assign_Command_DiscreteValue);
	assign_map.emplace("Command.ValueAliasSet", &assign_Command_ValueAliasSet);
}

void Command::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Control::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("Command.normalValue", &get_Command_normalValue);
	get_map.emplace("Command.value", &get_Command_value);
}

void Command::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Control::addClassGetFnsToMap(get_map);
	get_map.emplace("Command.DiscreteValue", &get_Command_DiscreteValue);
	get_map.emplace("Command.ValueAliasSet", &get_Command_ValueAliasSet);
}

void Command::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Control::addEnumGetFnsToMap(get_map);
}

bool Command::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "Command" &&
		dynamic_cast<Command*>(otherObject) != nullptr;
}

const BaseClassDefiner Command::declare()
{
	return BaseClassDefiner(Command::addConstructToMap, Command::addPrimitiveAssignFnsToMap, Command::addClassAssignFnsToMap, Command::debugName);
}

std::map<std::string, AttrDetails> Command::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = Control::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* Command_factory()
	{
		return new Command;
	}
}
