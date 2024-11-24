/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ControlArea.hpp"

#include <algorithm>
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
