/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "HVDCDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		HVDCDynamics(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::DY,
		},
		CGMESProfile::DY
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

HVDCDynamics::HVDCDynamics() {}
HVDCDynamics::~HVDCDynamics() {}

const std::list<std::string>& HVDCDynamics::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& HVDCDynamics::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& HVDCDynamics::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& HVDCDynamics::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& HVDCDynamics::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& HVDCDynamics::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& HVDCDynamics::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

const char HVDCDynamics::debugName[] = "HVDCDynamics";
const char* HVDCDynamics::debugString() const
{
	return HVDCDynamics::debugName;
}

void HVDCDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("HVDCDynamics", &HVDCDynamics_factory);
}

void HVDCDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void HVDCDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void HVDCDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void HVDCDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
}

void HVDCDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

bool HVDCDynamics::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "HVDCDynamics" &&
		dynamic_cast<HVDCDynamics*>(otherObject) != nullptr;
}

const BaseClassDefiner HVDCDynamics::declare()
{
	return BaseClassDefiner(HVDCDynamics::addConstructToMap, HVDCDynamics::addPrimitiveAssignFnsToMap, HVDCDynamics::addClassAssignFnsToMap, HVDCDynamics::debugName);
}

std::map<std::string, AttrDetails> HVDCDynamics::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DynamicsFunctionBlock::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* HVDCDynamics_factory()
	{
		return new HVDCDynamics;
	}
}
