/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DisconnectingCircuitBreaker.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

DisconnectingCircuitBreaker::DisconnectingCircuitBreaker() {};
DisconnectingCircuitBreaker::~DisconnectingCircuitBreaker() {};



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
