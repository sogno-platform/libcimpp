/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WorkLocation.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WorkLocation(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::GL,
		},
		CGMESProfile::GL
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

WorkLocation::WorkLocation() {}
WorkLocation::~WorkLocation() {}

const std::list<std::string>& WorkLocation::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WorkLocation::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WorkLocation::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WorkLocation::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WorkLocation::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WorkLocation::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WorkLocation::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

const char WorkLocation::debugName[] = "WorkLocation";
const char* WorkLocation::debugString() const
{
	return WorkLocation::debugName;
}

void WorkLocation::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WorkLocation", &WorkLocation_factory);
}

void WorkLocation::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WorkLocation::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void WorkLocation::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Location::addPrimitiveGetFnsToMap(get_map);
}

void WorkLocation::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Location::addClassGetFnsToMap(get_map);
}

void WorkLocation::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Location::addEnumGetFnsToMap(get_map);
}

bool WorkLocation::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WorkLocation" &&
		dynamic_cast<WorkLocation*>(otherObject) != nullptr;
}

const BaseClassDefiner WorkLocation::declare()
{
	return BaseClassDefiner(WorkLocation::addConstructToMap, WorkLocation::addPrimitiveAssignFnsToMap, WorkLocation::addClassAssignFnsToMap, WorkLocation::debugName);
}

std::map<std::string, AttrDetails> WorkLocation::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = Location::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WorkLocation_factory()
	{
		return new WorkLocation;
	}
}
