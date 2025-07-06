/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ThermalGeneratingUnit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "FossilFuel.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ThermalGeneratingUnit(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
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
		{ "ThermalGeneratingUnit.FossilFuels", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

ThermalGeneratingUnit::ThermalGeneratingUnit() {}
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
	assign_map.emplace("ThermalGeneratingUnit.FossilFuels", &assign_ThermalGeneratingUnit_FossilFuels);
}

void ThermalGeneratingUnit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	GeneratingUnit::addPrimitiveGetFnsToMap(get_map);
}

void ThermalGeneratingUnit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	GeneratingUnit::addClassGetFnsToMap(get_map);
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
