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

ThermalGeneratingUnit::ThermalGeneratingUnit() {}
ThermalGeneratingUnit::~ThermalGeneratingUnit() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ThermalGeneratingUnit.FossilFuels", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
ThermalGeneratingUnit::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ThermalGeneratingUnit::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = GeneratingUnit::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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
	factory_map.emplace("cim:ThermalGeneratingUnit", &ThermalGeneratingUnit_factory);
}

void ThermalGeneratingUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void ThermalGeneratingUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:ThermalGeneratingUnit.FossilFuels", &assign_ThermalGeneratingUnit_FossilFuels);
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

const BaseClassDefiner ThermalGeneratingUnit::declare()
{
	return BaseClassDefiner(ThermalGeneratingUnit::addConstructToMap, ThermalGeneratingUnit::addPrimitiveAssignFnsToMap, ThermalGeneratingUnit::addClassAssignFnsToMap, ThermalGeneratingUnit::debugName);
}

namespace CIMPP
{
	BaseClass* ThermalGeneratingUnit_factory()
	{
		return new ThermalGeneratingUnit;
	}
}
