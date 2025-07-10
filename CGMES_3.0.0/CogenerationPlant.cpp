/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CogenerationPlant.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ThermalGeneratingUnit.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		CogenerationPlant(),
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
		{ "CogenerationPlant.ThermalGeneratingUnits", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

CogenerationPlant::CogenerationPlant() {}
CogenerationPlant::~CogenerationPlant() {}

const std::list<std::string>& CogenerationPlant::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& CogenerationPlant::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& CogenerationPlant::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& CogenerationPlant::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& CogenerationPlant::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& CogenerationPlant::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& CogenerationPlant::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ThermalGeneratingUnit_CogenerationPlant(BaseClass*, BaseClass*);
bool assign_CogenerationPlant_ThermalGeneratingUnits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	CogenerationPlant* element = dynamic_cast<CogenerationPlant*>(BaseClass_ptr1);
	ThermalGeneratingUnit* element2 = dynamic_cast<ThermalGeneratingUnit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ThermalGeneratingUnits.begin(), element->ThermalGeneratingUnits.end(), element2) == element->ThermalGeneratingUnits.end())
		{
			element->ThermalGeneratingUnits.push_back(element2);
			return assign_ThermalGeneratingUnit_CogenerationPlant(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char CogenerationPlant::debugName[] = "CogenerationPlant";
const char* CogenerationPlant::debugString() const
{
	return CogenerationPlant::debugName;
}

void CogenerationPlant::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("CogenerationPlant", &CogenerationPlant_factory);
}

void CogenerationPlant::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void CogenerationPlant::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("CogenerationPlant.ThermalGeneratingUnits", &assign_CogenerationPlant_ThermalGeneratingUnits);
}

void CogenerationPlant::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addPrimitiveGetFnsToMap(get_map);
}

void CogenerationPlant::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemResource::addClassGetFnsToMap(get_map);
}

void CogenerationPlant::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addEnumGetFnsToMap(get_map);
}

bool CogenerationPlant::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "CogenerationPlant" &&
		dynamic_cast<CogenerationPlant*>(otherObject) != nullptr;
}

const BaseClassDefiner CogenerationPlant::declare()
{
	return BaseClassDefiner(CogenerationPlant::addConstructToMap, CogenerationPlant::addPrimitiveAssignFnsToMap, CogenerationPlant::addClassAssignFnsToMap, CogenerationPlant::debugName);
}

std::map<std::string, AttrDetails> CogenerationPlant::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PowerSystemResource::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* CogenerationPlant_factory()
	{
		return new CogenerationPlant;
	}
}
