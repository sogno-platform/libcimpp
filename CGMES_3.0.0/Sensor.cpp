/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Sensor.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

Sensor::Sensor() {};
Sensor::~Sensor() {};



const char Sensor::debugName[] = "Sensor";
const char* Sensor::debugString() const
{
	return Sensor::debugName;
}

void Sensor::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:Sensor"), &Sensor_factory));
}

void Sensor::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Sensor::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner Sensor::declare()
{
	return BaseClassDefiner(Sensor::addConstructToMap, Sensor::addPrimitiveAssignFnsToMap, Sensor::addClassAssignFnsToMap, Sensor::debugName);
}

namespace CIMPP
{
	BaseClass* Sensor_factory()
	{
		return new Sensor;
	}
}
