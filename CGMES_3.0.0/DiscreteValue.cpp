/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DiscreteValue.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Command.hpp"
#include "Discrete.hpp"

using namespace CIMPP;

DiscreteValue::DiscreteValue() : Command(nullptr), Discrete(nullptr) {};
DiscreteValue::~DiscreteValue() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::OP,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:DiscreteValue.Command", { CGMESProfile::OP, } },
	{ "cim:DiscreteValue.Discrete", { CGMESProfile::OP, } },
};

std::list<CGMESProfile>
DiscreteValue::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
DiscreteValue::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = MeasurementValue::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



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


bool get_DiscreteValue_Discrete(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const DiscreteValue* element = dynamic_cast<const DiscreteValue*>(BaseClass_ptr1))
	{
		if (element->Discrete != 0)
		{
			BaseClass_list.push_back(element->Discrete);
			return true;
		}
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

void DiscreteValue::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	MeasurementValue::addPrimitiveGetFnsToMap(get_map);
}

void DiscreteValue::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	MeasurementValue::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:DiscreteValue.Discrete", &get_DiscreteValue_Discrete);
}

void DiscreteValue::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	MeasurementValue::addEnumGetFnsToMap(get_map);
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
