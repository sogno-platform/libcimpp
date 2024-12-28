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

CombinedCyclePlant::CombinedCyclePlant() {};
CombinedCyclePlant::~CombinedCyclePlant() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:CombinedCyclePlant.ThermalGeneratingUnits", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
CombinedCyclePlant::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
CombinedCyclePlant::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PowerSystemResource::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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
	factory_map.insert(std::make_pair(std::string("cim:CombinedCyclePlant"), &CombinedCyclePlant_factory));
}

void CombinedCyclePlant::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void CombinedCyclePlant::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:CombinedCyclePlant.ThermalGeneratingUnits"), &assign_CombinedCyclePlant_ThermalGeneratingUnits));
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

const BaseClassDefiner CombinedCyclePlant::declare()
{
	return BaseClassDefiner(CombinedCyclePlant::addConstructToMap, CombinedCyclePlant::addPrimitiveAssignFnsToMap, CombinedCyclePlant::addClassAssignFnsToMap, CombinedCyclePlant::debugName);
}

namespace CIMPP
{
	BaseClass* CombinedCyclePlant_factory()
	{
		return new CombinedCyclePlant;
	}
}
