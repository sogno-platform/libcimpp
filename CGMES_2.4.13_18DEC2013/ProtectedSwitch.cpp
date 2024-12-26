/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ProtectedSwitch.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

ProtectedSwitch::ProtectedSwitch() {};
ProtectedSwitch::~ProtectedSwitch() {};



const char ProtectedSwitch::debugName[] = "ProtectedSwitch";
const char* ProtectedSwitch::debugString() const
{
	return ProtectedSwitch::debugName;
}

void ProtectedSwitch::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ProtectedSwitch"), &ProtectedSwitch_factory));
}

void ProtectedSwitch::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void ProtectedSwitch::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner ProtectedSwitch::declare()
{
	return BaseClassDefiner(ProtectedSwitch::addConstructToMap, ProtectedSwitch::addPrimitiveAssignFnsToMap, ProtectedSwitch::addClassAssignFnsToMap, ProtectedSwitch::debugName);
}

namespace CIMPP
{
	BaseClass* ProtectedSwitch_factory()
	{
		return new ProtectedSwitch;
	}
}
