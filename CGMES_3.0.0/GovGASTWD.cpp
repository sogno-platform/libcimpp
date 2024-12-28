/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovGASTWD.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
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
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Temperature.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Temperature.hpp"
#include "ActivePower.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

GovGASTWD::GovGASTWD() {};
GovGASTWD::~GovGASTWD() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GovGASTWD.a", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.af1", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.af2", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.b", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.bf1", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.bf2", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.c", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.cf2", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.ecr", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.etd", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.k3", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.k4", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.k5", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.k6", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.kd", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.kdroop", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.kf", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.ki", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.kp", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.mwbase", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.t", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.t3", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.t4", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.t5", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.tc", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.tcd", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.td", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.tf", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.tmax", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.tmin", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.tr", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.trate", { CGMESProfile::DY, } },
	{ "cim:GovGASTWD.tt", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
GovGASTWD::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GovGASTWD::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineGovernorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_GovGASTWD_a(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->a;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_af1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->af1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_af2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->af2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_b(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->b;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_bf1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->bf1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_bf2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->bf2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_c(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->c;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_cf2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->cf2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_ecr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->ecr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_etd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->etd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_k3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->k3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_k4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->k4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_k5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->k5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_k6(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->k6;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_kd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->kd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_kdroop(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->kdroop;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->kf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->ki;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->kp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_mwbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->mwbase;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_t(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->t;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->t3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_t4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->t4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_t5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->t5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->tc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_tcd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->tcd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_td(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->td;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->tf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_tmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->tmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_tmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->tmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_tr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->tr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_trate(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->trate;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovGASTWD_tt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1))
	{
		buffer >> element->tt;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_GovGASTWD_a(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
	{
		buffer << element->a;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_af1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
	{
		buffer << element->af1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_af2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
	{
		buffer << element->af2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_b(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
	{
		buffer << element->b;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_bf1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
	{
		buffer << element->bf1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_bf2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
	{
		buffer << element->bf2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_c(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
	{
		buffer << element->c;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_cf2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
	{
		buffer << element->cf2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_ecr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
	{
		buffer << element->ecr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_etd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
	{
		buffer << element->etd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_k3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
	{
		buffer << element->k3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_k4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
	{
		buffer << element->k4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_k5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
	{
		buffer << element->k5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_k6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
	{
		buffer << element->k6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
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

bool get_GovGASTWD_kdroop(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
	{
		buffer << element->kdroop;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
	{
		buffer << element->kf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
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

bool get_GovGASTWD_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
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

bool get_GovGASTWD_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
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

bool get_GovGASTWD_t(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
	{
		buffer << element->t;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
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

bool get_GovGASTWD_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
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

bool get_GovGASTWD_t5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
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

bool get_GovGASTWD_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
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

bool get_GovGASTWD_tcd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
	{
		buffer << element->tcd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_td(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
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

bool get_GovGASTWD_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
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

bool get_GovGASTWD_tmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
	{
		buffer << element->tmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_tmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
	{
		buffer << element->tmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_tr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
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

bool get_GovGASTWD_trate(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
	{
		buffer << element->trate;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_tt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1))
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



const char GovGASTWD::debugName[] = "GovGASTWD";
const char* GovGASTWD::debugString() const
{
	return GovGASTWD::debugName;
}

void GovGASTWD::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:GovGASTWD"), &GovGASTWD_factory));
}

void GovGASTWD::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.a"), &assign_GovGASTWD_a));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.af1"), &assign_GovGASTWD_af1));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.af2"), &assign_GovGASTWD_af2));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.b"), &assign_GovGASTWD_b));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.bf1"), &assign_GovGASTWD_bf1));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.bf2"), &assign_GovGASTWD_bf2));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.c"), &assign_GovGASTWD_c));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.cf2"), &assign_GovGASTWD_cf2));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.ecr"), &assign_GovGASTWD_ecr));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.etd"), &assign_GovGASTWD_etd));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.k3"), &assign_GovGASTWD_k3));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.k4"), &assign_GovGASTWD_k4));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.k5"), &assign_GovGASTWD_k5));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.k6"), &assign_GovGASTWD_k6));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.kd"), &assign_GovGASTWD_kd));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.kdroop"), &assign_GovGASTWD_kdroop));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.kf"), &assign_GovGASTWD_kf));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.ki"), &assign_GovGASTWD_ki));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.kp"), &assign_GovGASTWD_kp));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.mwbase"), &assign_GovGASTWD_mwbase));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.t"), &assign_GovGASTWD_t));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.t3"), &assign_GovGASTWD_t3));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.t4"), &assign_GovGASTWD_t4));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.t5"), &assign_GovGASTWD_t5));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.tc"), &assign_GovGASTWD_tc));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.tcd"), &assign_GovGASTWD_tcd));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.td"), &assign_GovGASTWD_td));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.tf"), &assign_GovGASTWD_tf));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.tmax"), &assign_GovGASTWD_tmax));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.tmin"), &assign_GovGASTWD_tmin));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.tr"), &assign_GovGASTWD_tr));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.trate"), &assign_GovGASTWD_trate));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.tt"), &assign_GovGASTWD_tt));
}

void GovGASTWD::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovGASTWD::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GovGASTWD.a", &get_GovGASTWD_a);
	get_map.emplace("cim:GovGASTWD.af1", &get_GovGASTWD_af1);
	get_map.emplace("cim:GovGASTWD.af2", &get_GovGASTWD_af2);
	get_map.emplace("cim:GovGASTWD.b", &get_GovGASTWD_b);
	get_map.emplace("cim:GovGASTWD.bf1", &get_GovGASTWD_bf1);
	get_map.emplace("cim:GovGASTWD.bf2", &get_GovGASTWD_bf2);
	get_map.emplace("cim:GovGASTWD.c", &get_GovGASTWD_c);
	get_map.emplace("cim:GovGASTWD.cf2", &get_GovGASTWD_cf2);
	get_map.emplace("cim:GovGASTWD.ecr", &get_GovGASTWD_ecr);
	get_map.emplace("cim:GovGASTWD.etd", &get_GovGASTWD_etd);
	get_map.emplace("cim:GovGASTWD.k3", &get_GovGASTWD_k3);
	get_map.emplace("cim:GovGASTWD.k4", &get_GovGASTWD_k4);
	get_map.emplace("cim:GovGASTWD.k5", &get_GovGASTWD_k5);
	get_map.emplace("cim:GovGASTWD.k6", &get_GovGASTWD_k6);
	get_map.emplace("cim:GovGASTWD.kd", &get_GovGASTWD_kd);
	get_map.emplace("cim:GovGASTWD.kdroop", &get_GovGASTWD_kdroop);
	get_map.emplace("cim:GovGASTWD.kf", &get_GovGASTWD_kf);
	get_map.emplace("cim:GovGASTWD.ki", &get_GovGASTWD_ki);
	get_map.emplace("cim:GovGASTWD.kp", &get_GovGASTWD_kp);
	get_map.emplace("cim:GovGASTWD.mwbase", &get_GovGASTWD_mwbase);
	get_map.emplace("cim:GovGASTWD.t", &get_GovGASTWD_t);
	get_map.emplace("cim:GovGASTWD.t3", &get_GovGASTWD_t3);
	get_map.emplace("cim:GovGASTWD.t4", &get_GovGASTWD_t4);
	get_map.emplace("cim:GovGASTWD.t5", &get_GovGASTWD_t5);
	get_map.emplace("cim:GovGASTWD.tc", &get_GovGASTWD_tc);
	get_map.emplace("cim:GovGASTWD.tcd", &get_GovGASTWD_tcd);
	get_map.emplace("cim:GovGASTWD.td", &get_GovGASTWD_td);
	get_map.emplace("cim:GovGASTWD.tf", &get_GovGASTWD_tf);
	get_map.emplace("cim:GovGASTWD.tmax", &get_GovGASTWD_tmax);
	get_map.emplace("cim:GovGASTWD.tmin", &get_GovGASTWD_tmin);
	get_map.emplace("cim:GovGASTWD.tr", &get_GovGASTWD_tr);
	get_map.emplace("cim:GovGASTWD.trate", &get_GovGASTWD_trate);
	get_map.emplace("cim:GovGASTWD.tt", &get_GovGASTWD_tt);
}

void GovGASTWD::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovGASTWD::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner GovGASTWD::declare()
{
	return BaseClassDefiner(GovGASTWD::addConstructToMap, GovGASTWD::addPrimitiveAssignFnsToMap, GovGASTWD::addClassAssignFnsToMap, GovGASTWD::debugName);
}

namespace CIMPP
{
	BaseClass* GovGASTWD_factory()
	{
		return new GovGASTWD;
	}
}
