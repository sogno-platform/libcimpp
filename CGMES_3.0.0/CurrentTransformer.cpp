/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CurrentTransformer.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		CurrentTransformer(),
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

CurrentTransformer::CurrentTransformer() {}
CurrentTransformer::~CurrentTransformer() {}

const std::list<std::string>& CurrentTransformer::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& CurrentTransformer::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& CurrentTransformer::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& CurrentTransformer::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& CurrentTransformer::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& CurrentTransformer::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& CurrentTransformer::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

const char CurrentTransformer::debugName[] = "CurrentTransformer";
const char* CurrentTransformer::debugString() const
{
	return CurrentTransformer::debugName;
}

void CurrentTransformer::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("CurrentTransformer", &CurrentTransformer_factory);
}

void CurrentTransformer::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void CurrentTransformer::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void CurrentTransformer::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Sensor::addPrimitiveGetFnsToMap(get_map);
}

void CurrentTransformer::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Sensor::addClassGetFnsToMap(get_map);
}

void CurrentTransformer::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Sensor::addEnumGetFnsToMap(get_map);
}

bool CurrentTransformer::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "CurrentTransformer" &&
		dynamic_cast<CurrentTransformer*>(otherObject) != nullptr;
}

const BaseClassDefiner CurrentTransformer::declare()
{
	return BaseClassDefiner(CurrentTransformer::addConstructToMap, CurrentTransformer::addPrimitiveAssignFnsToMap, CurrentTransformer::addClassAssignFnsToMap, CurrentTransformer::debugName);
}

std::map<std::string, AttrDetails> CurrentTransformer::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = Sensor::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* CurrentTransformer_factory()
	{
		return new CurrentTransformer;
	}
}
