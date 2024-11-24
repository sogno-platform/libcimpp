/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WorkLocation.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

WorkLocation::WorkLocation() {};
WorkLocation::~WorkLocation() {};



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
