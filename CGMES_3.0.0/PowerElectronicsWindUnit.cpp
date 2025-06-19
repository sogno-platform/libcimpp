/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PowerElectronicsWindUnit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

PowerElectronicsWindUnit::PowerElectronicsWindUnit() {}
PowerElectronicsWindUnit::~PowerElectronicsWindUnit() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
};

std::list<CGMESProfile>
PowerElectronicsWindUnit::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PowerElectronicsWindUnit::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PowerElectronicsUnit::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

const char PowerElectronicsWindUnit::debugName[] = "PowerElectronicsWindUnit";
const char* PowerElectronicsWindUnit::debugString() const
{
	return PowerElectronicsWindUnit::debugName;
}

void PowerElectronicsWindUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:PowerElectronicsWindUnit", &PowerElectronicsWindUnit_factory);
}

void PowerElectronicsWindUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void PowerElectronicsWindUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PowerElectronicsWindUnit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerElectronicsUnit::addPrimitiveGetFnsToMap(get_map);
}

void PowerElectronicsWindUnit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerElectronicsUnit::addClassGetFnsToMap(get_map);
}

void PowerElectronicsWindUnit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerElectronicsUnit::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PowerElectronicsWindUnit::declare()
{
	return BaseClassDefiner(PowerElectronicsWindUnit::addConstructToMap, PowerElectronicsWindUnit::addPrimitiveAssignFnsToMap, PowerElectronicsWindUnit::addClassAssignFnsToMap, PowerElectronicsWindUnit::debugName);
}

namespace CIMPP
{
	BaseClass* PowerElectronicsWindUnit_factory()
	{
		return new PowerElectronicsWindUnit;
	}
}
