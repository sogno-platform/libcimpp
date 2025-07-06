/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CombinedCyclePlant.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ThermalGeneratingUnit.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		CombinedCyclePlant(),
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
		{ "CombinedCyclePlant.ThermalGeneratingUnits", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

CombinedCyclePlant::CombinedCyclePlant() {}
CombinedCyclePlant::~CombinedCyclePlant() {}

const std::list<std::string>& CombinedCyclePlant::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& CombinedCyclePlant::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& CombinedCyclePlant::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& CombinedCyclePlant::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& CombinedCyclePlant::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& CombinedCyclePlant::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& CombinedCyclePlant::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ThermalGeneratingUnit_CombinedCyclePlant(BaseClass*, BaseClass*);
bool assign_CombinedCyclePlant_ThermalGeneratingUnits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	CombinedCyclePlant* element = dynamic_cast<CombinedCyclePlant*>(BaseClass_ptr1);
	ThermalGeneratingUnit* element2 = dynamic_cast<ThermalGeneratingUnit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ThermalGeneratingUnits.begin(), element->ThermalGeneratingUnits.end(), element2) == element->ThermalGeneratingUnits.end())
		{
			element->ThermalGeneratingUnits.push_back(element2);
			return assign_ThermalGeneratingUnit_CombinedCyclePlant(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char CombinedCyclePlant::debugName[] = "CombinedCyclePlant";
const char* CombinedCyclePlant::debugString() const
{
	return CombinedCyclePlant::debugName;
}

void CombinedCyclePlant::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("CombinedCyclePlant", &CombinedCyclePlant_factory);
}

void CombinedCyclePlant::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void CombinedCyclePlant::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("CombinedCyclePlant.ThermalGeneratingUnits", &assign_CombinedCyclePlant_ThermalGeneratingUnits);
}

void CombinedCyclePlant::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addPrimitiveGetFnsToMap(get_map);
}

void CombinedCyclePlant::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemResource::addClassGetFnsToMap(get_map);
}

void CombinedCyclePlant::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addEnumGetFnsToMap(get_map);
}

bool CombinedCyclePlant::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "CombinedCyclePlant" &&
		dynamic_cast<CombinedCyclePlant*>(otherObject) != nullptr;
}

const BaseClassDefiner CombinedCyclePlant::declare()
{
	return BaseClassDefiner(CombinedCyclePlant::addConstructToMap, CombinedCyclePlant::addPrimitiveAssignFnsToMap, CombinedCyclePlant::addClassAssignFnsToMap, CombinedCyclePlant::debugName);
}

std::map<std::string, AttrDetails> CombinedCyclePlant::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PowerSystemResource::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* CombinedCyclePlant_factory()
	{
		return new CombinedCyclePlant;
	}
}
