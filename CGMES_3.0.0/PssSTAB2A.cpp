/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PssSTAB2A.hpp"

#include <algorithm>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

PssSTAB2A::PssSTAB2A() {};
PssSTAB2A::~PssSTAB2A() {};


bool assign_PssSTAB2A_hlim(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSTAB2A* element = dynamic_cast<PssSTAB2A*>(BaseClass_ptr1))
	{
		buffer >> element->hlim;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSTAB2A_k2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSTAB2A* element = dynamic_cast<PssSTAB2A*>(BaseClass_ptr1))
	{
		buffer >> element->k2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSTAB2A_k3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSTAB2A* element = dynamic_cast<PssSTAB2A*>(BaseClass_ptr1))
	{
		buffer >> element->k3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSTAB2A_k4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSTAB2A* element = dynamic_cast<PssSTAB2A*>(BaseClass_ptr1))
	{
		buffer >> element->k4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSTAB2A_k5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSTAB2A* element = dynamic_cast<PssSTAB2A*>(BaseClass_ptr1))
	{
		buffer >> element->k5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSTAB2A_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSTAB2A* element = dynamic_cast<PssSTAB2A*>(BaseClass_ptr1))
	{
		buffer >> element->t2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSTAB2A_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSTAB2A* element = dynamic_cast<PssSTAB2A*>(BaseClass_ptr1))
	{
		buffer >> element->t3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSTAB2A_t5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSTAB2A* element = dynamic_cast<PssSTAB2A*>(BaseClass_ptr1))
	{
		buffer >> element->t5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}










const char PssSTAB2A::debugName[] = "PssSTAB2A";
const char* PssSTAB2A::debugString() const
{
	return PssSTAB2A::debugName;
}

void PssSTAB2A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PssSTAB2A"), &PssSTAB2A_factory));
}

void PssSTAB2A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PssSTAB2A.hlim"), &assign_PssSTAB2A_hlim));
	assign_map.insert(std::make_pair(std::string("cim:PssSTAB2A.k2"), &assign_PssSTAB2A_k2));
	assign_map.insert(std::make_pair(std::string("cim:PssSTAB2A.k3"), &assign_PssSTAB2A_k3));
	assign_map.insert(std::make_pair(std::string("cim:PssSTAB2A.k4"), &assign_PssSTAB2A_k4));
	assign_map.insert(std::make_pair(std::string("cim:PssSTAB2A.k5"), &assign_PssSTAB2A_k5));
	assign_map.insert(std::make_pair(std::string("cim:PssSTAB2A.t2"), &assign_PssSTAB2A_t2));
	assign_map.insert(std::make_pair(std::string("cim:PssSTAB2A.t3"), &assign_PssSTAB2A_t3));
	assign_map.insert(std::make_pair(std::string("cim:PssSTAB2A.t5"), &assign_PssSTAB2A_t5));
}

void PssSTAB2A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner PssSTAB2A::declare()
{
	return BaseClassDefiner(PssSTAB2A::addConstructToMap, PssSTAB2A::addPrimitiveAssignFnsToMap, PssSTAB2A::addClassAssignFnsToMap, PssSTAB2A::debugName);
}

namespace CIMPP
{
	BaseClass* PssSTAB2A_factory()
	{
		return new PssSTAB2A;
	}
}
