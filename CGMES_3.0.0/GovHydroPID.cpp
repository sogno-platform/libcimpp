/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydroPID.hpp"

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

GovHydroPID::GovHydroPID() {};
GovHydroPID::~GovHydroPID() {};


bool assign_GovHydroPID_aturb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->aturb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_bturb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->bturb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_db1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->db1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_db2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->db2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_eps(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->eps;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_gv1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->gv1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_gv2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->gv2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_gv3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->gv3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_gv4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->gv4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_gv5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->gv5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_gv6(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->gv6;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_inputSignal(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->inputSignal;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_kd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->kd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_kg(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->kg;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->ki;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->kp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_mwbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->mwbase;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_pgv1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->pgv1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_pgv2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->pgv2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_pgv3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->pgv3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_pgv4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->pgv4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_pgv5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->pgv5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_pgv6(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->pgv6;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_pmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->pmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_pmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->pmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->r;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_td(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->td;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->tf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_tp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->tp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_tt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->tt;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_tturb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->tturb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_velcl(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->velcl;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPID_velop(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1))
	{
		buffer >> element->velop;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



































const char GovHydroPID::debugName[] = "GovHydroPID";
const char* GovHydroPID::debugString() const
{
	return GovHydroPID::debugName;
}

void GovHydroPID::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:GovHydroPID"), &GovHydroPID_factory));
}

void GovHydroPID::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.aturb"), &assign_GovHydroPID_aturb));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.bturb"), &assign_GovHydroPID_bturb));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.db1"), &assign_GovHydroPID_db1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.db2"), &assign_GovHydroPID_db2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.eps"), &assign_GovHydroPID_eps));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.gv1"), &assign_GovHydroPID_gv1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.gv2"), &assign_GovHydroPID_gv2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.gv3"), &assign_GovHydroPID_gv3));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.gv4"), &assign_GovHydroPID_gv4));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.gv5"), &assign_GovHydroPID_gv5));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.gv6"), &assign_GovHydroPID_gv6));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.inputSignal"), &assign_GovHydroPID_inputSignal));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.kd"), &assign_GovHydroPID_kd));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.kg"), &assign_GovHydroPID_kg));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.ki"), &assign_GovHydroPID_ki));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.kp"), &assign_GovHydroPID_kp));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.mwbase"), &assign_GovHydroPID_mwbase));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.pgv1"), &assign_GovHydroPID_pgv1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.pgv2"), &assign_GovHydroPID_pgv2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.pgv3"), &assign_GovHydroPID_pgv3));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.pgv4"), &assign_GovHydroPID_pgv4));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.pgv5"), &assign_GovHydroPID_pgv5));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.pgv6"), &assign_GovHydroPID_pgv6));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.pmax"), &assign_GovHydroPID_pmax));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.pmin"), &assign_GovHydroPID_pmin));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.r"), &assign_GovHydroPID_r));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.td"), &assign_GovHydroPID_td));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.tf"), &assign_GovHydroPID_tf));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.tp"), &assign_GovHydroPID_tp));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.tt"), &assign_GovHydroPID_tt));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.tturb"), &assign_GovHydroPID_tturb));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.velcl"), &assign_GovHydroPID_velcl));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID.velop"), &assign_GovHydroPID_velop));
}

void GovHydroPID::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner GovHydroPID::declare()
{
	return BaseClassDefiner(GovHydroPID::addConstructToMap, GovHydroPID::addPrimitiveAssignFnsToMap, GovHydroPID::addClassAssignFnsToMap, GovHydroPID::debugName);
}

namespace CIMPP
{
	BaseClass* GovHydroPID_factory()
	{
		return new GovHydroPID;
	}
}
