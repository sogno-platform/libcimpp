/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LoadBreakSwitch.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

LoadBreakSwitch::LoadBreakSwitch() {}
LoadBreakSwitch::~LoadBreakSwitch() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
};

std::list<CGMESProfile>
LoadBreakSwitch::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
LoadBreakSwitch::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ProtectedSwitch::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

const char LoadBreakSwitch::debugName[] = "LoadBreakSwitch";
const char* LoadBreakSwitch::debugString() const
{
	return LoadBreakSwitch::debugName;
}

void LoadBreakSwitch::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:LoadBreakSwitch", &LoadBreakSwitch_factory);
}

void LoadBreakSwitch::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void LoadBreakSwitch::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void LoadBreakSwitch::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ProtectedSwitch::addPrimitiveGetFnsToMap(get_map);
}

void LoadBreakSwitch::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ProtectedSwitch::addClassGetFnsToMap(get_map);
}

void LoadBreakSwitch::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ProtectedSwitch::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner LoadBreakSwitch::declare()
{
	return BaseClassDefiner(LoadBreakSwitch::addConstructToMap, LoadBreakSwitch::addPrimitiveAssignFnsToMap, LoadBreakSwitch::addClassAssignFnsToMap, LoadBreakSwitch::debugName);
}

namespace CIMPP
{
	BaseClass* LoadBreakSwitch_factory()
	{
		return new LoadBreakSwitch;
	}
}
