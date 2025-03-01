/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PhotoVoltaicUnit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

PhotoVoltaicUnit::PhotoVoltaicUnit() {}
PhotoVoltaicUnit::~PhotoVoltaicUnit() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
};

std::list<CGMESProfile>
PhotoVoltaicUnit::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PhotoVoltaicUnit::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PowerElectronicsUnit::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

const char PhotoVoltaicUnit::debugName[] = "PhotoVoltaicUnit";
const char* PhotoVoltaicUnit::debugString() const
{
	return PhotoVoltaicUnit::debugName;
}

void PhotoVoltaicUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:PhotoVoltaicUnit", &PhotoVoltaicUnit_factory);
}

void PhotoVoltaicUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void PhotoVoltaicUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PhotoVoltaicUnit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerElectronicsUnit::addPrimitiveGetFnsToMap(get_map);
}

void PhotoVoltaicUnit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerElectronicsUnit::addClassGetFnsToMap(get_map);
}

void PhotoVoltaicUnit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerElectronicsUnit::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PhotoVoltaicUnit::declare()
{
	return BaseClassDefiner(PhotoVoltaicUnit::addConstructToMap, PhotoVoltaicUnit::addPrimitiveAssignFnsToMap, PhotoVoltaicUnit::addClassAssignFnsToMap, PhotoVoltaicUnit::debugName);
}

namespace CIMPP
{
	BaseClass* PhotoVoltaicUnit_factory()
	{
		return new PhotoVoltaicUnit;
	}
}
