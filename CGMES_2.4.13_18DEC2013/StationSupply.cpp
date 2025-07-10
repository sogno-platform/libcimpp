/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "StationSupply.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		StationSupply(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
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

StationSupply::StationSupply() {}
StationSupply::~StationSupply() {}

const std::list<std::string>& StationSupply::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& StationSupply::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& StationSupply::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& StationSupply::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& StationSupply::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& StationSupply::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& StationSupply::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

const char StationSupply::debugName[] = "StationSupply";
const char* StationSupply::debugString() const
{
	return StationSupply::debugName;
}

void StationSupply::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("StationSupply", &StationSupply_factory);
}

void StationSupply::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void StationSupply::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void StationSupply::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EnergyConsumer::addPrimitiveGetFnsToMap(get_map);
}

void StationSupply::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EnergyConsumer::addClassGetFnsToMap(get_map);
}

void StationSupply::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EnergyConsumer::addEnumGetFnsToMap(get_map);
}

bool StationSupply::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "StationSupply" &&
		dynamic_cast<StationSupply*>(otherObject) != nullptr;
}

const BaseClassDefiner StationSupply::declare()
{
	return BaseClassDefiner(StationSupply::addConstructToMap, StationSupply::addPrimitiveAssignFnsToMap, StationSupply::addClassAssignFnsToMap, StationSupply::debugName);
}

std::map<std::string, AttrDetails> StationSupply::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = EnergyConsumer::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* StationSupply_factory()
	{
		return new StationSupply;
	}
}
