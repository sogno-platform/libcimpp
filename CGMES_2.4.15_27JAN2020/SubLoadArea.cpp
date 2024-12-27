/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SubLoadArea.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "LoadArea.hpp"
#include "LoadGroup.hpp"

using namespace CIMPP;

SubLoadArea::SubLoadArea() : LoadArea(nullptr) {};
SubLoadArea::~SubLoadArea() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:SubLoadArea.LoadArea", { CGMESProfile::EQ, } },
	{ "cim:SubLoadArea.LoadGroups", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
SubLoadArea::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
SubLoadArea::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = EnergyArea::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



bool assign_LoadArea_SubLoadAreas(BaseClass*, BaseClass*);
bool assign_SubLoadArea_LoadArea(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SubLoadArea* element = dynamic_cast<SubLoadArea*>(BaseClass_ptr1);
	LoadArea* element2 = dynamic_cast<LoadArea*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->LoadArea != element2)
		{
			element->LoadArea = element2;
			return assign_LoadArea_SubLoadAreas(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_LoadGroup_SubLoadArea(BaseClass*, BaseClass*);
bool assign_SubLoadArea_LoadGroups(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SubLoadArea* element = dynamic_cast<SubLoadArea*>(BaseClass_ptr1);
	LoadGroup* element2 = dynamic_cast<LoadGroup*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->LoadGroups.begin(), element->LoadGroups.end(), element2) == element->LoadGroups.end())
		{
			element->LoadGroups.push_back(element2);
			return assign_LoadGroup_SubLoadArea(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


bool get_SubLoadArea_LoadArea(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const SubLoadArea* element = dynamic_cast<const SubLoadArea*>(BaseClass_ptr1))
	{
		if (element->LoadArea != 0)
		{
			BaseClass_list.push_back(element->LoadArea);
			return true;
		}
	}
	return false;
}


const char SubLoadArea::debugName[] = "SubLoadArea";
const char* SubLoadArea::debugString() const
{
	return SubLoadArea::debugName;
}

void SubLoadArea::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:SubLoadArea"), &SubLoadArea_factory));
}

void SubLoadArea::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void SubLoadArea::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SubLoadArea.LoadArea"), &assign_SubLoadArea_LoadArea));
	assign_map.insert(std::make_pair(std::string("cim:SubLoadArea.LoadGroups"), &assign_SubLoadArea_LoadGroups));
}

void SubLoadArea::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EnergyArea::addPrimitiveGetFnsToMap(get_map);
}

void SubLoadArea::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EnergyArea::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:SubLoadArea.LoadArea", &get_SubLoadArea_LoadArea);
}

void SubLoadArea::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EnergyArea::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner SubLoadArea::declare()
{
	return BaseClassDefiner(SubLoadArea::addConstructToMap, SubLoadArea::addPrimitiveAssignFnsToMap, SubLoadArea::addClassAssignFnsToMap, SubLoadArea::debugName);
}

namespace CIMPP
{
	BaseClass* SubLoadArea_factory()
	{
		return new SubLoadArea;
	}
}
