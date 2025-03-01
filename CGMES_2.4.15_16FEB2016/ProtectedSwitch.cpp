/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ProtectedSwitch.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

ProtectedSwitch::ProtectedSwitch() {}
ProtectedSwitch::~ProtectedSwitch() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
};

std::list<CGMESProfile>
ProtectedSwitch::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ProtectedSwitch::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Switch::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

const char ProtectedSwitch::debugName[] = "ProtectedSwitch";
const char* ProtectedSwitch::debugString() const
{
	return ProtectedSwitch::debugName;
}

void ProtectedSwitch::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:ProtectedSwitch", &ProtectedSwitch_factory);
}

void ProtectedSwitch::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void ProtectedSwitch::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ProtectedSwitch::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Switch::addPrimitiveGetFnsToMap(get_map);
}

void ProtectedSwitch::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Switch::addClassGetFnsToMap(get_map);
}

void ProtectedSwitch::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Switch::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ProtectedSwitch::declare()
{
	return BaseClassDefiner(ProtectedSwitch::addConstructToMap, ProtectedSwitch::addPrimitiveAssignFnsToMap, ProtectedSwitch::addClassAssignFnsToMap, ProtectedSwitch::debugName);
}

namespace CIMPP
{
	BaseClass* ProtectedSwitch_factory()
	{
		return new ProtectedSwitch;
	}
}
