/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PssRQB.hpp"

#include <algorithm>
#include <sstream>

#include "Float.hpp"
#include "Float.hpp"
#include "Float.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

PssRQB::PssRQB() {};
PssRQB::~PssRQB() {};


bool assign_PssRQB_kdpm(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1))
	{
		buffer >> element->kdpm;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssRQB_ki2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1))
	{
		buffer >> element->ki2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssRQB_ki3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1))
	{
		buffer >> element->ki3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssRQB_ki4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1))
	{
		buffer >> element->ki4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssRQB_sibv(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1))
	{
		buffer >> element->sibv;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssRQB_t4f(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1))
	{
		buffer >> element->t4f;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssRQB_t4m(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1))
	{
		buffer >> element->t4m;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssRQB_t4mom(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1))
	{
		buffer >> element->t4mom;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssRQB_tomd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1))
	{
		buffer >> element->tomd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_PssRQB_tomsl(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PssRQB* element = dynamic_cast<PssRQB*>(BaseClass_ptr1))
	{
		buffer >> element->tomsl;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}












const char PssRQB::debugName[] = "PssRQB";
const char* PssRQB::debugString() const
{
	return PssRQB::debugName;
}

void PssRQB::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PssRQB"), &PssRQB_factory));
}

void PssRQB::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PssRQB.kdpm"), &assign_PssRQB_kdpm));
	assign_map.insert(std::make_pair(std::string("cim:PssRQB.ki2"), &assign_PssRQB_ki2));
	assign_map.insert(std::make_pair(std::string("cim:PssRQB.ki3"), &assign_PssRQB_ki3));
	assign_map.insert(std::make_pair(std::string("cim:PssRQB.ki4"), &assign_PssRQB_ki4));
	assign_map.insert(std::make_pair(std::string("cim:PssRQB.sibv"), &assign_PssRQB_sibv));
	assign_map.insert(std::make_pair(std::string("cim:PssRQB.t4f"), &assign_PssRQB_t4f));
	assign_map.insert(std::make_pair(std::string("cim:PssRQB.t4m"), &assign_PssRQB_t4m));
	assign_map.insert(std::make_pair(std::string("cim:PssRQB.t4mom"), &assign_PssRQB_t4mom));
	assign_map.insert(std::make_pair(std::string("cim:PssRQB.tomd"), &assign_PssRQB_tomd));
	assign_map.insert(std::make_pair(std::string("cim:PssRQB.tomsl"), &assign_PssRQB_tomsl));
}

void PssRQB::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner PssRQB::declare()
{
	return BaseClassDefiner(PssRQB::addConstructToMap, PssRQB::addPrimitiveAssignFnsToMap, PssRQB::addClassAssignFnsToMap, PssRQB::debugName);
}

namespace CIMPP
{
	BaseClass* PssRQB_factory()
	{
		return new PssRQB;
	}
}
