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

HydroPump::HydroPump() : HydroPowerPlant(nullptr), RotatingMachine(nullptr) {}
HydroPump::~HydroPump() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:HydroPump.HydroPowerPlant", { CGMESProfile::EQ, } },
	{ "cim:HydroPump.RotatingMachine", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
HydroPump::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
HydroPump::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Equipment::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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
	factory_map.emplace("cim:HydroPump", &HydroPump_factory);
}

void HydroPump::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void HydroPump::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:HydroPump.HydroPowerPlant", &assign_HydroPump_HydroPowerPlant);
	assign_map.emplace("cim:HydroPump.RotatingMachine", &assign_HydroPump_RotatingMachine);
}

void HydroPump::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Equipment::addPrimitiveGetFnsToMap(get_map);
}

void HydroPump::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Equipment::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:HydroPump.HydroPowerPlant", &get_HydroPump_HydroPowerPlant);
	get_map.emplace("cim:HydroPump.RotatingMachine", &get_HydroPump_RotatingMachine);
}

void HydroPump::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Equipment::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner HydroPump::declare()
{
	return BaseClassDefiner(HydroPump::addConstructToMap, HydroPump::addPrimitiveAssignFnsToMap, HydroPump::addClassAssignFnsToMap, HydroPump::debugName);
}

namespace CIMPP
{
	BaseClass* HydroPump_factory()
	{
		return new HydroPump;
	}
}
