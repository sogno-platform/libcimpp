/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcDC3A1.hpp"

#include <algorithm>
#include <sstream>

#include "Boolean.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcDC3A1::ExcDC3A1() {};
ExcDC3A1::~ExcDC3A1() {};


bool assign_ExcDC3A1_exclim(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC3A1* element = dynamic_cast<ExcDC3A1*>(BaseClass_ptr1))
	{
		buffer >> element->exclim;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC3A1_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC3A1* element = dynamic_cast<ExcDC3A1*>(BaseClass_ptr1))
	{
		buffer >> element->ka;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC3A1_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC3A1* element = dynamic_cast<ExcDC3A1*>(BaseClass_ptr1))
	{
		buffer >> element->ke;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC3A1_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC3A1* element = dynamic_cast<ExcDC3A1*>(BaseClass_ptr1))
	{
		buffer >> element->kf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC3A1_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC3A1* element = dynamic_cast<ExcDC3A1*>(BaseClass_ptr1))
	{
		buffer >> element->ki;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC3A1_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC3A1* element = dynamic_cast<ExcDC3A1*>(BaseClass_ptr1))
	{
		buffer >> element->kp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC3A1_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC3A1* element = dynamic_cast<ExcDC3A1*>(BaseClass_ptr1))
	{
		buffer >> element->ta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC3A1_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC3A1* element = dynamic_cast<ExcDC3A1*>(BaseClass_ptr1))
	{
		buffer >> element->te;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC3A1_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC3A1* element = dynamic_cast<ExcDC3A1*>(BaseClass_ptr1))
	{
		buffer >> element->tf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC3A1_vb1max(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC3A1* element = dynamic_cast<ExcDC3A1*>(BaseClass_ptr1))
	{
		buffer >> element->vb1max;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC3A1_vblim(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC3A1* element = dynamic_cast<ExcDC3A1*>(BaseClass_ptr1))
	{
		buffer >> element->vblim;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC3A1_vbmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC3A1* element = dynamic_cast<ExcDC3A1*>(BaseClass_ptr1))
	{
		buffer >> element->vbmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC3A1_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC3A1* element = dynamic_cast<ExcDC3A1*>(BaseClass_ptr1))
	{
		buffer >> element->vrmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcDC3A1_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcDC3A1* element = dynamic_cast<ExcDC3A1*>(BaseClass_ptr1))
	{
		buffer >> element->vrmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}
















const char ExcDC3A1::debugName[] = "ExcDC3A1";
const char* ExcDC3A1::debugString() const
{
	return ExcDC3A1::debugName;
}

void ExcDC3A1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcDC3A1"), &ExcDC3A1_factory));
}

void ExcDC3A1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A1.exclim"), &assign_ExcDC3A1_exclim));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A1.ka"), &assign_ExcDC3A1_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A1.ke"), &assign_ExcDC3A1_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A1.kf"), &assign_ExcDC3A1_kf));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A1.ki"), &assign_ExcDC3A1_ki));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A1.kp"), &assign_ExcDC3A1_kp));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A1.ta"), &assign_ExcDC3A1_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A1.te"), &assign_ExcDC3A1_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A1.tf"), &assign_ExcDC3A1_tf));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A1.vb1max"), &assign_ExcDC3A1_vb1max));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A1.vblim"), &assign_ExcDC3A1_vblim));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A1.vbmax"), &assign_ExcDC3A1_vbmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A1.vrmax"), &assign_ExcDC3A1_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A1.vrmin"), &assign_ExcDC3A1_vrmin));
}

void ExcDC3A1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner ExcDC3A1::declare()
{
	return BaseClassDefiner(ExcDC3A1::addConstructToMap, ExcDC3A1::addPrimitiveAssignFnsToMap, ExcDC3A1::addClassAssignFnsToMap, ExcDC3A1::debugName);
}

namespace CIMPP
{
	BaseClass* ExcDC3A1_factory()
	{
		return new ExcDC3A1;
	}
}
