/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcRQB.hpp"

#include <algorithm>
#include <sstream>

#include "Float.hpp"
#include "Float.hpp"
#include "Float.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcRQB::ExcRQB() {};
ExcRQB::~ExcRQB() {};


bool assign_ExcRQB_ki0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1))
	{
		buffer >> element->ki0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcRQB_ki1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1))
	{
		buffer >> element->ki1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcRQB_klir(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1))
	{
		buffer >> element->klir;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcRQB_klus(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1))
	{
		buffer >> element->klus;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcRQB_lsat(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1))
	{
		buffer >> element->lsat;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcRQB_lus(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1))
	{
		buffer >> element->lus;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcRQB_mesu(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1))
	{
		buffer >> element->mesu;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcRQB_t4m(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1))
	{
		buffer >> element->t4m;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcRQB_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1))
	{
		buffer >> element->tc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcRQB_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1))
	{
		buffer >> element->te;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcRQB_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1))
	{
		buffer >> element->tf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcRQB_ucmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1))
	{
		buffer >> element->ucmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcRQB_ucmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcRQB* element = dynamic_cast<ExcRQB*>(BaseClass_ptr1))
	{
		buffer >> element->ucmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}















const char ExcRQB::debugName[] = "ExcRQB";
const char* ExcRQB::debugString() const
{
	return ExcRQB::debugName;
}

void ExcRQB::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcRQB"), &ExcRQB_factory));
}

void ExcRQB::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcRQB.ki0"), &assign_ExcRQB_ki0));
	assign_map.insert(std::make_pair(std::string("cim:ExcRQB.ki1"), &assign_ExcRQB_ki1));
	assign_map.insert(std::make_pair(std::string("cim:ExcRQB.klir"), &assign_ExcRQB_klir));
	assign_map.insert(std::make_pair(std::string("cim:ExcRQB.klus"), &assign_ExcRQB_klus));
	assign_map.insert(std::make_pair(std::string("cim:ExcRQB.lsat"), &assign_ExcRQB_lsat));
	assign_map.insert(std::make_pair(std::string("cim:ExcRQB.lus"), &assign_ExcRQB_lus));
	assign_map.insert(std::make_pair(std::string("cim:ExcRQB.mesu"), &assign_ExcRQB_mesu));
	assign_map.insert(std::make_pair(std::string("cim:ExcRQB.t4m"), &assign_ExcRQB_t4m));
	assign_map.insert(std::make_pair(std::string("cim:ExcRQB.tc"), &assign_ExcRQB_tc));
	assign_map.insert(std::make_pair(std::string("cim:ExcRQB.te"), &assign_ExcRQB_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcRQB.tf"), &assign_ExcRQB_tf));
	assign_map.insert(std::make_pair(std::string("cim:ExcRQB.ucmax"), &assign_ExcRQB_ucmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcRQB.ucmin"), &assign_ExcRQB_ucmin));
}

void ExcRQB::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner ExcRQB::declare()
{
	return BaseClassDefiner(ExcRQB::addConstructToMap, ExcRQB::addPrimitiveAssignFnsToMap, ExcRQB::addClassAssignFnsToMap, ExcRQB::debugName);
}

namespace CIMPP
{
	BaseClass* ExcRQB_factory()
	{
		return new ExcRQB;
	}
}
