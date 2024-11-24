/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydroFrancis.hpp"

#include <algorithm>
#include <sstream>

#include "PU.hpp"
#include "Area.hpp"
#include "Area.hpp"
#include "PU.hpp"
#include "Frequency.hpp"
#include "PU.hpp"
#include "FrancisGovernorControlKind.hpp"
#include "Length.hpp"
#include "Length.hpp"
#include "Length.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "VolumeFlowRate.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Boolean.hpp"
#include "Length.hpp"

using namespace CIMPP;

GovHydroFrancis::GovHydroFrancis() {};
GovHydroFrancis::~GovHydroFrancis() {};


bool assign_GovHydroFrancis_am(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1))
	{
		buffer >> element->am;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroFrancis_av0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1))
	{
		buffer >> element->av0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroFrancis_av1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1))
	{
		buffer >> element->av1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroFrancis_bp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1))
	{
		buffer >> element->bp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroFrancis_db1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1))
	{
		buffer >> element->db1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroFrancis_etamax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1))
	{
		buffer >> element->etamax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroFrancis_governorControl(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1))
	{
		buffer >> element->governorControl;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroFrancis_h1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1))
	{
		buffer >> element->h1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroFrancis_h2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1))
	{
		buffer >> element->h2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroFrancis_hn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1))
	{
		buffer >> element->hn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroFrancis_kc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1))
	{
		buffer >> element->kc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroFrancis_kg(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1))
	{
		buffer >> element->kg;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroFrancis_kt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1))
	{
		buffer >> element->kt;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroFrancis_qc0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1))
	{
		buffer >> element->qc0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroFrancis_qn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1))
	{
		buffer >> element->qn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroFrancis_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1))
	{
		buffer >> element->ta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroFrancis_td(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1))
	{
		buffer >> element->td;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroFrancis_ts(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1))
	{
		buffer >> element->ts;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroFrancis_twnc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1))
	{
		buffer >> element->twnc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroFrancis_twng(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1))
	{
		buffer >> element->twng;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroFrancis_tx(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1))
	{
		buffer >> element->tx;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroFrancis_va(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1))
	{
		buffer >> element->va;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroFrancis_valvmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1))
	{
		buffer >> element->valvmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroFrancis_valvmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1))
	{
		buffer >> element->valvmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroFrancis_vc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1))
	{
		buffer >> element->vc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroFrancis_waterTunnelSurgeChamberSimulation(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1))
	{
		buffer >> element->waterTunnelSurgeChamberSimulation;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroFrancis_zsfc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1))
	{
		buffer >> element->zsfc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}





























const char GovHydroFrancis::debugName[] = "GovHydroFrancis";
const char* GovHydroFrancis::debugString() const
{
	return GovHydroFrancis::debugName;
}

void GovHydroFrancis::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:GovHydroFrancis"), &GovHydroFrancis_factory));
}

void GovHydroFrancis::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GovHydroFrancis.am"), &assign_GovHydroFrancis_am));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroFrancis.av0"), &assign_GovHydroFrancis_av0));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroFrancis.av1"), &assign_GovHydroFrancis_av1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroFrancis.bp"), &assign_GovHydroFrancis_bp));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroFrancis.db1"), &assign_GovHydroFrancis_db1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroFrancis.etamax"), &assign_GovHydroFrancis_etamax));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroFrancis.governorControl"), &assign_GovHydroFrancis_governorControl));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroFrancis.h1"), &assign_GovHydroFrancis_h1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroFrancis.h2"), &assign_GovHydroFrancis_h2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroFrancis.hn"), &assign_GovHydroFrancis_hn));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroFrancis.kc"), &assign_GovHydroFrancis_kc));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroFrancis.kg"), &assign_GovHydroFrancis_kg));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroFrancis.kt"), &assign_GovHydroFrancis_kt));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroFrancis.qc0"), &assign_GovHydroFrancis_qc0));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroFrancis.qn"), &assign_GovHydroFrancis_qn));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroFrancis.ta"), &assign_GovHydroFrancis_ta));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroFrancis.td"), &assign_GovHydroFrancis_td));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroFrancis.ts"), &assign_GovHydroFrancis_ts));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroFrancis.twnc"), &assign_GovHydroFrancis_twnc));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroFrancis.twng"), &assign_GovHydroFrancis_twng));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroFrancis.tx"), &assign_GovHydroFrancis_tx));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroFrancis.va"), &assign_GovHydroFrancis_va));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroFrancis.valvmax"), &assign_GovHydroFrancis_valvmax));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroFrancis.valvmin"), &assign_GovHydroFrancis_valvmin));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroFrancis.vc"), &assign_GovHydroFrancis_vc));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroFrancis.waterTunnelSurgeChamberSimulation"), &assign_GovHydroFrancis_waterTunnelSurgeChamberSimulation));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroFrancis.zsfc"), &assign_GovHydroFrancis_zsfc));
}

void GovHydroFrancis::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner GovHydroFrancis::declare()
{
	return BaseClassDefiner(GovHydroFrancis::addConstructToMap, GovHydroFrancis::addPrimitiveAssignFnsToMap, GovHydroFrancis::addClassAssignFnsToMap, GovHydroFrancis::debugName);
}

namespace CIMPP
{
	BaseClass* GovHydroFrancis_factory()
	{
		return new GovHydroFrancis;
	}
}
