/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "FossilFuel.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ThermalGeneratingUnit.hpp"
#include "FuelType.hpp"

using namespace CIMPP;

FossilFuel::FossilFuel() : ThermalGeneratingUnit(nullptr) {};
FossilFuel::~FossilFuel() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:FossilFuel.ThermalGeneratingUnit", { CGMESProfile::EQ, } },
	{ "cim:FossilFuel.fossilFuelType", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
FossilFuel::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
FossilFuel::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_FossilFuel_fossilFuelType(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (FossilFuel* element = dynamic_cast<FossilFuel*>(BaseClass_ptr1))
	{
		buffer >> element->fossilFuelType;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
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


bool get_FossilFuel_ThermalGeneratingUnit(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const FossilFuel* element = dynamic_cast<const FossilFuel*>(BaseClass_ptr1))
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
	if (const FossilFuel* element = dynamic_cast<const FossilFuel*>(BaseClass_ptr1))
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
	factory_map.insert(std::make_pair(std::string("cim:FossilFuel"), &FossilFuel_factory));
}

void FossilFuel::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:FossilFuel.fossilFuelType"), &assign_FossilFuel_fossilFuelType));
}

void FossilFuel::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:FossilFuel.ThermalGeneratingUnit"), &assign_FossilFuel_ThermalGeneratingUnit));
}

void FossilFuel::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void FossilFuel::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:FossilFuel.ThermalGeneratingUnit", &get_FossilFuel_ThermalGeneratingUnit);
}

void FossilFuel::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:FossilFuel.fossilFuelType", &get_FossilFuel_fossilFuelType);
}

const BaseClassDefiner FossilFuel::declare()
{
	return BaseClassDefiner(FossilFuel::addConstructToMap, FossilFuel::addPrimitiveAssignFnsToMap, FossilFuel::addClassAssignFnsToMap, FossilFuel::debugName);
}

namespace CIMPP
{
	BaseClass* FossilFuel_factory()
	{
		return new FossilFuel;
	}
}
