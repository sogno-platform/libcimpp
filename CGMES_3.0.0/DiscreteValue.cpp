/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DiscreteValue.hpp"

#include <algorithm>
#include <sstream>

#include "Command.hpp"
#include "Discrete.hpp"

using namespace CIMPP;

DiscreteValue::DiscreteValue() : Command(nullptr), Discrete(nullptr) {};
DiscreteValue::~DiscreteValue() {};





bool assign_Command_DiscreteValue(BaseClass*, BaseClass*);
bool assign_DiscreteValue_Command(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DiscreteValue* element = dynamic_cast<DiscreteValue*>(BaseClass_ptr1);
	Command* element2 = dynamic_cast<Command*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Command != element2)
		{
			element->Command = element2;
			return assign_Command_DiscreteValue(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Discrete_DiscreteValues(BaseClass*, BaseClass*);
bool assign_DiscreteValue_Discrete(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DiscreteValue* element = dynamic_cast<DiscreteValue*>(BaseClass_ptr1);
	Discrete* element2 = dynamic_cast<Discrete*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Discrete != element2)
		{
			element->Discrete = element2;
			return assign_Discrete_DiscreteValues(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char DiscreteValue::debugName[] = "DiscreteValue";
const char* DiscreteValue::debugString() const
{
	return DiscreteValue::debugName;
}

void DiscreteValue::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DiscreteValue"), &DiscreteValue_factory));
}

void DiscreteValue::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DiscreteValue::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:DiscreteValue.Command"), &assign_DiscreteValue_Command));
	assign_map.insert(std::make_pair(std::string("cim:DiscreteValue.Discrete"), &assign_DiscreteValue_Discrete));
}

const BaseClassDefiner DiscreteValue::declare()
{
	return BaseClassDefiner(DiscreteValue::addConstructToMap, DiscreteValue::addPrimitiveAssignFnsToMap, DiscreteValue::addClassAssignFnsToMap, DiscreteValue::debugName);
}

namespace CIMPP
{
	BaseClass* DiscreteValue_factory()
	{
		return new DiscreteValue;
	}
}
