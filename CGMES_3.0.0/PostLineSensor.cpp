/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PostLineSensor.hpp"

#include <algorithm>
#include <sstream>


using namespace CIMPP;

PostLineSensor::PostLineSensor() {};
PostLineSensor::~PostLineSensor() {};



const char PostLineSensor::debugName[] = "PostLineSensor";
const char* PostLineSensor::debugString() const
{
	return PostLineSensor::debugName;
}

void PostLineSensor::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PostLineSensor"), &PostLineSensor_factory));
}

void PostLineSensor::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void PostLineSensor::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner PostLineSensor::declare()
{
	return BaseClassDefiner(PostLineSensor::addConstructToMap, PostLineSensor::addPrimitiveAssignFnsToMap, PostLineSensor::addClassAssignFnsToMap, PostLineSensor::debugName);
}

namespace CIMPP
{
	BaseClass* PostLineSensor_factory()
	{
		return new PostLineSensor;
	}
}
