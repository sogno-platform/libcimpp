/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "HydroPowerPlant.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "HydroGeneratingUnit.hpp"
#include "HydroPump.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		HydroPowerPlant(),
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
		{ "HydroPowerPlant.HydroGeneratingUnits", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "HydroPowerPlant.HydroPumps", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "HydroPowerPlant.hydroPlantStorageType", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

HydroPowerPlant::HydroPowerPlant() {}
HydroPowerPlant::~HydroPowerPlant() {}

const std::list<std::string>& HydroPowerPlant::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& HydroPowerPlant::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& HydroPowerPlant::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& HydroPowerPlant::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& HydroPowerPlant::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& HydroPowerPlant::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& HydroPowerPlant::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_HydroGeneratingUnit_HydroPowerPlant(BaseClass*, BaseClass*);
bool assign_HydroPowerPlant_HydroGeneratingUnits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	HydroPowerPlant* element = dynamic_cast<HydroPowerPlant*>(BaseClass_ptr1);
	HydroGeneratingUnit* element2 = dynamic_cast<HydroGeneratingUnit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->HydroGeneratingUnits.begin(), element->HydroGeneratingUnits.end(), element2) == element->HydroGeneratingUnits.end())
		{
			element->HydroGeneratingUnits.push_back(element2);
			return assign_HydroGeneratingUnit_HydroPowerPlant(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_HydroPump_HydroPowerPlant(BaseClass*, BaseClass*);
bool assign_HydroPowerPlant_HydroPumps(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	HydroPowerPlant* element = dynamic_cast<HydroPowerPlant*>(BaseClass_ptr1);
	HydroPump* element2 = dynamic_cast<HydroPump*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->HydroPumps.begin(), element->HydroPumps.end(), element2) == element->HydroPumps.end())
		{
			element->HydroPumps.push_back(element2);
			return assign_HydroPump_HydroPowerPlant(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_HydroPowerPlant_hydroPlantStorageType(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	HydroPowerPlant* element = dynamic_cast<HydroPowerPlant*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->hydroPlantStorageType;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}



bool get_HydroPowerPlant_hydroPlantStorageType(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const HydroPowerPlant* element = dynamic_cast<const HydroPowerPlant*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->hydroPlantStorageType;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char HydroPowerPlant::debugName[] = "HydroPowerPlant";
const char* HydroPowerPlant::debugString() const
{
	return HydroPowerPlant::debugName;
}

void HydroPowerPlant::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("HydroPowerPlant", &HydroPowerPlant_factory);
}

void HydroPowerPlant::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("HydroPowerPlant.hydroPlantStorageType", &assign_HydroPowerPlant_hydroPlantStorageType);
}

void HydroPowerPlant::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("HydroPowerPlant.HydroGeneratingUnits", &assign_HydroPowerPlant_HydroGeneratingUnits);
	assign_map.emplace("HydroPowerPlant.HydroPumps", &assign_HydroPowerPlant_HydroPumps);
}

void HydroPowerPlant::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addPrimitiveGetFnsToMap(get_map);
}

void HydroPowerPlant::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemResource::addClassGetFnsToMap(get_map);
}

void HydroPowerPlant::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addEnumGetFnsToMap(get_map);
	get_map.emplace("HydroPowerPlant.hydroPlantStorageType", &get_HydroPowerPlant_hydroPlantStorageType);
}

bool HydroPowerPlant::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "HydroPowerPlant" &&
		dynamic_cast<HydroPowerPlant*>(otherObject) != nullptr;
}

const BaseClassDefiner HydroPowerPlant::declare()
{
	return BaseClassDefiner(HydroPowerPlant::addConstructToMap, HydroPowerPlant::addPrimitiveAssignFnsToMap, HydroPowerPlant::addClassAssignFnsToMap, HydroPowerPlant::debugName);
}

std::map<std::string, AttrDetails> HydroPowerPlant::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PowerSystemResource::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* HydroPowerPlant_factory()
	{
		return new HydroPowerPlant;
	}
}
