/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "FaultIndicator.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		FaultIndicator(),
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

FaultIndicator::FaultIndicator() {}
FaultIndicator::~FaultIndicator() {}

const std::list<std::string>& FaultIndicator::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& FaultIndicator::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& FaultIndicator::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& FaultIndicator::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& FaultIndicator::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& FaultIndicator::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& FaultIndicator::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

const char FaultIndicator::debugName[] = "FaultIndicator";
const char* FaultIndicator::debugString() const
{
	return FaultIndicator::debugName;
}

void FaultIndicator::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("FaultIndicator", &FaultIndicator_factory);
}

void FaultIndicator::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void FaultIndicator::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void FaultIndicator::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AuxiliaryEquipment::addPrimitiveGetFnsToMap(get_map);
}

void FaultIndicator::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	AuxiliaryEquipment::addClassGetFnsToMap(get_map);
}

void FaultIndicator::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	AuxiliaryEquipment::addEnumGetFnsToMap(get_map);
}

bool FaultIndicator::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "FaultIndicator" &&
		dynamic_cast<FaultIndicator*>(otherObject) != nullptr;
}

const BaseClassDefiner FaultIndicator::declare()
{
	return BaseClassDefiner(FaultIndicator::addConstructToMap, FaultIndicator::addPrimitiveAssignFnsToMap, FaultIndicator::addClassAssignFnsToMap, FaultIndicator::debugName);
}

std::map<std::string, AttrDetails> FaultIndicator::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = AuxiliaryEquipment::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* FaultIndicator_factory()
	{
		return new FaultIndicator;
	}
}
