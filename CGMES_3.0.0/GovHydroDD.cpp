/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydroDD.hpp"

#include <algorithm>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "Frequency.hpp"
#include "ActivePower.hpp"
#include "Frequency.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "ActivePower.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
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
#include "Float.hpp"
#include "Float.hpp"

using namespace CIMPP;

GovHydroDD::GovHydroDD() {};
GovHydroDD::~GovHydroDD() {};


bool assign_GovHydroDD_aturb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->aturb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_bturb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->bturb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_db1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->db1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_db2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->db2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_eps(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->eps;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_gmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->gmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_gmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->gmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_gv1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->gv1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_gv2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->gv2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_gv3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->gv3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_gv4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->gv4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_gv5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->gv5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_gv6(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->gv6;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_inputSignal(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->inputSignal;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_k1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->k1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_k2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->k2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_kg(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->kg;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->ki;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_mwbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->mwbase;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_pgv1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->pgv1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_pgv2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->pgv2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_pgv3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->pgv3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_pgv4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->pgv4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_pgv5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->pgv5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_pgv6(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->pgv6;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_pmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->pmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_pmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->pmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->r;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_td(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->td;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->tf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_tp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->tp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_tt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->tt;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_tturb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->tturb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_velcl(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->velcl;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_velop(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->velop;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}





































const char GovHydroDD::debugName[] = "GovHydroDD";
const char* GovHydroDD::debugString() const
{
	return GovHydroDD::debugName;
}

void GovHydroDD::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:GovHydroDD"), &GovHydroDD_factory));
}

void GovHydroDD::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.aturb"), &assign_GovHydroDD_aturb));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.bturb"), &assign_GovHydroDD_bturb));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.db1"), &assign_GovHydroDD_db1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.db2"), &assign_GovHydroDD_db2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.eps"), &assign_GovHydroDD_eps));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.gmax"), &assign_GovHydroDD_gmax));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.gmin"), &assign_GovHydroDD_gmin));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.gv1"), &assign_GovHydroDD_gv1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.gv2"), &assign_GovHydroDD_gv2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.gv3"), &assign_GovHydroDD_gv3));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.gv4"), &assign_GovHydroDD_gv4));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.gv5"), &assign_GovHydroDD_gv5));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.gv6"), &assign_GovHydroDD_gv6));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.inputSignal"), &assign_GovHydroDD_inputSignal));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.k1"), &assign_GovHydroDD_k1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.k2"), &assign_GovHydroDD_k2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.kg"), &assign_GovHydroDD_kg));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.ki"), &assign_GovHydroDD_ki));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.mwbase"), &assign_GovHydroDD_mwbase));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.pgv1"), &assign_GovHydroDD_pgv1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.pgv2"), &assign_GovHydroDD_pgv2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.pgv3"), &assign_GovHydroDD_pgv3));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.pgv4"), &assign_GovHydroDD_pgv4));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.pgv5"), &assign_GovHydroDD_pgv5));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.pgv6"), &assign_GovHydroDD_pgv6));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.pmax"), &assign_GovHydroDD_pmax));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.pmin"), &assign_GovHydroDD_pmin));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.r"), &assign_GovHydroDD_r));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.td"), &assign_GovHydroDD_td));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.tf"), &assign_GovHydroDD_tf));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.tp"), &assign_GovHydroDD_tp));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.tt"), &assign_GovHydroDD_tt));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.tturb"), &assign_GovHydroDD_tturb));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.velcl"), &assign_GovHydroDD_velcl));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.velop"), &assign_GovHydroDD_velop));
}

void GovHydroDD::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner GovHydroDD::declare()
{
	return BaseClassDefiner(GovHydroDD::addConstructToMap, GovHydroDD::addPrimitiveAssignFnsToMap, GovHydroDD::addClassAssignFnsToMap, GovHydroDD::debugName);
}

namespace CIMPP
{
	BaseClass* GovHydroDD_factory()
	{
		return new GovHydroDD;
	}
}
