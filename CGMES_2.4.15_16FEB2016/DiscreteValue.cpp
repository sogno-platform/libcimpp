#include <sstream>
#include "MeasurementValue.hpp"
#include "DiscreteValue.hpp"

#include "Command.hpp"
#include "Discrete.hpp"
#include "Integer.hpp"

using namespace CIMPP;

DiscreteValue::DiscreteValue(): Command(nullptr), Discrete(nullptr) {};

DiscreteValue::~DiscreteValue() {};




bool assign_DiscreteValue_value(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DiscreteValue* element = dynamic_cast<DiscreteValue*>(BaseClass_ptr1)) {
                buffer >> element->value;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_DiscreteValue_Command(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DiscreteValue* element = dynamic_cast<DiscreteValue*>(BaseClass_ptr1)) {
                element->Command = dynamic_cast<Command*>(BaseClass_ptr2);
                if(element->Command != nullptr)
                        return true;
        }
        return false;
}

bool assign_Discrete_DiscreteValues(BaseClass*, BaseClass*);
bool assign_DiscreteValue_Discrete(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DiscreteValue* element = dynamic_cast<DiscreteValue*>(BaseClass_ptr1)) {
                element->Discrete = dynamic_cast<Discrete*>(BaseClass_ptr2);
                if(element->Discrete != nullptr)
                        return assign_Discrete_DiscreteValues(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}


namespace CIMPP {
	BaseClass* DiscreteValue_factory() {
		return new DiscreteValue;
	}
}

void DiscreteValue::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DiscreteValue"), &DiscreteValue_factory));
}

void DiscreteValue::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
			assign_map.insert(std::make_pair(std::string("cim:DiscreteValue.value"), &assign_DiscreteValue_value));
}

void DiscreteValue::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:DiscreteValue.Command"), &assign_DiscreteValue_Command));
	assign_map.insert(std::make_pair(std::string("cim:DiscreteValue.Discrete"), &assign_DiscreteValue_Discrete));
	}

const char DiscreteValue::debugName[] = "DiscreteValue";
const char* DiscreteValue::debugString()
{
	return DiscreteValue::debugName;
}

const BaseClassDefiner DiscreteValue::declare()
{
	return BaseClassDefiner(DiscreteValue::addConstructToMap, DiscreteValue::addPrimitiveAssignFnsToMap, DiscreteValue::addClassAssignFnsToMap, DiscreteValue::debugName);
}
