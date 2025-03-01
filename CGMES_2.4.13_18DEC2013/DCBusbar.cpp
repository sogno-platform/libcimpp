/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCBusbar.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

DCBusbar::DCBusbar() {}
DCBusbar::~DCBusbar() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
};

std::list<CGMESProfile>
DCBusbar::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
DCBusbar::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DCConductingEquipment::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

const char DCBusbar::debugName[] = "DCBusbar";
const char* DCBusbar::debugString() const
{
	return DCBusbar::debugName;
}

void DCBusbar::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:DCBusbar", &DCBusbar_factory);
}

void DCBusbar::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCBusbar::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void DCBusbar::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCConductingEquipment::addPrimitiveGetFnsToMap(get_map);
}

void DCBusbar::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DCConductingEquipment::addClassGetFnsToMap(get_map);
}

void DCBusbar::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCConductingEquipment::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner DCBusbar::declare()
{
	return BaseClassDefiner(DCBusbar::addConstructToMap, DCBusbar::addPrimitiveAssignFnsToMap, DCBusbar::addClassAssignFnsToMap, DCBusbar::debugName);
}

namespace CIMPP
{
	BaseClass* DCBusbar_factory()
	{
		return new DCBusbar;
	}
}
