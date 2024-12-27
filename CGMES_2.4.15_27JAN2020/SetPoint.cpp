/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SetPoint.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Simple_Float.hpp"
#include "Simple_Float.hpp"

using namespace CIMPP;

SetPoint::SetPoint() {};
SetPoint::~SetPoint() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:SetPoint.normalValue", { CGMESProfile::EQ, } },
	{ "cim:SetPoint.value", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
SetPoint::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
SetPoint::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = AnalogControl::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_SetPoint_normalValue(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SetPoint* element = dynamic_cast<SetPoint*>(BaseClass_ptr1))
	{
		buffer >> element->normalValue;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SetPoint_value(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SetPoint* element = dynamic_cast<SetPoint*>(BaseClass_ptr1))
	{
		buffer >> element->value;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_SetPoint_normalValue(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SetPoint* element = dynamic_cast<const SetPoint*>(BaseClass_ptr1))
	{
		buffer << element->normalValue;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_SetPoint_value(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const SetPoint* element = dynamic_cast<const SetPoint*>(BaseClass_ptr1))
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



const char SetPoint::debugName[] = "SetPoint";
const char* SetPoint::debugString() const
{
	return SetPoint::debugName;
}

void SetPoint::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:SetPoint"), &SetPoint_factory));
}

void SetPoint::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SetPoint.normalValue"), &assign_SetPoint_normalValue));
	assign_map.insert(std::make_pair(std::string("cim:SetPoint.value"), &assign_SetPoint_value));
}

void SetPoint::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void SetPoint::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AnalogControl::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:SetPoint.normalValue", &get_SetPoint_normalValue);
	get_map.emplace("cim:SetPoint.value", &get_SetPoint_value);
}

void SetPoint::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	AnalogControl::addClassGetFnsToMap(get_map);
}

void SetPoint::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AnalogControl::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner SetPoint::declare()
{
	return BaseClassDefiner(SetPoint::addConstructToMap, SetPoint::addPrimitiveAssignFnsToMap, SetPoint::addClassAssignFnsToMap, SetPoint::debugName);
}

namespace CIMPP
{
	BaseClass* SetPoint_factory()
	{
		return new SetPoint;
	}
}
