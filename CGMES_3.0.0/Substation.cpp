/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Substation.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "DCConverterUnit.hpp"
#include "SubGeographicalRegion.hpp"
#include "VoltageLevel.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		Substation(),
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
		{ "Substation.DCConverterUnit", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "Substation.Region", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, CGMESProfile::EQBD, } } },
		{ "Substation.VoltageLevels", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, CGMESProfile::EQBD, } } },
	};
    return ClassAttrDetailsMap;
}

Substation::Substation() : Region(nullptr) {}
Substation::~Substation() {}

const std::list<std::string>& Substation::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& Substation::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& Substation::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& Substation::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& Substation::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& Substation::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& Substation::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_DCConverterUnit_Substation(BaseClass*, BaseClass*);
bool assign_Substation_DCConverterUnit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Substation* element = dynamic_cast<Substation*>(BaseClass_ptr1);
	DCConverterUnit* element2 = dynamic_cast<DCConverterUnit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->DCConverterUnit.begin(), element->DCConverterUnit.end(), element2) == element->DCConverterUnit.end())
		{
			element->DCConverterUnit.push_back(element2);
			return assign_DCConverterUnit_Substation(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SubGeographicalRegion_Substations(BaseClass*, BaseClass*);
bool assign_Substation_Region(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Substation* element = dynamic_cast<Substation*>(BaseClass_ptr1);
	SubGeographicalRegion* element2 = dynamic_cast<SubGeographicalRegion*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Region != element2)
		{
			element->Region = element2;
			return assign_SubGeographicalRegion_Substations(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_VoltageLevel_Substation(BaseClass*, BaseClass*);
bool assign_Substation_VoltageLevels(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Substation* element = dynamic_cast<Substation*>(BaseClass_ptr1);
	VoltageLevel* element2 = dynamic_cast<VoltageLevel*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->VoltageLevels.begin(), element->VoltageLevels.end(), element2) == element->VoltageLevels.end())
		{
			element->VoltageLevels.push_back(element2);
			return assign_VoltageLevel_Substation(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


bool get_Substation_Region(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const Substation* element = dynamic_cast<const Substation*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->Region != 0)
		{
			BaseClass_list.push_back(element->Region);
			return true;
		}
	}
	return false;
}


const char Substation::debugName[] = "Substation";
const char* Substation::debugString() const
{
	return Substation::debugName;
}

void Substation::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("Substation", &Substation_factory);
}

void Substation::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Substation::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("Substation.DCConverterUnit", &assign_Substation_DCConverterUnit);
	assign_map.emplace("Substation.Region", &assign_Substation_Region);
	assign_map.emplace("Substation.VoltageLevels", &assign_Substation_VoltageLevels);
}

void Substation::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquipmentContainer::addPrimitiveGetFnsToMap(get_map);
}

void Substation::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EquipmentContainer::addClassGetFnsToMap(get_map);
	get_map.emplace("Substation.Region", &get_Substation_Region);
}

void Substation::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquipmentContainer::addEnumGetFnsToMap(get_map);
}

bool Substation::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "Substation" &&
		dynamic_cast<Substation*>(otherObject) != nullptr;
}

const BaseClassDefiner Substation::declare()
{
	return BaseClassDefiner(Substation::addConstructToMap, Substation::addPrimitiveAssignFnsToMap, Substation::addClassAssignFnsToMap, Substation::debugName);
}

std::map<std::string, AttrDetails> Substation::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = EquipmentContainer::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* Substation_factory()
	{
		return new Substation;
	}
}
