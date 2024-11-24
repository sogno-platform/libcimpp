/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PssIEEE1A.hpp"

#include <algorithm>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "InputSignalKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

PssIEEE1A::PssIEEE1A() {};
PssIEEE1A::~PssIEEE1A() {};


bool assign_PssIEEE1A_a1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1))
	{
		buffer >> element->a1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE1A_a2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1))
	{
		buffer >> element->a2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE1A_inputSignalType(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1))
	{
		buffer >> element->inputSignalType;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE1A_ks(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1))
	{
		buffer >> element->ks;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE1A_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1))
	{
		buffer >> element->t1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE1A_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1))
	{
		buffer >> element->t2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE1A_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1))
	{
		buffer >> element->t3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE1A_t4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1))
	{
		buffer >> element->t4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE1A_t5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1))
	{
		buffer >> element->t5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE1A_t6(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1))
	{
		buffer >> element->t6;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE1A_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1))
	{
		buffer >> element->vrmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssIEEE1A_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssIEEE1A* element = dynamic_cast<PssIEEE1A*>(BaseClass_ptr1))
	{
		buffer >> element->vrmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}














const char PssIEEE1A::debugName[] = "PssIEEE1A";
const char* PssIEEE1A::debugString() const
{
	return PssIEEE1A::debugName;
}

void PssIEEE1A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PssIEEE1A"), &PssIEEE1A_factory));
}

void PssIEEE1A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE1A.a1"), &assign_PssIEEE1A_a1));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE1A.a2"), &assign_PssIEEE1A_a2));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE1A.inputSignalType"), &assign_PssIEEE1A_inputSignalType));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE1A.ks"), &assign_PssIEEE1A_ks));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE1A.t1"), &assign_PssIEEE1A_t1));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE1A.t2"), &assign_PssIEEE1A_t2));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE1A.t3"), &assign_PssIEEE1A_t3));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE1A.t4"), &assign_PssIEEE1A_t4));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE1A.t5"), &assign_PssIEEE1A_t5));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE1A.t6"), &assign_PssIEEE1A_t6));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE1A.vrmax"), &assign_PssIEEE1A_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE1A.vrmin"), &assign_PssIEEE1A_vrmin));
}

void PssIEEE1A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner PssIEEE1A::declare()
{
	return BaseClassDefiner(PssIEEE1A::addConstructToMap, PssIEEE1A::addPrimitiveAssignFnsToMap, PssIEEE1A::addClassAssignFnsToMap, PssIEEE1A::debugName);
}

namespace CIMPP
{
	BaseClass* PssIEEE1A_factory()
	{
		return new PssIEEE1A;
	}
}
