/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCDisconnector.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

DCDisconnector::DCDisconnector() {};
DCDisconnector::~DCDisconnector() {};



const char DCDisconnector::debugName[] = "DCDisconnector";
const char* DCDisconnector::debugString() const
{
	return DCDisconnector::debugName;
}

void DCDisconnector::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DCDisconnector"), &DCDisconnector_factory));
}

void DCDisconnector::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCDisconnector::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
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
