/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AnalogValue.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Analog.hpp"
#include "AnalogControl.hpp"
#include "Simple_Float.hpp"

using namespace CIMPP;

AnalogValue::AnalogValue() : Analog(nullptr), AnalogControl(nullptr) {};
AnalogValue::~AnalogValue() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:AnalogValue.Analog", { CGMESProfile::EQ, } },
	{ "cim:AnalogValue.AnalogControl", { CGMESProfile::EQ, } },
	{ "cim:AnalogValue.value", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
AnalogValue::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
AnalogValue::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = MeasurementValue::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_AnalogValue_value(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AnalogValue* element = dynamic_cast<AnalogValue*>(BaseClass_ptr1))
	{
		buffer >> element->value;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_Analog_AnalogValues(BaseClass*, BaseClass*);
bool assign_AnalogValue_Analog(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AnalogValue* element = dynamic_cast<AnalogValue*>(BaseClass_ptr1);
	Analog* element2 = dynamic_cast<Analog*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Analog != element2)
		{
			element->Analog = element2;
			return assign_Analog_AnalogValues(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_AnalogControl_AnalogValue(BaseClass*, BaseClass*);
bool assign_AnalogValue_AnalogControl(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AnalogValue* element = dynamic_cast<AnalogValue*>(BaseClass_ptr1);
	AnalogControl* element2 = dynamic_cast<AnalogControl*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->AnalogControl != element2)
		{
			element->AnalogControl = element2;
			return assign_AnalogControl_AnalogValue(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_AnalogValue_value(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const AnalogValue* element = dynamic_cast<const AnalogValue*>(BaseClass_ptr1))
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


bool get_AnalogValue_Analog(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const AnalogValue* element = dynamic_cast<const AnalogValue*>(BaseClass_ptr1))
	{
		if (element->Analog != 0)
		{
			BaseClass_list.push_back(element->Analog);
			return true;
		}
	}
	return false;
}


const char AnalogValue::debugName[] = "AnalogValue";
const char* AnalogValue::debugString() const
{
	return AnalogValue::debugName;
}

void AnalogValue::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:AnalogValue"), &AnalogValue_factory));
}

void AnalogValue::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:AnalogValue.value"), &assign_AnalogValue_value));
}

void AnalogValue::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:AnalogValue.Analog"), &assign_AnalogValue_Analog));
	assign_map.insert(std::make_pair(std::string("cim:AnalogValue.AnalogControl"), &assign_AnalogValue_AnalogControl));
}

void AnalogValue::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	MeasurementValue::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:AnalogValue.value", &get_AnalogValue_value);
}

void AnalogValue::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	MeasurementValue::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:AnalogValue.Analog", &get_AnalogValue_Analog);
}

void AnalogValue::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	MeasurementValue::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner AnalogValue::declare()
{
	return BaseClassDefiner(AnalogValue::addConstructToMap, AnalogValue::addPrimitiveAssignFnsToMap, AnalogValue::addClassAssignFnsToMap, AnalogValue::debugName);
}

namespace CIMPP
{
	BaseClass* AnalogValue_factory()
	{
		return new AnalogValue;
	}
}
