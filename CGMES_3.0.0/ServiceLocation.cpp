/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ServiceLocation.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

ServiceLocation::ServiceLocation() {};
ServiceLocation::~ServiceLocation() {};



const char ServiceLocation::debugName[] = "ServiceLocation";
const char* ServiceLocation::debugString() const
{
	return ServiceLocation::debugName;
}

void ServiceLocation::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ServiceLocation"), &ServiceLocation_factory));
}

void ServiceLocation::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void ServiceLocation::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
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
