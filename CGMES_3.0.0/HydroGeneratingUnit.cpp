/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "HydroGeneratingUnit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "HydroPowerPlant.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		HydroGeneratingUnit(),
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
		{ "HydroGeneratingUnit.HydroPowerPlant", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "HydroGeneratingUnit.dropHeight", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "HydroGeneratingUnit.energyConversionCapability", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "HydroGeneratingUnit.turbineType", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

HydroGeneratingUnit::HydroGeneratingUnit() : HydroPowerPlant(nullptr) {}
HydroGeneratingUnit::~HydroGeneratingUnit() {}

const std::list<std::string>& HydroGeneratingUnit::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& HydroGeneratingUnit::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& HydroGeneratingUnit::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& HydroGeneratingUnit::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& HydroGeneratingUnit::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& HydroGeneratingUnit::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& HydroGeneratingUnit::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_HydroPowerPlant_HydroGeneratingUnits(BaseClass*, BaseClass*);
bool assign_HydroGeneratingUnit_HydroPowerPlant(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	HydroGeneratingUnit* element = dynamic_cast<HydroGeneratingUnit*>(BaseClass_ptr1);
	HydroPowerPlant* element2 = dynamic_cast<HydroPowerPlant*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->HydroPowerPlant != element2)
		{
			element->HydroPowerPlant = element2;
			return assign_HydroPowerPlant_HydroGeneratingUnits(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_HydroGeneratingUnit_dropHeight(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	HydroGeneratingUnit* element = dynamic_cast<HydroGeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dropHeight;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_HydroGeneratingUnit_energyConversionCapability(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	HydroGeneratingUnit* element = dynamic_cast<HydroGeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->energyConversionCapability;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_HydroGeneratingUnit_turbineType(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	HydroGeneratingUnit* element = dynamic_cast<HydroGeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->turbineType;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_HydroGeneratingUnit_HydroPowerPlant(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const HydroGeneratingUnit* element = dynamic_cast<const HydroGeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->HydroPowerPlant != 0)
		{
			BaseClass_list.push_back(element->HydroPowerPlant);
			return true;
		}
	}
	return false;
}

bool get_HydroGeneratingUnit_dropHeight(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const HydroGeneratingUnit* element = dynamic_cast<const HydroGeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dropHeight;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_HydroGeneratingUnit_energyConversionCapability(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const HydroGeneratingUnit* element = dynamic_cast<const HydroGeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->energyConversionCapability;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_HydroGeneratingUnit_turbineType(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const HydroGeneratingUnit* element = dynamic_cast<const HydroGeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->turbineType;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char HydroGeneratingUnit::debugName[] = "HydroGeneratingUnit";
const char* HydroGeneratingUnit::debugString() const
{
	return HydroGeneratingUnit::debugName;
}

void HydroGeneratingUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("HydroGeneratingUnit", &HydroGeneratingUnit_factory);
}

void HydroGeneratingUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("HydroGeneratingUnit.dropHeight", &assign_HydroGeneratingUnit_dropHeight);
	assign_map.emplace("HydroGeneratingUnit.energyConversionCapability", &assign_HydroGeneratingUnit_energyConversionCapability);
	assign_map.emplace("HydroGeneratingUnit.turbineType", &assign_HydroGeneratingUnit_turbineType);
}

void HydroGeneratingUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("HydroGeneratingUnit.HydroPowerPlant", &assign_HydroGeneratingUnit_HydroPowerPlant);
}

void HydroGeneratingUnit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	GeneratingUnit::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("HydroGeneratingUnit.dropHeight", &get_HydroGeneratingUnit_dropHeight);
}

void HydroGeneratingUnit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	GeneratingUnit::addClassGetFnsToMap(get_map);
	get_map.emplace("HydroGeneratingUnit.HydroPowerPlant", &get_HydroGeneratingUnit_HydroPowerPlant);
}

void HydroGeneratingUnit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	GeneratingUnit::addEnumGetFnsToMap(get_map);
	get_map.emplace("HydroGeneratingUnit.energyConversionCapability", &get_HydroGeneratingUnit_energyConversionCapability);
	get_map.emplace("HydroGeneratingUnit.turbineType", &get_HydroGeneratingUnit_turbineType);
}

bool HydroGeneratingUnit::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "HydroGeneratingUnit" &&
		dynamic_cast<HydroGeneratingUnit*>(otherObject) != nullptr;
}

const BaseClassDefiner HydroGeneratingUnit::declare()
{
	return BaseClassDefiner(HydroGeneratingUnit::addConstructToMap, HydroGeneratingUnit::addPrimitiveAssignFnsToMap, HydroGeneratingUnit::addClassAssignFnsToMap, HydroGeneratingUnit::debugName);
}

std::map<std::string, AttrDetails> HydroGeneratingUnit::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = GeneratingUnit::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* HydroGeneratingUnit_factory()
	{
		return new HydroGeneratingUnit;
	}
}
