/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TieFlow.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ControlArea.hpp"
#include "Terminal.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

TieFlow::TieFlow() : ControlArea(nullptr), Terminal(nullptr) {};
TieFlow::~TieFlow() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:TieFlow.ControlArea", { CGMESProfile::EQ, } },
	{ "cim:TieFlow.Terminal", { CGMESProfile::EQ, } },
	{ "cim:TieFlow.positiveFlowIn", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
TieFlow::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
TieFlow::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_TieFlow_positiveFlowIn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TieFlow* element = dynamic_cast<TieFlow*>(BaseClass_ptr1))
	{
		buffer >> element->positiveFlowIn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ControlArea_TieFlow(BaseClass*, BaseClass*);
bool assign_TieFlow_ControlArea(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TieFlow* element = dynamic_cast<TieFlow*>(BaseClass_ptr1);
	ControlArea* element2 = dynamic_cast<ControlArea*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ControlArea != element2)
		{
			element->ControlArea = element2;
			return assign_ControlArea_TieFlow(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_Terminal_TieFlow(BaseClass*, BaseClass*);
bool assign_TieFlow_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TieFlow* element = dynamic_cast<TieFlow*>(BaseClass_ptr1);
	Terminal* element2 = dynamic_cast<Terminal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Terminal != element2)
		{
			element->Terminal = element2;
			return assign_Terminal_TieFlow(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_TieFlow_positiveFlowIn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const TieFlow* element = dynamic_cast<const TieFlow*>(BaseClass_ptr1))
	{
		buffer << element->positiveFlowIn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}


bool get_TieFlow_ControlArea(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const TieFlow* element = dynamic_cast<const TieFlow*>(BaseClass_ptr1))
	{
		if (element->ControlArea != 0)
		{
			BaseClass_list.push_back(element->ControlArea);
			return true;
		}
	}
	return false;
}

bool get_TieFlow_Terminal(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const TieFlow* element = dynamic_cast<const TieFlow*>(BaseClass_ptr1))
	{
		if (element->Terminal != 0)
		{
			BaseClass_list.push_back(element->Terminal);
			return true;
		}
	}
	return false;
}


const char TieFlow::debugName[] = "TieFlow";
const char* TieFlow::debugString() const
{
	return TieFlow::debugName;
}

void TieFlow::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:TieFlow"), &TieFlow_factory));
}

void TieFlow::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:TieFlow.positiveFlowIn"), &assign_TieFlow_positiveFlowIn));
}

void TieFlow::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:TieFlow.ControlArea"), &assign_TieFlow_ControlArea));
	assign_map.insert(std::make_pair(std::string("cim:TieFlow.Terminal"), &assign_TieFlow_Terminal));
}

void TieFlow::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:TieFlow.positiveFlowIn", &get_TieFlow_positiveFlowIn);
}

void TieFlow::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:TieFlow.ControlArea", &get_TieFlow_ControlArea);
	get_map.emplace("cim:TieFlow.Terminal", &get_TieFlow_Terminal);
}

void TieFlow::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner TieFlow::declare()
{
	return BaseClassDefiner(TieFlow::addConstructToMap, TieFlow::addPrimitiveAssignFnsToMap, TieFlow::addClassAssignFnsToMap, TieFlow::debugName);
}

namespace CIMPP
{
	BaseClass* TieFlow_factory()
	{
		return new TieFlow;
	}
}
