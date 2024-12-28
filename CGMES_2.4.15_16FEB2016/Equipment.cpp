/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Equipment.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "EquipmentContainer.hpp"
#include "OperationalLimitSet.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

Equipment::Equipment() : EquipmentContainer(nullptr) {};
Equipment::~Equipment() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
	CGMESProfile::EQ_BD,
	CGMESProfile::EQ,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:Equipment.EquipmentContainer", { CGMESProfile::EQ_BD, CGMESProfile::EQ, } },
	{ "cim:Equipment.OperationalLimitSet", { CGMESProfile::EQ, } },
	{ "cim:Equipment.aggregate", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
Equipment::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
Equipment::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PowerSystemResource::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_Equipment_aggregate(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (Equipment* element = dynamic_cast<Equipment*>(BaseClass_ptr1))
	{
		buffer >> element->aggregate;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_EquipmentContainer_Equipments(BaseClass*, BaseClass*);
bool assign_Equipment_EquipmentContainer(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Equipment* element = dynamic_cast<Equipment*>(BaseClass_ptr1);
	EquipmentContainer* element2 = dynamic_cast<EquipmentContainer*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->EquipmentContainer != element2)
		{
			element->EquipmentContainer = element2;
			return assign_EquipmentContainer_Equipments(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_OperationalLimitSet_Equipment(BaseClass*, BaseClass*);
bool assign_Equipment_OperationalLimitSet(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Equipment* element = dynamic_cast<Equipment*>(BaseClass_ptr1);
	OperationalLimitSet* element2 = dynamic_cast<OperationalLimitSet*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->OperationalLimitSet.begin(), element->OperationalLimitSet.end(), element2) == element->OperationalLimitSet.end())
		{
			element->OperationalLimitSet.push_back(element2);
			return assign_OperationalLimitSet_Equipment(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_Equipment_aggregate(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const Equipment* element = dynamic_cast<const Equipment*>(BaseClass_ptr1))
	{
		buffer << element->aggregate;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}


bool get_Equipment_EquipmentContainer(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const Equipment* element = dynamic_cast<const Equipment*>(BaseClass_ptr1))
	{
		if (element->EquipmentContainer != 0)
		{
			BaseClass_list.push_back(element->EquipmentContainer);
			return true;
		}
	}
	return false;
}


const char Equipment::debugName[] = "Equipment";
const char* Equipment::debugString() const
{
	return Equipment::debugName;
}

void Equipment::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:Equipment"), &Equipment_factory));
}

void Equipment::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:Equipment.aggregate"), &assign_Equipment_aggregate));
}

void Equipment::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:Equipment.EquipmentContainer"), &assign_Equipment_EquipmentContainer));
	assign_map.insert(std::make_pair(std::string("cim:Equipment.OperationalLimitSet"), &assign_Equipment_OperationalLimitSet));
}

void Equipment::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:Equipment.aggregate", &get_Equipment_aggregate);
}

void Equipment::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemResource::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:Equipment.EquipmentContainer", &get_Equipment_EquipmentContainer);
}

void Equipment::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner Equipment::declare()
{
	return BaseClassDefiner(Equipment::addConstructToMap, Equipment::addPrimitiveAssignFnsToMap, Equipment::addClassAssignFnsToMap, Equipment::debugName);
}

namespace CIMPP
{
	BaseClass* Equipment_factory()
	{
		return new Equipment;
	}
}
