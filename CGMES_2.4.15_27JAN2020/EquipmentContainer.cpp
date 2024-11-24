/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EquipmentContainer.hpp"

#include <algorithm>
#include <sstream>

#include "Equipment.hpp"

using namespace CIMPP;

EquipmentContainer::EquipmentContainer() {};
EquipmentContainer::~EquipmentContainer() {};




bool assign_Equipment_EquipmentContainer(BaseClass*, BaseClass*);
bool assign_EquipmentContainer_Equipments(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	EquipmentContainer* element = dynamic_cast<EquipmentContainer*>(BaseClass_ptr1);
	Equipment* element2 = dynamic_cast<Equipment*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Equipments.begin(), element->Equipments.end(), element2) == element->Equipments.end())
		{
			element->Equipments.push_back(element2);
			return assign_Equipment_EquipmentContainer(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char EquipmentContainer::debugName[] = "EquipmentContainer";
const char* EquipmentContainer::debugString() const
{
	return EquipmentContainer::debugName;
}

void EquipmentContainer::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:EquipmentContainer"), &EquipmentContainer_factory));
}

void EquipmentContainer::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void EquipmentContainer::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:EquipmentContainer.Equipments"), &assign_EquipmentContainer_Equipments));
}

const BaseClassDefiner EquipmentContainer::declare()
{
	return BaseClassDefiner(EquipmentContainer::addConstructToMap, EquipmentContainer::addPrimitiveAssignFnsToMap, EquipmentContainer::addClassAssignFnsToMap, EquipmentContainer::debugName);
}

namespace CIMPP
{
	BaseClass* EquipmentContainer_factory()
	{
		return new EquipmentContainer;
	}
}
