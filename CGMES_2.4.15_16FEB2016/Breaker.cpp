/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Breaker.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

Breaker::Breaker() {};
Breaker::~Breaker() {};



const char Breaker::debugName[] = "Breaker";
const char* Breaker::debugString() const
{
	return Breaker::debugName;
}

void Breaker::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:Breaker"), &Breaker_factory));
}

void Breaker::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Breaker::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner Breaker::declare()
{
	return BaseClassDefiner(Breaker::addConstructToMap, Breaker::addPrimitiveAssignFnsToMap, Breaker::addClassAssignFnsToMap, Breaker::debugName);
}

namespace CIMPP
{
	BaseClass* Breaker_factory()
	{
		return new Breaker;
	}
}
