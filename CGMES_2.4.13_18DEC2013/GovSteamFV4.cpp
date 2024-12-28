/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovSteamFV4.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

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
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
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
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

GovSteamFV4::GovSteamFV4() {};
GovSteamFV4::~GovSteamFV4() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GovSteamFV4.cpsmn", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.cpsmx", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.crmn", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.crmx", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.kdc", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.kf1", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.kf3", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.khp", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.kic", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.kip", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.kit", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.kmp1", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.kmp2", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.kpc", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.kpp", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.kpt", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.krc", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.ksh", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.lpi", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.lps", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.mnef", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.mxef", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.pr1", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.pr2", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.psmn", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.rsmimn", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.rsmimx", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.rvgmn", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.rvgmx", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.srmn", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.srmx", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.srsmp", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.svmn", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.svmx", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.ta", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.tam", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.tc", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.tcm", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.tdc", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.tf1", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.tf2", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.thp", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.tmp", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.trh", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.tv", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.ty", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.y", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.yhpmn", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.yhpmx", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.ympmn", { CGMESProfile::DY, } },
	{ "cim:GovSteamFV4.ympmx", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
GovSteamFV4::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GovSteamFV4::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineGovernorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_GovSteamFV4_cpsmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->cpsmn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_cpsmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->cpsmx;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_crmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->crmn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_crmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->crmx;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_kdc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->kdc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_kf1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->kf1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_kf3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->kf3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_khp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->khp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_kic(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->kic;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_kip(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->kip;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_kit(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->kit;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_kmp1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->kmp1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_kmp2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->kmp2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_kpc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->kpc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_kpp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->kpp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_kpt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->kpt;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_krc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->krc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_ksh(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->ksh;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_lpi(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->lpi;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_lps(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->lps;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_mnef(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->mnef;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_mxef(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->mxef;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_pr1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->pr1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_pr2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->pr2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_psmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->psmn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_rsmimn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->rsmimn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_rsmimx(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->rsmimx;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_rvgmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->rvgmn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_rvgmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->rvgmx;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_srmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->srmn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_srmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->srmx;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_srsmp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->srsmp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_svmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->svmn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_svmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->svmx;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->ta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_tam(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->tam;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->tc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_tcm(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->tcm;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_tdc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->tdc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_tf1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->tf1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_tf2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->tf2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_thp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->thp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_tmp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->tmp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_trh(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->trh;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_tv(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->tv;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_ty(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->ty;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_y(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->y;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_yhpmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->yhpmn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_yhpmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->yhpmx;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_ympmn(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->ympmn;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovSteamFV4_ympmx(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer >> element->ympmx;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_GovSteamFV4_cpsmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->cpsmn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_cpsmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->cpsmx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_crmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->crmn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_crmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->crmx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_kdc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->kdc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_kf1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->kf1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_kf3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->kf3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_khp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->khp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_kic(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->kic;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_kip(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->kip;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_kit(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->kit;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_kmp1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->kmp1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_kmp2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->kmp2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_kpc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->kpc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_kpp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->kpp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_kpt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->kpt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_krc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->krc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_ksh(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->ksh;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_lpi(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->lpi;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_lps(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->lps;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_mnef(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->mnef;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_mxef(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->mxef;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_pr1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->pr1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_pr2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->pr2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_psmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->psmn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_rsmimn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->rsmimn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_rsmimx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->rsmimx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_rvgmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->rvgmn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_rvgmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->rvgmx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_srmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->srmn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_srmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->srmx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_srsmp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->srsmp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_svmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->svmn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_svmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->svmx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->ta;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_tam(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->tam;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->tc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_tcm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->tcm;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_tdc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->tdc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_tf1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->tf1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_tf2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->tf2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_thp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->thp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_tmp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->tmp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_trh(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->trh;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_tv(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->tv;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_ty(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->ty;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_y(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->y;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_yhpmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->yhpmn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_yhpmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->yhpmx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_ympmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->ympmn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_ympmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1))
	{
		buffer << element->ympmx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char GovSteamFV4::debugName[] = "GovSteamFV4";
const char* GovSteamFV4::debugString() const
{
	return GovSteamFV4::debugName;
}

void GovSteamFV4::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:GovSteamFV4"), &GovSteamFV4_factory));
}

void GovSteamFV4::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.cpsmn"), &assign_GovSteamFV4_cpsmn));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.cpsmx"), &assign_GovSteamFV4_cpsmx));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.crmn"), &assign_GovSteamFV4_crmn));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.crmx"), &assign_GovSteamFV4_crmx));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.kdc"), &assign_GovSteamFV4_kdc));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.kf1"), &assign_GovSteamFV4_kf1));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.kf3"), &assign_GovSteamFV4_kf3));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.khp"), &assign_GovSteamFV4_khp));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.kic"), &assign_GovSteamFV4_kic));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.kip"), &assign_GovSteamFV4_kip));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.kit"), &assign_GovSteamFV4_kit));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.kmp1"), &assign_GovSteamFV4_kmp1));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.kmp2"), &assign_GovSteamFV4_kmp2));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.kpc"), &assign_GovSteamFV4_kpc));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.kpp"), &assign_GovSteamFV4_kpp));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.kpt"), &assign_GovSteamFV4_kpt));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.krc"), &assign_GovSteamFV4_krc));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.ksh"), &assign_GovSteamFV4_ksh));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.lpi"), &assign_GovSteamFV4_lpi));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.lps"), &assign_GovSteamFV4_lps));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.mnef"), &assign_GovSteamFV4_mnef));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.mxef"), &assign_GovSteamFV4_mxef));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.pr1"), &assign_GovSteamFV4_pr1));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.pr2"), &assign_GovSteamFV4_pr2));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.psmn"), &assign_GovSteamFV4_psmn));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.rsmimn"), &assign_GovSteamFV4_rsmimn));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.rsmimx"), &assign_GovSteamFV4_rsmimx));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.rvgmn"), &assign_GovSteamFV4_rvgmn));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.rvgmx"), &assign_GovSteamFV4_rvgmx));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.srmn"), &assign_GovSteamFV4_srmn));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.srmx"), &assign_GovSteamFV4_srmx));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.srsmp"), &assign_GovSteamFV4_srsmp));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.svmn"), &assign_GovSteamFV4_svmn));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.svmx"), &assign_GovSteamFV4_svmx));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.ta"), &assign_GovSteamFV4_ta));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.tam"), &assign_GovSteamFV4_tam));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.tc"), &assign_GovSteamFV4_tc));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.tcm"), &assign_GovSteamFV4_tcm));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.tdc"), &assign_GovSteamFV4_tdc));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.tf1"), &assign_GovSteamFV4_tf1));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.tf2"), &assign_GovSteamFV4_tf2));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.thp"), &assign_GovSteamFV4_thp));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.tmp"), &assign_GovSteamFV4_tmp));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.trh"), &assign_GovSteamFV4_trh));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.tv"), &assign_GovSteamFV4_tv));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.ty"), &assign_GovSteamFV4_ty));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.y"), &assign_GovSteamFV4_y));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.yhpmn"), &assign_GovSteamFV4_yhpmn));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.yhpmx"), &assign_GovSteamFV4_yhpmx));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.ympmn"), &assign_GovSteamFV4_ympmn));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV4.ympmx"), &assign_GovSteamFV4_ympmx));
}

void GovSteamFV4::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovSteamFV4::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GovSteamFV4.cpsmn", &get_GovSteamFV4_cpsmn);
	get_map.emplace("cim:GovSteamFV4.cpsmx", &get_GovSteamFV4_cpsmx);
	get_map.emplace("cim:GovSteamFV4.crmn", &get_GovSteamFV4_crmn);
	get_map.emplace("cim:GovSteamFV4.crmx", &get_GovSteamFV4_crmx);
	get_map.emplace("cim:GovSteamFV4.kdc", &get_GovSteamFV4_kdc);
	get_map.emplace("cim:GovSteamFV4.kf1", &get_GovSteamFV4_kf1);
	get_map.emplace("cim:GovSteamFV4.kf3", &get_GovSteamFV4_kf3);
	get_map.emplace("cim:GovSteamFV4.khp", &get_GovSteamFV4_khp);
	get_map.emplace("cim:GovSteamFV4.kic", &get_GovSteamFV4_kic);
	get_map.emplace("cim:GovSteamFV4.kip", &get_GovSteamFV4_kip);
	get_map.emplace("cim:GovSteamFV4.kit", &get_GovSteamFV4_kit);
	get_map.emplace("cim:GovSteamFV4.kmp1", &get_GovSteamFV4_kmp1);
	get_map.emplace("cim:GovSteamFV4.kmp2", &get_GovSteamFV4_kmp2);
	get_map.emplace("cim:GovSteamFV4.kpc", &get_GovSteamFV4_kpc);
	get_map.emplace("cim:GovSteamFV4.kpp", &get_GovSteamFV4_kpp);
	get_map.emplace("cim:GovSteamFV4.kpt", &get_GovSteamFV4_kpt);
	get_map.emplace("cim:GovSteamFV4.krc", &get_GovSteamFV4_krc);
	get_map.emplace("cim:GovSteamFV4.ksh", &get_GovSteamFV4_ksh);
	get_map.emplace("cim:GovSteamFV4.lpi", &get_GovSteamFV4_lpi);
	get_map.emplace("cim:GovSteamFV4.lps", &get_GovSteamFV4_lps);
	get_map.emplace("cim:GovSteamFV4.mnef", &get_GovSteamFV4_mnef);
	get_map.emplace("cim:GovSteamFV4.mxef", &get_GovSteamFV4_mxef);
	get_map.emplace("cim:GovSteamFV4.pr1", &get_GovSteamFV4_pr1);
	get_map.emplace("cim:GovSteamFV4.pr2", &get_GovSteamFV4_pr2);
	get_map.emplace("cim:GovSteamFV4.psmn", &get_GovSteamFV4_psmn);
	get_map.emplace("cim:GovSteamFV4.rsmimn", &get_GovSteamFV4_rsmimn);
	get_map.emplace("cim:GovSteamFV4.rsmimx", &get_GovSteamFV4_rsmimx);
	get_map.emplace("cim:GovSteamFV4.rvgmn", &get_GovSteamFV4_rvgmn);
	get_map.emplace("cim:GovSteamFV4.rvgmx", &get_GovSteamFV4_rvgmx);
	get_map.emplace("cim:GovSteamFV4.srmn", &get_GovSteamFV4_srmn);
	get_map.emplace("cim:GovSteamFV4.srmx", &get_GovSteamFV4_srmx);
	get_map.emplace("cim:GovSteamFV4.srsmp", &get_GovSteamFV4_srsmp);
	get_map.emplace("cim:GovSteamFV4.svmn", &get_GovSteamFV4_svmn);
	get_map.emplace("cim:GovSteamFV4.svmx", &get_GovSteamFV4_svmx);
	get_map.emplace("cim:GovSteamFV4.ta", &get_GovSteamFV4_ta);
	get_map.emplace("cim:GovSteamFV4.tam", &get_GovSteamFV4_tam);
	get_map.emplace("cim:GovSteamFV4.tc", &get_GovSteamFV4_tc);
	get_map.emplace("cim:GovSteamFV4.tcm", &get_GovSteamFV4_tcm);
	get_map.emplace("cim:GovSteamFV4.tdc", &get_GovSteamFV4_tdc);
	get_map.emplace("cim:GovSteamFV4.tf1", &get_GovSteamFV4_tf1);
	get_map.emplace("cim:GovSteamFV4.tf2", &get_GovSteamFV4_tf2);
	get_map.emplace("cim:GovSteamFV4.thp", &get_GovSteamFV4_thp);
	get_map.emplace("cim:GovSteamFV4.tmp", &get_GovSteamFV4_tmp);
	get_map.emplace("cim:GovSteamFV4.trh", &get_GovSteamFV4_trh);
	get_map.emplace("cim:GovSteamFV4.tv", &get_GovSteamFV4_tv);
	get_map.emplace("cim:GovSteamFV4.ty", &get_GovSteamFV4_ty);
	get_map.emplace("cim:GovSteamFV4.y", &get_GovSteamFV4_y);
	get_map.emplace("cim:GovSteamFV4.yhpmn", &get_GovSteamFV4_yhpmn);
	get_map.emplace("cim:GovSteamFV4.yhpmx", &get_GovSteamFV4_yhpmx);
	get_map.emplace("cim:GovSteamFV4.ympmn", &get_GovSteamFV4_ympmn);
	get_map.emplace("cim:GovSteamFV4.ympmx", &get_GovSteamFV4_ympmx);
}

void GovSteamFV4::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovSteamFV4::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner GovSteamFV4::declare()
{
	return BaseClassDefiner(GovSteamFV4::addConstructToMap, GovSteamFV4::addPrimitiveAssignFnsToMap, GovSteamFV4::addClassAssignFnsToMap, GovSteamFV4::debugName);
}

namespace CIMPP
{
	BaseClass* GovSteamFV4_factory()
	{
		return new GovSteamFV4;
	}
}
