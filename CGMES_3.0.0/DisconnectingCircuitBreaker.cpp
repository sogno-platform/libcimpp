/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DisconnectingCircuitBreaker.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

DisconnectingCircuitBreaker::DisconnectingCircuitBreaker() {};
DisconnectingCircuitBreaker::~DisconnectingCircuitBreaker() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
};

std::list<CGMESProfile>
DisconnectingCircuitBreaker::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
DisconnectingCircuitBreaker::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Breaker::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}






const char DisconnectingCircuitBreaker::debugName[] = "DisconnectingCircuitBreaker";
const char* DisconnectingCircuitBreaker::debugString() const
{
	return DisconnectingCircuitBreaker::debugName;
}

void DisconnectingCircuitBreaker::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DisconnectingCircuitBreaker"), &DisconnectingCircuitBreaker_factory));
}

void DisconnectingCircuitBreaker::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DisconnectingCircuitBreaker::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void DisconnectingCircuitBreaker::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Breaker::addPrimitiveGetFnsToMap(get_map);
}

void DisconnectingCircuitBreaker::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Breaker::addClassGetFnsToMap(get_map);
}

void DisconnectingCircuitBreaker::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Breaker::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner DisconnectingCircuitBreaker::declare()
{
	return BaseClassDefiner(DisconnectingCircuitBreaker::addConstructToMap, DisconnectingCircuitBreaker::addPrimitiveAssignFnsToMap, DisconnectingCircuitBreaker::addClassAssignFnsToMap, DisconnectingCircuitBreaker::debugName);
}

namespace CIMPP
{
	BaseClass* DisconnectingCircuitBreaker_factory()
	{
		return new DisconnectingCircuitBreaker;
	}
}
