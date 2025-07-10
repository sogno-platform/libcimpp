/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "EnergyArea.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ControlArea.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		EnergyArea(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
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
		{ "EnergyArea.ControlArea", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

EnergyArea::EnergyArea() : ControlArea(nullptr) {}
EnergyArea::~EnergyArea() {}

const std::list<std::string>& EnergyArea::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& EnergyArea::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& EnergyArea::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& EnergyArea::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& EnergyArea::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& EnergyArea::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& EnergyArea::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ControlArea_EnergyArea(BaseClass*, BaseClass*);
bool assign_EnergyArea_ControlArea(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	EnergyArea* element = dynamic_cast<EnergyArea*>(BaseClass_ptr1);
	ControlArea* element2 = dynamic_cast<ControlArea*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ControlArea != element2)
		{
			element->ControlArea = element2;
			return assign_ControlArea_EnergyArea(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char EnergyArea::debugName[] = "EnergyArea";
const char* EnergyArea::debugString() const
{
	return EnergyArea::debugName;
}

void EnergyArea::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("EnergyArea", &EnergyArea_factory);
}

void EnergyArea::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void EnergyArea::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("EnergyArea.ControlArea", &assign_EnergyArea_ControlArea);
}

void EnergyArea::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void EnergyArea::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void EnergyArea::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool EnergyArea::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "EnergyArea" &&
		dynamic_cast<EnergyArea*>(otherObject) != nullptr;
}

const BaseClassDefiner EnergyArea::declare()
{
	return BaseClassDefiner(EnergyArea::addConstructToMap, EnergyArea::addPrimitiveAssignFnsToMap, EnergyArea::addClassAssignFnsToMap, EnergyArea::debugName);
}

std::map<std::string, AttrDetails> EnergyArea::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* EnergyArea_factory()
	{
		return new EnergyArea;
	}
}
