/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovCT1.hpp"

#include <algorithm>
#include <sstream>

#include "Simple_Float.hpp"
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
#include "PU.hpp"
#include "PU.hpp"
#include "ActivePower.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "DroopSignalFeedbackKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

GovCT1::GovCT1() {};
GovCT1::~GovCT1() {};


bool assign_GovCT1_aset(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->aset;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_db(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->db;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_dm(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->dm;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->ka;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_kdgov(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->kdgov;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_kigov(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->kigov;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_kiload(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->kiload;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_kimw(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->kimw;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_kpgov(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->kpgov;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_kpload(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->kpload;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_kturb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->kturb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_ldref(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->ldref;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_maxerr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->maxerr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_minerr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->minerr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_mwbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->mwbase;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->r;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_rclose(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->rclose;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_rdown(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->rdown;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_ropen(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->ropen;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_rselect(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->rselect;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_rup(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->rup;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->ta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_tact(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->tact;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->tb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->tc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_tdgov(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->tdgov;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_teng(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->teng;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_tfload(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->tfload;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_tpelec(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->tpelec;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_tsa(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->tsa;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_tsb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->tsb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_vmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->vmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_vmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->vmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_wfnl(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->wfnl;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovCT1_wfspd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1))
	{
		buffer >> element->wfspd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}





































const char GovCT1::debugName[] = "GovCT1";
const char* GovCT1::debugString() const
{
	return GovCT1::debugName;
}

void GovCT1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:GovCT1"), &GovCT1_factory));
}

void GovCT1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.aset"), &assign_GovCT1_aset));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.db"), &assign_GovCT1_db));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.dm"), &assign_GovCT1_dm));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.ka"), &assign_GovCT1_ka));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.kdgov"), &assign_GovCT1_kdgov));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.kigov"), &assign_GovCT1_kigov));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.kiload"), &assign_GovCT1_kiload));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.kimw"), &assign_GovCT1_kimw));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.kpgov"), &assign_GovCT1_kpgov));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.kpload"), &assign_GovCT1_kpload));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.kturb"), &assign_GovCT1_kturb));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.ldref"), &assign_GovCT1_ldref));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.maxerr"), &assign_GovCT1_maxerr));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.minerr"), &assign_GovCT1_minerr));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.mwbase"), &assign_GovCT1_mwbase));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.r"), &assign_GovCT1_r));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.rclose"), &assign_GovCT1_rclose));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.rdown"), &assign_GovCT1_rdown));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.ropen"), &assign_GovCT1_ropen));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.rselect"), &assign_GovCT1_rselect));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.rup"), &assign_GovCT1_rup));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.ta"), &assign_GovCT1_ta));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.tact"), &assign_GovCT1_tact));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.tb"), &assign_GovCT1_tb));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.tc"), &assign_GovCT1_tc));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.tdgov"), &assign_GovCT1_tdgov));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.teng"), &assign_GovCT1_teng));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.tfload"), &assign_GovCT1_tfload));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.tpelec"), &assign_GovCT1_tpelec));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.tsa"), &assign_GovCT1_tsa));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.tsb"), &assign_GovCT1_tsb));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.vmax"), &assign_GovCT1_vmax));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.vmin"), &assign_GovCT1_vmin));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.wfnl"), &assign_GovCT1_wfnl));
	assign_map.insert(std::make_pair(std::string("cim:GovCT1.wfspd"), &assign_GovCT1_wfspd));
}

void GovCT1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner GovCT1::declare()
{
	return BaseClassDefiner(GovCT1::addConstructToMap, GovCT1::addPrimitiveAssignFnsToMap, GovCT1::addClassAssignFnsToMap, GovCT1::debugName);
}

namespace CIMPP
{
	BaseClass* GovCT1_factory()
	{
		return new GovCT1;
	}
}
