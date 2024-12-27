/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LoadArea.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "SubLoadArea.hpp"

using namespace CIMPP;

LoadArea::LoadArea() {};
LoadArea::~LoadArea() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:LoadArea.SubLoadAreas", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
LoadArea::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
LoadArea::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = EnergyArea::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



bool assign_SubLoadArea_LoadArea(BaseClass*, BaseClass*);
bool assign_LoadArea_SubLoadAreas(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	LoadArea* element = dynamic_cast<LoadArea*>(BaseClass_ptr1);
	SubLoadArea* element2 = dynamic_cast<SubLoadArea*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->SubLoadAreas.begin(), element->SubLoadAreas.end(), element2) == element->SubLoadAreas.end())
		{
			element->SubLoadAreas.push_back(element2);
			return assign_SubLoadArea_LoadArea(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



const char LoadArea::debugName[] = "LoadArea";
const char* LoadArea::debugString() const
{
	return LoadArea::debugName;
}

void LoadArea::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:LoadArea"), &LoadArea_factory));
}

void LoadArea::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void LoadArea::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:LoadArea.SubLoadAreas"), &assign_LoadArea_SubLoadAreas));
}

void LoadArea::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EnergyArea::addPrimitiveGetFnsToMap(get_map);
}

void LoadArea::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EnergyArea::addClassGetFnsToMap(get_map);
}

void LoadArea::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EnergyArea::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner LoadArea::declare()
{
	return BaseClassDefiner(LoadArea::addConstructToMap, LoadArea::addPrimitiveAssignFnsToMap, LoadArea::addClassAssignFnsToMap, LoadArea::debugName);
}

namespace CIMPP
{
	BaseClass* LoadArea_factory()
	{
		return new LoadArea;
	}
}
