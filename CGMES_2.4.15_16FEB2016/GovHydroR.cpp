/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydroR.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

GovHydroR::GovHydroR() {}
GovHydroR::~GovHydroR() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GovHydroR.at", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.db1", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.db2", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.dturb", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.eps", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.gmax", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.gmin", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.gv1", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.gv2", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.gv3", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.gv4", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.gv5", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.gv6", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.h0", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.inputSignal", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.kg", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.ki", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.mwbase", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.pgv1", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.pgv2", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.pgv3", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.pgv4", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.pgv5", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.pgv6", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.pmax", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.pmin", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.qnl", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.r", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.t1", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.t2", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.t3", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.t4", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.t5", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.t6", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.t7", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.t8", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.td", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.tp", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.tt", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.tw", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.velcl", { CGMESProfile::DY, } },
	{ "cim:GovHydroR.velop", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
GovHydroR::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GovHydroR::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineGovernorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_GovHydroR_at(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->at;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroR_db1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->db1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroR_db2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->db2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroR_dturb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
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

bool assign_GovHydroR_eps(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->eps;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroR_gmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
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

bool assign_GovHydroR_gmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
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

bool assign_GovHydroR_gv1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
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

bool assign_GovHydroR_gv2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
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

bool assign_GovHydroR_gv3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
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

bool assign_GovHydroR_gv4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
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

bool assign_GovHydroR_gv5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
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

bool assign_GovHydroR_gv6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->gv6;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroR_h0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->h0;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroR_inputSignal(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->inputSignal;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroR_kg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kg;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroR_ki(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
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

bool assign_GovHydroR_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
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

bool assign_GovHydroR_pgv1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pgv1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroR_pgv2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pgv2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroR_pgv3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pgv3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroR_pgv4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pgv4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroR_pgv5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pgv5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroR_pgv6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pgv6;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroR_pmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroR_pmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroR_qnl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qnl;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroR_r(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->r;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroR_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroR_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroR_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroR_t4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroR_t5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroR_t6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t6;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroR_t7(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t7;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroR_t8(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t8;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroR_td(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
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

bool assign_GovHydroR_tp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
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

bool assign_GovHydroR_tt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroR_tw(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
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

bool assign_GovHydroR_velcl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->velcl;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroR_velop(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->velop;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_GovHydroR_at(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovHydroR_db1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovHydroR_db2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovHydroR_dturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
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

bool get_GovHydroR_eps(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovHydroR_gmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
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

bool get_GovHydroR_gmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
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

bool get_GovHydroR_gv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
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

bool get_GovHydroR_gv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
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

bool get_GovHydroR_gv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
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

bool get_GovHydroR_gv4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
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

bool get_GovHydroR_gv5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
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

bool get_GovHydroR_gv6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovHydroR_h0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovHydroR_inputSignal(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->inputSignal;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroR_kg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovHydroR_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
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

bool get_GovHydroR_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
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

bool get_GovHydroR_pgv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovHydroR_pgv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovHydroR_pgv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovHydroR_pgv4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovHydroR_pgv5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovHydroR_pgv6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovHydroR_pmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovHydroR_pmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovHydroR_qnl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovHydroR_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->r;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroR_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroR_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroR_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroR_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroR_t5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroR_t6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroR_t7(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t7;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroR_t8(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t8;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroR_td(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
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

bool get_GovHydroR_tp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
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

bool get_GovHydroR_tt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovHydroR_tw(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
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

bool get_GovHydroR_velcl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovHydroR_velop(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroR* element = dynamic_cast<const GovHydroR*>(BaseClass_ptr1);
	if (element != nullptr)
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

const char GovHydroR::debugName[] = "GovHydroR";
const char* GovHydroR::debugString() const
{
	return GovHydroR::debugName;
}

void GovHydroR::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:GovHydroR", &GovHydroR_factory);
}

void GovHydroR::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:GovHydroR.at", &assign_GovHydroR_at);
	assign_map.emplace("cim:GovHydroR.db1", &assign_GovHydroR_db1);
	assign_map.emplace("cim:GovHydroR.db2", &assign_GovHydroR_db2);
	assign_map.emplace("cim:GovHydroR.dturb", &assign_GovHydroR_dturb);
	assign_map.emplace("cim:GovHydroR.eps", &assign_GovHydroR_eps);
	assign_map.emplace("cim:GovHydroR.gmax", &assign_GovHydroR_gmax);
	assign_map.emplace("cim:GovHydroR.gmin", &assign_GovHydroR_gmin);
	assign_map.emplace("cim:GovHydroR.gv1", &assign_GovHydroR_gv1);
	assign_map.emplace("cim:GovHydroR.gv2", &assign_GovHydroR_gv2);
	assign_map.emplace("cim:GovHydroR.gv3", &assign_GovHydroR_gv3);
	assign_map.emplace("cim:GovHydroR.gv4", &assign_GovHydroR_gv4);
	assign_map.emplace("cim:GovHydroR.gv5", &assign_GovHydroR_gv5);
	assign_map.emplace("cim:GovHydroR.gv6", &assign_GovHydroR_gv6);
	assign_map.emplace("cim:GovHydroR.h0", &assign_GovHydroR_h0);
	assign_map.emplace("cim:GovHydroR.inputSignal", &assign_GovHydroR_inputSignal);
	assign_map.emplace("cim:GovHydroR.kg", &assign_GovHydroR_kg);
	assign_map.emplace("cim:GovHydroR.ki", &assign_GovHydroR_ki);
	assign_map.emplace("cim:GovHydroR.mwbase", &assign_GovHydroR_mwbase);
	assign_map.emplace("cim:GovHydroR.pgv1", &assign_GovHydroR_pgv1);
	assign_map.emplace("cim:GovHydroR.pgv2", &assign_GovHydroR_pgv2);
	assign_map.emplace("cim:GovHydroR.pgv3", &assign_GovHydroR_pgv3);
	assign_map.emplace("cim:GovHydroR.pgv4", &assign_GovHydroR_pgv4);
	assign_map.emplace("cim:GovHydroR.pgv5", &assign_GovHydroR_pgv5);
	assign_map.emplace("cim:GovHydroR.pgv6", &assign_GovHydroR_pgv6);
	assign_map.emplace("cim:GovHydroR.pmax", &assign_GovHydroR_pmax);
	assign_map.emplace("cim:GovHydroR.pmin", &assign_GovHydroR_pmin);
	assign_map.emplace("cim:GovHydroR.qnl", &assign_GovHydroR_qnl);
	assign_map.emplace("cim:GovHydroR.r", &assign_GovHydroR_r);
	assign_map.emplace("cim:GovHydroR.t1", &assign_GovHydroR_t1);
	assign_map.emplace("cim:GovHydroR.t2", &assign_GovHydroR_t2);
	assign_map.emplace("cim:GovHydroR.t3", &assign_GovHydroR_t3);
	assign_map.emplace("cim:GovHydroR.t4", &assign_GovHydroR_t4);
	assign_map.emplace("cim:GovHydroR.t5", &assign_GovHydroR_t5);
	assign_map.emplace("cim:GovHydroR.t6", &assign_GovHydroR_t6);
	assign_map.emplace("cim:GovHydroR.t7", &assign_GovHydroR_t7);
	assign_map.emplace("cim:GovHydroR.t8", &assign_GovHydroR_t8);
	assign_map.emplace("cim:GovHydroR.td", &assign_GovHydroR_td);
	assign_map.emplace("cim:GovHydroR.tp", &assign_GovHydroR_tp);
	assign_map.emplace("cim:GovHydroR.tt", &assign_GovHydroR_tt);
	assign_map.emplace("cim:GovHydroR.tw", &assign_GovHydroR_tw);
	assign_map.emplace("cim:GovHydroR.velcl", &assign_GovHydroR_velcl);
	assign_map.emplace("cim:GovHydroR.velop", &assign_GovHydroR_velop);
}

void GovHydroR::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovHydroR::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GovHydroR.at", &get_GovHydroR_at);
	get_map.emplace("cim:GovHydroR.db1", &get_GovHydroR_db1);
	get_map.emplace("cim:GovHydroR.db2", &get_GovHydroR_db2);
	get_map.emplace("cim:GovHydroR.dturb", &get_GovHydroR_dturb);
	get_map.emplace("cim:GovHydroR.eps", &get_GovHydroR_eps);
	get_map.emplace("cim:GovHydroR.gmax", &get_GovHydroR_gmax);
	get_map.emplace("cim:GovHydroR.gmin", &get_GovHydroR_gmin);
	get_map.emplace("cim:GovHydroR.gv1", &get_GovHydroR_gv1);
	get_map.emplace("cim:GovHydroR.gv2", &get_GovHydroR_gv2);
	get_map.emplace("cim:GovHydroR.gv3", &get_GovHydroR_gv3);
	get_map.emplace("cim:GovHydroR.gv4", &get_GovHydroR_gv4);
	get_map.emplace("cim:GovHydroR.gv5", &get_GovHydroR_gv5);
	get_map.emplace("cim:GovHydroR.gv6", &get_GovHydroR_gv6);
	get_map.emplace("cim:GovHydroR.h0", &get_GovHydroR_h0);
	get_map.emplace("cim:GovHydroR.inputSignal", &get_GovHydroR_inputSignal);
	get_map.emplace("cim:GovHydroR.kg", &get_GovHydroR_kg);
	get_map.emplace("cim:GovHydroR.ki", &get_GovHydroR_ki);
	get_map.emplace("cim:GovHydroR.mwbase", &get_GovHydroR_mwbase);
	get_map.emplace("cim:GovHydroR.pgv1", &get_GovHydroR_pgv1);
	get_map.emplace("cim:GovHydroR.pgv2", &get_GovHydroR_pgv2);
	get_map.emplace("cim:GovHydroR.pgv3", &get_GovHydroR_pgv3);
	get_map.emplace("cim:GovHydroR.pgv4", &get_GovHydroR_pgv4);
	get_map.emplace("cim:GovHydroR.pgv5", &get_GovHydroR_pgv5);
	get_map.emplace("cim:GovHydroR.pgv6", &get_GovHydroR_pgv6);
	get_map.emplace("cim:GovHydroR.pmax", &get_GovHydroR_pmax);
	get_map.emplace("cim:GovHydroR.pmin", &get_GovHydroR_pmin);
	get_map.emplace("cim:GovHydroR.qnl", &get_GovHydroR_qnl);
	get_map.emplace("cim:GovHydroR.r", &get_GovHydroR_r);
	get_map.emplace("cim:GovHydroR.t1", &get_GovHydroR_t1);
	get_map.emplace("cim:GovHydroR.t2", &get_GovHydroR_t2);
	get_map.emplace("cim:GovHydroR.t3", &get_GovHydroR_t3);
	get_map.emplace("cim:GovHydroR.t4", &get_GovHydroR_t4);
	get_map.emplace("cim:GovHydroR.t5", &get_GovHydroR_t5);
	get_map.emplace("cim:GovHydroR.t6", &get_GovHydroR_t6);
	get_map.emplace("cim:GovHydroR.t7", &get_GovHydroR_t7);
	get_map.emplace("cim:GovHydroR.t8", &get_GovHydroR_t8);
	get_map.emplace("cim:GovHydroR.td", &get_GovHydroR_td);
	get_map.emplace("cim:GovHydroR.tp", &get_GovHydroR_tp);
	get_map.emplace("cim:GovHydroR.tt", &get_GovHydroR_tt);
	get_map.emplace("cim:GovHydroR.tw", &get_GovHydroR_tw);
	get_map.emplace("cim:GovHydroR.velcl", &get_GovHydroR_velcl);
	get_map.emplace("cim:GovHydroR.velop", &get_GovHydroR_velop);
}

void GovHydroR::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovHydroR::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner GovHydroR::declare()
{
	return BaseClassDefiner(GovHydroR::addConstructToMap, GovHydroR::addPrimitiveAssignFnsToMap, GovHydroR::addClassAssignFnsToMap, GovHydroR::debugName);
}

namespace CIMPP
{
	BaseClass* GovHydroR_factory()
	{
		return new GovHydroR;
	}
}
