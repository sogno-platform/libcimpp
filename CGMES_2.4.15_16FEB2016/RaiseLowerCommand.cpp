/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RaiseLowerCommand.hpp"

#include <algorithm>
#include <sstream>

#include "ValueAliasSet.hpp"

using namespace CIMPP;

RaiseLowerCommand::RaiseLowerCommand() : ValueAliasSet(nullptr) {};
RaiseLowerCommand::~RaiseLowerCommand() {};




bool assign_ValueAliasSet_RaiseLowerCommands(BaseClass*, BaseClass*);
bool assign_RaiseLowerCommand_ValueAliasSet(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RaiseLowerCommand* element = dynamic_cast<RaiseLowerCommand*>(BaseClass_ptr1);
	ValueAliasSet* element2 = dynamic_cast<ValueAliasSet*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ValueAliasSet != element2)
		{
			element->ValueAliasSet = element2;
			return assign_ValueAliasSet_RaiseLowerCommands(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char RaiseLowerCommand::debugName[] = "RaiseLowerCommand";
const char* RaiseLowerCommand::debugString() const
{
	return RaiseLowerCommand::debugName;
}

void RaiseLowerCommand::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:RaiseLowerCommand"), &RaiseLowerCommand_factory));
}

void RaiseLowerCommand::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void RaiseLowerCommand::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:RaiseLowerCommand.ValueAliasSet"), &assign_RaiseLowerCommand_ValueAliasSet));
}

const BaseClassDefiner RaiseLowerCommand::declare()
{
	return BaseClassDefiner(RaiseLowerCommand::addConstructToMap, RaiseLowerCommand::addPrimitiveAssignFnsToMap, RaiseLowerCommand::addClassAssignFnsToMap, RaiseLowerCommand::debugName);
}

namespace CIMPP
{
	BaseClass* RaiseLowerCommand_factory()
	{
		return new RaiseLowerCommand;
	}
}
