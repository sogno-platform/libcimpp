/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PostLineSensor.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PostLineSensor(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::EQ,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
	};
    return ClassAttrDetailsMap;
}

PostLineSensor::PostLineSensor() {}
PostLineSensor::~PostLineSensor() {}

const std::list<std::string>& PostLineSensor::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PostLineSensor::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PostLineSensor::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PostLineSensor::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PostLineSensor::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PostLineSensor::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PostLineSensor::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

const char PostLineSensor::debugName[] = "PostLineSensor";
const char* PostLineSensor::debugString() const
{
	return PostLineSensor::debugName;
}

void PostLineSensor::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PostLineSensor", &PostLineSensor_factory);
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

bool PostLineSensor::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PostLineSensor" &&
		dynamic_cast<PostLineSensor*>(otherObject) != nullptr;
}

const BaseClassDefiner PostLineSensor::declare()
{
	return BaseClassDefiner(PostLineSensor::addConstructToMap, PostLineSensor::addPrimitiveAssignFnsToMap, PostLineSensor::addClassAssignFnsToMap, PostLineSensor::debugName);
}

std::map<std::string, AttrDetails> PostLineSensor::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = Sensor::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PostLineSensor_factory()
	{
		return new PostLineSensor;
	}
}
