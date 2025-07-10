/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PotentialTransformer.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PotentialTransformer(),
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

PotentialTransformer::PotentialTransformer() {}
PotentialTransformer::~PotentialTransformer() {}

const std::list<std::string>& PotentialTransformer::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PotentialTransformer::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PotentialTransformer::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PotentialTransformer::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PotentialTransformer::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PotentialTransformer::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PotentialTransformer::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

const char PotentialTransformer::debugName[] = "PotentialTransformer";
const char* PotentialTransformer::debugString() const
{
	return PotentialTransformer::debugName;
}

void PotentialTransformer::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PotentialTransformer", &PotentialTransformer_factory);
}

void PotentialTransformer::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void PotentialTransformer::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PotentialTransformer::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Sensor::addPrimitiveGetFnsToMap(get_map);
}

void PotentialTransformer::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Sensor::addClassGetFnsToMap(get_map);
}

void PotentialTransformer::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Sensor::addEnumGetFnsToMap(get_map);
}

bool PotentialTransformer::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PotentialTransformer" &&
		dynamic_cast<PotentialTransformer*>(otherObject) != nullptr;
}

const BaseClassDefiner PotentialTransformer::declare()
{
	return BaseClassDefiner(PotentialTransformer::addConstructToMap, PotentialTransformer::addPrimitiveAssignFnsToMap, PotentialTransformer::addClassAssignFnsToMap, PotentialTransformer::debugName);
}

std::map<std::string, AttrDetails> PotentialTransformer::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = Sensor::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PotentialTransformer_factory()
	{
		return new PotentialTransformer;
	}
}
