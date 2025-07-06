/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ThermalGeneratingUnit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "CAESPlant.hpp"
#include "CogenerationPlant.hpp"
#include "CombinedCyclePlant.hpp"
#include "FossilFuel.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ThermalGeneratingUnit(),
		"http://iec.ch/TC57/CIM100#",
		{
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
		{ "ThermalGeneratingUnit.CAESPlant", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "ThermalGeneratingUnit.CogenerationPlant", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "ThermalGeneratingUnit.CombinedCyclePlant", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "ThermalGeneratingUnit.FossilFuels", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

ThermalGeneratingUnit::ThermalGeneratingUnit() : CAESPlant(nullptr), CogenerationPlant(nullptr), CombinedCyclePlant(nullptr) {}
ThermalGeneratingUnit::~ThermalGeneratingUnit() {}

const std::list<std::string>& ThermalGeneratingUnit::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ThermalGeneratingUnit::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ThermalGeneratingUnit::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ThermalGeneratingUnit::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ThermalGeneratingUnit::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ThermalGeneratingUnit::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ThermalGeneratingUnit::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_CAESPlant_ThermalGeneratingUnit(BaseClass*, BaseClass*);
bool assign_ThermalGeneratingUnit_CAESPlant(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ThermalGeneratingUnit* element = dynamic_cast<ThermalGeneratingUnit*>(BaseClass_ptr1);
	CAESPlant* element2 = dynamic_cast<CAESPlant*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->CAESPlant != element2)
		{
			element->CAESPlant = element2;
			return assign_CAESPlant_ThermalGeneratingUnit(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_CogenerationPlant_ThermalGeneratingUnits(BaseClass*, BaseClass*);
bool assign_ThermalGeneratingUnit_CogenerationPlant(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ThermalGeneratingUnit* element = dynamic_cast<ThermalGeneratingUnit*>(BaseClass_ptr1);
	CogenerationPlant* element2 = dynamic_cast<CogenerationPlant*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->CogenerationPlant != element2)
		{
			element->CogenerationPlant = element2;
			return assign_CogenerationPlant_ThermalGeneratingUnits(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_CombinedCyclePlant_ThermalGeneratingUnits(BaseClass*, BaseClass*);
bool assign_ThermalGeneratingUnit_CombinedCyclePlant(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ThermalGeneratingUnit* element = dynamic_cast<ThermalGeneratingUnit*>(BaseClass_ptr1);
	CombinedCyclePlant* element2 = dynamic_cast<CombinedCyclePlant*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->CombinedCyclePlant != element2)
		{
			element->CombinedCyclePlant = element2;
			return assign_CombinedCyclePlant_ThermalGeneratingUnits(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_FossilFuel_ThermalGeneratingUnit(BaseClass*, BaseClass*);
bool assign_ThermalGeneratingUnit_FossilFuels(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ThermalGeneratingUnit* element = dynamic_cast<ThermalGeneratingUnit*>(BaseClass_ptr1);
	FossilFuel* element2 = dynamic_cast<FossilFuel*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->FossilFuels.begin(), element->FossilFuels.end(), element2) == element->FossilFuels.end())
		{
			element->FossilFuels.push_back(element2);
			return assign_FossilFuel_ThermalGeneratingUnit(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_ThermalGeneratingUnit_CAESPlant(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ThermalGeneratingUnit* element = dynamic_cast<const ThermalGeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->CAESPlant != 0)
		{
			BaseClass_list.push_back(element->CAESPlant);
			return true;
		}
	}
	return false;
}

bool get_ThermalGeneratingUnit_CogenerationPlant(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ThermalGeneratingUnit* element = dynamic_cast<const ThermalGeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->CogenerationPlant != 0)
		{
			BaseClass_list.push_back(element->CogenerationPlant);
			return true;
		}
	}
	return false;
}

bool get_ThermalGeneratingUnit_CombinedCyclePlant(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ThermalGeneratingUnit* element = dynamic_cast<const ThermalGeneratingUnit*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->CombinedCyclePlant != 0)
		{
			BaseClass_list.push_back(element->CombinedCyclePlant);
			return true;
		}
	}
	return false;
}


const char ThermalGeneratingUnit::debugName[] = "ThermalGeneratingUnit";
const char* ThermalGeneratingUnit::debugString() const
{
	return ThermalGeneratingUnit::debugName;
}

void ThermalGeneratingUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ThermalGeneratingUnit", &ThermalGeneratingUnit_factory);
}

void ThermalGeneratingUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void ThermalGeneratingUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("ThermalGeneratingUnit.CAESPlant", &assign_ThermalGeneratingUnit_CAESPlant);
	assign_map.emplace("ThermalGeneratingUnit.CogenerationPlant", &assign_ThermalGeneratingUnit_CogenerationPlant);
	assign_map.emplace("ThermalGeneratingUnit.CombinedCyclePlant", &assign_ThermalGeneratingUnit_CombinedCyclePlant);
	assign_map.emplace("ThermalGeneratingUnit.FossilFuels", &assign_ThermalGeneratingUnit_FossilFuels);
}

void ThermalGeneratingUnit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	GeneratingUnit::addPrimitiveGetFnsToMap(get_map);
}

void ThermalGeneratingUnit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	GeneratingUnit::addClassGetFnsToMap(get_map);
	get_map.emplace("ThermalGeneratingUnit.CAESPlant", &get_ThermalGeneratingUnit_CAESPlant);
	get_map.emplace("ThermalGeneratingUnit.CogenerationPlant", &get_ThermalGeneratingUnit_CogenerationPlant);
	get_map.emplace("ThermalGeneratingUnit.CombinedCyclePlant", &get_ThermalGeneratingUnit_CombinedCyclePlant);
}

void ThermalGeneratingUnit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	GeneratingUnit::addEnumGetFnsToMap(get_map);
}

bool ThermalGeneratingUnit::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ThermalGeneratingUnit" &&
		dynamic_cast<ThermalGeneratingUnit*>(otherObject) != nullptr;
}

const BaseClassDefiner ThermalGeneratingUnit::declare()
{
	return BaseClassDefiner(ThermalGeneratingUnit::addConstructToMap, ThermalGeneratingUnit::addPrimitiveAssignFnsToMap, ThermalGeneratingUnit::addClassAssignFnsToMap, ThermalGeneratingUnit::debugName);
}

std::map<std::string, AttrDetails> ThermalGeneratingUnit::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = GeneratingUnit::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ThermalGeneratingUnit_factory()
	{
		return new ThermalGeneratingUnit;
	}
}
