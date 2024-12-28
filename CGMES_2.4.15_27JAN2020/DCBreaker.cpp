/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCBreaker.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

DCBreaker::DCBreaker() {};
DCBreaker::~DCBreaker() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
};

std::list<CGMESProfile>
DCBreaker::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
DCBreaker::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DCSwitch::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}






const char DCBreaker::debugName[] = "DCBreaker";
const char* DCBreaker::debugString() const
{
	return DCBreaker::debugName;
}

void DCBreaker::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DCBreaker"), &DCBreaker_factory));
}

void DCBreaker::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCBreaker::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void DCBreaker::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCSwitch::addPrimitiveGetFnsToMap(get_map);
}

void DCBreaker::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DCSwitch::addClassGetFnsToMap(get_map);
}

void DCBreaker::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCSwitch::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner DCBreaker::declare()
{
	return BaseClassDefiner(DCBreaker::addConstructToMap, DCBreaker::addPrimitiveAssignFnsToMap, DCBreaker::addClassAssignFnsToMap, DCBreaker::debugName);
}

namespace CIMPP
{
	BaseClass* DCBreaker_factory()
	{
		return new DCBreaker;
	}
}
