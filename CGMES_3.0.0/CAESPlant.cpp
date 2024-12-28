/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CAESPlant.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ThermalGeneratingUnit.hpp"

using namespace CIMPP;

CAESPlant::CAESPlant() : ThermalGeneratingUnit(nullptr) {};
CAESPlant::~CAESPlant() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:CAESPlant.ThermalGeneratingUnit", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
CAESPlant::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
CAESPlant::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PowerSystemResource::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



bool assign_ThermalGeneratingUnit_CAESPlant(BaseClass*, BaseClass*);
bool assign_CAESPlant_ThermalGeneratingUnit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	CAESPlant* element = dynamic_cast<CAESPlant*>(BaseClass_ptr1);
	ThermalGeneratingUnit* element2 = dynamic_cast<ThermalGeneratingUnit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ThermalGeneratingUnit != element2)
		{
			element->ThermalGeneratingUnit = element2;
			return assign_ThermalGeneratingUnit_CAESPlant(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



const char CAESPlant::debugName[] = "CAESPlant";
const char* CAESPlant::debugString() const
{
	return CAESPlant::debugName;
}

void CAESPlant::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:CAESPlant"), &CAESPlant_factory));
}

void CAESPlant::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void CAESPlant::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:CAESPlant.ThermalGeneratingUnit"), &assign_CAESPlant_ThermalGeneratingUnit));
}

void CAESPlant::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addPrimitiveGetFnsToMap(get_map);
}

void CAESPlant::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemResource::addClassGetFnsToMap(get_map);
}

void CAESPlant::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner CAESPlant::declare()
{
	return BaseClassDefiner(CAESPlant::addConstructToMap, CAESPlant::addPrimitiveAssignFnsToMap, CAESPlant::addClassAssignFnsToMap, CAESPlant::debugName);
}

namespace CIMPP
{
	BaseClass* CAESPlant_factory()
	{
		return new CAESPlant;
	}
}
