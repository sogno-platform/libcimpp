/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SolarGeneratingUnit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "SolarPowerPlant.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		SolarGeneratingUnit(),
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
		{ "SolarGeneratingUnit.SolarPowerPlant", { "http://iec.ch/TC57/CIM100-European#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

SolarGeneratingUnit::SolarGeneratingUnit() : SolarPowerPlant(nullptr) {}
SolarGeneratingUnit::~SolarGeneratingUnit() {}

const std::list<std::string>& SolarGeneratingUnit::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& SolarGeneratingUnit::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& SolarGeneratingUnit::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& SolarGeneratingUnit::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& SolarGeneratingUnit::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& SolarGeneratingUnit::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& SolarGeneratingUnit::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_SolarPowerPlant_SolarGeneratingUnits(BaseClass*, BaseClass*);
bool assign_SolarGeneratingUnit_SolarPowerPlant(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SolarGeneratingUnit* element = dynamic_cast<SolarGeneratingUnit*>(BaseClass_ptr1);
	SolarPowerPlant* element2 = dynamic_cast<SolarPowerPlant*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->SolarPowerPlant != element2)
		{
			element->SolarPowerPlant = element2;
			return assign_SolarPowerPlant_SolarGeneratingUnits(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_SolarGeneratingUnit_SolarPowerPlant(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const SolarGeneratingUnit* element = dynamic_cast<const SolarGeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->SolarPowerPlant != 0)
		{
			BaseClass_list.push_back(element->SolarPowerPlant);
			return true;
		}
	}
	return false;
}

const char SolarGeneratingUnit::debugName[] = "SolarGeneratingUnit";
const char* SolarGeneratingUnit::debugString() const
{
	return SolarGeneratingUnit::debugName;
}

void SolarGeneratingUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("SolarGeneratingUnit", &SolarGeneratingUnit_factory);
}

void SolarGeneratingUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void SolarGeneratingUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("SolarGeneratingUnit.SolarPowerPlant", &assign_SolarGeneratingUnit_SolarPowerPlant);
}

void SolarGeneratingUnit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	GeneratingUnit::addPrimitiveGetFnsToMap(get_map);
}

void SolarGeneratingUnit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	GeneratingUnit::addClassGetFnsToMap(get_map);
	get_map.emplace("SolarGeneratingUnit.SolarPowerPlant", &get_SolarGeneratingUnit_SolarPowerPlant);
}

void SolarGeneratingUnit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	GeneratingUnit::addEnumGetFnsToMap(get_map);
}

bool SolarGeneratingUnit::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "SolarGeneratingUnit" &&
		dynamic_cast<SolarGeneratingUnit*>(otherObject) != nullptr;
}

const BaseClassDefiner SolarGeneratingUnit::declare()
{
	return BaseClassDefiner(SolarGeneratingUnit::addConstructToMap, SolarGeneratingUnit::addPrimitiveAssignFnsToMap, SolarGeneratingUnit::addClassAssignFnsToMap, SolarGeneratingUnit::debugName);
}

std::map<std::string, AttrDetails> SolarGeneratingUnit::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = GeneratingUnit::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* SolarGeneratingUnit_factory()
	{
		return new SolarGeneratingUnit;
	}
}
