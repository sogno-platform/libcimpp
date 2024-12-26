/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcAVR2.hpp"

#include <algorithm>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "Float.hpp"
#include "Float.hpp"
#include "Float.hpp"
#include "Float.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcAVR2::ExcAVR2() {};
ExcAVR2::~ExcAVR2() {};


bool assign_ExcAVR2_e1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR2* element = dynamic_cast<ExcAVR2*>(BaseClass_ptr1))
	{
		buffer >> element->e1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR2_e2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR2* element = dynamic_cast<ExcAVR2*>(BaseClass_ptr1))
	{
		buffer >> element->e2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR2_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR2* element = dynamic_cast<ExcAVR2*>(BaseClass_ptr1))
	{
		buffer >> element->ka;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR2_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR2* element = dynamic_cast<ExcAVR2*>(BaseClass_ptr1))
	{
		buffer >> element->kf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR2_se1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR2* element = dynamic_cast<ExcAVR2*>(BaseClass_ptr1))
	{
		buffer >> element->se1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR2_se2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR2* element = dynamic_cast<ExcAVR2*>(BaseClass_ptr1))
	{
		buffer >> element->se2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR2_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR2* element = dynamic_cast<ExcAVR2*>(BaseClass_ptr1))
	{
		buffer >> element->ta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR2_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR2* element = dynamic_cast<ExcAVR2*>(BaseClass_ptr1))
	{
		buffer >> element->tb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR2_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR2* element = dynamic_cast<ExcAVR2*>(BaseClass_ptr1))
	{
		buffer >> element->te;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR2_tf1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR2* element = dynamic_cast<ExcAVR2*>(BaseClass_ptr1))
	{
		buffer >> element->tf1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR2_tf2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR2* element = dynamic_cast<ExcAVR2*>(BaseClass_ptr1))
	{
		buffer >> element->tf2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR2_vrmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR2* element = dynamic_cast<ExcAVR2*>(BaseClass_ptr1))
	{
		buffer >> element->vrmn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcAVR2_vrmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcAVR2* element = dynamic_cast<ExcAVR2*>(BaseClass_ptr1))
	{
		buffer >> element->vrmx;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}















const char ExcAVR2::debugName[] = "ExcAVR2";
const char* ExcAVR2::debugString() const
{
	return ExcAVR2::debugName;
}

void ExcAVR2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcAVR2"), &ExcAVR2_factory));
}

void ExcAVR2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR2.e1"), &assign_ExcAVR2_e1));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR2.e2"), &assign_ExcAVR2_e2));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR2.ka"), &assign_ExcAVR2_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR2.kf"), &assign_ExcAVR2_kf));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR2.se1"), &assign_ExcAVR2_se1));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR2.se2"), &assign_ExcAVR2_se2));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR2.ta"), &assign_ExcAVR2_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR2.tb"), &assign_ExcAVR2_tb));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR2.te"), &assign_ExcAVR2_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR2.tf1"), &assign_ExcAVR2_tf1));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR2.tf2"), &assign_ExcAVR2_tf2));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR2.vrmn"), &assign_ExcAVR2_vrmn));
	assign_map.insert(std::make_pair(std::string("cim:ExcAVR2.vrmx"), &assign_ExcAVR2_vrmx));
}

void ExcAVR2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner ExcAVR2::declare()
{
	return BaseClassDefiner(ExcAVR2::addConstructToMap, ExcAVR2::addPrimitiveAssignFnsToMap, ExcAVR2::addClassAssignFnsToMap, ExcAVR2::debugName);
}

namespace CIMPP
{
	BaseClass* ExcAVR2_factory()
	{
		return new ExcAVR2;
	}
}
