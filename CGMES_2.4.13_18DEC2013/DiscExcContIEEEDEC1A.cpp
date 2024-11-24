/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DiscExcContIEEEDEC1A.hpp"

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
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

DiscExcContIEEEDEC1A::DiscExcContIEEEDEC1A() {};
DiscExcContIEEEDEC1A::~DiscExcContIEEEDEC1A() {};


bool assign_DiscExcContIEEEDEC1A_esc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1))
	{
		buffer >> element->esc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_kan(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1))
	{
		buffer >> element->kan;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_ketl(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1))
	{
		buffer >> element->ketl;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_tan(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1))
	{
		buffer >> element->tan;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_td(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1))
	{
		buffer >> element->td;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_tl1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1))
	{
		buffer >> element->tl1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_tl2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1))
	{
		buffer >> element->tl2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_tw5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1))
	{
		buffer >> element->tw5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_val(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1))
	{
		buffer >> element->val;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_vanmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1))
	{
		buffer >> element->vanmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_vomax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1))
	{
		buffer >> element->vomax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_vomin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1))
	{
		buffer >> element->vomin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_vsmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1))
	{
		buffer >> element->vsmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_vsmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1))
	{
		buffer >> element->vsmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_vtc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1))
	{
		buffer >> element->vtc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_vtlmt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1))
	{
		buffer >> element->vtlmt;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_vtm(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1))
	{
		buffer >> element->vtm;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_DiscExcContIEEEDEC1A_vtn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiscExcContIEEEDEC1A* element = dynamic_cast<DiscExcContIEEEDEC1A*>(BaseClass_ptr1))
	{
		buffer >> element->vtn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}




















const char DiscExcContIEEEDEC1A::debugName[] = "DiscExcContIEEEDEC1A";
const char* DiscExcContIEEEDEC1A::debugString() const
{
	return DiscExcContIEEEDEC1A::debugName;
}

void DiscExcContIEEEDEC1A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC1A"), &DiscExcContIEEEDEC1A_factory));
}

void DiscExcContIEEEDEC1A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC1A.esc"), &assign_DiscExcContIEEEDEC1A_esc));
	assign_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC1A.kan"), &assign_DiscExcContIEEEDEC1A_kan));
	assign_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC1A.ketl"), &assign_DiscExcContIEEEDEC1A_ketl));
	assign_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC1A.tan"), &assign_DiscExcContIEEEDEC1A_tan));
	assign_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC1A.td"), &assign_DiscExcContIEEEDEC1A_td));
	assign_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC1A.tl1"), &assign_DiscExcContIEEEDEC1A_tl1));
	assign_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC1A.tl2"), &assign_DiscExcContIEEEDEC1A_tl2));
	assign_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC1A.tw5"), &assign_DiscExcContIEEEDEC1A_tw5));
	assign_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC1A.val"), &assign_DiscExcContIEEEDEC1A_val));
	assign_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC1A.vanmax"), &assign_DiscExcContIEEEDEC1A_vanmax));
	assign_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC1A.vomax"), &assign_DiscExcContIEEEDEC1A_vomax));
	assign_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC1A.vomin"), &assign_DiscExcContIEEEDEC1A_vomin));
	assign_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC1A.vsmax"), &assign_DiscExcContIEEEDEC1A_vsmax));
	assign_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC1A.vsmin"), &assign_DiscExcContIEEEDEC1A_vsmin));
	assign_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC1A.vtc"), &assign_DiscExcContIEEEDEC1A_vtc));
	assign_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC1A.vtlmt"), &assign_DiscExcContIEEEDEC1A_vtlmt));
	assign_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC1A.vtm"), &assign_DiscExcContIEEEDEC1A_vtm));
	assign_map.insert(std::make_pair(std::string("cim:DiscExcContIEEEDEC1A.vtn"), &assign_DiscExcContIEEEDEC1A_vtn));
}

void DiscExcContIEEEDEC1A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner DiscExcContIEEEDEC1A::declare()
{
	return BaseClassDefiner(DiscExcContIEEEDEC1A::addConstructToMap, DiscExcContIEEEDEC1A::addPrimitiveAssignFnsToMap, DiscExcContIEEEDEC1A::addClassAssignFnsToMap, DiscExcContIEEEDEC1A::debugName);
}

namespace CIMPP
{
	BaseClass* DiscExcContIEEEDEC1A_factory()
	{
		return new DiscExcContIEEEDEC1A;
	}
}
