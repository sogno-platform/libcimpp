/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCGround.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

DCGround::DCGround() {}
DCGround::~DCGround() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
};

std::list<CGMESProfile>
DCGround::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
DCGround::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DCConductingEquipment::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

const char DCGround::debugName[] = "DCGround";
const char* DCGround::debugString() const
{
	return DCGround::debugName;
}

void DCGround::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:DCGround", &DCGround_factory);
}

void DCGround::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCGround::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void DCGround::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCConductingEquipment::addPrimitiveGetFnsToMap(get_map);
}

void DCGround::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DCConductingEquipment::addClassGetFnsToMap(get_map);
}

void DCGround::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCConductingEquipment::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner DCGround::declare()
{
	return BaseClassDefiner(DCGround::addConstructToMap, DCGround::addPrimitiveAssignFnsToMap, DCGround::addClassAssignFnsToMap, DCGround::debugName);
}

namespace CIMPP
{
	BaseClass* DCGround_factory()
	{
		return new DCGround;
	}
}
