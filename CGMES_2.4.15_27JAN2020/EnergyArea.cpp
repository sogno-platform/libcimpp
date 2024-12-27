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

EnergyArea::EnergyArea() : ControlArea(nullptr) {};
EnergyArea::~EnergyArea() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:EnergyArea.ControlArea", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
EnergyArea::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
EnergyArea::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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
	factory_map.insert(std::make_pair(std::string("cim:EnergyArea"), &EnergyArea_factory));
}

void EnergyArea::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void EnergyArea::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:EnergyArea.ControlArea"), &assign_EnergyArea_ControlArea));
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

const BaseClassDefiner EnergyArea::declare()
{
	return BaseClassDefiner(EnergyArea::addConstructToMap, EnergyArea::addPrimitiveAssignFnsToMap, EnergyArea::addClassAssignFnsToMap, EnergyArea::debugName);
}

namespace CIMPP
{
	BaseClass* EnergyArea_factory()
	{
		return new EnergyArea;
	}
}
