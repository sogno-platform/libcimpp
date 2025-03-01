/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VoltageLimit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

VoltageLimit::VoltageLimit() {}
VoltageLimit::~VoltageLimit() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:VoltageLimit.value", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
VoltageLimit::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
VoltageLimit::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = OperationalLimit::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_VoltageLimit_value(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VoltageLimit* element = dynamic_cast<VoltageLimit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->value;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_VoltageLimit_value(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VoltageLimit* element = dynamic_cast<const VoltageLimit*>(BaseClass_ptr1);
	if (element != nullptr)
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

const char VoltageLimit::debugName[] = "VoltageLimit";
const char* VoltageLimit::debugString() const
{
	return VoltageLimit::debugName;
}

void VoltageLimit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:VoltageLimit", &VoltageLimit_factory);
}

void VoltageLimit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:VoltageLimit.value", &assign_VoltageLimit_value);
}

void VoltageLimit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void VoltageLimit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OperationalLimit::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:VoltageLimit.value", &get_VoltageLimit_value);
}

void VoltageLimit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	OperationalLimit::addClassGetFnsToMap(get_map);
}

void VoltageLimit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OperationalLimit::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner VoltageLimit::declare()
{
	return BaseClassDefiner(VoltageLimit::addConstructToMap, VoltageLimit::addPrimitiveAssignFnsToMap, VoltageLimit::addClassAssignFnsToMap, VoltageLimit::debugName);
}

namespace CIMPP
{
	BaseClass* VoltageLimit_factory()
	{
		return new VoltageLimit;
	}
}
