/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcNI.hpp"

#include <algorithm>
#include <sstream>

#include "Boolean.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcNI::ExcNI() {};
ExcNI::~ExcNI() {};


bool assign_ExcNI_busFedSelector(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1))
	{
		buffer >> element->busFedSelector;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcNI_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1))
	{
		buffer >> element->ka;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcNI_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1))
	{
		buffer >> element->kf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcNI_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1))
	{
		buffer >> element->r;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcNI_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1))
	{
		buffer >> element->ta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcNI_tf1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1))
	{
		buffer >> element->tf1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcNI_tf2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1))
	{
		buffer >> element->tf2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcNI_tr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1))
	{
		buffer >> element->tr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcNI_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1))
	{
		buffer >> element->vrmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcNI_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcNI* element = dynamic_cast<ExcNI*>(BaseClass_ptr1))
	{
		buffer >> element->vrmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}












const char ExcNI::debugName[] = "ExcNI";
const char* ExcNI::debugString() const
{
	return ExcNI::debugName;
}

void ExcNI::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcNI"), &ExcNI_factory));
}

void ExcNI::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcNI.busFedSelector"), &assign_ExcNI_busFedSelector));
	assign_map.insert(std::make_pair(std::string("cim:ExcNI.ka"), &assign_ExcNI_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcNI.kf"), &assign_ExcNI_kf));
	assign_map.insert(std::make_pair(std::string("cim:ExcNI.r"), &assign_ExcNI_r));
	assign_map.insert(std::make_pair(std::string("cim:ExcNI.ta"), &assign_ExcNI_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcNI.tf1"), &assign_ExcNI_tf1));
	assign_map.insert(std::make_pair(std::string("cim:ExcNI.tf2"), &assign_ExcNI_tf2));
	assign_map.insert(std::make_pair(std::string("cim:ExcNI.tr"), &assign_ExcNI_tr));
	assign_map.insert(std::make_pair(std::string("cim:ExcNI.vrmax"), &assign_ExcNI_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcNI.vrmin"), &assign_ExcNI_vrmin));
}

void ExcNI::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner ExcNI::declare()
{
	return BaseClassDefiner(ExcNI::addConstructToMap, ExcNI::addPrimitiveAssignFnsToMap, ExcNI::addClassAssignFnsToMap, ExcNI::debugName);
}

namespace CIMPP
{
	BaseClass* ExcNI_factory()
	{
		return new ExcNI;
	}
}
