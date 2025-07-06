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

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		EquipmentContainer(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::EQ,
			CGMESProfile::EQBD,
		},
		CGMESProfile::EQ
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "EquipmentContainer.Equipments", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, CGMESProfile::EQBD, } } },
	};
    return ClassAttrDetailsMap;
}

EquipmentContainer::EquipmentContainer() {}
EquipmentContainer::~EquipmentContainer() {}

const std::list<std::string>& EquipmentContainer::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& EquipmentContainer::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& EquipmentContainer::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& EquipmentContainer::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& EquipmentContainer::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& EquipmentContainer::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& EquipmentContainer::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
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
	factory_map.emplace("EquipmentContainer", &EquipmentContainer_factory);
}

void EquipmentContainer::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void EquipmentContainer::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("EquipmentContainer.Equipments", &assign_EquipmentContainer_Equipments);
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

bool EquipmentContainer::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "EquipmentContainer" &&
		dynamic_cast<EquipmentContainer*>(otherObject) != nullptr;
}

const BaseClassDefiner EquipmentContainer::declare()
{
	return BaseClassDefiner(EquipmentContainer::addConstructToMap, EquipmentContainer::addPrimitiveAssignFnsToMap, EquipmentContainer::addClassAssignFnsToMap, EquipmentContainer::debugName);
}

std::map<std::string, AttrDetails> EquipmentContainer::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ConnectivityNodeContainer::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* EquipmentContainer_factory()
	{
		return new EquipmentContainer;
	}
}
