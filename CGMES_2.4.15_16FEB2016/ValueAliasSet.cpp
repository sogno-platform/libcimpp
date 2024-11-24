/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ValueAliasSet.hpp"

#include <algorithm>
#include <sstream>

#include "Command.hpp"
#include "Discrete.hpp"
#include "RaiseLowerCommand.hpp"
#include "ValueToAlias.hpp"

using namespace CIMPP;

ValueAliasSet::ValueAliasSet() {};
ValueAliasSet::~ValueAliasSet() {};







bool assign_Command_ValueAliasSet(BaseClass*, BaseClass*);
bool assign_ValueAliasSet_Commands(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ValueAliasSet* element = dynamic_cast<ValueAliasSet*>(BaseClass_ptr1);
	Command* element2 = dynamic_cast<Command*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Commands.begin(), element->Commands.end(), element2) == element->Commands.end())
		{
			element->Commands.push_back(element2);
			return assign_Command_ValueAliasSet(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Discrete_ValueAliasSet(BaseClass*, BaseClass*);
bool assign_ValueAliasSet_Discretes(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ValueAliasSet* element = dynamic_cast<ValueAliasSet*>(BaseClass_ptr1);
	Discrete* element2 = dynamic_cast<Discrete*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Discretes.begin(), element->Discretes.end(), element2) == element->Discretes.end())
		{
			element->Discretes.push_back(element2);
			return assign_Discrete_ValueAliasSet(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_RaiseLowerCommand_ValueAliasSet(BaseClass*, BaseClass*);
bool assign_ValueAliasSet_RaiseLowerCommands(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ValueAliasSet* element = dynamic_cast<ValueAliasSet*>(BaseClass_ptr1);
	RaiseLowerCommand* element2 = dynamic_cast<RaiseLowerCommand*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->RaiseLowerCommands.begin(), element->RaiseLowerCommands.end(), element2) == element->RaiseLowerCommands.end())
		{
			element->RaiseLowerCommands.push_back(element2);
			return assign_RaiseLowerCommand_ValueAliasSet(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_ValueToAlias_ValueAliasSet(BaseClass*, BaseClass*);
bool assign_ValueAliasSet_Values(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ValueAliasSet* element = dynamic_cast<ValueAliasSet*>(BaseClass_ptr1);
	ValueToAlias* element2 = dynamic_cast<ValueToAlias*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Values.begin(), element->Values.end(), element2) == element->Values.end())
		{
			element->Values.push_back(element2);
			return assign_ValueToAlias_ValueAliasSet(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char ValueAliasSet::debugName[] = "ValueAliasSet";
const char* ValueAliasSet::debugString() const
{
	return ValueAliasSet::debugName;
}

void ValueAliasSet::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ValueAliasSet"), &ValueAliasSet_factory));
}

void ValueAliasSet::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void ValueAliasSet::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ValueAliasSet.Commands"), &assign_ValueAliasSet_Commands));
	assign_map.insert(std::make_pair(std::string("cim:ValueAliasSet.Discretes"), &assign_ValueAliasSet_Discretes));
	assign_map.insert(std::make_pair(std::string("cim:ValueAliasSet.RaiseLowerCommands"), &assign_ValueAliasSet_RaiseLowerCommands));
	assign_map.insert(std::make_pair(std::string("cim:ValueAliasSet.Values"), &assign_ValueAliasSet_Values));
}

const BaseClassDefiner ValueAliasSet::declare()
{
	return BaseClassDefiner(ValueAliasSet::addConstructToMap, ValueAliasSet::addPrimitiveAssignFnsToMap, ValueAliasSet::addClassAssignFnsToMap, ValueAliasSet::debugName);
}

namespace CIMPP
{
	BaseClass* ValueAliasSet_factory()
	{
		return new ValueAliasSet;
	}
}
