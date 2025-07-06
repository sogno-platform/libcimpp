/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AuxiliaryEquipment.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Terminal.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		AuxiliaryEquipment(),
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
		{ "AuxiliaryEquipment.Terminal", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

AuxiliaryEquipment::AuxiliaryEquipment() : Terminal(nullptr) {}
AuxiliaryEquipment::~AuxiliaryEquipment() {}

const std::list<std::string>& AuxiliaryEquipment::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& AuxiliaryEquipment::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& AuxiliaryEquipment::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& AuxiliaryEquipment::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& AuxiliaryEquipment::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& AuxiliaryEquipment::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& AuxiliaryEquipment::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

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

bool get_AuxiliaryEquipment_Terminal(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const AuxiliaryEquipment* element = dynamic_cast<const AuxiliaryEquipment*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->Terminal != 0)
		{
			BaseClass_list.push_back(element->Terminal);
			return true;
		}
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
	factory_map.emplace("AuxiliaryEquipment", &AuxiliaryEquipment_factory);
}

void AuxiliaryEquipment::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void AuxiliaryEquipment::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("AuxiliaryEquipment.Terminal", &assign_AuxiliaryEquipment_Terminal);
}

void AuxiliaryEquipment::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Equipment::addPrimitiveGetFnsToMap(get_map);
}

void AuxiliaryEquipment::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Equipment::addClassGetFnsToMap(get_map);
	get_map.emplace("AuxiliaryEquipment.Terminal", &get_AuxiliaryEquipment_Terminal);
}

void AuxiliaryEquipment::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Equipment::addEnumGetFnsToMap(get_map);
}

bool AuxiliaryEquipment::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "AuxiliaryEquipment" &&
		dynamic_cast<AuxiliaryEquipment*>(otherObject) != nullptr;
}

const BaseClassDefiner AuxiliaryEquipment::declare()
{
	return BaseClassDefiner(AuxiliaryEquipment::addConstructToMap, AuxiliaryEquipment::addPrimitiveAssignFnsToMap, AuxiliaryEquipment::addClassAssignFnsToMap, AuxiliaryEquipment::debugName);
}

std::map<std::string, AttrDetails> AuxiliaryEquipment::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = Equipment::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* AuxiliaryEquipment_factory()
	{
		return new AuxiliaryEquipment;
	}
}
