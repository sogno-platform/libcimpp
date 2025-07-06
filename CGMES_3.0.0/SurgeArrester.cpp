/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SurgeArrester.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		SurgeArrester(),
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

SurgeArrester::SurgeArrester() {}
SurgeArrester::~SurgeArrester() {}

const std::list<std::string>& SurgeArrester::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& SurgeArrester::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& SurgeArrester::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& SurgeArrester::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& SurgeArrester::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& SurgeArrester::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& SurgeArrester::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

const char SurgeArrester::debugName[] = "SurgeArrester";
const char* SurgeArrester::debugString() const
{
	return SurgeArrester::debugName;
}

void SurgeArrester::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("SurgeArrester", &SurgeArrester_factory);
}

void SurgeArrester::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void SurgeArrester::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void SurgeArrester::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AuxiliaryEquipment::addPrimitiveGetFnsToMap(get_map);
}

void SurgeArrester::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	AuxiliaryEquipment::addClassGetFnsToMap(get_map);
}

void SurgeArrester::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AuxiliaryEquipment::addEnumGetFnsToMap(get_map);
}

bool SurgeArrester::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "SurgeArrester" &&
		dynamic_cast<SurgeArrester*>(otherObject) != nullptr;
}

const BaseClassDefiner SurgeArrester::declare()
{
	return BaseClassDefiner(SurgeArrester::addConstructToMap, SurgeArrester::addPrimitiveAssignFnsToMap, SurgeArrester::addClassAssignFnsToMap, SurgeArrester::debugName);
}

std::map<std::string, AttrDetails> SurgeArrester::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = AuxiliaryEquipment::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* SurgeArrester_factory()
	{
		return new SurgeArrester;
	}
}
