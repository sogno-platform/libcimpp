/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WaveTrap.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

WaveTrap::WaveTrap() {};
WaveTrap::~WaveTrap() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
};

std::list<CGMESProfile>
WaveTrap::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WaveTrap::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = AuxiliaryEquipment::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}






const char WaveTrap::debugName[] = "WaveTrap";
const char* WaveTrap::debugString() const
{
	return WaveTrap::debugName;
}

void WaveTrap::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WaveTrap"), &WaveTrap_factory));
}

void WaveTrap::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WaveTrap::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void WaveTrap::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AuxiliaryEquipment::addPrimitiveGetFnsToMap(get_map);
}

void WaveTrap::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	AuxiliaryEquipment::addClassGetFnsToMap(get_map);
}

void WaveTrap::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AuxiliaryEquipment::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner WaveTrap::declare()
{
	return BaseClassDefiner(WaveTrap::addConstructToMap, WaveTrap::addPrimitiveAssignFnsToMap, WaveTrap::addClassAssignFnsToMap, WaveTrap::debugName);
}

namespace CIMPP
{
	BaseClass* WaveTrap_factory()
	{
		return new WaveTrap;
	}
}
