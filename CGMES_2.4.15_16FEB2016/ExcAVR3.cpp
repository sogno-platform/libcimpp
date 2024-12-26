/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcAVR3.hpp"

#include <algorithm>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcAVR3::ExcAVR3() {};
ExcAVR3::~ExcAVR3() {};


bool assign_ExcAVR3_e1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1))
	{
		buffer >> element->e1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR3_e2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1))
	{
		buffer >> element->e2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR3_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1))
	{
		buffer >> element->ka;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR3_se1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1))
	{
		buffer >> element->se1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR3_se2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1))
	{
		buffer >> element->se2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR3_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1))
	{
		buffer >> element->t1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR3_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1))
	{
		buffer >> element->t2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR3_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1))
	{
		buffer >> element->t3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR3_t4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1))
	{
		buffer >> element->t4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR3_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1))
	{
		buffer >> element->te;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR3_vrmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1))
	{
		buffer >> element->vrmn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR3_vrmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR3* element = dynamic_cast<ExcAVR3*>(BaseClass_ptr1))
	{
		buffer >> element->vrmx;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}














const char ExcAVR3::debugName[] = "ExcAVR3";
const char* ExcAVR3::debugString() const
{
	return ExcAVR3::debugName;
}

void ExcAVR3::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcAVR3"), &ExcAVR3_factory));
}

void ExcAVR3::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR3.e1"), &assign_ExcAVR3_e1));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR3.e2"), &assign_ExcAVR3_e2));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR3.ka"), &assign_ExcAVR3_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR3.se1"), &assign_ExcAVR3_se1));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR3.se2"), &assign_ExcAVR3_se2));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR3.t1"), &assign_ExcAVR3_t1));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR3.t2"), &assign_ExcAVR3_t2));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR3.t3"), &assign_ExcAVR3_t3));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR3.t4"), &assign_ExcAVR3_t4));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR3.te"), &assign_ExcAVR3_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR3.vrmn"), &assign_ExcAVR3_vrmn));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR3.vrmx"), &assign_ExcAVR3_vrmx));
}

void ExcAVR3::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner ExcAVR3::declare()
{
	return BaseClassDefiner(ExcAVR3::addConstructToMap, ExcAVR3::addPrimitiveAssignFnsToMap, ExcAVR3::addClassAssignFnsToMap, ExcAVR3::debugName);
}

namespace CIMPP
{
	BaseClass* ExcAVR3_factory()
	{
		return new ExcAVR3;
	}
}
