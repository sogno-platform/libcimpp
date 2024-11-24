/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCSwitch.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

DCSwitch::DCSwitch() {};
DCSwitch::~DCSwitch() {};



const char DCSwitch::debugName[] = "DCSwitch";
const char* DCSwitch::debugString() const
{
	return DCSwitch::debugName;
}

void DCSwitch::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DCSwitch"), &DCSwitch_factory));
}

void DCSwitch::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCSwitch::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner DCSwitch::declare()
{
	return BaseClassDefiner(DCSwitch::addConstructToMap, DCSwitch::addPrimitiveAssignFnsToMap, DCSwitch::addClassAssignFnsToMap, DCSwitch::debugName);
}

namespace CIMPP
{
	BaseClass* DCSwitch_factory()
	{
		return new DCSwitch;
	}
}
