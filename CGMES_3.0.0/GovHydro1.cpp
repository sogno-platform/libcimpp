/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydro1.hpp"

#include <algorithm>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "ActivePower.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Float.hpp"

using namespace CIMPP;

GovHydro1::GovHydro1() {};
GovHydro1::~GovHydro1() {};


bool assign_GovHydro1_at(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro1* element = dynamic_cast<GovHydro1*>(BaseClass_ptr1))
	{
		buffer >> element->at;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro1_dturb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro1* element = dynamic_cast<GovHydro1*>(BaseClass_ptr1))
	{
		buffer >> element->dturb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro1_gmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro1* element = dynamic_cast<GovHydro1*>(BaseClass_ptr1))
	{
		buffer >> element->gmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro1_gmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro1* element = dynamic_cast<GovHydro1*>(BaseClass_ptr1))
	{
		buffer >> element->gmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro1_hdam(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro1* element = dynamic_cast<GovHydro1*>(BaseClass_ptr1))
	{
		buffer >> element->hdam;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro1_mwbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro1* element = dynamic_cast<GovHydro1*>(BaseClass_ptr1))
	{
		buffer >> element->mwbase;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro1_qnl(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro1* element = dynamic_cast<GovHydro1*>(BaseClass_ptr1))
	{
		buffer >> element->qnl;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro1_rperm(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro1* element = dynamic_cast<GovHydro1*>(BaseClass_ptr1))
	{
		buffer >> element->rperm;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro1_rtemp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro1* element = dynamic_cast<GovHydro1*>(BaseClass_ptr1))
	{
		buffer >> element->rtemp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro1_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro1* element = dynamic_cast<GovHydro1*>(BaseClass_ptr1))
	{
		buffer >> element->tf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro1_tg(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro1* element = dynamic_cast<GovHydro1*>(BaseClass_ptr1))
	{
		buffer >> element->tg;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro1_tr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro1* element = dynamic_cast<GovHydro1*>(BaseClass_ptr1))
	{
		buffer >> element->tr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro1_tw(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro1* element = dynamic_cast<GovHydro1*>(BaseClass_ptr1))
	{
		buffer >> element->tw;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro1_velm(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro1* element = dynamic_cast<GovHydro1*>(BaseClass_ptr1))
	{
		buffer >> element->velm;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}
















const char GovHydro1::debugName[] = "GovHydro1";
const char* GovHydro1::debugString() const
{
	return GovHydro1::debugName;
}

void GovHydro1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:GovHydro1"), &GovHydro1_factory));
}

void GovHydro1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GovHydro1.at"), &assign_GovHydro1_at));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro1.dturb"), &assign_GovHydro1_dturb));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro1.gmax"), &assign_GovHydro1_gmax));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro1.gmin"), &assign_GovHydro1_gmin));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro1.hdam"), &assign_GovHydro1_hdam));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro1.mwbase"), &assign_GovHydro1_mwbase));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro1.qnl"), &assign_GovHydro1_qnl));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro1.rperm"), &assign_GovHydro1_rperm));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro1.rtemp"), &assign_GovHydro1_rtemp));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro1.tf"), &assign_GovHydro1_tf));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro1.tg"), &assign_GovHydro1_tg));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro1.tr"), &assign_GovHydro1_tr));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro1.tw"), &assign_GovHydro1_tw));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro1.velm"), &assign_GovHydro1_velm));
}

void GovHydro1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner GovHydro1::declare()
{
	return BaseClassDefiner(GovHydro1::addConstructToMap, GovHydro1::addPrimitiveAssignFnsToMap, GovHydro1::addClassAssignFnsToMap, GovHydro1::debugName);
}

namespace CIMPP
{
	BaseClass* GovHydro1_factory()
	{
		return new GovHydro1;
	}
}
