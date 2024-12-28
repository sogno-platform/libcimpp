/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WorkLocation.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

WorkLocation::WorkLocation() {};
WorkLocation::~WorkLocation() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::GL,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
};

std::list<CGMESProfile>
WorkLocation::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WorkLocation::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Location::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}






const char WorkLocation::debugName[] = "WorkLocation";
const char* WorkLocation::debugString() const
{
	return WorkLocation::debugName;
}

void WorkLocation::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WorkLocation"), &WorkLocation_factory));
}

void WorkLocation::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WorkLocation::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void WorkLocation::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Location::addPrimitiveGetFnsToMap(get_map);
}

void WorkLocation::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Location::addClassGetFnsToMap(get_map);
}

void WorkLocation::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Location::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner WorkLocation::declare()
{
	return BaseClassDefiner(WorkLocation::addConstructToMap, WorkLocation::addPrimitiveAssignFnsToMap, WorkLocation::addClassAssignFnsToMap, WorkLocation::debugName);
}

namespace CIMPP
{
	BaseClass* WorkLocation_factory()
	{
		return new WorkLocation;
	}
}
