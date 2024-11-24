/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Ground.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

Ground::Ground() {};
Ground::~Ground() {};



const char Ground::debugName[] = "Ground";
const char* Ground::debugString() const
{
	return Ground::debugName;
}

void Ground::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:Ground"), &Ground_factory));
}

void Ground::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Ground::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner Ground::declare()
{
	return BaseClassDefiner(Ground::addConstructToMap, Ground::addPrimitiveAssignFnsToMap, Ground::addClassAssignFnsToMap, Ground::debugName);
}

namespace CIMPP
{
	BaseClass* Ground_factory()
	{
		return new Ground;
	}
}
