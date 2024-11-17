#include <sstream>
#include "AnalogControl.hpp"
#include "RaiseLowerCommand.hpp"

#include "ValueAliasSet.hpp"

using namespace CIMPP;

RaiseLowerCommand::RaiseLowerCommand(): ValueAliasSet(nullptr) {};

RaiseLowerCommand::~RaiseLowerCommand() {};




bool assign_ValueAliasSet_RaiseLowerCommands(BaseClass*, BaseClass*);
bool assign_RaiseLowerCommand_ValueAliasSet(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(RaiseLowerCommand* element = dynamic_cast<RaiseLowerCommand*>(BaseClass_ptr1)) {
                element->ValueAliasSet = dynamic_cast<ValueAliasSet*>(BaseClass_ptr2);
                if(element->ValueAliasSet != nullptr)
                        return assign_ValueAliasSet_RaiseLowerCommands(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

namespace CIMPP {
	BaseClass* RaiseLowerCommand_factory() {
		return new RaiseLowerCommand;
	}
}

void RaiseLowerCommand::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:RaiseLowerCommand"), &RaiseLowerCommand_factory));
}

void RaiseLowerCommand::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void RaiseLowerCommand::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:RaiseLowerCommand.ValueAliasSet"), &assign_RaiseLowerCommand_ValueAliasSet));
}

const char RaiseLowerCommand::debugName[] = "RaiseLowerCommand";
const char* RaiseLowerCommand::debugString()
{
	return RaiseLowerCommand::debugName;
}

const BaseClassDefiner RaiseLowerCommand::declare()
{
	return BaseClassDefiner(RaiseLowerCommand::addConstructToMap, RaiseLowerCommand::addPrimitiveAssignFnsToMap, RaiseLowerCommand::addClassAssignFnsToMap, RaiseLowerCommand::debugName);
}
