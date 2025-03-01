/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Sensor.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

Sensor::Sensor() {}
Sensor::~Sensor() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
};

std::list<CGMESProfile>
Sensor::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
Sensor::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = AuxiliaryEquipment::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

const char Sensor::debugName[] = "Sensor";
const char* Sensor::debugString() const
{
	return Sensor::debugName;
}

void Sensor::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:Sensor", &Sensor_factory);
}

void Sensor::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Sensor::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void Sensor::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AuxiliaryEquipment::addPrimitiveGetFnsToMap(get_map);
}

void Sensor::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	AuxiliaryEquipment::addClassGetFnsToMap(get_map);
}

void Sensor::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AuxiliaryEquipment::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner Sensor::declare()
{
	return BaseClassDefiner(Sensor::addConstructToMap, Sensor::addPrimitiveAssignFnsToMap, Sensor::addClassAssignFnsToMap, Sensor::debugName);
}

namespace CIMPP
{
	BaseClass* Sensor_factory()
	{
		return new Sensor;
	}
}
