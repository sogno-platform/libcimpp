/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SolarPowerPlant.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "SolarGeneratingUnit.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		SolarPowerPlant(),
		"http://iec.ch/TC57/CIM100-European#",
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
		{ "SolarPowerPlant.SolarGeneratingUnits", { "http://iec.ch/TC57/CIM100-European#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

SolarPowerPlant::SolarPowerPlant() {}
SolarPowerPlant::~SolarPowerPlant() {}

const std::list<std::string>& SolarPowerPlant::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& SolarPowerPlant::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& SolarPowerPlant::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& SolarPowerPlant::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& SolarPowerPlant::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& SolarPowerPlant::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& SolarPowerPlant::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_SolarGeneratingUnit_SolarPowerPlant(BaseClass*, BaseClass*);
bool assign_SolarPowerPlant_SolarGeneratingUnits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SolarPowerPlant* element = dynamic_cast<SolarPowerPlant*>(BaseClass_ptr1);
	SolarGeneratingUnit* element2 = dynamic_cast<SolarGeneratingUnit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->SolarGeneratingUnits.begin(), element->SolarGeneratingUnits.end(), element2) == element->SolarGeneratingUnits.end())
		{
			element->SolarGeneratingUnits.push_back(element2);
			return assign_SolarGeneratingUnit_SolarPowerPlant(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char SolarPowerPlant::debugName[] = "SolarPowerPlant";
const char* SolarPowerPlant::debugString() const
{
	return SolarPowerPlant::debugName;
}

void SolarPowerPlant::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("SolarPowerPlant", &SolarPowerPlant_factory);
}

void SolarPowerPlant::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void SolarPowerPlant::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("SolarPowerPlant.SolarGeneratingUnits", &assign_SolarPowerPlant_SolarGeneratingUnits);
}

void SolarPowerPlant::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addPrimitiveGetFnsToMap(get_map);
}

void SolarPowerPlant::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemResource::addClassGetFnsToMap(get_map);
}

void SolarPowerPlant::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addEnumGetFnsToMap(get_map);
}

bool SolarPowerPlant::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "SolarPowerPlant" &&
		dynamic_cast<SolarPowerPlant*>(otherObject) != nullptr;
}

const BaseClassDefiner SolarPowerPlant::declare()
{
	return BaseClassDefiner(SolarPowerPlant::addConstructToMap, SolarPowerPlant::addPrimitiveAssignFnsToMap, SolarPowerPlant::addClassAssignFnsToMap, SolarPowerPlant::debugName);
}

std::map<std::string, AttrDetails> SolarPowerPlant::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PowerSystemResource::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* SolarPowerPlant_factory()
	{
		return new SolarPowerPlant;
	}
}
