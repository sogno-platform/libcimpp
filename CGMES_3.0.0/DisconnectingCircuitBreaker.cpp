/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DisconnectingCircuitBreaker.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		DisconnectingCircuitBreaker(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::EQ,
			CGMESProfile::SSH,
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

DisconnectingCircuitBreaker::DisconnectingCircuitBreaker() {}
DisconnectingCircuitBreaker::~DisconnectingCircuitBreaker() {}

const std::list<std::string>& DisconnectingCircuitBreaker::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& DisconnectingCircuitBreaker::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& DisconnectingCircuitBreaker::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& DisconnectingCircuitBreaker::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& DisconnectingCircuitBreaker::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& DisconnectingCircuitBreaker::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& DisconnectingCircuitBreaker::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

const char DisconnectingCircuitBreaker::debugName[] = "DisconnectingCircuitBreaker";
const char* DisconnectingCircuitBreaker::debugString() const
{
	return DisconnectingCircuitBreaker::debugName;
}

void DisconnectingCircuitBreaker::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("DisconnectingCircuitBreaker", &DisconnectingCircuitBreaker_factory);
}

void DisconnectingCircuitBreaker::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DisconnectingCircuitBreaker::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void DisconnectingCircuitBreaker::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Breaker::addPrimitiveGetFnsToMap(get_map);
}

void DisconnectingCircuitBreaker::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Breaker::addClassGetFnsToMap(get_map);
}

void DisconnectingCircuitBreaker::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Breaker::addEnumGetFnsToMap(get_map);
}

bool DisconnectingCircuitBreaker::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "DisconnectingCircuitBreaker" &&
		dynamic_cast<DisconnectingCircuitBreaker*>(otherObject) != nullptr;
}

const BaseClassDefiner DisconnectingCircuitBreaker::declare()
{
	return BaseClassDefiner(DisconnectingCircuitBreaker::addConstructToMap, DisconnectingCircuitBreaker::addPrimitiveAssignFnsToMap, DisconnectingCircuitBreaker::addClassAssignFnsToMap, DisconnectingCircuitBreaker::debugName);
}

std::map<std::string, AttrDetails> DisconnectingCircuitBreaker::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = Breaker::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* DisconnectingCircuitBreaker_factory()
	{
		return new DisconnectingCircuitBreaker;
	}
}
