/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "HydroPump.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "HydroPowerPlant.hpp"
#include "RotatingMachine.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		HydroPump(),
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
		{ "HydroPump.HydroPowerPlant", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "HydroPump.RotatingMachine", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

HydroPump::HydroPump() : HydroPowerPlant(nullptr), RotatingMachine(nullptr) {}
HydroPump::~HydroPump() {}

const std::list<std::string>& HydroPump::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& HydroPump::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& HydroPump::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& HydroPump::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& HydroPump::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& HydroPump::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& HydroPump::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_HydroPowerPlant_HydroPumps(BaseClass*, BaseClass*);
bool assign_HydroPump_HydroPowerPlant(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	HydroPump* element = dynamic_cast<HydroPump*>(BaseClass_ptr1);
	HydroPowerPlant* element2 = dynamic_cast<HydroPowerPlant*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->HydroPowerPlant != element2)
		{
			element->HydroPowerPlant = element2;
			return assign_HydroPowerPlant_HydroPumps(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_RotatingMachine_HydroPump(BaseClass*, BaseClass*);
bool assign_HydroPump_RotatingMachine(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	HydroPump* element = dynamic_cast<HydroPump*>(BaseClass_ptr1);
	RotatingMachine* element2 = dynamic_cast<RotatingMachine*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->RotatingMachine != element2)
		{
			element->RotatingMachine = element2;
			return assign_RotatingMachine_HydroPump(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_HydroPump_HydroPowerPlant(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const HydroPump* element = dynamic_cast<const HydroPump*>(BaseClass_ptr1);
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

bool get_HydroPump_RotatingMachine(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const HydroPump* element = dynamic_cast<const HydroPump*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->RotatingMachine != 0)
		{
			BaseClass_list.push_back(element->RotatingMachine);
			return true;
		}
	}
	return false;
}

const char HydroPump::debugName[] = "HydroPump";
const char* HydroPump::debugString() const
{
	return HydroPump::debugName;
}

void HydroPump::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("HydroPump", &HydroPump_factory);
}

void HydroPump::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void HydroPump::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("HydroPump.HydroPowerPlant", &assign_HydroPump_HydroPowerPlant);
	assign_map.emplace("HydroPump.RotatingMachine", &assign_HydroPump_RotatingMachine);
}

void HydroPump::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Equipment::addPrimitiveGetFnsToMap(get_map);
}

void HydroPump::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Equipment::addClassGetFnsToMap(get_map);
	get_map.emplace("HydroPump.HydroPowerPlant", &get_HydroPump_HydroPowerPlant);
	get_map.emplace("HydroPump.RotatingMachine", &get_HydroPump_RotatingMachine);
}

void HydroPump::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Equipment::addEnumGetFnsToMap(get_map);
}

bool HydroPump::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "HydroPump" &&
		dynamic_cast<HydroPump*>(otherObject) != nullptr;
}

const BaseClassDefiner HydroPump::declare()
{
	return BaseClassDefiner(HydroPump::addConstructToMap, HydroPump::addPrimitiveAssignFnsToMap, HydroPump::addClassAssignFnsToMap, HydroPump::debugName);
}

std::map<std::string, AttrDetails> HydroPump::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = Equipment::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* HydroPump_factory()
	{
		return new HydroPump;
	}
}
