/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PhotoVoltaicUnit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PhotoVoltaicUnit(),
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

PhotoVoltaicUnit::PhotoVoltaicUnit() {}
PhotoVoltaicUnit::~PhotoVoltaicUnit() {}

const std::list<std::string>& PhotoVoltaicUnit::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PhotoVoltaicUnit::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PhotoVoltaicUnit::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PhotoVoltaicUnit::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PhotoVoltaicUnit::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PhotoVoltaicUnit::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PhotoVoltaicUnit::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

const char PhotoVoltaicUnit::debugName[] = "PhotoVoltaicUnit";
const char* PhotoVoltaicUnit::debugString() const
{
	return PhotoVoltaicUnit::debugName;
}

void PhotoVoltaicUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("PhotoVoltaicUnit", &PhotoVoltaicUnit_factory);
}

void PhotoVoltaicUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void PhotoVoltaicUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PhotoVoltaicUnit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerElectronicsUnit::addPrimitiveGetFnsToMap(get_map);
}

void PhotoVoltaicUnit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerElectronicsUnit::addClassGetFnsToMap(get_map);
}

void PhotoVoltaicUnit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerElectronicsUnit::addEnumGetFnsToMap(get_map);
}

bool PhotoVoltaicUnit::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PhotoVoltaicUnit" &&
		dynamic_cast<PhotoVoltaicUnit*>(otherObject) != nullptr;
}

const BaseClassDefiner PhotoVoltaicUnit::declare()
{
	return BaseClassDefiner(PhotoVoltaicUnit::addConstructToMap, PhotoVoltaicUnit::addPrimitiveAssignFnsToMap, PhotoVoltaicUnit::addClassAssignFnsToMap, PhotoVoltaicUnit::debugName);
}

std::map<std::string, AttrDetails> PhotoVoltaicUnit::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PowerElectronicsUnit::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PhotoVoltaicUnit_factory()
	{
		return new PhotoVoltaicUnit;
	}
}
