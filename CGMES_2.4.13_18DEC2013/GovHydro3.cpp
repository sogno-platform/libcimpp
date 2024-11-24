/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydro3.hpp"

#include <algorithm>
#include <sstream>

#include "PU.hpp"
#include "Frequency.hpp"
#include "ActivePower.hpp"
#include "PU.hpp"
#include "Frequency.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
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
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"

using namespace CIMPP;

GovHydro3::GovHydro3() {};
GovHydro3::~GovHydro3() {};


bool assign_GovHydro3_at(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->at;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_db1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->db1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_db2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->db2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_dturb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->dturb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_eps(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->eps;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_governorControl(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->governorControl;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_gv1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->gv1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_gv2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->gv2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_gv3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->gv3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_gv4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->gv4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_gv5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->gv5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_gv6(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->gv6;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_h0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->h0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_k1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->k1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_k2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->k2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_kg(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->kg;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->ki;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_mwbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->mwbase;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_pgv1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->pgv1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_pgv2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->pgv2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_pgv3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->pgv3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_pgv4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->pgv4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_pgv5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->pgv5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_pgv6(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->pgv6;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_pmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->pmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_pmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->pmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_qnl(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->qnl;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_relec(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->relec;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_rgate(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->rgate;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_td(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->td;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->tf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_tp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->tp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_tt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->tt;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_tw(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->tw;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_velcl(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->velcl;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro3_velop(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1))
	{
		buffer >> element->velop;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}






































const char GovHydro3::debugName[] = "GovHydro3";
const char* GovHydro3::debugString() const
{
	return GovHydro3::debugName;
}

void GovHydro3::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:GovHydro3"), &GovHydro3_factory));
}

void GovHydro3::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.at"), &assign_GovHydro3_at));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.db1"), &assign_GovHydro3_db1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.db2"), &assign_GovHydro3_db2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.dturb"), &assign_GovHydro3_dturb));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.eps"), &assign_GovHydro3_eps));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.governorControl"), &assign_GovHydro3_governorControl));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.gv1"), &assign_GovHydro3_gv1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.gv2"), &assign_GovHydro3_gv2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.gv3"), &assign_GovHydro3_gv3));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.gv4"), &assign_GovHydro3_gv4));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.gv5"), &assign_GovHydro3_gv5));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.gv6"), &assign_GovHydro3_gv6));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.h0"), &assign_GovHydro3_h0));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.k1"), &assign_GovHydro3_k1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.k2"), &assign_GovHydro3_k2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.kg"), &assign_GovHydro3_kg));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.ki"), &assign_GovHydro3_ki));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.mwbase"), &assign_GovHydro3_mwbase));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.pgv1"), &assign_GovHydro3_pgv1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.pgv2"), &assign_GovHydro3_pgv2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.pgv3"), &assign_GovHydro3_pgv3));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.pgv4"), &assign_GovHydro3_pgv4));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.pgv5"), &assign_GovHydro3_pgv5));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.pgv6"), &assign_GovHydro3_pgv6));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.pmax"), &assign_GovHydro3_pmax));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.pmin"), &assign_GovHydro3_pmin));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.qnl"), &assign_GovHydro3_qnl));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.relec"), &assign_GovHydro3_relec));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.rgate"), &assign_GovHydro3_rgate));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.td"), &assign_GovHydro3_td));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.tf"), &assign_GovHydro3_tf));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.tp"), &assign_GovHydro3_tp));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.tt"), &assign_GovHydro3_tt));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.tw"), &assign_GovHydro3_tw));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.velcl"), &assign_GovHydro3_velcl));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro3.velop"), &assign_GovHydro3_velop));
}

void GovHydro3::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner GovHydro3::declare()
{
	return BaseClassDefiner(GovHydro3::addConstructToMap, GovHydro3::addPrimitiveAssignFnsToMap, GovHydro3::addClassAssignFnsToMap, GovHydro3::debugName);
}

namespace CIMPP
{
	BaseClass* GovHydro3_factory()
	{
		return new GovHydro3;
	}
}
