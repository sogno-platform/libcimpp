/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcAVR1.hpp"

#include <algorithm>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcAVR1::ExcAVR1() {};
ExcAVR1::~ExcAVR1() {};


bool assign_ExcAVR1_e1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1))
	{
		buffer >> element->e1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR1_e2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1))
	{
		buffer >> element->e2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR1_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1))
	{
		buffer >> element->ka;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR1_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1))
	{
		buffer >> element->kf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR1_se1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1))
	{
		buffer >> element->se1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR1_se2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1))
	{
		buffer >> element->se2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR1_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1))
	{
		buffer >> element->ta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR1_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1))
	{
		buffer >> element->tb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR1_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1))
	{
		buffer >> element->te;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR1_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1))
	{
		buffer >> element->tf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR1_vrmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1))
	{
		buffer >> element->vrmn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR1_vrmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR1* element = dynamic_cast<ExcAVR1*>(BaseClass_ptr1))
	{
		buffer >> element->vrmx;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}














const char ExcAVR1::debugName[] = "ExcAVR1";
const char* ExcAVR1::debugString() const
{
	return ExcAVR1::debugName;
}

void ExcAVR1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcAVR1"), &ExcAVR1_factory));
}

void ExcAVR1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR1.e1"), &assign_ExcAVR1_e1));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR1.e2"), &assign_ExcAVR1_e2));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR1.ka"), &assign_ExcAVR1_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR1.kf"), &assign_ExcAVR1_kf));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR1.se1"), &assign_ExcAVR1_se1));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR1.se2"), &assign_ExcAVR1_se2));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR1.ta"), &assign_ExcAVR1_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR1.tb"), &assign_ExcAVR1_tb));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR1.te"), &assign_ExcAVR1_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR1.tf"), &assign_ExcAVR1_tf));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR1.vrmn"), &assign_ExcAVR1_vrmn));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR1.vrmx"), &assign_ExcAVR1_vrmx));
}

void ExcAVR1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner ExcAVR1::declare()
{
	return BaseClassDefiner(ExcAVR1::addConstructToMap, ExcAVR1::addPrimitiveAssignFnsToMap, ExcAVR1::addClassAssignFnsToMap, ExcAVR1::debugName);
}

namespace CIMPP
{
	BaseClass* ExcAVR1_factory()
	{
		return new ExcAVR1;
	}
}
