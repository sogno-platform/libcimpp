/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEAC5A.hpp"

#include <algorithm>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
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

ExcIEEEAC5A::ExcIEEEAC5A() {};
ExcIEEEAC5A::~ExcIEEEAC5A() {};


bool assign_ExcIEEEAC5A_efd1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC5A* element = dynamic_cast<ExcIEEEAC5A*>(BaseClass_ptr1))
	{
		buffer >> element->efd1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC5A_efd2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC5A* element = dynamic_cast<ExcIEEEAC5A*>(BaseClass_ptr1))
	{
		buffer >> element->efd2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC5A_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC5A* element = dynamic_cast<ExcIEEEAC5A*>(BaseClass_ptr1))
	{
		buffer >> element->ka;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC5A_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC5A* element = dynamic_cast<ExcIEEEAC5A*>(BaseClass_ptr1))
	{
		buffer >> element->ke;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC5A_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC5A* element = dynamic_cast<ExcIEEEAC5A*>(BaseClass_ptr1))
	{
		buffer >> element->kf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC5A_seefd1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC5A* element = dynamic_cast<ExcIEEEAC5A*>(BaseClass_ptr1))
	{
		buffer >> element->seefd1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC5A_seefd2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC5A* element = dynamic_cast<ExcIEEEAC5A*>(BaseClass_ptr1))
	{
		buffer >> element->seefd2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC5A_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC5A* element = dynamic_cast<ExcIEEEAC5A*>(BaseClass_ptr1))
	{
		buffer >> element->ta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC5A_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC5A* element = dynamic_cast<ExcIEEEAC5A*>(BaseClass_ptr1))
	{
		buffer >> element->te;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC5A_tf1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC5A* element = dynamic_cast<ExcIEEEAC5A*>(BaseClass_ptr1))
	{
		buffer >> element->tf1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC5A_tf2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC5A* element = dynamic_cast<ExcIEEEAC5A*>(BaseClass_ptr1))
	{
		buffer >> element->tf2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC5A_tf3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC5A* element = dynamic_cast<ExcIEEEAC5A*>(BaseClass_ptr1))
	{
		buffer >> element->tf3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC5A_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC5A* element = dynamic_cast<ExcIEEEAC5A*>(BaseClass_ptr1))
	{
		buffer >> element->vrmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcIEEEAC5A_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcIEEEAC5A* element = dynamic_cast<ExcIEEEAC5A*>(BaseClass_ptr1))
	{
		buffer >> element->vrmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}
















const char ExcIEEEAC5A::debugName[] = "ExcIEEEAC5A";
const char* ExcIEEEAC5A::debugString() const
{
	return ExcIEEEAC5A::debugName;
}

void ExcIEEEAC5A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcIEEEAC5A"), &ExcIEEEAC5A_factory));
}

void ExcIEEEAC5A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC5A.efd1"), &assign_ExcIEEEAC5A_efd1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC5A.efd2"), &assign_ExcIEEEAC5A_efd2));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC5A.ka"), &assign_ExcIEEEAC5A_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC5A.ke"), &assign_ExcIEEEAC5A_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC5A.kf"), &assign_ExcIEEEAC5A_kf));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC5A.seefd1"), &assign_ExcIEEEAC5A_seefd1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC5A.seefd2"), &assign_ExcIEEEAC5A_seefd2));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC5A.ta"), &assign_ExcIEEEAC5A_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC5A.te"), &assign_ExcIEEEAC5A_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC5A.tf1"), &assign_ExcIEEEAC5A_tf1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC5A.tf2"), &assign_ExcIEEEAC5A_tf2));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC5A.tf3"), &assign_ExcIEEEAC5A_tf3));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC5A.vrmax"), &assign_ExcIEEEAC5A_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC5A.vrmin"), &assign_ExcIEEEAC5A_vrmin));
}

void ExcIEEEAC5A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner ExcIEEEAC5A::declare()
{
	return BaseClassDefiner(ExcIEEEAC5A::addConstructToMap, ExcIEEEAC5A::addPrimitiveAssignFnsToMap, ExcIEEEAC5A::addClassAssignFnsToMap, ExcIEEEAC5A::debugName);
}

namespace CIMPP
{
	BaseClass* ExcIEEEAC5A_factory()
	{
		return new ExcIEEEAC5A;
	}
}
