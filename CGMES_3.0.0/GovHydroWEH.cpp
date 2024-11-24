/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydroWEH.hpp"

#include <algorithm>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
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
#include "Float.hpp"
#include "Float.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

GovHydroWEH::GovHydroWEH() {};
GovHydroWEH::~GovHydroWEH() {};


bool assign_GovHydroWEH_db(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->db;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_dicn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->dicn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_dpv(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->dpv;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_dturb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->dturb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_feedbackSignal(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->feedbackSignal;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_fl1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->fl1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_fl2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->fl2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_fl3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->fl3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_fl4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->fl4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_fl5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->fl5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_fp1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->fp1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_fp10(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->fp10;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_fp2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->fp2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_fp3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->fp3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_fp4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->fp4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_fp5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->fp5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_fp6(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->fp6;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_fp7(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->fp7;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_fp8(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->fp8;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_fp9(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->fp9;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_gmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->gmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_gmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->gmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_gtmxcl(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->gtmxcl;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_gtmxop(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->gtmxop;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_gv1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->gv1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_gv2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->gv2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_gv3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->gv3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_gv4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->gv4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_gv5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->gv5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_kd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->kd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->ki;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->kp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_mwbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->mwbase;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_pmss1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->pmss1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_pmss10(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->pmss10;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_pmss2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->pmss2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_pmss3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->pmss3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_pmss4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->pmss4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_pmss5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->pmss5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_pmss6(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->pmss6;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_pmss7(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->pmss7;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_pmss8(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->pmss8;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_pmss9(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->pmss9;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_rpg(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->rpg;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_rpp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->rpp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_td(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->td;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_tdv(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->tdv;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_tg(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->tg;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_tp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->tp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_tpe(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->tpe;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroWEH_tw(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1))
	{
		buffer >> element->tw;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}





















































const char GovHydroWEH::debugName[] = "GovHydroWEH";
const char* GovHydroWEH::debugString() const
{
	return GovHydroWEH::debugName;
}

void GovHydroWEH::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:GovHydroWEH"), &GovHydroWEH_factory));
}

void GovHydroWEH::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.db"), &assign_GovHydroWEH_db));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.dicn"), &assign_GovHydroWEH_dicn));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.dpv"), &assign_GovHydroWEH_dpv));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.dturb"), &assign_GovHydroWEH_dturb));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.feedbackSignal"), &assign_GovHydroWEH_feedbackSignal));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.fl1"), &assign_GovHydroWEH_fl1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.fl2"), &assign_GovHydroWEH_fl2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.fl3"), &assign_GovHydroWEH_fl3));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.fl4"), &assign_GovHydroWEH_fl4));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.fl5"), &assign_GovHydroWEH_fl5));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.fp1"), &assign_GovHydroWEH_fp1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.fp10"), &assign_GovHydroWEH_fp10));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.fp2"), &assign_GovHydroWEH_fp2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.fp3"), &assign_GovHydroWEH_fp3));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.fp4"), &assign_GovHydroWEH_fp4));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.fp5"), &assign_GovHydroWEH_fp5));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.fp6"), &assign_GovHydroWEH_fp6));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.fp7"), &assign_GovHydroWEH_fp7));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.fp8"), &assign_GovHydroWEH_fp8));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.fp9"), &assign_GovHydroWEH_fp9));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.gmax"), &assign_GovHydroWEH_gmax));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.gmin"), &assign_GovHydroWEH_gmin));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.gtmxcl"), &assign_GovHydroWEH_gtmxcl));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.gtmxop"), &assign_GovHydroWEH_gtmxop));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.gv1"), &assign_GovHydroWEH_gv1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.gv2"), &assign_GovHydroWEH_gv2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.gv3"), &assign_GovHydroWEH_gv3));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.gv4"), &assign_GovHydroWEH_gv4));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.gv5"), &assign_GovHydroWEH_gv5));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.kd"), &assign_GovHydroWEH_kd));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.ki"), &assign_GovHydroWEH_ki));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.kp"), &assign_GovHydroWEH_kp));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.mwbase"), &assign_GovHydroWEH_mwbase));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.pmss1"), &assign_GovHydroWEH_pmss1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.pmss10"), &assign_GovHydroWEH_pmss10));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.pmss2"), &assign_GovHydroWEH_pmss2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.pmss3"), &assign_GovHydroWEH_pmss3));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.pmss4"), &assign_GovHydroWEH_pmss4));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.pmss5"), &assign_GovHydroWEH_pmss5));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.pmss6"), &assign_GovHydroWEH_pmss6));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.pmss7"), &assign_GovHydroWEH_pmss7));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.pmss8"), &assign_GovHydroWEH_pmss8));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.pmss9"), &assign_GovHydroWEH_pmss9));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.rpg"), &assign_GovHydroWEH_rpg));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.rpp"), &assign_GovHydroWEH_rpp));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.td"), &assign_GovHydroWEH_td));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.tdv"), &assign_GovHydroWEH_tdv));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.tg"), &assign_GovHydroWEH_tg));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.tp"), &assign_GovHydroWEH_tp));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.tpe"), &assign_GovHydroWEH_tpe));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWEH.tw"), &assign_GovHydroWEH_tw));
}

void GovHydroWEH::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner GovHydroWEH::declare()
{
	return BaseClassDefiner(GovHydroWEH::addConstructToMap, GovHydroWEH::addPrimitiveAssignFnsToMap, GovHydroWEH::addClassAssignFnsToMap, GovHydroWEH::debugName);
}

namespace CIMPP
{
	BaseClass* GovHydroWEH_factory()
	{
		return new GovHydroWEH;
	}
}
