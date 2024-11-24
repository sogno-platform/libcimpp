/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCGround.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

DCGround::DCGround() {};
DCGround::~DCGround() {};



const char DCGround::debugName[] = "DCGround";
const char* DCGround::debugString() const
{
	return DCGround::debugName;
}

void DCGround::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DCGround"), &DCGround_factory));
}

void DCGround::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCGround::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner DCGround::declare()
{
	return BaseClassDefiner(DCGround::addConstructToMap, DCGround::addPrimitiveAssignFnsToMap, DCGround::addClassAssignFnsToMap, DCGround::debugName);
}

namespace CIMPP
{
	BaseClass* DCGround_factory()
	{
		return new DCGround;
	}
}
