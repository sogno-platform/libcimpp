/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GroundDisconnector.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

GroundDisconnector::GroundDisconnector() {};
GroundDisconnector::~GroundDisconnector() {};



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
