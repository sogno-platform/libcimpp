/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EquipmentContainer.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Equipment.hpp"

using namespace CIMPP;

EquipmentContainer::EquipmentContainer() {};
EquipmentContainer::~EquipmentContainer() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::EQBD,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:EquipmentContainer.Equipments", { CGMESProfile::EQ, CGMESProfile::EQBD, } },
};

std::list<CGMESProfile>
EquipmentContainer::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
EquipmentContainer::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ConnectivityNodeContainer::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



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

void EquipmentContainer::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConnectivityNodeContainer::addPrimitiveGetFnsToMap(get_map);
}

void EquipmentContainer::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ConnectivityNodeContainer::addClassGetFnsToMap(get_map);
}

void EquipmentContainer::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConnectivityNodeContainer::addEnumGetFnsToMap(get_map);
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
