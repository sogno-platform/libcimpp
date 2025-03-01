/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ServiceLocation.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

ServiceLocation::ServiceLocation() {}
ServiceLocation::~ServiceLocation() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::GL,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
};

std::list<CGMESProfile>
ServiceLocation::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ServiceLocation::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = WorkLocation::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

const char ServiceLocation::debugName[] = "ServiceLocation";
const char* ServiceLocation::debugString() const
{
	return ServiceLocation::debugName;
}

void ServiceLocation::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:ServiceLocation", &ServiceLocation_factory);
}

void ServiceLocation::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void ServiceLocation::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ServiceLocation::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WorkLocation::addPrimitiveGetFnsToMap(get_map);
}

void ServiceLocation::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WorkLocation::addClassGetFnsToMap(get_map);
}

void ServiceLocation::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WorkLocation::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ServiceLocation::declare()
{
	return BaseClassDefiner(ServiceLocation::addConstructToMap, ServiceLocation::addPrimitiveAssignFnsToMap, ServiceLocation::addClassAssignFnsToMap, ServiceLocation::debugName);
}

namespace CIMPP
{
	BaseClass* ServiceLocation_factory()
	{
		return new ServiceLocation;
	}
}
