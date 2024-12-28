/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydro3.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
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

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GovHydro3.at", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.db1", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.db2", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.dturb", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.eps", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.governorControl", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.gv1", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.gv2", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.gv3", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.gv4", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.gv5", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.gv6", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.h0", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.k1", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.k2", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.kg", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.ki", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.mwbase", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.pgv1", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.pgv2", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.pgv3", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.pgv4", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.pgv5", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.pgv6", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.pmax", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.pmin", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.qnl", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.relec", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.rgate", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.td", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.tf", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.tp", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.tt", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.tw", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.velcl", { CGMESProfile::DY, } },
	{ "cim:GovHydro3.velop", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
GovHydro3::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GovHydro3::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineGovernorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


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



bool get_GovHydro3_at(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
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

bool get_GovHydro3_db1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
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

bool get_GovHydro3_db2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
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

bool get_GovHydro3_dturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
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

bool get_GovHydro3_eps(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
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

bool get_GovHydro3_governorControl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
	{
		buffer << element->governorControl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro3_gv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
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

bool get_GovHydro3_gv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
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

bool get_GovHydro3_gv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
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

bool get_GovHydro3_gv4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
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

bool get_GovHydro3_gv5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
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

bool get_GovHydro3_gv6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
	{
		buffer << element->gv6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro3_h0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
	{
		buffer << element->h0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro3_k1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
	{
		buffer << element->k1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro3_k2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
	{
		buffer << element->k2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro3_kg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
	{
		buffer << element->kg;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro3_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
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

bool get_GovHydro3_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
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

bool get_GovHydro3_pgv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
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

bool get_GovHydro3_pgv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
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

bool get_GovHydro3_pgv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
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

bool get_GovHydro3_pgv4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
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

bool get_GovHydro3_pgv5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
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

bool get_GovHydro3_pgv6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
	{
		buffer << element->pgv6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro3_pmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
	{
		buffer << element->pmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro3_pmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
	{
		buffer << element->pmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro3_qnl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
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

bool get_GovHydro3_relec(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
	{
		buffer << element->relec;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro3_rgate(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
	{
		buffer << element->rgate;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro3_td(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
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

bool get_GovHydro3_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
	{
		buffer << element->tf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro3_tp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
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

bool get_GovHydro3_tt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
	{
		buffer << element->tt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro3_tw(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
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

bool get_GovHydro3_velcl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
	{
		buffer << element->velcl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro3_velop(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1))
	{
		buffer << element->velop;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
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

void GovHydro3::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GovHydro3.at", &get_GovHydro3_at);
	get_map.emplace("cim:GovHydro3.db1", &get_GovHydro3_db1);
	get_map.emplace("cim:GovHydro3.db2", &get_GovHydro3_db2);
	get_map.emplace("cim:GovHydro3.dturb", &get_GovHydro3_dturb);
	get_map.emplace("cim:GovHydro3.eps", &get_GovHydro3_eps);
	get_map.emplace("cim:GovHydro3.governorControl", &get_GovHydro3_governorControl);
	get_map.emplace("cim:GovHydro3.gv1", &get_GovHydro3_gv1);
	get_map.emplace("cim:GovHydro3.gv2", &get_GovHydro3_gv2);
	get_map.emplace("cim:GovHydro3.gv3", &get_GovHydro3_gv3);
	get_map.emplace("cim:GovHydro3.gv4", &get_GovHydro3_gv4);
	get_map.emplace("cim:GovHydro3.gv5", &get_GovHydro3_gv5);
	get_map.emplace("cim:GovHydro3.gv6", &get_GovHydro3_gv6);
	get_map.emplace("cim:GovHydro3.h0", &get_GovHydro3_h0);
	get_map.emplace("cim:GovHydro3.k1", &get_GovHydro3_k1);
	get_map.emplace("cim:GovHydro3.k2", &get_GovHydro3_k2);
	get_map.emplace("cim:GovHydro3.kg", &get_GovHydro3_kg);
	get_map.emplace("cim:GovHydro3.ki", &get_GovHydro3_ki);
	get_map.emplace("cim:GovHydro3.mwbase", &get_GovHydro3_mwbase);
	get_map.emplace("cim:GovHydro3.pgv1", &get_GovHydro3_pgv1);
	get_map.emplace("cim:GovHydro3.pgv2", &get_GovHydro3_pgv2);
	get_map.emplace("cim:GovHydro3.pgv3", &get_GovHydro3_pgv3);
	get_map.emplace("cim:GovHydro3.pgv4", &get_GovHydro3_pgv4);
	get_map.emplace("cim:GovHydro3.pgv5", &get_GovHydro3_pgv5);
	get_map.emplace("cim:GovHydro3.pgv6", &get_GovHydro3_pgv6);
	get_map.emplace("cim:GovHydro3.pmax", &get_GovHydro3_pmax);
	get_map.emplace("cim:GovHydro3.pmin", &get_GovHydro3_pmin);
	get_map.emplace("cim:GovHydro3.qnl", &get_GovHydro3_qnl);
	get_map.emplace("cim:GovHydro3.relec", &get_GovHydro3_relec);
	get_map.emplace("cim:GovHydro3.rgate", &get_GovHydro3_rgate);
	get_map.emplace("cim:GovHydro3.td", &get_GovHydro3_td);
	get_map.emplace("cim:GovHydro3.tf", &get_GovHydro3_tf);
	get_map.emplace("cim:GovHydro3.tp", &get_GovHydro3_tp);
	get_map.emplace("cim:GovHydro3.tt", &get_GovHydro3_tt);
	get_map.emplace("cim:GovHydro3.tw", &get_GovHydro3_tw);
	get_map.emplace("cim:GovHydro3.velcl", &get_GovHydro3_velcl);
	get_map.emplace("cim:GovHydro3.velop", &get_GovHydro3_velop);
}

void GovHydro3::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovHydro3::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
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
