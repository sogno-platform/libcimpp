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

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		Equipment(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
		{
			CGMESProfile::DY,
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
		{ "Equipment.EquipmentContainer", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "Equipment.OperationalLimitSet", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
		{ "Equipment.aggregate", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

Equipment::Equipment() : EquipmentContainer(nullptr) {}
Equipment::~Equipment() {}

const std::list<std::string>& Equipment::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& Equipment::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& Equipment::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& Equipment::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& Equipment::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& Equipment::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& Equipment::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
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

bool assign_Equipment_aggregate(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Equipment* element = dynamic_cast<Equipment*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->aggregate;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_Equipment_EquipmentContainer(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const Equipment* element = dynamic_cast<const Equipment*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->EquipmentContainer != 0)
		{
			BaseClass_list.push_back(element->EquipmentContainer);
			return true;
		}
	}
	return false;
}


bool get_Equipment_aggregate(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Equipment* element = dynamic_cast<const Equipment*>(BaseClass_ptr1);
	if (element != nullptr)
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

const char Equipment::debugName[] = "Equipment";
const char* Equipment::debugString() const
{
	return Equipment::debugName;
}

void Equipment::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("Equipment", &Equipment_factory);
}

void Equipment::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("Equipment.aggregate", &assign_Equipment_aggregate);
}

void Equipment::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("Equipment.EquipmentContainer", &assign_Equipment_EquipmentContainer);
	assign_map.emplace("Equipment.OperationalLimitSet", &assign_Equipment_OperationalLimitSet);
}

void Equipment::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("Equipment.aggregate", &get_Equipment_aggregate);
}

void Equipment::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemResource::addClassGetFnsToMap(get_map);
	get_map.emplace("Equipment.EquipmentContainer", &get_Equipment_EquipmentContainer);
}

void Equipment::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addEnumGetFnsToMap(get_map);
}

bool Equipment::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "Equipment" &&
		dynamic_cast<Equipment*>(otherObject) != nullptr;
}

const BaseClassDefiner Equipment::declare()
{
	return BaseClassDefiner(Equipment::addConstructToMap, Equipment::addPrimitiveAssignFnsToMap, Equipment::addClassAssignFnsToMap, Equipment::debugName);
}

std::map<std::string, AttrDetails> Equipment::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PowerSystemResource::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* Equipment_factory()
	{
		return new Equipment;
	}
}
