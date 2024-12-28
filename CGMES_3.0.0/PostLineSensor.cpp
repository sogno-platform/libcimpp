/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PostLineSensor.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

PostLineSensor::PostLineSensor() {};
PostLineSensor::~PostLineSensor() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
};

std::list<CGMESProfile>
PostLineSensor::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PostLineSensor::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Sensor::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}






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

void PostLineSensor::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Sensor::addPrimitiveGetFnsToMap(get_map);
}

void PostLineSensor::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Sensor::addClassGetFnsToMap(get_map);
}

void PostLineSensor::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Sensor::addEnumGetFnsToMap(get_map);
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
