/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCBreaker.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		DCBreaker(),
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

DCBreaker::DCBreaker() {}
DCBreaker::~DCBreaker() {}

const std::list<std::string>& DCBreaker::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& DCBreaker::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& DCBreaker::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& DCBreaker::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& DCBreaker::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& DCBreaker::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& DCBreaker::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

const char DCBreaker::debugName[] = "DCBreaker";
const char* DCBreaker::debugString() const
{
	return DCBreaker::debugName;
}

void DCBreaker::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("DCBreaker", &DCBreaker_factory);
}

void DCBreaker::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCBreaker::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void DCBreaker::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCSwitch::addPrimitiveGetFnsToMap(get_map);
}

void DCBreaker::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DCSwitch::addClassGetFnsToMap(get_map);
}

void DCBreaker::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCSwitch::addEnumGetFnsToMap(get_map);
}

bool DCBreaker::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "DCBreaker" &&
		dynamic_cast<DCBreaker*>(otherObject) != nullptr;
}

const BaseClassDefiner DCBreaker::declare()
{
	return BaseClassDefiner(DCBreaker::addConstructToMap, DCBreaker::addPrimitiveAssignFnsToMap, DCBreaker::addClassAssignFnsToMap, DCBreaker::debugName);
}

std::map<std::string, AttrDetails> DCBreaker::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DCSwitch::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* DCBreaker_factory()
	{
		return new DCBreaker;
	}
}
