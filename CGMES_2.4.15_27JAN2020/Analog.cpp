/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Analog.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "AnalogLimitSet.hpp"
#include "AnalogValue.hpp"

using namespace CIMPP;

Analog::Analog() {}
Analog::~Analog() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:Analog.AnalogValues", { CGMESProfile::EQ, } },
	{ "cim:Analog.LimitSets", { CGMESProfile::EQ, } },
	{ "cim:Analog.positiveFlowIn", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
Analog::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
Analog::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Measurement::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_AnalogValue_Analog(BaseClass*, BaseClass*);
bool assign_Analog_AnalogValues(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Analog* element = dynamic_cast<Analog*>(BaseClass_ptr1);
	AnalogValue* element2 = dynamic_cast<AnalogValue*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->AnalogValues.begin(), element->AnalogValues.end(), element2) == element->AnalogValues.end())
		{
			element->AnalogValues.push_back(element2);
			return assign_AnalogValue_Analog(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_AnalogLimitSet_Measurements(BaseClass*, BaseClass*);
bool assign_Analog_LimitSets(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Analog* element = dynamic_cast<Analog*>(BaseClass_ptr1);
	AnalogLimitSet* element2 = dynamic_cast<AnalogLimitSet*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->LimitSets.begin(), element->LimitSets.end(), element2) == element->LimitSets.end())
		{
			element->LimitSets.push_back(element2);
			return assign_AnalogLimitSet_Measurements(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Analog_positiveFlowIn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Analog* element = dynamic_cast<Analog*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->positiveFlowIn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}



bool get_Analog_positiveFlowIn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Analog* element = dynamic_cast<const Analog*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->positiveFlowIn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char Analog::debugName[] = "Analog";
const char* Analog::debugString() const
{
	return Analog::debugName;
}

void Analog::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:Analog", &Analog_factory);
}

void Analog::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:Analog.positiveFlowIn", &assign_Analog_positiveFlowIn);
}

void Analog::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:Analog.AnalogValues", &assign_Analog_AnalogValues);
	assign_map.emplace("cim:Analog.LimitSets", &assign_Analog_LimitSets);
}

void Analog::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Measurement::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:Analog.positiveFlowIn", &get_Analog_positiveFlowIn);
}

void Analog::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Measurement::addClassGetFnsToMap(get_map);
}

void Analog::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Measurement::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner Analog::declare()
{
	return BaseClassDefiner(Analog::addConstructToMap, Analog::addPrimitiveAssignFnsToMap, Analog::addClassAssignFnsToMap, Analog::debugName);
}

namespace CIMPP
{
	BaseClass* Analog_factory()
	{
		return new Analog;
	}
}
