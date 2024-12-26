/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcST1A.hpp"

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
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcST1A::ExcST1A() {};
ExcST1A::~ExcST1A() {};


bool assign_ExcST1A_ilr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1))
	{
		buffer >> element->ilr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST1A_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1))
	{
		buffer >> element->ka;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST1A_kc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1))
	{
		buffer >> element->kc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST1A_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1))
	{
		buffer >> element->kf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST1A_klr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1))
	{
		buffer >> element->klr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST1A_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1))
	{
		buffer >> element->ta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST1A_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1))
	{
		buffer >> element->tb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST1A_tb1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1))
	{
		buffer >> element->tb1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST1A_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1))
	{
		buffer >> element->tc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST1A_tc1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1))
	{
		buffer >> element->tc1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST1A_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1))
	{
		buffer >> element->tf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST1A_vamax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1))
	{
		buffer >> element->vamax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST1A_vamin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1))
	{
		buffer >> element->vamin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST1A_vimax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1))
	{
		buffer >> element->vimax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST1A_vimin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1))
	{
		buffer >> element->vimin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST1A_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1))
	{
		buffer >> element->vrmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST1A_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1))
	{
		buffer >> element->vrmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcST1A_xe(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcST1A* element = dynamic_cast<ExcST1A*>(BaseClass_ptr1))
	{
		buffer >> element->xe;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}




















const char ExcST1A::debugName[] = "ExcST1A";
const char* ExcST1A::debugString() const
{
	return ExcST1A::debugName;
}

void ExcST1A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcST1A"), &ExcST1A_factory));
}

void ExcST1A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcST1A.ilr"), &assign_ExcST1A_ilr));
	assign_map.insert(std::make_pair(std::string("cim:ExcST1A.ka"), &assign_ExcST1A_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcST1A.kc"), &assign_ExcST1A_kc));
	assign_map.insert(std::make_pair(std::string("cim:ExcST1A.kf"), &assign_ExcST1A_kf));
	assign_map.insert(std::make_pair(std::string("cim:ExcST1A.klr"), &assign_ExcST1A_klr));
	assign_map.insert(std::make_pair(std::string("cim:ExcST1A.ta"), &assign_ExcST1A_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcST1A.tb"), &assign_ExcST1A_tb));
	assign_map.insert(std::make_pair(std::string("cim:ExcST1A.tb1"), &assign_ExcST1A_tb1));
	assign_map.insert(std::make_pair(std::string("cim:ExcST1A.tc"), &assign_ExcST1A_tc));
	assign_map.insert(std::make_pair(std::string("cim:ExcST1A.tc1"), &assign_ExcST1A_tc1));
	assign_map.insert(std::make_pair(std::string("cim:ExcST1A.tf"), &assign_ExcST1A_tf));
	assign_map.insert(std::make_pair(std::string("cim:ExcST1A.vamax"), &assign_ExcST1A_vamax));
	assign_map.insert(std::make_pair(std::string("cim:ExcST1A.vamin"), &assign_ExcST1A_vamin));
	assign_map.insert(std::make_pair(std::string("cim:ExcST1A.vimax"), &assign_ExcST1A_vimax));
	assign_map.insert(std::make_pair(std::string("cim:ExcST1A.vimin"), &assign_ExcST1A_vimin));
	assign_map.insert(std::make_pair(std::string("cim:ExcST1A.vrmax"), &assign_ExcST1A_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcST1A.vrmin"), &assign_ExcST1A_vrmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcST1A.xe"), &assign_ExcST1A_xe));
}

void ExcST1A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner ExcST1A::declare()
{
	return BaseClassDefiner(ExcST1A::addConstructToMap, ExcST1A::addPrimitiveAssignFnsToMap, ExcST1A::addClassAssignFnsToMap, ExcST1A::debugName);
}

namespace CIMPP
{
	BaseClass* ExcST1A_factory()
	{
		return new ExcST1A;
	}
}
