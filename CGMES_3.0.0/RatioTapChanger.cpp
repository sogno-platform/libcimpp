/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RatioTapChanger.hpp"

#include <algorithm>
#include <sstream>

#include "RatioTapChangerTable.hpp"
#include "TransformerEnd.hpp"
#include "PerCent.hpp"

using namespace CIMPP;

RatioTapChanger::RatioTapChanger() : RatioTapChangerTable(nullptr), TransformerEnd(nullptr) {};
RatioTapChanger::~RatioTapChanger() {};




bool assign_RatioTapChanger_stepVoltageIncrement(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (RatioTapChanger* element = dynamic_cast<RatioTapChanger*>(BaseClass_ptr1))
	{
		buffer >> element->stepVoltageIncrement;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_RatioTapChangerTable_RatioTapChanger(BaseClass*, BaseClass*);
bool assign_RatioTapChanger_RatioTapChangerTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RatioTapChanger* element = dynamic_cast<RatioTapChanger*>(BaseClass_ptr1);
	RatioTapChangerTable* element2 = dynamic_cast<RatioTapChangerTable*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->RatioTapChangerTable != element2)
		{
			element->RatioTapChangerTable = element2;
			return assign_RatioTapChangerTable_RatioTapChanger(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_TransformerEnd_RatioTapChanger(BaseClass*, BaseClass*);
bool assign_RatioTapChanger_TransformerEnd(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RatioTapChanger* element = dynamic_cast<RatioTapChanger*>(BaseClass_ptr1);
	TransformerEnd* element2 = dynamic_cast<TransformerEnd*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->TransformerEnd != element2)
		{
			element->TransformerEnd = element2;
			return assign_TransformerEnd_RatioTapChanger(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char RatioTapChanger::debugName[] = "RatioTapChanger";
const char* RatioTapChanger::debugString() const
{
	return RatioTapChanger::debugName;
}

void RatioTapChanger::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:RatioTapChanger"), &RatioTapChanger_factory));
}

void RatioTapChanger::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:RatioTapChanger.stepVoltageIncrement"), &assign_RatioTapChanger_stepVoltageIncrement));
}

void RatioTapChanger::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:RatioTapChanger.RatioTapChangerTable"), &assign_RatioTapChanger_RatioTapChangerTable));
	assign_map.insert(std::make_pair(std::string("cim:RatioTapChanger.TransformerEnd"), &assign_RatioTapChanger_TransformerEnd));
}

const BaseClassDefiner RatioTapChanger::declare()
{
	return BaseClassDefiner(RatioTapChanger::addConstructToMap, RatioTapChanger::addPrimitiveAssignFnsToMap, RatioTapChanger::addClassAssignFnsToMap, RatioTapChanger::debugName);
}

namespace CIMPP
{
	BaseClass* RatioTapChanger_factory()
	{
		return new RatioTapChanger;
	}
}
