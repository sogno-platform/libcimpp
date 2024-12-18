/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEAC8B.hpp"

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
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcIEEEAC8B::ExcIEEEAC8B() {};
ExcIEEEAC8B::~ExcIEEEAC8B() {};


bool assign_ExcIEEEAC8B_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC8B* element = dynamic_cast<ExcIEEEAC8B*>(BaseClass_ptr1))
	{
		buffer >> element->ka;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC8B_kc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC8B* element = dynamic_cast<ExcIEEEAC8B*>(BaseClass_ptr1))
	{
		buffer >> element->kc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC8B_kd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC8B* element = dynamic_cast<ExcIEEEAC8B*>(BaseClass_ptr1))
	{
		buffer >> element->kd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC8B_kdr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC8B* element = dynamic_cast<ExcIEEEAC8B*>(BaseClass_ptr1))
	{
		buffer >> element->kdr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC8B_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC8B* element = dynamic_cast<ExcIEEEAC8B*>(BaseClass_ptr1))
	{
		buffer >> element->ke;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC8B_kir(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC8B* element = dynamic_cast<ExcIEEEAC8B*>(BaseClass_ptr1))
	{
		buffer >> element->kir;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC8B_kpr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC8B* element = dynamic_cast<ExcIEEEAC8B*>(BaseClass_ptr1))
	{
		buffer >> element->kpr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC8B_seve1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC8B* element = dynamic_cast<ExcIEEEAC8B*>(BaseClass_ptr1))
	{
		buffer >> element->seve1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC8B_seve2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC8B* element = dynamic_cast<ExcIEEEAC8B*>(BaseClass_ptr1))
	{
		buffer >> element->seve2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC8B_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC8B* element = dynamic_cast<ExcIEEEAC8B*>(BaseClass_ptr1))
	{
		buffer >> element->ta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC8B_tdr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC8B* element = dynamic_cast<ExcIEEEAC8B*>(BaseClass_ptr1))
	{
		buffer >> element->tdr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC8B_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC8B* element = dynamic_cast<ExcIEEEAC8B*>(BaseClass_ptr1))
	{
		buffer >> element->te;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC8B_ve1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC8B* element = dynamic_cast<ExcIEEEAC8B*>(BaseClass_ptr1))
	{
		buffer >> element->ve1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC8B_ve2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC8B* element = dynamic_cast<ExcIEEEAC8B*>(BaseClass_ptr1))
	{
		buffer >> element->ve2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC8B_vemin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC8B* element = dynamic_cast<ExcIEEEAC8B*>(BaseClass_ptr1))
	{
		buffer >> element->vemin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC8B_vfemax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC8B* element = dynamic_cast<ExcIEEEAC8B*>(BaseClass_ptr1))
	{
		buffer >> element->vfemax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC8B_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC8B* element = dynamic_cast<ExcIEEEAC8B*>(BaseClass_ptr1))
	{
		buffer >> element->vrmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC8B_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC8B* element = dynamic_cast<ExcIEEEAC8B*>(BaseClass_ptr1))
	{
		buffer >> element->vrmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}




















const char ExcIEEEAC8B::debugName[] = "ExcIEEEAC8B";
const char* ExcIEEEAC8B::debugString() const
{
	return ExcIEEEAC8B::debugName;
}

void ExcIEEEAC8B::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcIEEEAC8B"), &ExcIEEEAC8B_factory));
}

void ExcIEEEAC8B::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC8B.ka"), &assign_ExcIEEEAC8B_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC8B.kc"), &assign_ExcIEEEAC8B_kc));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC8B.kd"), &assign_ExcIEEEAC8B_kd));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC8B.kdr"), &assign_ExcIEEEAC8B_kdr));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC8B.ke"), &assign_ExcIEEEAC8B_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC8B.kir"), &assign_ExcIEEEAC8B_kir));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC8B.kpr"), &assign_ExcIEEEAC8B_kpr));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC8B.seve1"), &assign_ExcIEEEAC8B_seve1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC8B.seve2"), &assign_ExcIEEEAC8B_seve2));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC8B.ta"), &assign_ExcIEEEAC8B_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC8B.tdr"), &assign_ExcIEEEAC8B_tdr));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC8B.te"), &assign_ExcIEEEAC8B_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC8B.ve1"), &assign_ExcIEEEAC8B_ve1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC8B.ve2"), &assign_ExcIEEEAC8B_ve2));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC8B.vemin"), &assign_ExcIEEEAC8B_vemin));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC8B.vfemax"), &assign_ExcIEEEAC8B_vfemax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC8B.vrmax"), &assign_ExcIEEEAC8B_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC8B.vrmin"), &assign_ExcIEEEAC8B_vrmin));
}

void ExcIEEEAC8B::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner ExcIEEEAC8B::declare()
{
	return BaseClassDefiner(ExcIEEEAC8B::addConstructToMap, ExcIEEEAC8B::addPrimitiveAssignFnsToMap, ExcIEEEAC8B::addClassAssignFnsToMap, ExcIEEEAC8B::debugName);
}

namespace CIMPP
{
	BaseClass* ExcIEEEAC8B_factory()
	{
		return new ExcIEEEAC8B;
	}
}
