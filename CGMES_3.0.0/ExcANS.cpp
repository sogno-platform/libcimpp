/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcANS.hpp"

#include <algorithm>
#include <sstream>

#include "Integer.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Float.hpp"
#include "Float.hpp"
#include "Float.hpp"
#include "Integer.hpp"
#include "Integer.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcANS::ExcANS() {};
ExcANS::~ExcANS() {};


bool assign_ExcANS_blint(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcANS* element = dynamic_cast<ExcANS*>(BaseClass_ptr1))
	{
		buffer >> element->blint;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcANS_ifmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcANS* element = dynamic_cast<ExcANS*>(BaseClass_ptr1))
	{
		buffer >> element->ifmn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcANS_ifmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcANS* element = dynamic_cast<ExcANS*>(BaseClass_ptr1))
	{
		buffer >> element->ifmx;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcANS_k2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcANS* element = dynamic_cast<ExcANS*>(BaseClass_ptr1))
	{
		buffer >> element->k2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcANS_k3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcANS* element = dynamic_cast<ExcANS*>(BaseClass_ptr1))
	{
		buffer >> element->k3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcANS_kce(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcANS* element = dynamic_cast<ExcANS*>(BaseClass_ptr1))
	{
		buffer >> element->kce;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcANS_krvecc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcANS* element = dynamic_cast<ExcANS*>(BaseClass_ptr1))
	{
		buffer >> element->krvecc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcANS_kvfif(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcANS* element = dynamic_cast<ExcANS*>(BaseClass_ptr1))
	{
		buffer >> element->kvfif;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcANS_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcANS* element = dynamic_cast<ExcANS*>(BaseClass_ptr1))
	{
		buffer >> element->t1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcANS_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcANS* element = dynamic_cast<ExcANS*>(BaseClass_ptr1))
	{
		buffer >> element->t2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcANS_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcANS* element = dynamic_cast<ExcANS*>(BaseClass_ptr1))
	{
		buffer >> element->t3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcANS_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcANS* element = dynamic_cast<ExcANS*>(BaseClass_ptr1))
	{
		buffer >> element->tb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcANS_vrmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcANS* element = dynamic_cast<ExcANS*>(BaseClass_ptr1))
	{
		buffer >> element->vrmn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcANS_vrmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcANS* element = dynamic_cast<ExcANS*>(BaseClass_ptr1))
	{
		buffer >> element->vrmx;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}
















const char ExcANS::debugName[] = "ExcANS";
const char* ExcANS::debugString() const
{
	return ExcANS::debugName;
}

void ExcANS::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcANS"), &ExcANS_factory));
}

void ExcANS::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcANS.blint"), &assign_ExcANS_blint));
	assign_map.insert(std::make_pair(std::string("cim:ExcANS.ifmn"), &assign_ExcANS_ifmn));
	assign_map.insert(std::make_pair(std::string("cim:ExcANS.ifmx"), &assign_ExcANS_ifmx));
	assign_map.insert(std::make_pair(std::string("cim:ExcANS.k2"), &assign_ExcANS_k2));
	assign_map.insert(std::make_pair(std::string("cim:ExcANS.k3"), &assign_ExcANS_k3));
	assign_map.insert(std::make_pair(std::string("cim:ExcANS.kce"), &assign_ExcANS_kce));
	assign_map.insert(std::make_pair(std::string("cim:ExcANS.krvecc"), &assign_ExcANS_krvecc));
	assign_map.insert(std::make_pair(std::string("cim:ExcANS.kvfif"), &assign_ExcANS_kvfif));
	assign_map.insert(std::make_pair(std::string("cim:ExcANS.t1"), &assign_ExcANS_t1));
	assign_map.insert(std::make_pair(std::string("cim:ExcANS.t2"), &assign_ExcANS_t2));
	assign_map.insert(std::make_pair(std::string("cim:ExcANS.t3"), &assign_ExcANS_t3));
	assign_map.insert(std::make_pair(std::string("cim:ExcANS.tb"), &assign_ExcANS_tb));
	assign_map.insert(std::make_pair(std::string("cim:ExcANS.vrmn"), &assign_ExcANS_vrmn));
	assign_map.insert(std::make_pair(std::string("cim:ExcANS.vrmx"), &assign_ExcANS_vrmx));
}

void ExcANS::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner ExcANS::declare()
{
	return BaseClassDefiner(ExcANS::addConstructToMap, ExcANS::addPrimitiveAssignFnsToMap, ExcANS::addClassAssignFnsToMap, ExcANS::debugName);
}

namespace CIMPP
{
	BaseClass* ExcANS_factory()
	{
		return new ExcANS;
	}
}
