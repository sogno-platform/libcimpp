/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Disconnector.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

Disconnector::Disconnector() {}
Disconnector::~Disconnector() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
};

std::list<CGMESProfile>
Disconnector::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
Disconnector::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Switch::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

const char Disconnector::debugName[] = "Disconnector";
const char* Disconnector::debugString() const
{
	return Disconnector::debugName;
}

void Disconnector::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:Disconnector", &Disconnector_factory);
}

void Disconnector::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Disconnector::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void Disconnector::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Switch::addPrimitiveGetFnsToMap(get_map);
}

void Disconnector::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Switch::addClassGetFnsToMap(get_map);
}

void Disconnector::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Switch::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner Disconnector::declare()
{
	return BaseClassDefiner(Disconnector::addConstructToMap, Disconnector::addPrimitiveAssignFnsToMap, Disconnector::addClassAssignFnsToMap, Disconnector::debugName);
}

namespace CIMPP
{
	BaseClass* Disconnector_factory()
	{
		return new Disconnector;
	}
}
