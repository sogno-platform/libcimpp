/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "OverexcLim2.hpp"

#include <algorithm>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

OverexcLim2::OverexcLim2() {};
OverexcLim2::~OverexcLim2() {};


bool assign_OverexcLim2_ifdlim(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLim2* element = dynamic_cast<OverexcLim2*>(BaseClass_ptr1))
	{
		buffer >> element->ifdlim;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLim2_koi(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLim2* element = dynamic_cast<OverexcLim2*>(BaseClass_ptr1))
	{
		buffer >> element->koi;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLim2_voimax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLim2* element = dynamic_cast<OverexcLim2*>(BaseClass_ptr1))
	{
		buffer >> element->voimax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLim2_voimin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLim2* element = dynamic_cast<OverexcLim2*>(BaseClass_ptr1))
	{
		buffer >> element->voimin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}






const char OverexcLim2::debugName[] = "OverexcLim2";
const char* OverexcLim2::debugString() const
{
	return OverexcLim2::debugName;
}

void OverexcLim2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:OverexcLim2"), &OverexcLim2_factory));
}

void OverexcLim2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:OverexcLim2.ifdlim"), &assign_OverexcLim2_ifdlim));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLim2.koi"), &assign_OverexcLim2_koi));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLim2.voimax"), &assign_OverexcLim2_voimax));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLim2.voimin"), &assign_OverexcLim2_voimin));
}

void OverexcLim2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner OverexcLim2::declare()
{
	return BaseClassDefiner(OverexcLim2::addConstructToMap, OverexcLim2::addPrimitiveAssignFnsToMap, OverexcLim2::addClassAssignFnsToMap, OverexcLim2::debugName);
}

namespace CIMPP
{
	BaseClass* OverexcLim2_factory()
	{
		return new OverexcLim2;
	}
}
