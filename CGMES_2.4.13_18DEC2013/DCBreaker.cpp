/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCBreaker.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

DCBreaker::DCBreaker() {};
DCBreaker::~DCBreaker() {};



const char DCBreaker::debugName[] = "DCBreaker";
const char* DCBreaker::debugString() const
{
	return DCBreaker::debugName;
}

void DCBreaker::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DCBreaker"), &DCBreaker_factory));
}

void DCBreaker::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCBreaker::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner DCBreaker::declare()
{
	return BaseClassDefiner(DCBreaker::addConstructToMap, DCBreaker::addPrimitiveAssignFnsToMap, DCBreaker::addClassAssignFnsToMap, DCBreaker::debugName);
}

namespace CIMPP
{
	BaseClass* DCBreaker_factory()
	{
		return new DCBreaker;
	}
}
