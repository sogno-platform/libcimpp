/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PhotoVoltaicUnit.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

PhotoVoltaicUnit::PhotoVoltaicUnit() {};
PhotoVoltaicUnit::~PhotoVoltaicUnit() {};



const char PhotoVoltaicUnit::debugName[] = "PhotoVoltaicUnit";
const char* PhotoVoltaicUnit::debugString() const
{
	return PhotoVoltaicUnit::debugName;
}

void PhotoVoltaicUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PhotoVoltaicUnit"), &PhotoVoltaicUnit_factory));
}

void PhotoVoltaicUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void PhotoVoltaicUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner PhotoVoltaicUnit::declare()
{
	return BaseClassDefiner(PhotoVoltaicUnit::addConstructToMap, PhotoVoltaicUnit::addPrimitiveAssignFnsToMap, PhotoVoltaicUnit::addClassAssignFnsToMap, PhotoVoltaicUnit::debugName);
}

namespace CIMPP
{
	BaseClass* PhotoVoltaicUnit_factory()
	{
		return new PhotoVoltaicUnit;
	}
}
