/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovGAST4.hpp"

#include <algorithm>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

GovGAST4::GovGAST4() {};
GovGAST4::~GovGAST4() {};


bool assign_GovGAST4_bp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1))
	{
		buffer >> element->bp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST4_ktm(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1))
	{
		buffer >> element->ktm;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST4_mnef(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1))
	{
		buffer >> element->mnef;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST4_mxef(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1))
	{
		buffer >> element->mxef;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST4_rymn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1))
	{
		buffer >> element->rymn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST4_rymx(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1))
	{
		buffer >> element->rymx;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST4_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1))
	{
		buffer >> element->ta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST4_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1))
	{
		buffer >> element->tc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST4_tcm(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1))
	{
		buffer >> element->tcm;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST4_tm(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1))
	{
		buffer >> element->tm;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGAST4_tv(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1))
	{
		buffer >> element->tv;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}













const char GovGAST4::debugName[] = "GovGAST4";
const char* GovGAST4::debugString() const
{
	return GovGAST4::debugName;
}

void GovGAST4::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:GovGAST4"), &GovGAST4_factory));
}

void GovGAST4::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GovGAST4.bp"), &assign_GovGAST4_bp));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST4.ktm"), &assign_GovGAST4_ktm));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST4.mnef"), &assign_GovGAST4_mnef));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST4.mxef"), &assign_GovGAST4_mxef));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST4.rymn"), &assign_GovGAST4_rymn));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST4.rymx"), &assign_GovGAST4_rymx));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST4.ta"), &assign_GovGAST4_ta));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST4.tc"), &assign_GovGAST4_tc));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST4.tcm"), &assign_GovGAST4_tcm));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST4.tm"), &assign_GovGAST4_tm));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST4.tv"), &assign_GovGAST4_tv));
}

void GovGAST4::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner GovGAST4::declare()
{
	return BaseClassDefiner(GovGAST4::addConstructToMap, GovGAST4::addPrimitiveAssignFnsToMap, GovGAST4::addClassAssignFnsToMap, GovGAST4::debugName);
}

namespace CIMPP
{
	BaseClass* GovGAST4_factory()
	{
		return new GovGAST4;
	}
}
