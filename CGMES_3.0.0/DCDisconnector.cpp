/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCDisconnector.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

DCDisconnector::DCDisconnector() {}
DCDisconnector::~DCDisconnector() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
};

std::list<CGMESProfile>
DCDisconnector::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
DCDisconnector::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DCSwitch::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

const char DCDisconnector::debugName[] = "DCDisconnector";
const char* DCDisconnector::debugString() const
{
	return DCDisconnector::debugName;
}

void DCDisconnector::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:DCDisconnector", &DCDisconnector_factory);
}

void DCDisconnector::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCDisconnector::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void DCDisconnector::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCSwitch::addPrimitiveGetFnsToMap(get_map);
}

void DCDisconnector::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DCSwitch::addClassGetFnsToMap(get_map);
}

void DCDisconnector::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCSwitch::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner DCDisconnector::declare()
{
	return BaseClassDefiner(DCDisconnector::addConstructToMap, DCDisconnector::addPrimitiveAssignFnsToMap, DCDisconnector::addClassAssignFnsToMap, DCDisconnector::debugName);
}

namespace CIMPP
{
	BaseClass* DCDisconnector_factory()
	{
		return new DCDisconnector;
	}
}
