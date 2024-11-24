/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TurbLCFB1.hpp"

#include <algorithm>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "ActivePower.hpp"
#include "Boolean.hpp"
#include "ActivePower.hpp"
#include "Boolean.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

TurbLCFB1::TurbLCFB1() {};
TurbLCFB1::~TurbLCFB1() {};


bool assign_TurbLCFB1_db(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1))
	{
		buffer >> element->db;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TurbLCFB1_emax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1))
	{
		buffer >> element->emax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TurbLCFB1_fb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1))
	{
		buffer >> element->fb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TurbLCFB1_fbf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1))
	{
		buffer >> element->fbf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TurbLCFB1_irmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1))
	{
		buffer >> element->irmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TurbLCFB1_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1))
	{
		buffer >> element->ki;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TurbLCFB1_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1))
	{
		buffer >> element->kp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TurbLCFB1_mwbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1))
	{
		buffer >> element->mwbase;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TurbLCFB1_pbf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1))
	{
		buffer >> element->pbf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TurbLCFB1_pmwset(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1))
	{
		buffer >> element->pmwset;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TurbLCFB1_speedReferenceGovernor(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1))
	{
		buffer >> element->speedReferenceGovernor;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_TurbLCFB1_tpelec(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TurbLCFB1* element = dynamic_cast<TurbLCFB1*>(BaseClass_ptr1))
	{
		buffer >> element->tpelec;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}














const char TurbLCFB1::debugName[] = "TurbLCFB1";
const char* TurbLCFB1::debugString() const
{
	return TurbLCFB1::debugName;
}

void TurbLCFB1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:TurbLCFB1"), &TurbLCFB1_factory));
}

void TurbLCFB1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:TurbLCFB1.db"), &assign_TurbLCFB1_db));
	assign_map.insert(std::make_pair(std::string("cim:TurbLCFB1.emax"), &assign_TurbLCFB1_emax));
	assign_map.insert(std::make_pair(std::string("cim:TurbLCFB1.fb"), &assign_TurbLCFB1_fb));
	assign_map.insert(std::make_pair(std::string("cim:TurbLCFB1.fbf"), &assign_TurbLCFB1_fbf));
	assign_map.insert(std::make_pair(std::string("cim:TurbLCFB1.irmax"), &assign_TurbLCFB1_irmax));
	assign_map.insert(std::make_pair(std::string("cim:TurbLCFB1.ki"), &assign_TurbLCFB1_ki));
	assign_map.insert(std::make_pair(std::string("cim:TurbLCFB1.kp"), &assign_TurbLCFB1_kp));
	assign_map.insert(std::make_pair(std::string("cim:TurbLCFB1.mwbase"), &assign_TurbLCFB1_mwbase));
	assign_map.insert(std::make_pair(std::string("cim:TurbLCFB1.pbf"), &assign_TurbLCFB1_pbf));
	assign_map.insert(std::make_pair(std::string("cim:TurbLCFB1.pmwset"), &assign_TurbLCFB1_pmwset));
	assign_map.insert(std::make_pair(std::string("cim:TurbLCFB1.speedReferenceGovernor"), &assign_TurbLCFB1_speedReferenceGovernor));
	assign_map.insert(std::make_pair(std::string("cim:TurbLCFB1.tpelec"), &assign_TurbLCFB1_tpelec));
}

void TurbLCFB1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner TurbLCFB1::declare()
{
	return BaseClassDefiner(TurbLCFB1::addConstructToMap, TurbLCFB1::addPrimitiveAssignFnsToMap, TurbLCFB1::addClassAssignFnsToMap, TurbLCFB1::debugName);
}

namespace CIMPP
{
	BaseClass* TurbLCFB1_factory()
	{
		return new TurbLCFB1;
	}
}
