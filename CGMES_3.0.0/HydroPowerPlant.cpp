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
#include "HydroPlantStorageKind.hpp"

using namespace CIMPP;

HydroPowerPlant::HydroPowerPlant() {};
HydroPowerPlant::~HydroPowerPlant() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:HydroPowerPlant.HydroGeneratingUnits", { CGMESProfile::EQ, } },
	{ "cim:HydroPowerPlant.HydroPumps", { CGMESProfile::EQ, } },
	{ "cim:HydroPowerPlant.hydroPlantStorageType", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
HydroPowerPlant::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
HydroPowerPlant::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PowerSystemResource::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_HydroPowerPlant_hydroPlantStorageType(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (HydroPowerPlant* element = dynamic_cast<HydroPowerPlant*>(BaseClass_ptr1))
	{
		buffer >> element->hydroPlantStorageType;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
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



bool get_HydroPowerPlant_hydroPlantStorageType(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const HydroPowerPlant* element = dynamic_cast<const HydroPowerPlant*>(BaseClass_ptr1))
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
	factory_map.insert(std::make_pair(std::string("cim:HydroPowerPlant"), &HydroPowerPlant_factory));
}

void HydroPowerPlant::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:HydroPowerPlant.hydroPlantStorageType"), &assign_HydroPowerPlant_hydroPlantStorageType));
}

void HydroPowerPlant::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:HydroPowerPlant.HydroGeneratingUnits"), &assign_HydroPowerPlant_HydroGeneratingUnits));
	assign_map.insert(std::make_pair(std::string("cim:HydroPowerPlant.HydroPumps"), &assign_HydroPowerPlant_HydroPumps));
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
	get_map.emplace("cim:HydroPowerPlant.hydroPlantStorageType", &get_HydroPowerPlant_hydroPlantStorageType);
}

const BaseClassDefiner HydroPowerPlant::declare()
{
	return BaseClassDefiner(HydroPowerPlant::addConstructToMap, HydroPowerPlant::addPrimitiveAssignFnsToMap, HydroPowerPlant::addClassAssignFnsToMap, HydroPowerPlant::debugName);
}

namespace CIMPP
{
	BaseClass* HydroPowerPlant_factory()
	{
		return new HydroPowerPlant;
	}
}
