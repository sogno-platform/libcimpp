/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "StringMeasurement.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "StringMeasurementValue.hpp"

using namespace CIMPP;

StringMeasurement::StringMeasurement() {}
StringMeasurement::~StringMeasurement() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::OP,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:StringMeasurement.StringMeasurementValues", { CGMESProfile::OP, } },
};

std::list<CGMESProfile>
StringMeasurement::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
StringMeasurement::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Measurement::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_StringMeasurementValue_StringMeasurement(BaseClass*, BaseClass*);
bool assign_StringMeasurement_StringMeasurementValues(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	StringMeasurement* element = dynamic_cast<StringMeasurement*>(BaseClass_ptr1);
	StringMeasurementValue* element2 = dynamic_cast<StringMeasurementValue*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->StringMeasurementValues.begin(), element->StringMeasurementValues.end(), element2) == element->StringMeasurementValues.end())
		{
			element->StringMeasurementValues.push_back(element2);
			return assign_StringMeasurementValue_StringMeasurement(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char StringMeasurement::debugName[] = "StringMeasurement";
const char* StringMeasurement::debugString() const
{
	return StringMeasurement::debugName;
}

void StringMeasurement::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:StringMeasurement", &StringMeasurement_factory);
}

void StringMeasurement::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void StringMeasurement::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:StringMeasurement.StringMeasurementValues", &assign_StringMeasurement_StringMeasurementValues);
}

void StringMeasurement::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Measurement::addPrimitiveGetFnsToMap(get_map);
}

void StringMeasurement::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Measurement::addClassGetFnsToMap(get_map);
}

void StringMeasurement::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Measurement::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner StringMeasurement::declare()
{
	return BaseClassDefiner(StringMeasurement::addConstructToMap, StringMeasurement::addPrimitiveAssignFnsToMap, StringMeasurement::addClassAssignFnsToMap, StringMeasurement::debugName);
}

namespace CIMPP
{
	BaseClass* StringMeasurement_factory()
	{
		return new StringMeasurement;
	}
}
