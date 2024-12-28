/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydroPelton.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
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
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "Boolean.hpp"
#include "Length.hpp"

using namespace CIMPP;

GovHydroPelton::GovHydroPelton() {};
GovHydroPelton::~GovHydroPelton() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GovHydroPelton.av0", { CGMESProfile::DY, } },
	{ "cim:GovHydroPelton.av1", { CGMESProfile::DY, } },
	{ "cim:GovHydroPelton.bp", { CGMESProfile::DY, } },
	{ "cim:GovHydroPelton.db1", { CGMESProfile::DY, } },
	{ "cim:GovHydroPelton.db2", { CGMESProfile::DY, } },
	{ "cim:GovHydroPelton.h1", { CGMESProfile::DY, } },
	{ "cim:GovHydroPelton.h2", { CGMESProfile::DY, } },
	{ "cim:GovHydroPelton.hn", { CGMESProfile::DY, } },
	{ "cim:GovHydroPelton.kc", { CGMESProfile::DY, } },
	{ "cim:GovHydroPelton.kg", { CGMESProfile::DY, } },
	{ "cim:GovHydroPelton.qc0", { CGMESProfile::DY, } },
	{ "cim:GovHydroPelton.qn", { CGMESProfile::DY, } },
	{ "cim:GovHydroPelton.simplifiedPelton", { CGMESProfile::DY, } },
	{ "cim:GovHydroPelton.staticCompensating", { CGMESProfile::DY, } },
	{ "cim:GovHydroPelton.ta", { CGMESProfile::DY, } },
	{ "cim:GovHydroPelton.ts", { CGMESProfile::DY, } },
	{ "cim:GovHydroPelton.tv", { CGMESProfile::DY, } },
	{ "cim:GovHydroPelton.twnc", { CGMESProfile::DY, } },
	{ "cim:GovHydroPelton.twng", { CGMESProfile::DY, } },
	{ "cim:GovHydroPelton.tx", { CGMESProfile::DY, } },
	{ "cim:GovHydroPelton.va", { CGMESProfile::DY, } },
	{ "cim:GovHydroPelton.valvmax", { CGMESProfile::DY, } },
	{ "cim:GovHydroPelton.valvmin", { CGMESProfile::DY, } },
	{ "cim:GovHydroPelton.vav", { CGMESProfile::DY, } },
	{ "cim:GovHydroPelton.vc", { CGMESProfile::DY, } },
	{ "cim:GovHydroPelton.vcv", { CGMESProfile::DY, } },
	{ "cim:GovHydroPelton.waterTunnelSurgeChamberSimulation", { CGMESProfile::DY, } },
	{ "cim:GovHydroPelton.zsfc", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
GovHydroPelton::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GovHydroPelton::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineGovernorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


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



bool get_GovHydroPelton_av0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer << element->av0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_av1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer << element->av1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_bp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer << element->bp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_db1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1))
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

bool get_GovHydroPelton_db2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1))
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

bool get_GovHydroPelton_h1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer << element->h1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_h2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer << element->h2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_hn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer << element->hn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer << element->kc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_kg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1))
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

bool get_GovHydroPelton_qc0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer << element->qc0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_qn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer << element->qn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_simplifiedPelton(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer << element->simplifiedPelton;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_staticCompensating(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer << element->staticCompensating;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1))
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

bool get_GovHydroPelton_ts(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer << element->ts;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_tv(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1))
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

bool get_GovHydroPelton_twnc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer << element->twnc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_twng(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer << element->twng;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_tx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer << element->tx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_va(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer << element->va;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_valvmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer << element->valvmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_valvmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer << element->valvmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_vav(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer << element->vav;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_vc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer << element->vc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_vcv(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer << element->vcv;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_waterTunnelSurgeChamberSimulation(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer << element->waterTunnelSurgeChamberSimulation;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_zsfc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1))
	{
		buffer << element->zsfc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
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

void GovHydroPelton::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GovHydroPelton.av0", &get_GovHydroPelton_av0);
	get_map.emplace("cim:GovHydroPelton.av1", &get_GovHydroPelton_av1);
	get_map.emplace("cim:GovHydroPelton.bp", &get_GovHydroPelton_bp);
	get_map.emplace("cim:GovHydroPelton.db1", &get_GovHydroPelton_db1);
	get_map.emplace("cim:GovHydroPelton.db2", &get_GovHydroPelton_db2);
	get_map.emplace("cim:GovHydroPelton.h1", &get_GovHydroPelton_h1);
	get_map.emplace("cim:GovHydroPelton.h2", &get_GovHydroPelton_h2);
	get_map.emplace("cim:GovHydroPelton.hn", &get_GovHydroPelton_hn);
	get_map.emplace("cim:GovHydroPelton.kc", &get_GovHydroPelton_kc);
	get_map.emplace("cim:GovHydroPelton.kg", &get_GovHydroPelton_kg);
	get_map.emplace("cim:GovHydroPelton.qc0", &get_GovHydroPelton_qc0);
	get_map.emplace("cim:GovHydroPelton.qn", &get_GovHydroPelton_qn);
	get_map.emplace("cim:GovHydroPelton.simplifiedPelton", &get_GovHydroPelton_simplifiedPelton);
	get_map.emplace("cim:GovHydroPelton.staticCompensating", &get_GovHydroPelton_staticCompensating);
	get_map.emplace("cim:GovHydroPelton.ta", &get_GovHydroPelton_ta);
	get_map.emplace("cim:GovHydroPelton.ts", &get_GovHydroPelton_ts);
	get_map.emplace("cim:GovHydroPelton.tv", &get_GovHydroPelton_tv);
	get_map.emplace("cim:GovHydroPelton.twnc", &get_GovHydroPelton_twnc);
	get_map.emplace("cim:GovHydroPelton.twng", &get_GovHydroPelton_twng);
	get_map.emplace("cim:GovHydroPelton.tx", &get_GovHydroPelton_tx);
	get_map.emplace("cim:GovHydroPelton.va", &get_GovHydroPelton_va);
	get_map.emplace("cim:GovHydroPelton.valvmax", &get_GovHydroPelton_valvmax);
	get_map.emplace("cim:GovHydroPelton.valvmin", &get_GovHydroPelton_valvmin);
	get_map.emplace("cim:GovHydroPelton.vav", &get_GovHydroPelton_vav);
	get_map.emplace("cim:GovHydroPelton.vc", &get_GovHydroPelton_vc);
	get_map.emplace("cim:GovHydroPelton.vcv", &get_GovHydroPelton_vcv);
	get_map.emplace("cim:GovHydroPelton.waterTunnelSurgeChamberSimulation", &get_GovHydroPelton_waterTunnelSurgeChamberSimulation);
	get_map.emplace("cim:GovHydroPelton.zsfc", &get_GovHydroPelton_zsfc);
}

void GovHydroPelton::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovHydroPelton::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
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
