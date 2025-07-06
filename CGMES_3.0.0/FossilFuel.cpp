/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "FossilFuel.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ThermalGeneratingUnit.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		FossilFuel(),
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
		{ "FossilFuel.ThermalGeneratingUnit", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
		{ "FossilFuel.fossilFuelType", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::EQ, } } },
	};
    return ClassAttrDetailsMap;
}

FossilFuel::FossilFuel() : ThermalGeneratingUnit(nullptr) {}
FossilFuel::~FossilFuel() {}

const std::list<std::string>& FossilFuel::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& FossilFuel::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& FossilFuel::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& FossilFuel::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& FossilFuel::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& FossilFuel::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& FossilFuel::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ThermalGeneratingUnit_FossilFuels(BaseClass*, BaseClass*);
bool assign_FossilFuel_ThermalGeneratingUnit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	FossilFuel* element = dynamic_cast<FossilFuel*>(BaseClass_ptr1);
	ThermalGeneratingUnit* element2 = dynamic_cast<ThermalGeneratingUnit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ThermalGeneratingUnit != element2)
		{
			element->ThermalGeneratingUnit = element2;
			return assign_ThermalGeneratingUnit_FossilFuels(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_FossilFuel_fossilFuelType(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	FossilFuel* element = dynamic_cast<FossilFuel*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fossilFuelType;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_FossilFuel_ThermalGeneratingUnit(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const FossilFuel* element = dynamic_cast<const FossilFuel*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->ThermalGeneratingUnit != 0)
		{
			BaseClass_list.push_back(element->ThermalGeneratingUnit);
			return true;
		}
	}
	return false;
}

bool get_FossilFuel_fossilFuelType(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const FossilFuel* element = dynamic_cast<const FossilFuel*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fossilFuelType;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char FossilFuel::debugName[] = "FossilFuel";
const char* FossilFuel::debugString() const
{
	return FossilFuel::debugName;
}

void FossilFuel::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("FossilFuel", &FossilFuel_factory);
}

void FossilFuel::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("FossilFuel.fossilFuelType", &assign_FossilFuel_fossilFuelType);
}

void FossilFuel::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("FossilFuel.ThermalGeneratingUnit", &assign_FossilFuel_ThermalGeneratingUnit);
}

void FossilFuel::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void FossilFuel::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("FossilFuel.ThermalGeneratingUnit", &get_FossilFuel_ThermalGeneratingUnit);
}

void FossilFuel::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
	get_map.emplace("FossilFuel.fossilFuelType", &get_FossilFuel_fossilFuelType);
}

bool FossilFuel::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "FossilFuel" &&
		dynamic_cast<FossilFuel*>(otherObject) != nullptr;
}

const BaseClassDefiner FossilFuel::declare()
{
	return BaseClassDefiner(FossilFuel::addConstructToMap, FossilFuel::addPrimitiveAssignFnsToMap, FossilFuel::addClassAssignFnsToMap, FossilFuel::debugName);
}

std::map<std::string, AttrDetails> FossilFuel::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* FossilFuel_factory()
	{
		return new FossilFuel;
	}
}
