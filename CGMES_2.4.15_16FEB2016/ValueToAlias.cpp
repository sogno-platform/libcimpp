#include <sstream>
#include "IdentifiedObject.hpp"
#include "ValueToAlias.hpp"

#include "ValueAliasSet.hpp"
#include "Integer.hpp"

using namespace CIMPP;

ValueToAlias::ValueToAlias() {};

ValueToAlias::~ValueToAlias() {};


bool assign_ValueAliasSet_Values(BaseClass*, BaseClass*);
bool assign_ValueToAlias_ValueAliasSet(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ValueToAlias* element = dynamic_cast<ValueToAlias*>(BaseClass_ptr1)) {
                element->ValueAliasSet = dynamic_cast<ValueAliasSet*>(BaseClass_ptr2);
                if(element->ValueAliasSet != nullptr)
                        return assign_ValueAliasSet_Values(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}




bool assign_ValueToAlias_value(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ValueToAlias* element = dynamic_cast<ValueToAlias*>(BaseClass_ptr1)) {
                buffer >> element->value;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* ValueToAlias_factory() {
		return new ValueToAlias;
	}
}

void ValueToAlias::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ValueToAlias"), &ValueToAlias_factory));
}

void ValueToAlias::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:ValueToAlias.value"), &assign_ValueToAlias_value));
}

void ValueToAlias::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ValueToAlias.ValueAliasSet"), &assign_ValueToAlias_ValueAliasSet));
	}

const char ValueToAlias::debugName[] = "ValueToAlias";
const char* ValueToAlias::debugString()
{
	return ValueToAlias::debugName;
}

const BaseClassDefiner ValueToAlias::declare()
{
	return BaseClassDefiner(ValueToAlias::addConstructToMap, ValueToAlias::addPrimitiveAssignFnsToMap, ValueToAlias::addClassAssignFnsToMap, ValueToAlias::debugName);
}


