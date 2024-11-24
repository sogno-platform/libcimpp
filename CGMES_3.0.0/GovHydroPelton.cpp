/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydroPelton.hpp"

#include <algorithm>
#include <sstream>

#include "Area.hpp"
#include "Area.hpp"
#include "PU.hpp"
#include "Frequency.hpp"
#include "Frequency.hpp"
#include "Length.hpp"
#include "Length.hpp"
#include "Length.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "VolumeFlowRate.hpp"
#include "Boolean.hpp"
#include "Boolean.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Boolean.hpp"
#include "Length.hpp"

using namespace CIMPP;

GovHydroPelton::GovHydroPelton() {};
GovHydroPelton::~GovHydroPelton() {};


bool assign_GovHydroPelton_av0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer >> element->av0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPelton_av1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer >> element->av1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPelton_bp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer >> element->bp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPelton_db1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer >> element->db1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPelton_db2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer >> element->db2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPelton_h1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer >> element->h1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPelton_h2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer >> element->h2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPelton_hn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer >> element->hn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPelton_kc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer >> element->kc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPelton_kg(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer >> element->kg;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPelton_qc0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer >> element->qc0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPelton_qn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer >> element->qn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPelton_simplifiedPelton(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer >> element->simplifiedPelton;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPelton_staticCompensating(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer >> element->staticCompensating;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPelton_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer >> element->ta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPelton_ts(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer >> element->ts;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPelton_tv(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer >> element->tv;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPelton_twnc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer >> element->twnc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPelton_twng(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer >> element->twng;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPelton_tx(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer >> element->tx;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPelton_va(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer >> element->va;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPelton_valvmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer >> element->valvmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPelton_valvmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer >> element->valvmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPelton_vav(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer >> element->vav;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPelton_vc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer >> element->vc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPelton_vcv(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer >> element->vcv;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPelton_waterTunnelSurgeChamberSimulation(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer >> element->waterTunnelSurgeChamberSimulation;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroPelton_zsfc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer >> element->zsfc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}






























const char GovHydroPelton::debugName[] = "GovHydroPelton";
const char* GovHydroPelton::debugString() const
{
	return GovHydroPelton::debugName;
}

void GovHydroPelton::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:GovHydroPelton"), &GovHydroPelton_factory));
}

void GovHydroPelton::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPelton.av0"), &assign_GovHydroPelton_av0));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPelton.av1"), &assign_GovHydroPelton_av1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPelton.bp"), &assign_GovHydroPelton_bp));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPelton.db1"), &assign_GovHydroPelton_db1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPelton.db2"), &assign_GovHydroPelton_db2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPelton.h1"), &assign_GovHydroPelton_h1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPelton.h2"), &assign_GovHydroPelton_h2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPelton.hn"), &assign_GovHydroPelton_hn));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPelton.kc"), &assign_GovHydroPelton_kc));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPelton.kg"), &assign_GovHydroPelton_kg));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPelton.qc0"), &assign_GovHydroPelton_qc0));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPelton.qn"), &assign_GovHydroPelton_qn));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPelton.simplifiedPelton"), &assign_GovHydroPelton_simplifiedPelton));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPelton.staticCompensating"), &assign_GovHydroPelton_staticCompensating));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPelton.ta"), &assign_GovHydroPelton_ta));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPelton.ts"), &assign_GovHydroPelton_ts));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPelton.tv"), &assign_GovHydroPelton_tv));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPelton.twnc"), &assign_GovHydroPelton_twnc));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPelton.twng"), &assign_GovHydroPelton_twng));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPelton.tx"), &assign_GovHydroPelton_tx));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPelton.va"), &assign_GovHydroPelton_va));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPelton.valvmax"), &assign_GovHydroPelton_valvmax));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPelton.valvmin"), &assign_GovHydroPelton_valvmin));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPelton.vav"), &assign_GovHydroPelton_vav));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPelton.vc"), &assign_GovHydroPelton_vc));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPelton.vcv"), &assign_GovHydroPelton_vcv));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPelton.waterTunnelSurgeChamberSimulation"), &assign_GovHydroPelton_waterTunnelSurgeChamberSimulation));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPelton.zsfc"), &assign_GovHydroPelton_zsfc));
}

void GovHydroPelton::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner GovHydroPelton::declare()
{
	return BaseClassDefiner(GovHydroPelton::addConstructToMap, GovHydroPelton::addPrimitiveAssignFnsToMap, GovHydroPelton::addClassAssignFnsToMap, GovHydroPelton::debugName);
}

namespace CIMPP
{
	BaseClass* GovHydroPelton_factory()
	{
		return new GovHydroPelton;
	}
}
