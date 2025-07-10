/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Breaker.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		Breaker(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
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

Breaker::Breaker() {}
Breaker::~Breaker() {}

const std::list<std::string>& Breaker::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& Breaker::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& Breaker::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& Breaker::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& Breaker::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& Breaker::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& Breaker::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

const char Breaker::debugName[] = "Breaker";
const char* Breaker::debugString() const
{
	return Breaker::debugName;
}

void Breaker::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("Breaker", &Breaker_factory);
}

void Breaker::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Breaker::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void Breaker::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ProtectedSwitch::addPrimitiveGetFnsToMap(get_map);
}

void Breaker::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ProtectedSwitch::addClassGetFnsToMap(get_map);
}

void Breaker::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ProtectedSwitch::addEnumGetFnsToMap(get_map);
}

bool Breaker::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "Breaker" &&
		dynamic_cast<Breaker*>(otherObject) != nullptr;
}

const BaseClassDefiner Breaker::declare()
{
	return BaseClassDefiner(Breaker::addConstructToMap, Breaker::addPrimitiveAssignFnsToMap, Breaker::addClassAssignFnsToMap, Breaker::debugName);
}

std::map<std::string, AttrDetails> Breaker::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ProtectedSwitch::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* Breaker_factory()
	{
		return new Breaker;
	}
}
