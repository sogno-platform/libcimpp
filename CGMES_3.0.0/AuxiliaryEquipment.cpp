/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AuxiliaryEquipment.hpp"

#include <algorithm>
#include <sstream>

#include "Terminal.hpp"

using namespace CIMPP;

AuxiliaryEquipment::AuxiliaryEquipment() : Terminal(nullptr) {};
AuxiliaryEquipment::~AuxiliaryEquipment() {};




bool assign_Terminal_AuxiliaryEquipment(BaseClass*, BaseClass*);
bool assign_AuxiliaryEquipment_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AuxiliaryEquipment* element = dynamic_cast<AuxiliaryEquipment*>(BaseClass_ptr1);
	Terminal* element2 = dynamic_cast<Terminal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Terminal != element2)
		{
			element->Terminal = element2;
			return assign_Terminal_AuxiliaryEquipment(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char AuxiliaryEquipment::debugName[] = "AuxiliaryEquipment";
const char* AuxiliaryEquipment::debugString() const
{
	return AuxiliaryEquipment::debugName;
}

void AuxiliaryEquipment::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:AuxiliaryEquipment"), &AuxiliaryEquipment_factory));
}

void AuxiliaryEquipment::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void AuxiliaryEquipment::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:AuxiliaryEquipment.Terminal"), &assign_AuxiliaryEquipment_Terminal));
}

const BaseClassDefiner AuxiliaryEquipment::declare()
{
	return BaseClassDefiner(AuxiliaryEquipment::addConstructToMap, AuxiliaryEquipment::addPrimitiveAssignFnsToMap, AuxiliaryEquipment::addClassAssignFnsToMap, AuxiliaryEquipment::debugName);
}

namespace CIMPP
{
	BaseClass* AuxiliaryEquipment_factory()
	{
		return new AuxiliaryEquipment;
	}
}
