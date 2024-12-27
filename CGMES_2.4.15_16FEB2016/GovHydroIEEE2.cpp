/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydroIEEE2.hpp"

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
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"

using namespace CIMPP;

GovHydroIEEE2::GovHydroIEEE2() {};
GovHydroIEEE2::~GovHydroIEEE2() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GovHydroIEEE2.aturb", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE2.bturb", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE2.gv1", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE2.gv2", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE2.gv3", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE2.gv4", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE2.gv5", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE2.gv6", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE2.kturb", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE2.mwbase", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE2.pgv1", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE2.pgv2", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE2.pgv3", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE2.pgv4", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE2.pgv5", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE2.pgv6", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE2.pmax", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE2.pmin", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE2.rperm", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE2.rtemp", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE2.tg", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE2.tp", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE2.tr", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE2.tw", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE2.uc", { CGMESProfile::DY, } },
	{ "cim:GovHydroIEEE2.uo", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
GovHydroIEEE2::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GovHydroIEEE2::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineGovernorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_GovHydroIEEE2_aturb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer >> element->aturb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroIEEE2_bturb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer >> element->bturb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroIEEE2_gv1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer >> element->gv1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroIEEE2_gv2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer >> element->gv2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroIEEE2_gv3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer >> element->gv3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroIEEE2_gv4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer >> element->gv4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroIEEE2_gv5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer >> element->gv5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroIEEE2_gv6(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer >> element->gv6;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroIEEE2_kturb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer >> element->kturb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroIEEE2_mwbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer >> element->mwbase;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroIEEE2_pgv1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer >> element->pgv1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroIEEE2_pgv2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer >> element->pgv2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroIEEE2_pgv3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer >> element->pgv3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroIEEE2_pgv4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer >> element->pgv4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroIEEE2_pgv5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer >> element->pgv5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroIEEE2_pgv6(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer >> element->pgv6;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroIEEE2_pmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer >> element->pmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroIEEE2_pmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer >> element->pmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroIEEE2_rperm(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer >> element->rperm;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroIEEE2_rtemp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer >> element->rtemp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroIEEE2_tg(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer >> element->tg;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroIEEE2_tp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer >> element->tp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroIEEE2_tr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer >> element->tr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroIEEE2_tw(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer >> element->tw;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroIEEE2_uc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer >> element->uc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroIEEE2_uo(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer >> element->uo;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_GovHydroIEEE2_aturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer << element->aturb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroIEEE2_bturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer << element->bturb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroIEEE2_gv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1))
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

bool get_GovHydroIEEE2_gv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1))
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

bool get_GovHydroIEEE2_gv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1))
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

bool get_GovHydroIEEE2_gv4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1))
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

bool get_GovHydroIEEE2_gv5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1))
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

bool get_GovHydroIEEE2_gv6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1))
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

bool get_GovHydroIEEE2_kturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1))
	{
		buffer << element->kturb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroIEEE2_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1))
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

bool get_GovHydroIEEE2_pgv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1))
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

bool get_GovHydroIEEE2_pgv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1))
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

bool get_GovHydroIEEE2_pgv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1))
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

bool get_GovHydroIEEE2_pgv4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1))
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

bool get_GovHydroIEEE2_pgv5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1))
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

bool get_GovHydroIEEE2_pgv6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1))
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

bool get_GovHydroIEEE2_pmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1))
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

bool get_GovHydroIEEE2_pmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1))
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

bool get_GovHydroIEEE2_rperm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1))
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

bool get_GovHydroIEEE2_rtemp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1))
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

bool get_GovHydroIEEE2_tg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1))
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

bool get_GovHydroIEEE2_tp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1))
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

bool get_GovHydroIEEE2_tr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1))
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

bool get_GovHydroIEEE2_tw(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1))
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

bool get_GovHydroIEEE2_uc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1))
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

bool get_GovHydroIEEE2_uo(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1))
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



const char GovHydroIEEE2::debugName[] = "GovHydroIEEE2";
const char* GovHydroIEEE2::debugString() const
{
	return GovHydroIEEE2::debugName;
}

void GovHydroIEEE2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:GovHydroIEEE2"), &GovHydroIEEE2_factory));
}

void GovHydroIEEE2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE2.aturb"), &assign_GovHydroIEEE2_aturb));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE2.bturb"), &assign_GovHydroIEEE2_bturb));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE2.gv1"), &assign_GovHydroIEEE2_gv1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE2.gv2"), &assign_GovHydroIEEE2_gv2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE2.gv3"), &assign_GovHydroIEEE2_gv3));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE2.gv4"), &assign_GovHydroIEEE2_gv4));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE2.gv5"), &assign_GovHydroIEEE2_gv5));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE2.gv6"), &assign_GovHydroIEEE2_gv6));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE2.kturb"), &assign_GovHydroIEEE2_kturb));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE2.mwbase"), &assign_GovHydroIEEE2_mwbase));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE2.pgv1"), &assign_GovHydroIEEE2_pgv1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE2.pgv2"), &assign_GovHydroIEEE2_pgv2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE2.pgv3"), &assign_GovHydroIEEE2_pgv3));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE2.pgv4"), &assign_GovHydroIEEE2_pgv4));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE2.pgv5"), &assign_GovHydroIEEE2_pgv5));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE2.pgv6"), &assign_GovHydroIEEE2_pgv6));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE2.pmax"), &assign_GovHydroIEEE2_pmax));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE2.pmin"), &assign_GovHydroIEEE2_pmin));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE2.rperm"), &assign_GovHydroIEEE2_rperm));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE2.rtemp"), &assign_GovHydroIEEE2_rtemp));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE2.tg"), &assign_GovHydroIEEE2_tg));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE2.tp"), &assign_GovHydroIEEE2_tp));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE2.tr"), &assign_GovHydroIEEE2_tr));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE2.tw"), &assign_GovHydroIEEE2_tw));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE2.uc"), &assign_GovHydroIEEE2_uc));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE2.uo"), &assign_GovHydroIEEE2_uo));
}

void GovHydroIEEE2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovHydroIEEE2::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GovHydroIEEE2.aturb", &get_GovHydroIEEE2_aturb);
	get_map.emplace("cim:GovHydroIEEE2.bturb", &get_GovHydroIEEE2_bturb);
	get_map.emplace("cim:GovHydroIEEE2.gv1", &get_GovHydroIEEE2_gv1);
	get_map.emplace("cim:GovHydroIEEE2.gv2", &get_GovHydroIEEE2_gv2);
	get_map.emplace("cim:GovHydroIEEE2.gv3", &get_GovHydroIEEE2_gv3);
	get_map.emplace("cim:GovHydroIEEE2.gv4", &get_GovHydroIEEE2_gv4);
	get_map.emplace("cim:GovHydroIEEE2.gv5", &get_GovHydroIEEE2_gv5);
	get_map.emplace("cim:GovHydroIEEE2.gv6", &get_GovHydroIEEE2_gv6);
	get_map.emplace("cim:GovHydroIEEE2.kturb", &get_GovHydroIEEE2_kturb);
	get_map.emplace("cim:GovHydroIEEE2.mwbase", &get_GovHydroIEEE2_mwbase);
	get_map.emplace("cim:GovHydroIEEE2.pgv1", &get_GovHydroIEEE2_pgv1);
	get_map.emplace("cim:GovHydroIEEE2.pgv2", &get_GovHydroIEEE2_pgv2);
	get_map.emplace("cim:GovHydroIEEE2.pgv3", &get_GovHydroIEEE2_pgv3);
	get_map.emplace("cim:GovHydroIEEE2.pgv4", &get_GovHydroIEEE2_pgv4);
	get_map.emplace("cim:GovHydroIEEE2.pgv5", &get_GovHydroIEEE2_pgv5);
	get_map.emplace("cim:GovHydroIEEE2.pgv6", &get_GovHydroIEEE2_pgv6);
	get_map.emplace("cim:GovHydroIEEE2.pmax", &get_GovHydroIEEE2_pmax);
	get_map.emplace("cim:GovHydroIEEE2.pmin", &get_GovHydroIEEE2_pmin);
	get_map.emplace("cim:GovHydroIEEE2.rperm", &get_GovHydroIEEE2_rperm);
	get_map.emplace("cim:GovHydroIEEE2.rtemp", &get_GovHydroIEEE2_rtemp);
	get_map.emplace("cim:GovHydroIEEE2.tg", &get_GovHydroIEEE2_tg);
	get_map.emplace("cim:GovHydroIEEE2.tp", &get_GovHydroIEEE2_tp);
	get_map.emplace("cim:GovHydroIEEE2.tr", &get_GovHydroIEEE2_tr);
	get_map.emplace("cim:GovHydroIEEE2.tw", &get_GovHydroIEEE2_tw);
	get_map.emplace("cim:GovHydroIEEE2.uc", &get_GovHydroIEEE2_uc);
	get_map.emplace("cim:GovHydroIEEE2.uo", &get_GovHydroIEEE2_uo);
}

void GovHydroIEEE2::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovHydroIEEE2::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner GovHydroIEEE2::declare()
{
	return BaseClassDefiner(GovHydroIEEE2::addConstructToMap, GovHydroIEEE2::addPrimitiveAssignFnsToMap, GovHydroIEEE2::addClassAssignFnsToMap, GovHydroIEEE2::debugName);
}

namespace CIMPP
{
	BaseClass* GovHydroIEEE2_factory()
	{
		return new GovHydroIEEE2;
	}
}
