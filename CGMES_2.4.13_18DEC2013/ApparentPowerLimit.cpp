/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ApparentPowerLimit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ApparentPower.hpp"

using namespace CIMPP;

ApparentPowerLimit::ApparentPowerLimit() {};
ApparentPowerLimit::~ApparentPowerLimit() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ApparentPowerLimit.value", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
ApparentPowerLimit::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ApparentPowerLimit::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = OperationalLimit::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_ApparentPowerLimit_value(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ApparentPowerLimit* element = dynamic_cast<ApparentPowerLimit*>(BaseClass_ptr1))
	{
		buffer >> element->value;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_ApparentPowerLimit_value(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ApparentPowerLimit* element = dynamic_cast<const ApparentPowerLimit*>(BaseClass_ptr1))
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



const char ApparentPowerLimit::debugName[] = "ApparentPowerLimit";
const char* ApparentPowerLimit::debugString() const
{
	return ApparentPowerLimit::debugName;
}

void ApparentPowerLimit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ApparentPowerLimit"), &ApparentPowerLimit_factory));
}

void ApparentPowerLimit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ApparentPowerLimit.value"), &assign_ApparentPowerLimit_value));
}

void ApparentPowerLimit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ApparentPowerLimit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OperationalLimit::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ApparentPowerLimit.value", &get_ApparentPowerLimit_value);
}

void ApparentPowerLimit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	OperationalLimit::addClassGetFnsToMap(get_map);
}

void ApparentPowerLimit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OperationalLimit::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ApparentPowerLimit::declare()
{
	return BaseClassDefiner(ApparentPowerLimit::addConstructToMap, ApparentPowerLimit::addPrimitiveAssignFnsToMap, ApparentPowerLimit::addClassAssignFnsToMap, ApparentPowerLimit::debugName);
}

namespace CIMPP
{
	BaseClass* ApparentPowerLimit_factory()
	{
		return new ApparentPowerLimit;
	}
}
