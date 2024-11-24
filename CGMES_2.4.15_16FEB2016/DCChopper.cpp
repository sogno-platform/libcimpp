/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCChopper.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

DCChopper::DCChopper() {};
DCChopper::~DCChopper() {};



const char DCChopper::debugName[] = "DCChopper";
const char* DCChopper::debugString() const
{
	return DCChopper::debugName;
}

void DCChopper::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DCChopper"), &DCChopper_factory));
}

void DCChopper::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCChopper::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner DCChopper::declare()
{
	return BaseClassDefiner(DCChopper::addConstructToMap, DCChopper::addPrimitiveAssignFnsToMap, DCChopper::addClassAssignFnsToMap, DCChopper::debugName);
}

namespace CIMPP
{
	BaseClass* DCChopper_factory()
	{
		return new DCChopper;
	}
}
