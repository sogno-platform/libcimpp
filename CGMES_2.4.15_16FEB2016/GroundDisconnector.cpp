/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GroundDisconnector.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

GroundDisconnector::GroundDisconnector() {};
GroundDisconnector::~GroundDisconnector() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
};

std::list<CGMESProfile>
GroundDisconnector::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GroundDisconnector::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Switch::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}






const char GroundDisconnector::debugName[] = "GroundDisconnector";
const char* GroundDisconnector::debugString() const
{
	return GroundDisconnector::debugName;
}

void GroundDisconnector::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:GroundDisconnector"), &GroundDisconnector_factory));
}

void GroundDisconnector::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void GroundDisconnector::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GroundDisconnector::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Switch::addPrimitiveGetFnsToMap(get_map);
}

void GroundDisconnector::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Switch::addClassGetFnsToMap(get_map);
}

void GroundDisconnector::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Switch::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner GroundDisconnector::declare()
{
	return BaseClassDefiner(GroundDisconnector::addConstructToMap, GroundDisconnector::addPrimitiveAssignFnsToMap, GroundDisconnector::addClassAssignFnsToMap, GroundDisconnector::debugName);
}

namespace CIMPP
{
	BaseClass* GroundDisconnector_factory()
	{
		return new GroundDisconnector;
	}
}
