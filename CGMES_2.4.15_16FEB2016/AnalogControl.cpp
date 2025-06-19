/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AnalogControl.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "AnalogValue.hpp"

using namespace CIMPP;

AnalogControl::AnalogControl() : AnalogValue(nullptr) {}
AnalogControl::~AnalogControl() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:AnalogControl.AnalogValue", { CGMESProfile::EQ, } },
	{ "cim:AnalogControl.maxValue", { CGMESProfile::EQ, } },
	{ "cim:AnalogControl.minValue", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
AnalogControl::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
AnalogControl::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Control::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_AnalogValue_AnalogControl(BaseClass*, BaseClass*);
bool assign_AnalogControl_AnalogValue(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AnalogControl* element = dynamic_cast<AnalogControl*>(BaseClass_ptr1);
	AnalogValue* element2 = dynamic_cast<AnalogValue*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->AnalogValue != element2)
		{
			element->AnalogValue = element2;
			return assign_AnalogValue_AnalogControl(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_AnalogControl_maxValue(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AnalogControl* element = dynamic_cast<AnalogControl*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->maxValue;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_AnalogControl_minValue(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AnalogControl* element = dynamic_cast<AnalogControl*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->minValue;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_AnalogControl_AnalogValue(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const AnalogControl* element = dynamic_cast<const AnalogControl*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->AnalogValue != 0)
		{
			BaseClass_list.push_back(element->AnalogValue);
			return true;
		}
	}
	return false;
}

bool get_AnalogControl_maxValue(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AnalogControl* element = dynamic_cast<const AnalogControl*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->maxValue;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_AnalogControl_minValue(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AnalogControl* element = dynamic_cast<const AnalogControl*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->minValue;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char AnalogControl::debugName[] = "AnalogControl";
const char* AnalogControl::debugString() const
{
	return AnalogControl::debugName;
}

void AnalogControl::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:AnalogControl", &AnalogControl_factory);
}

void AnalogControl::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:AnalogControl.maxValue", &assign_AnalogControl_maxValue);
	assign_map.emplace("cim:AnalogControl.minValue", &assign_AnalogControl_minValue);
}

void AnalogControl::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:AnalogControl.AnalogValue", &assign_AnalogControl_AnalogValue);
}

void AnalogControl::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Control::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:AnalogControl.maxValue", &get_AnalogControl_maxValue);
	get_map.emplace("cim:AnalogControl.minValue", &get_AnalogControl_minValue);
}

void AnalogControl::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Control::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:AnalogControl.AnalogValue", &get_AnalogControl_AnalogValue);
}

void AnalogControl::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Control::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner AnalogControl::declare()
{
	return BaseClassDefiner(AnalogControl::addConstructToMap, AnalogControl::addPrimitiveAssignFnsToMap, AnalogControl::addClassAssignFnsToMap, AnalogControl::debugName);
}

namespace CIMPP
{
	BaseClass* AnalogControl_factory()
	{
		return new AnalogControl;
	}
}
