/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcHU.hpp"

#include <algorithm>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

ExcHU::ExcHU() {};
ExcHU::~ExcHU() {};


bool assign_ExcHU_ae(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1))
	{
		buffer >> element->ae;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcHU_ai(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1))
	{
		buffer >> element->ai;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcHU_atr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1))
	{
		buffer >> element->atr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcHU_emax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1))
	{
		buffer >> element->emax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcHU_emin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1))
	{
		buffer >> element->emin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcHU_imax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1))
	{
		buffer >> element->imax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcHU_imin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1))
	{
		buffer >> element->imin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcHU_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1))
	{
		buffer >> element->ke;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcHU_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1))
	{
		buffer >> element->ki;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcHU_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1))
	{
		buffer >> element->te;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcHU_ti(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1))
	{
		buffer >> element->ti;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcHU_tr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcHU* element = dynamic_cast<ExcHU*>(BaseClass_ptr1))
	{
		buffer >> element->tr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}














const char ExcHU::debugName[] = "ExcHU";
const char* ExcHU::debugString() const
{
	return ExcHU::debugName;
}

void ExcHU::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcHU"), &ExcHU_factory));
}

void ExcHU::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcHU.ae"), &assign_ExcHU_ae));
	assign_map.insert(std::make_pair(std::string("cim:ExcHU.ai"), &assign_ExcHU_ai));
	assign_map.insert(std::make_pair(std::string("cim:ExcHU.atr"), &assign_ExcHU_atr));
	assign_map.insert(std::make_pair(std::string("cim:ExcHU.emax"), &assign_ExcHU_emax));
	assign_map.insert(std::make_pair(std::string("cim:ExcHU.emin"), &assign_ExcHU_emin));
	assign_map.insert(std::make_pair(std::string("cim:ExcHU.imax"), &assign_ExcHU_imax));
	assign_map.insert(std::make_pair(std::string("cim:ExcHU.imin"), &assign_ExcHU_imin));
	assign_map.insert(std::make_pair(std::string("cim:ExcHU.ke"), &assign_ExcHU_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcHU.ki"), &assign_ExcHU_ki));
	assign_map.insert(std::make_pair(std::string("cim:ExcHU.te"), &assign_ExcHU_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcHU.ti"), &assign_ExcHU_ti));
	assign_map.insert(std::make_pair(std::string("cim:ExcHU.tr"), &assign_ExcHU_tr));
}

void ExcHU::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner ExcHU::declare()
{
	return BaseClassDefiner(ExcHU::addConstructToMap, ExcHU::addPrimitiveAssignFnsToMap, ExcHU::addClassAssignFnsToMap, ExcHU::debugName);
}

namespace CIMPP
{
	BaseClass* ExcHU_factory()
	{
		return new ExcHU;
	}
}
