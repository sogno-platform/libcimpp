/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "OverexcLimX2.hpp"

#include <algorithm>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Boolean.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"

using namespace CIMPP;

OverexcLimX2::OverexcLimX2() {};
OverexcLimX2::~OverexcLimX2() {};


bool assign_OverexcLimX2_efd1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer >> element->efd1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX2_efd2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer >> element->efd2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX2_efd3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer >> element->efd3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX2_efddes(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer >> element->efddes;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX2_efdrated(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer >> element->efdrated;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX2_kmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer >> element->kmx;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX2_m(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer >> element->m;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX2_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer >> element->t1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX2_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer >> element->t2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX2_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer >> element->t3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_OverexcLimX2_vlow(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcLimX2* element = dynamic_cast<OverexcLimX2*>(BaseClass_ptr1))
	{
		buffer >> element->vlow;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}













const char OverexcLimX2::debugName[] = "OverexcLimX2";
const char* OverexcLimX2::debugString() const
{
	return OverexcLimX2::debugName;
}

void OverexcLimX2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:OverexcLimX2"), &OverexcLimX2_factory));
}

void OverexcLimX2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX2.efd1"), &assign_OverexcLimX2_efd1));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX2.efd2"), &assign_OverexcLimX2_efd2));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX2.efd3"), &assign_OverexcLimX2_efd3));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX2.efddes"), &assign_OverexcLimX2_efddes));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX2.efdrated"), &assign_OverexcLimX2_efdrated));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX2.kmx"), &assign_OverexcLimX2_kmx));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX2.m"), &assign_OverexcLimX2_m));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX2.t1"), &assign_OverexcLimX2_t1));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX2.t2"), &assign_OverexcLimX2_t2));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX2.t3"), &assign_OverexcLimX2_t3));
	assign_map.insert(std::make_pair(std::string("cim:OverexcLimX2.vlow"), &assign_OverexcLimX2_vlow));
}

void OverexcLimX2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner OverexcLimX2::declare()
{
	return BaseClassDefiner(OverexcLimX2::addConstructToMap, OverexcLimX2::addPrimitiveAssignFnsToMap, OverexcLimX2::addClassAssignFnsToMap, OverexcLimX2::debugName);
}

namespace CIMPP
{
	BaseClass* OverexcLimX2_factory()
	{
		return new OverexcLimX2;
	}
}
