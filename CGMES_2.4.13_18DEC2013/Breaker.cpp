/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Breaker.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

Breaker::Breaker() {}
Breaker::~Breaker() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
};

std::list<CGMESProfile>
Breaker::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
Breaker::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ProtectedSwitch::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

const char Breaker::debugName[] = "Breaker";
const char* Breaker::debugString() const
{
	return Breaker::debugName;
}

void Breaker::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:Breaker", &Breaker_factory);
}

void Breaker::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Breaker::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void Breaker::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ProtectedSwitch::addPrimitiveGetFnsToMap(get_map);
}

void Breaker::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ProtectedSwitch::addClassGetFnsToMap(get_map);
}

void Breaker::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ProtectedSwitch::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner Breaker::declare()
{
	return BaseClassDefiner(Breaker::addConstructToMap, Breaker::addPrimitiveAssignFnsToMap, Breaker::addClassAssignFnsToMap, Breaker::debugName);
}

namespace CIMPP
{
	BaseClass* Breaker_factory()
	{
		return new Breaker;
	}
}
