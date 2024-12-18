/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "HydroPump.hpp"

#include <algorithm>
#include <sstream>

#include "HydroPowerPlant.hpp"
#include "RotatingMachine.hpp"

using namespace CIMPP;

HydroPump::HydroPump() : HydroPowerPlant(nullptr), RotatingMachine(nullptr) {};
HydroPump::~HydroPump() {};





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

const char HydroPump::debugName[] = "HydroPump";
const char* HydroPump::debugString() const
{
	return HydroPump::debugName;
}

void HydroPump::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:HydroPump"), &HydroPump_factory));
}

void HydroPump::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void HydroPump::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:HydroPump.HydroPowerPlant"), &assign_HydroPump_HydroPowerPlant));
	assign_map.insert(std::make_pair(std::string("cim:HydroPump.RotatingMachine"), &assign_HydroPump_RotatingMachine));
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
