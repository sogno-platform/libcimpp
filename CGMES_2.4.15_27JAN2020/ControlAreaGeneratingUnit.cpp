/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ControlAreaGeneratingUnit.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ControlArea.hpp"
#include "GeneratingUnit.hpp"

using namespace CIMPP;

ControlAreaGeneratingUnit::ControlAreaGeneratingUnit() : ControlArea(nullptr), GeneratingUnit(nullptr) {};
ControlAreaGeneratingUnit::~ControlAreaGeneratingUnit() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ControlAreaGeneratingUnit.ControlArea", { CGMESProfile::EQ, } },
	{ "cim:ControlAreaGeneratingUnit.GeneratingUnit", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
ControlAreaGeneratingUnit::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ControlAreaGeneratingUnit::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



bool assign_ControlArea_ControlAreaGeneratingUnit(BaseClass*, BaseClass*);
bool assign_ControlAreaGeneratingUnit_ControlArea(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ControlAreaGeneratingUnit* element = dynamic_cast<ControlAreaGeneratingUnit*>(BaseClass_ptr1);
	ControlArea* element2 = dynamic_cast<ControlArea*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ControlArea != element2)
		{
			element->ControlArea = element2;
			return assign_ControlArea_ControlAreaGeneratingUnit(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_GeneratingUnit_ControlAreaGeneratingUnit(BaseClass*, BaseClass*);
bool assign_ControlAreaGeneratingUnit_GeneratingUnit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ControlAreaGeneratingUnit* element = dynamic_cast<ControlAreaGeneratingUnit*>(BaseClass_ptr1);
	GeneratingUnit* element2 = dynamic_cast<GeneratingUnit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->GeneratingUnit != element2)
		{
			element->GeneratingUnit = element2;
			return assign_GeneratingUnit_ControlAreaGeneratingUnit(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


bool get_ControlAreaGeneratingUnit_ControlArea(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const ControlAreaGeneratingUnit* element = dynamic_cast<const ControlAreaGeneratingUnit*>(BaseClass_ptr1))
	{
		if (element->ControlArea != 0)
		{
			BaseClass_list.push_back(element->ControlArea);
			return true;
		}
	}
	return false;
}

bool get_ControlAreaGeneratingUnit_GeneratingUnit(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const ControlAreaGeneratingUnit* element = dynamic_cast<const ControlAreaGeneratingUnit*>(BaseClass_ptr1))
	{
		if (element->GeneratingUnit != 0)
		{
			BaseClass_list.push_back(element->GeneratingUnit);
			return true;
		}
	}
	return false;
}


const char ControlAreaGeneratingUnit::debugName[] = "ControlAreaGeneratingUnit";
const char* ControlAreaGeneratingUnit::debugString() const
{
	return ControlAreaGeneratingUnit::debugName;
}

void ControlAreaGeneratingUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ControlAreaGeneratingUnit"), &ControlAreaGeneratingUnit_factory));
}

void ControlAreaGeneratingUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void ControlAreaGeneratingUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ControlAreaGeneratingUnit.ControlArea"), &assign_ControlAreaGeneratingUnit_ControlArea));
	assign_map.insert(std::make_pair(std::string("cim:ControlAreaGeneratingUnit.GeneratingUnit"), &assign_ControlAreaGeneratingUnit_GeneratingUnit));
}

void ControlAreaGeneratingUnit::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void ControlAreaGeneratingUnit::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:ControlAreaGeneratingUnit.ControlArea", &get_ControlAreaGeneratingUnit_ControlArea);
	get_map.emplace("cim:ControlAreaGeneratingUnit.GeneratingUnit", &get_ControlAreaGeneratingUnit_GeneratingUnit);
}

void ControlAreaGeneratingUnit::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ControlAreaGeneratingUnit::declare()
{
	return BaseClassDefiner(ControlAreaGeneratingUnit::addConstructToMap, ControlAreaGeneratingUnit::addPrimitiveAssignFnsToMap, ControlAreaGeneratingUnit::addClassAssignFnsToMap, ControlAreaGeneratingUnit::debugName);
}

namespace CIMPP
{
	BaseClass* ControlAreaGeneratingUnit_factory()
	{
		return new ControlAreaGeneratingUnit;
	}
}
