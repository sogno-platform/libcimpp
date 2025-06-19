/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydroWEH.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

GovHydroWEH::GovHydroWEH() {}
GovHydroWEH::~GovHydroWEH() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GovHydroWEH.db", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.dicn", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.dpv", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.dturb", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.feedbackSignal", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.fl1", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.fl2", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.fl3", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.fl4", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.fl5", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.fp1", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.fp10", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.fp2", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.fp3", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.fp4", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.fp5", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.fp6", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.fp7", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.fp8", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.fp9", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.gmax", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.gmin", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.gtmxcl", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.gtmxop", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.gv1", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.gv2", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.gv3", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.gv4", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.gv5", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.kd", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.ki", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.kp", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.mwbase", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.pmss1", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.pmss10", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.pmss2", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.pmss3", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.pmss4", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.pmss5", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.pmss6", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.pmss7", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.pmss8", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.pmss9", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.rpg", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.rpp", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.td", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.tdv", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.tg", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.tp", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.tpe", { CGMESProfile::DY, } },
	{ "cim:GovHydroWEH.tw", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
GovHydroWEH::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GovHydroWEH::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineGovernorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_GovHydroWEH_db(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->db;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_dicn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dicn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_dpv(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dpv;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_dturb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dturb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_feedbackSignal(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->feedbackSignal;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fl1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fl1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fl2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fl2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fl3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fl3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fl4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fl4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fl5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fl5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fp1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fp1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fp10(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fp10;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fp2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fp2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fp3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fp3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fp4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fp4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fp5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fp5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fp6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fp6;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fp7(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fp7;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fp8(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fp8;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fp9(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fp9;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_gmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->gmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_gmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->gmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_gtmxcl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->gtmxcl;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_gtmxop(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->gtmxop;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_gv1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->gv1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_gv2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->gv2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_gv3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->gv3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_gv4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->gv4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_gv5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->gv5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_kd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_ki(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ki;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_kp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->mwbase;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_pmss1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmss1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_pmss10(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmss10;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_pmss2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmss2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_pmss3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmss3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_pmss4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmss4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_pmss5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmss5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_pmss6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmss6;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_pmss7(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmss7;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_pmss8(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmss8;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_pmss9(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmss9;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_rpg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rpg;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_rpp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rpp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_td(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->td;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_tdv(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tdv;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_tg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tg;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_tp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_tpe(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tpe;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_tw(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tw;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_GovHydroWEH_db(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->db;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_dicn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dicn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_dpv(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dpv;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_dturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dturb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_feedbackSignal(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->feedbackSignal;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fl1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fl1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fl2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fl2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fl3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fl3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fl4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fl4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fl5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fl5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fp1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fp1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fp10(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fp10;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fp2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fp2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fp3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fp3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fp4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fp4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fp5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fp5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fp6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fp6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fp7(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fp7;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fp8(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fp8;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fp9(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fp9;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_gmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->gmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_gmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->gmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_gtmxcl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->gtmxcl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_gtmxop(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->gtmxop;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_gv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->gv1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_gv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->gv2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_gv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->gv3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_gv4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->gv4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_gv5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->gv5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ki;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->mwbase;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_pmss1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmss1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_pmss10(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmss10;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_pmss2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmss2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_pmss3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmss3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_pmss4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmss4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_pmss5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmss5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_pmss6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmss6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_pmss7(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmss7;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_pmss8(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmss8;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_pmss9(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmss9;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_rpg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rpg;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_rpp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rpp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_td(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->td;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_tdv(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tdv;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_tg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tg;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_tp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_tpe(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tpe;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_tw(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tw;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char GovHydroWEH::debugName[] = "GovHydroWEH";
const char* GovHydroWEH::debugString() const
{
	return GovHydroWEH::debugName;
}

void GovHydroWEH::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:GovHydroWEH", &GovHydroWEH_factory);
}

void GovHydroWEH::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:GovHydroWEH.db", &assign_GovHydroWEH_db);
	assign_map.emplace("cim:GovHydroWEH.dicn", &assign_GovHydroWEH_dicn);
	assign_map.emplace("cim:GovHydroWEH.dpv", &assign_GovHydroWEH_dpv);
	assign_map.emplace("cim:GovHydroWEH.dturb", &assign_GovHydroWEH_dturb);
	assign_map.emplace("cim:GovHydroWEH.feedbackSignal", &assign_GovHydroWEH_feedbackSignal);
	assign_map.emplace("cim:GovHydroWEH.fl1", &assign_GovHydroWEH_fl1);
	assign_map.emplace("cim:GovHydroWEH.fl2", &assign_GovHydroWEH_fl2);
	assign_map.emplace("cim:GovHydroWEH.fl3", &assign_GovHydroWEH_fl3);
	assign_map.emplace("cim:GovHydroWEH.fl4", &assign_GovHydroWEH_fl4);
	assign_map.emplace("cim:GovHydroWEH.fl5", &assign_GovHydroWEH_fl5);
	assign_map.emplace("cim:GovHydroWEH.fp1", &assign_GovHydroWEH_fp1);
	assign_map.emplace("cim:GovHydroWEH.fp10", &assign_GovHydroWEH_fp10);
	assign_map.emplace("cim:GovHydroWEH.fp2", &assign_GovHydroWEH_fp2);
	assign_map.emplace("cim:GovHydroWEH.fp3", &assign_GovHydroWEH_fp3);
	assign_map.emplace("cim:GovHydroWEH.fp4", &assign_GovHydroWEH_fp4);
	assign_map.emplace("cim:GovHydroWEH.fp5", &assign_GovHydroWEH_fp5);
	assign_map.emplace("cim:GovHydroWEH.fp6", &assign_GovHydroWEH_fp6);
	assign_map.emplace("cim:GovHydroWEH.fp7", &assign_GovHydroWEH_fp7);
	assign_map.emplace("cim:GovHydroWEH.fp8", &assign_GovHydroWEH_fp8);
	assign_map.emplace("cim:GovHydroWEH.fp9", &assign_GovHydroWEH_fp9);
	assign_map.emplace("cim:GovHydroWEH.gmax", &assign_GovHydroWEH_gmax);
	assign_map.emplace("cim:GovHydroWEH.gmin", &assign_GovHydroWEH_gmin);
	assign_map.emplace("cim:GovHydroWEH.gtmxcl", &assign_GovHydroWEH_gtmxcl);
	assign_map.emplace("cim:GovHydroWEH.gtmxop", &assign_GovHydroWEH_gtmxop);
	assign_map.emplace("cim:GovHydroWEH.gv1", &assign_GovHydroWEH_gv1);
	assign_map.emplace("cim:GovHydroWEH.gv2", &assign_GovHydroWEH_gv2);
	assign_map.emplace("cim:GovHydroWEH.gv3", &assign_GovHydroWEH_gv3);
	assign_map.emplace("cim:GovHydroWEH.gv4", &assign_GovHydroWEH_gv4);
	assign_map.emplace("cim:GovHydroWEH.gv5", &assign_GovHydroWEH_gv5);
	assign_map.emplace("cim:GovHydroWEH.kd", &assign_GovHydroWEH_kd);
	assign_map.emplace("cim:GovHydroWEH.ki", &assign_GovHydroWEH_ki);
	assign_map.emplace("cim:GovHydroWEH.kp", &assign_GovHydroWEH_kp);
	assign_map.emplace("cim:GovHydroWEH.mwbase", &assign_GovHydroWEH_mwbase);
	assign_map.emplace("cim:GovHydroWEH.pmss1", &assign_GovHydroWEH_pmss1);
	assign_map.emplace("cim:GovHydroWEH.pmss10", &assign_GovHydroWEH_pmss10);
	assign_map.emplace("cim:GovHydroWEH.pmss2", &assign_GovHydroWEH_pmss2);
	assign_map.emplace("cim:GovHydroWEH.pmss3", &assign_GovHydroWEH_pmss3);
	assign_map.emplace("cim:GovHydroWEH.pmss4", &assign_GovHydroWEH_pmss4);
	assign_map.emplace("cim:GovHydroWEH.pmss5", &assign_GovHydroWEH_pmss5);
	assign_map.emplace("cim:GovHydroWEH.pmss6", &assign_GovHydroWEH_pmss6);
	assign_map.emplace("cim:GovHydroWEH.pmss7", &assign_GovHydroWEH_pmss7);
	assign_map.emplace("cim:GovHydroWEH.pmss8", &assign_GovHydroWEH_pmss8);
	assign_map.emplace("cim:GovHydroWEH.pmss9", &assign_GovHydroWEH_pmss9);
	assign_map.emplace("cim:GovHydroWEH.rpg", &assign_GovHydroWEH_rpg);
	assign_map.emplace("cim:GovHydroWEH.rpp", &assign_GovHydroWEH_rpp);
	assign_map.emplace("cim:GovHydroWEH.td", &assign_GovHydroWEH_td);
	assign_map.emplace("cim:GovHydroWEH.tdv", &assign_GovHydroWEH_tdv);
	assign_map.emplace("cim:GovHydroWEH.tg", &assign_GovHydroWEH_tg);
	assign_map.emplace("cim:GovHydroWEH.tp", &assign_GovHydroWEH_tp);
	assign_map.emplace("cim:GovHydroWEH.tpe", &assign_GovHydroWEH_tpe);
	assign_map.emplace("cim:GovHydroWEH.tw", &assign_GovHydroWEH_tw);
}

void GovHydroWEH::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovHydroWEH::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GovHydroWEH.db", &get_GovHydroWEH_db);
	get_map.emplace("cim:GovHydroWEH.dicn", &get_GovHydroWEH_dicn);
	get_map.emplace("cim:GovHydroWEH.dpv", &get_GovHydroWEH_dpv);
	get_map.emplace("cim:GovHydroWEH.dturb", &get_GovHydroWEH_dturb);
	get_map.emplace("cim:GovHydroWEH.feedbackSignal", &get_GovHydroWEH_feedbackSignal);
	get_map.emplace("cim:GovHydroWEH.fl1", &get_GovHydroWEH_fl1);
	get_map.emplace("cim:GovHydroWEH.fl2", &get_GovHydroWEH_fl2);
	get_map.emplace("cim:GovHydroWEH.fl3", &get_GovHydroWEH_fl3);
	get_map.emplace("cim:GovHydroWEH.fl4", &get_GovHydroWEH_fl4);
	get_map.emplace("cim:GovHydroWEH.fl5", &get_GovHydroWEH_fl5);
	get_map.emplace("cim:GovHydroWEH.fp1", &get_GovHydroWEH_fp1);
	get_map.emplace("cim:GovHydroWEH.fp10", &get_GovHydroWEH_fp10);
	get_map.emplace("cim:GovHydroWEH.fp2", &get_GovHydroWEH_fp2);
	get_map.emplace("cim:GovHydroWEH.fp3", &get_GovHydroWEH_fp3);
	get_map.emplace("cim:GovHydroWEH.fp4", &get_GovHydroWEH_fp4);
	get_map.emplace("cim:GovHydroWEH.fp5", &get_GovHydroWEH_fp5);
	get_map.emplace("cim:GovHydroWEH.fp6", &get_GovHydroWEH_fp6);
	get_map.emplace("cim:GovHydroWEH.fp7", &get_GovHydroWEH_fp7);
	get_map.emplace("cim:GovHydroWEH.fp8", &get_GovHydroWEH_fp8);
	get_map.emplace("cim:GovHydroWEH.fp9", &get_GovHydroWEH_fp9);
	get_map.emplace("cim:GovHydroWEH.gmax", &get_GovHydroWEH_gmax);
	get_map.emplace("cim:GovHydroWEH.gmin", &get_GovHydroWEH_gmin);
	get_map.emplace("cim:GovHydroWEH.gtmxcl", &get_GovHydroWEH_gtmxcl);
	get_map.emplace("cim:GovHydroWEH.gtmxop", &get_GovHydroWEH_gtmxop);
	get_map.emplace("cim:GovHydroWEH.gv1", &get_GovHydroWEH_gv1);
	get_map.emplace("cim:GovHydroWEH.gv2", &get_GovHydroWEH_gv2);
	get_map.emplace("cim:GovHydroWEH.gv3", &get_GovHydroWEH_gv3);
	get_map.emplace("cim:GovHydroWEH.gv4", &get_GovHydroWEH_gv4);
	get_map.emplace("cim:GovHydroWEH.gv5", &get_GovHydroWEH_gv5);
	get_map.emplace("cim:GovHydroWEH.kd", &get_GovHydroWEH_kd);
	get_map.emplace("cim:GovHydroWEH.ki", &get_GovHydroWEH_ki);
	get_map.emplace("cim:GovHydroWEH.kp", &get_GovHydroWEH_kp);
	get_map.emplace("cim:GovHydroWEH.mwbase", &get_GovHydroWEH_mwbase);
	get_map.emplace("cim:GovHydroWEH.pmss1", &get_GovHydroWEH_pmss1);
	get_map.emplace("cim:GovHydroWEH.pmss10", &get_GovHydroWEH_pmss10);
	get_map.emplace("cim:GovHydroWEH.pmss2", &get_GovHydroWEH_pmss2);
	get_map.emplace("cim:GovHydroWEH.pmss3", &get_GovHydroWEH_pmss3);
	get_map.emplace("cim:GovHydroWEH.pmss4", &get_GovHydroWEH_pmss4);
	get_map.emplace("cim:GovHydroWEH.pmss5", &get_GovHydroWEH_pmss5);
	get_map.emplace("cim:GovHydroWEH.pmss6", &get_GovHydroWEH_pmss6);
	get_map.emplace("cim:GovHydroWEH.pmss7", &get_GovHydroWEH_pmss7);
	get_map.emplace("cim:GovHydroWEH.pmss8", &get_GovHydroWEH_pmss8);
	get_map.emplace("cim:GovHydroWEH.pmss9", &get_GovHydroWEH_pmss9);
	get_map.emplace("cim:GovHydroWEH.rpg", &get_GovHydroWEH_rpg);
	get_map.emplace("cim:GovHydroWEH.rpp", &get_GovHydroWEH_rpp);
	get_map.emplace("cim:GovHydroWEH.td", &get_GovHydroWEH_td);
	get_map.emplace("cim:GovHydroWEH.tdv", &get_GovHydroWEH_tdv);
	get_map.emplace("cim:GovHydroWEH.tg", &get_GovHydroWEH_tg);
	get_map.emplace("cim:GovHydroWEH.tp", &get_GovHydroWEH_tp);
	get_map.emplace("cim:GovHydroWEH.tpe", &get_GovHydroWEH_tpe);
	get_map.emplace("cim:GovHydroWEH.tw", &get_GovHydroWEH_tw);
}

void GovHydroWEH::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovHydroWEH::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
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
