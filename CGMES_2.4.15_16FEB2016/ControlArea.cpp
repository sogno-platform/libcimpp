/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ControlArea.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ControlAreaGeneratingUnit.hpp"
#include "EnergyArea.hpp"
#include "TieFlow.hpp"
#include "ActivePower.hpp"
#include "ActivePower.hpp"
#include "ControlAreaTypeKind.hpp"

using namespace CIMPP;

ControlArea::ControlArea() : EnergyArea(nullptr) {};
ControlArea::~ControlArea() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ControlArea.ControlAreaGeneratingUnit", { CGMESProfile::EQ, } },
	{ "cim:ControlArea.EnergyArea", { CGMESProfile::EQ, } },
	{ "cim:ControlArea.TieFlow", { CGMESProfile::EQ, } },
	{ "cim:ControlArea.netInterchange", { CGMESProfile::SSH, } },
	{ "cim:ControlArea.pTolerance", { CGMESProfile::SSH, } },
	{ "cim:ControlArea.type", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
ControlArea::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ControlArea::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PowerSystemResource::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_ControlArea_netInterchange(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ControlArea* element = dynamic_cast<ControlArea*>(BaseClass_ptr1))
	{
		buffer >> element->netInterchange;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ControlArea_pTolerance(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ControlArea* element = dynamic_cast<ControlArea*>(BaseClass_ptr1))
	{
		buffer >> element->pTolerance;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ControlArea_type(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ControlArea* element = dynamic_cast<ControlArea*>(BaseClass_ptr1))
	{
		buffer >> element->type;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ControlAreaGeneratingUnit_ControlArea(BaseClass*, BaseClass*);
bool assign_ControlArea_ControlAreaGeneratingUnit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ControlArea* element = dynamic_cast<ControlArea*>(BaseClass_ptr1);
	ControlAreaGeneratingUnit* element2 = dynamic_cast<ControlAreaGeneratingUnit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ControlAreaGeneratingUnit.begin(), element->ControlAreaGeneratingUnit.end(), element2) == element->ControlAreaGeneratingUnit.end())
		{
			element->ControlAreaGeneratingUnit.push_back(element2);
			return assign_ControlAreaGeneratingUnit_ControlArea(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_EnergyArea_ControlArea(BaseClass*, BaseClass*);
bool assign_ControlArea_EnergyArea(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ControlArea* element = dynamic_cast<ControlArea*>(BaseClass_ptr1);
	EnergyArea* element2 = dynamic_cast<EnergyArea*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->EnergyArea != element2)
		{
			element->EnergyArea = element2;
			return assign_EnergyArea_ControlArea(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_TieFlow_ControlArea(BaseClass*, BaseClass*);
bool assign_ControlArea_TieFlow(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ControlArea* element = dynamic_cast<ControlArea*>(BaseClass_ptr1);
	TieFlow* element2 = dynamic_cast<TieFlow*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->TieFlow.begin(), element->TieFlow.end(), element2) == element->TieFlow.end())
		{
			element->TieFlow.push_back(element2);
			return assign_TieFlow_ControlArea(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_ControlArea_netInterchange(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ControlArea* element = dynamic_cast<const ControlArea*>(BaseClass_ptr1))
	{
		buffer << element->netInterchange;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ControlArea_pTolerance(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ControlArea* element = dynamic_cast<const ControlArea*>(BaseClass_ptr1))
	{
		buffer << element->pTolerance;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}


bool get_ControlArea_EnergyArea(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const ControlArea* element = dynamic_cast<const ControlArea*>(BaseClass_ptr1))
	{
		if (element->EnergyArea != 0)
		{
			BaseClass_list.push_back(element->EnergyArea);
			return true;
		}
	}
	return false;
}


bool get_ControlArea_type(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ControlArea* element = dynamic_cast<const ControlArea*>(BaseClass_ptr1))
	{
		buffer << element->type;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ControlArea::debugName[] = "ControlArea";
const char* ControlArea::debugString() const
{
	return ControlArea::debugName;
}

void ControlArea::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ControlArea"), &ControlArea_factory));
}

void ControlArea::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ControlArea.netInterchange"), &assign_ControlArea_netInterchange));
	assign_map.insert(std::make_pair(std::string("cim:ControlArea.pTolerance"), &assign_ControlArea_pTolerance));
	assign_map.insert(std::make_pair(std::string("cim:ControlArea.type"), &assign_ControlArea_type));
}

void ControlArea::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ControlArea.ControlAreaGeneratingUnit"), &assign_ControlArea_ControlAreaGeneratingUnit));
	assign_map.insert(std::make_pair(std::string("cim:ControlArea.EnergyArea"), &assign_ControlArea_EnergyArea));
	assign_map.insert(std::make_pair(std::string("cim:ControlArea.TieFlow"), &assign_ControlArea_TieFlow));
}

void ControlArea::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ControlArea.netInterchange", &get_ControlArea_netInterchange);
	get_map.emplace("cim:ControlArea.pTolerance", &get_ControlArea_pTolerance);
}

void ControlArea::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemResource::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:ControlArea.EnergyArea", &get_ControlArea_EnergyArea);
}

void ControlArea::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemResource::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:ControlArea.type", &get_ControlArea_type);
}

const BaseClassDefiner ControlArea::declare()
{
	return BaseClassDefiner(ControlArea::addConstructToMap, ControlArea::addPrimitiveAssignFnsToMap, ControlArea::addClassAssignFnsToMap, ControlArea::debugName);
}

namespace CIMPP
{
	BaseClass* ControlArea_factory()
	{
		return new ControlArea;
	}
}
