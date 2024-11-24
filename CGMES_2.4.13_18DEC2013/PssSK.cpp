/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PssSK.hpp"

#include <algorithm>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
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

PssSK::PssSK() {};
PssSK::~PssSK() {};


bool assign_PssSK_k1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1))
	{
		buffer >> element->k1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSK_k2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1))
	{
		buffer >> element->k2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSK_k3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1))
	{
		buffer >> element->k3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSK_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1))
	{
		buffer >> element->t1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSK_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1))
	{
		buffer >> element->t2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSK_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1))
	{
		buffer >> element->t3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSK_t4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1))
	{
		buffer >> element->t4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSK_t5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1))
	{
		buffer >> element->t5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSK_t6(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1))
	{
		buffer >> element->t6;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSK_vsmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1))
	{
		buffer >> element->vsmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssSK_vsmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssSK* element = dynamic_cast<PssSK*>(BaseClass_ptr1))
	{
		buffer >> element->vsmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}













const char PssSK::debugName[] = "PssSK";
const char* PssSK::debugString() const
{
	return PssSK::debugName;
}

void PssSK::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PssSK"), &PssSK_factory));
}

void PssSK::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PssSK.k1"), &assign_PssSK_k1));
	assign_map.insert(std::make_pair(std::string("cim:PssSK.k2"), &assign_PssSK_k2));
	assign_map.insert(std::make_pair(std::string("cim:PssSK.k3"), &assign_PssSK_k3));
	assign_map.insert(std::make_pair(std::string("cim:PssSK.t1"), &assign_PssSK_t1));
	assign_map.insert(std::make_pair(std::string("cim:PssSK.t2"), &assign_PssSK_t2));
	assign_map.insert(std::make_pair(std::string("cim:PssSK.t3"), &assign_PssSK_t3));
	assign_map.insert(std::make_pair(std::string("cim:PssSK.t4"), &assign_PssSK_t4));
	assign_map.insert(std::make_pair(std::string("cim:PssSK.t5"), &assign_PssSK_t5));
	assign_map.insert(std::make_pair(std::string("cim:PssSK.t6"), &assign_PssSK_t6));
	assign_map.insert(std::make_pair(std::string("cim:PssSK.vsmax"), &assign_PssSK_vsmax));
	assign_map.insert(std::make_pair(std::string("cim:PssSK.vsmin"), &assign_PssSK_vsmin));
}

void PssSK::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner PssSK::declare()
{
	return BaseClassDefiner(PssSK::addConstructToMap, PssSK::addPrimitiveAssignFnsToMap, PssSK::addClassAssignFnsToMap, PssSK::debugName);
}

namespace CIMPP
{
	BaseClass* PssSK_factory()
	{
		return new PssSK;
	}
}
