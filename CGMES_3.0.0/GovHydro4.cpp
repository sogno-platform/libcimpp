/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydro4.hpp"

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
#include "Float.hpp"
#include "Frequency.hpp"
#include "ActivePower.hpp"
#include "PU.hpp"
#include "Frequency.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "GovHydro4ModelKind.hpp"
#include "ActivePower.hpp"
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
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Float.hpp"
#include "Float.hpp"

using namespace CIMPP;

GovHydro4::GovHydro4() {};
GovHydro4::~GovHydro4() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GovHydro4.at", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.bgv0", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.bgv1", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.bgv2", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.bgv3", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.bgv4", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.bgv5", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.bmax", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.db1", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.db2", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.dturb", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.eps", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.gmax", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.gmin", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.gv0", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.gv1", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.gv2", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.gv3", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.gv4", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.gv5", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.hdam", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.model", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.mwbase", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.pgv0", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.pgv1", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.pgv2", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.pgv3", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.pgv4", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.pgv5", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.qnl", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.rperm", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.rtemp", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.tblade", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.tg", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.tp", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.tr", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.tw", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.uc", { CGMESProfile::DY, } },
	{ "cim:GovHydro4.uo", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
GovHydro4::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GovHydro4::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineGovernorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_GovHydro4_at(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->at;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_bgv0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->bgv0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_bgv1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->bgv1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_bgv2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->bgv2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_bgv3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->bgv3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_bgv4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->bgv4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_bgv5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->bgv5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_bmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->bmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_db1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->db1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_db2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->db2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_dturb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->dturb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_eps(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->eps;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_gmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->gmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_gmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->gmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_gv0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->gv0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_gv1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->gv1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_gv2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->gv2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_gv3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->gv3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_gv4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->gv4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_gv5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->gv5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_hdam(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->hdam;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_model(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->model;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_mwbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->mwbase;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_pgv0(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->pgv0;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_pgv1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->pgv1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_pgv2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->pgv2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_pgv3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->pgv3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_pgv4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->pgv4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_pgv5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->pgv5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_qnl(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->qnl;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_rperm(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->rperm;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_rtemp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->rtemp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_tblade(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->tblade;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_tg(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->tg;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_tp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->tp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_tr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->tr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_tw(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->tw;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_uc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->uc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydro4_uo(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydro4* element = dynamic_cast<GovHydro4*>(BaseClass_ptr1))
	{
		buffer >> element->uo;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_GovHydro4_at(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
	{
		buffer << element->at;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro4_bgv0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
	{
		buffer << element->bgv0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro4_bgv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
	{
		buffer << element->bgv1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro4_bgv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
	{
		buffer << element->bgv2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro4_bgv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
	{
		buffer << element->bgv3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro4_bgv4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
	{
		buffer << element->bgv4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro4_bgv5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
	{
		buffer << element->bgv5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro4_bmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
	{
		buffer << element->bmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro4_db1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
	{
		buffer << element->db1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro4_db2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
	{
		buffer << element->db2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro4_dturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
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

bool get_GovHydro4_eps(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
	{
		buffer << element->eps;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro4_gmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
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

bool get_GovHydro4_gmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
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

bool get_GovHydro4_gv0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
	{
		buffer << element->gv0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro4_gv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
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

bool get_GovHydro4_gv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
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

bool get_GovHydro4_gv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
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

bool get_GovHydro4_gv4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
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

bool get_GovHydro4_gv5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
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

bool get_GovHydro4_hdam(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
	{
		buffer << element->hdam;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro4_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
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

bool get_GovHydro4_pgv0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
	{
		buffer << element->pgv0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro4_pgv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
	{
		buffer << element->pgv1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro4_pgv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
	{
		buffer << element->pgv2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro4_pgv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
	{
		buffer << element->pgv3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro4_pgv4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
	{
		buffer << element->pgv4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro4_pgv5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
	{
		buffer << element->pgv5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro4_qnl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
	{
		buffer << element->qnl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro4_rperm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
	{
		buffer << element->rperm;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro4_rtemp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
	{
		buffer << element->rtemp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro4_tblade(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
	{
		buffer << element->tblade;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro4_tg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
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

bool get_GovHydro4_tp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
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

bool get_GovHydro4_tr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
	{
		buffer << element->tr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro4_tw(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
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

bool get_GovHydro4_uc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
	{
		buffer << element->uc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro4_uo(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
	{
		buffer << element->uo;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



bool get_GovHydro4_model(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro4* element = dynamic_cast<const GovHydro4*>(BaseClass_ptr1))
	{
		buffer << element->model;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char GovHydro4::debugName[] = "GovHydro4";
const char* GovHydro4::debugString() const
{
	return GovHydro4::debugName;
}

void GovHydro4::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:GovHydro4"), &GovHydro4_factory));
}

void GovHydro4::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.at"), &assign_GovHydro4_at));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.bgv0"), &assign_GovHydro4_bgv0));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.bgv1"), &assign_GovHydro4_bgv1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.bgv2"), &assign_GovHydro4_bgv2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.bgv3"), &assign_GovHydro4_bgv3));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.bgv4"), &assign_GovHydro4_bgv4));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.bgv5"), &assign_GovHydro4_bgv5));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.bmax"), &assign_GovHydro4_bmax));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.db1"), &assign_GovHydro4_db1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.db2"), &assign_GovHydro4_db2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.dturb"), &assign_GovHydro4_dturb));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.eps"), &assign_GovHydro4_eps));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.gmax"), &assign_GovHydro4_gmax));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.gmin"), &assign_GovHydro4_gmin));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.gv0"), &assign_GovHydro4_gv0));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.gv1"), &assign_GovHydro4_gv1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.gv2"), &assign_GovHydro4_gv2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.gv3"), &assign_GovHydro4_gv3));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.gv4"), &assign_GovHydro4_gv4));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.gv5"), &assign_GovHydro4_gv5));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.hdam"), &assign_GovHydro4_hdam));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.model"), &assign_GovHydro4_model));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.mwbase"), &assign_GovHydro4_mwbase));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.pgv0"), &assign_GovHydro4_pgv0));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.pgv1"), &assign_GovHydro4_pgv1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.pgv2"), &assign_GovHydro4_pgv2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.pgv3"), &assign_GovHydro4_pgv3));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.pgv4"), &assign_GovHydro4_pgv4));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.pgv5"), &assign_GovHydro4_pgv5));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.qnl"), &assign_GovHydro4_qnl));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.rperm"), &assign_GovHydro4_rperm));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.rtemp"), &assign_GovHydro4_rtemp));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.tblade"), &assign_GovHydro4_tblade));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.tg"), &assign_GovHydro4_tg));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.tp"), &assign_GovHydro4_tp));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.tr"), &assign_GovHydro4_tr));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.tw"), &assign_GovHydro4_tw));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.uc"), &assign_GovHydro4_uc));
	assign_map.insert(std::make_pair(std::string("cim:GovHydro4.uo"), &assign_GovHydro4_uo));
}

void GovHydro4::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovHydro4::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GovHydro4.at", &get_GovHydro4_at);
	get_map.emplace("cim:GovHydro4.bgv0", &get_GovHydro4_bgv0);
	get_map.emplace("cim:GovHydro4.bgv1", &get_GovHydro4_bgv1);
	get_map.emplace("cim:GovHydro4.bgv2", &get_GovHydro4_bgv2);
	get_map.emplace("cim:GovHydro4.bgv3", &get_GovHydro4_bgv3);
	get_map.emplace("cim:GovHydro4.bgv4", &get_GovHydro4_bgv4);
	get_map.emplace("cim:GovHydro4.bgv5", &get_GovHydro4_bgv5);
	get_map.emplace("cim:GovHydro4.bmax", &get_GovHydro4_bmax);
	get_map.emplace("cim:GovHydro4.db1", &get_GovHydro4_db1);
	get_map.emplace("cim:GovHydro4.db2", &get_GovHydro4_db2);
	get_map.emplace("cim:GovHydro4.dturb", &get_GovHydro4_dturb);
	get_map.emplace("cim:GovHydro4.eps", &get_GovHydro4_eps);
	get_map.emplace("cim:GovHydro4.gmax", &get_GovHydro4_gmax);
	get_map.emplace("cim:GovHydro4.gmin", &get_GovHydro4_gmin);
	get_map.emplace("cim:GovHydro4.gv0", &get_GovHydro4_gv0);
	get_map.emplace("cim:GovHydro4.gv1", &get_GovHydro4_gv1);
	get_map.emplace("cim:GovHydro4.gv2", &get_GovHydro4_gv2);
	get_map.emplace("cim:GovHydro4.gv3", &get_GovHydro4_gv3);
	get_map.emplace("cim:GovHydro4.gv4", &get_GovHydro4_gv4);
	get_map.emplace("cim:GovHydro4.gv5", &get_GovHydro4_gv5);
	get_map.emplace("cim:GovHydro4.hdam", &get_GovHydro4_hdam);
	get_map.emplace("cim:GovHydro4.mwbase", &get_GovHydro4_mwbase);
	get_map.emplace("cim:GovHydro4.pgv0", &get_GovHydro4_pgv0);
	get_map.emplace("cim:GovHydro4.pgv1", &get_GovHydro4_pgv1);
	get_map.emplace("cim:GovHydro4.pgv2", &get_GovHydro4_pgv2);
	get_map.emplace("cim:GovHydro4.pgv3", &get_GovHydro4_pgv3);
	get_map.emplace("cim:GovHydro4.pgv4", &get_GovHydro4_pgv4);
	get_map.emplace("cim:GovHydro4.pgv5", &get_GovHydro4_pgv5);
	get_map.emplace("cim:GovHydro4.qnl", &get_GovHydro4_qnl);
	get_map.emplace("cim:GovHydro4.rperm", &get_GovHydro4_rperm);
	get_map.emplace("cim:GovHydro4.rtemp", &get_GovHydro4_rtemp);
	get_map.emplace("cim:GovHydro4.tblade", &get_GovHydro4_tblade);
	get_map.emplace("cim:GovHydro4.tg", &get_GovHydro4_tg);
	get_map.emplace("cim:GovHydro4.tp", &get_GovHydro4_tp);
	get_map.emplace("cim:GovHydro4.tr", &get_GovHydro4_tr);
	get_map.emplace("cim:GovHydro4.tw", &get_GovHydro4_tw);
	get_map.emplace("cim:GovHydro4.uc", &get_GovHydro4_uc);
	get_map.emplace("cim:GovHydro4.uo", &get_GovHydro4_uo);
}

void GovHydro4::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovHydro4::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:GovHydro4.model", &get_GovHydro4_model);
}

const BaseClassDefiner GovHydro4::declare()
{
	return BaseClassDefiner(GovHydro4::addConstructToMap, GovHydro4::addPrimitiveAssignFnsToMap, GovHydro4::addClassAssignFnsToMap, GovHydro4::debugName);
}

namespace CIMPP
{
	BaseClass* GovHydro4_factory()
	{
		return new GovHydro4;
	}
}
