/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SvPowerFlow.hpp"

#include <algorithm>
#include <sstream>

#include "Terminal.hpp"
#include "ActivePower.hpp"
#include "ReactivePower.hpp"

using namespace CIMPP;

SvPowerFlow::SvPowerFlow() : Terminal(nullptr) {};
SvPowerFlow::~SvPowerFlow() {};



bool assign_SvPowerFlow_p(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SvPowerFlow* element = dynamic_cast<SvPowerFlow*>(BaseClass_ptr1))
	{
		buffer >> element->p;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_SvPowerFlow_q(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SvPowerFlow* element = dynamic_cast<SvPowerFlow*>(BaseClass_ptr1))
	{
		buffer >> element->q;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_Terminal_SvPowerFlow(BaseClass*, BaseClass*);
bool assign_SvPowerFlow_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SvPowerFlow* element = dynamic_cast<SvPowerFlow*>(BaseClass_ptr1);
	Terminal* element2 = dynamic_cast<Terminal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Terminal != element2)
		{
			element->Terminal = element2;
			return assign_Terminal_SvPowerFlow(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



const char SvPowerFlow::debugName[] = "SvPowerFlow";
const char* SvPowerFlow::debugString() const
{
	return SvPowerFlow::debugName;
}

void SvPowerFlow::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:SvPowerFlow"), &SvPowerFlow_factory));
}

void SvPowerFlow::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SvPowerFlow.p"), &assign_SvPowerFlow_p));
	assign_map.insert(std::make_pair(std::string("cim:SvPowerFlow.q"), &assign_SvPowerFlow_q));
}

void SvPowerFlow::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SvPowerFlow.Terminal"), &assign_SvPowerFlow_Terminal));
}

const BaseClassDefiner SvPowerFlow::declare()
{
	return BaseClassDefiner(SvPowerFlow::addConstructToMap, SvPowerFlow::addPrimitiveAssignFnsToMap, SvPowerFlow::addClassAssignFnsToMap, SvPowerFlow::debugName);
}

namespace CIMPP
{
	BaseClass* SvPowerFlow_factory()
	{
		return new SvPowerFlow;
	}
}
