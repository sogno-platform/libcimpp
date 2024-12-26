/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WaveTrap.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

WaveTrap::WaveTrap() {};
WaveTrap::~WaveTrap() {};



const char WaveTrap::debugName[] = "WaveTrap";
const char* WaveTrap::debugString() const
{
	return WaveTrap::debugName;
}

void WaveTrap::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WaveTrap"), &WaveTrap_factory));
}

void WaveTrap::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WaveTrap::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner WaveTrap::declare()
{
	return BaseClassDefiner(WaveTrap::addConstructToMap, WaveTrap::addPrimitiveAssignFnsToMap, WaveTrap::addClassAssignFnsToMap, WaveTrap::debugName);
}

namespace CIMPP
{
	BaseClass* WaveTrap_factory()
	{
		return new WaveTrap;
	}
}
