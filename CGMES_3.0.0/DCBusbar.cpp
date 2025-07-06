/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DCBusbar.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		DCBusbar(),
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

DCBusbar::DCBusbar() {}
DCBusbar::~DCBusbar() {}

const std::list<std::string>& DCBusbar::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& DCBusbar::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& DCBusbar::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& DCBusbar::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& DCBusbar::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& DCBusbar::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& DCBusbar::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

const char DCBusbar::debugName[] = "DCBusbar";
const char* DCBusbar::debugString() const
{
	return DCBusbar::debugName;
}

void DCBusbar::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("DCBusbar", &DCBusbar_factory);
}

void DCBusbar::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void DCBusbar::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void DCBusbar::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCConductingEquipment::addPrimitiveGetFnsToMap(get_map);
}

void DCBusbar::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DCConductingEquipment::addClassGetFnsToMap(get_map);
}

void DCBusbar::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DCConductingEquipment::addEnumGetFnsToMap(get_map);
}

bool DCBusbar::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "DCBusbar" &&
		dynamic_cast<DCBusbar*>(otherObject) != nullptr;
}

const BaseClassDefiner DCBusbar::declare()
{
	return BaseClassDefiner(DCBusbar::addConstructToMap, DCBusbar::addPrimitiveAssignFnsToMap, DCBusbar::addClassAssignFnsToMap, DCBusbar::debugName);
}

std::map<std::string, AttrDetails> DCBusbar::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = DCConductingEquipment::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* DCBusbar_factory()
	{
		return new DCBusbar;
	}
}
