/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcSK.hpp"

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
#include "Boolean.hpp"
#include "PU.hpp"
#include "Boolean.hpp"
#include "ApparentPower.hpp"
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
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcSK::ExcSK() {};
ExcSK::~ExcSK() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcSK.efdmax", { CGMESProfile::DY, } },
	{ "cim:ExcSK.efdmin", { CGMESProfile::DY, } },
	{ "cim:ExcSK.emax", { CGMESProfile::DY, } },
	{ "cim:ExcSK.emin", { CGMESProfile::DY, } },
	{ "cim:ExcSK.k", { CGMESProfile::DY, } },
	{ "cim:ExcSK.k1", { CGMESProfile::DY, } },
	{ "cim:ExcSK.k2", { CGMESProfile::DY, } },
	{ "cim:ExcSK.kc", { CGMESProfile::DY, } },
	{ "cim:ExcSK.kce", { CGMESProfile::DY, } },
	{ "cim:ExcSK.kd", { CGMESProfile::DY, } },
	{ "cim:ExcSK.kgob", { CGMESProfile::DY, } },
	{ "cim:ExcSK.kp", { CGMESProfile::DY, } },
	{ "cim:ExcSK.kqi", { CGMESProfile::DY, } },
	{ "cim:ExcSK.kqob", { CGMESProfile::DY, } },
	{ "cim:ExcSK.kqp", { CGMESProfile::DY, } },
	{ "cim:ExcSK.nq", { CGMESProfile::DY, } },
	{ "cim:ExcSK.qconoff", { CGMESProfile::DY, } },
	{ "cim:ExcSK.qz", { CGMESProfile::DY, } },
	{ "cim:ExcSK.remote", { CGMESProfile::DY, } },
	{ "cim:ExcSK.sbase", { CGMESProfile::DY, } },
	{ "cim:ExcSK.tc", { CGMESProfile::DY, } },
	{ "cim:ExcSK.te", { CGMESProfile::DY, } },
	{ "cim:ExcSK.ti", { CGMESProfile::DY, } },
	{ "cim:ExcSK.tp", { CGMESProfile::DY, } },
	{ "cim:ExcSK.tr", { CGMESProfile::DY, } },
	{ "cim:ExcSK.uimax", { CGMESProfile::DY, } },
	{ "cim:ExcSK.uimin", { CGMESProfile::DY, } },
	{ "cim:ExcSK.urmax", { CGMESProfile::DY, } },
	{ "cim:ExcSK.urmin", { CGMESProfile::DY, } },
	{ "cim:ExcSK.vtmax", { CGMESProfile::DY, } },
	{ "cim:ExcSK.vtmin", { CGMESProfile::DY, } },
	{ "cim:ExcSK.yp", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcSK::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcSK::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_ExcSK_efdmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->efdmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_efdmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->efdmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_emax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->emax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_emin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->emin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_k(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->k;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_k1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->k1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_k2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->k2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_kc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->kc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_kce(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->kce;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_kd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->kd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_kgob(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->kgob;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->kp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_kqi(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->kqi;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_kqob(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->kqob;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_kqp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->kqp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_nq(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->nq;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_qconoff(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->qconoff;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_qz(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->qz;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_remote(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->remote;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_sbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->sbase;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->tc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->te;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_ti(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->ti;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_tp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->tp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_tr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->tr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_uimax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->uimax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_uimin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->uimin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_urmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->urmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_urmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->urmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_vtmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->vtmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_vtmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->vtmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcSK_yp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1))
	{
		buffer >> element->yp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_ExcSK_efdmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
	{
		buffer << element->efdmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_efdmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
	{
		buffer << element->efdmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_emax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
	{
		buffer << element->emax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_emin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
	{
		buffer << element->emin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_k(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
	{
		buffer << element->k;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_k1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
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

bool get_ExcSK_k2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
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

bool get_ExcSK_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
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

bool get_ExcSK_kce(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
	{
		buffer << element->kce;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
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

bool get_ExcSK_kgob(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
	{
		buffer << element->kgob;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
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

bool get_ExcSK_kqi(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
	{
		buffer << element->kqi;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_kqob(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
	{
		buffer << element->kqob;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_kqp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
	{
		buffer << element->kqp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_nq(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
	{
		buffer << element->nq;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_qconoff(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
	{
		buffer << element->qconoff;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_qz(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
	{
		buffer << element->qz;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_remote(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
	{
		buffer << element->remote;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_sbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
	{
		buffer << element->sbase;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
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

bool get_ExcSK_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
	{
		buffer << element->te;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_ti(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
	{
		buffer << element->ti;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_tp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
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

bool get_ExcSK_tr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
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

bool get_ExcSK_uimax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
	{
		buffer << element->uimax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_uimin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
	{
		buffer << element->uimin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_urmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
	{
		buffer << element->urmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_urmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
	{
		buffer << element->urmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_vtmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
	{
		buffer << element->vtmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_vtmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
	{
		buffer << element->vtmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_yp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1))
	{
		buffer << element->yp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char ExcSK::debugName[] = "ExcSK";
const char* ExcSK::debugString() const
{
	return ExcSK::debugName;
}

void ExcSK::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcSK"), &ExcSK_factory));
}

void ExcSK::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.efdmax"), &assign_ExcSK_efdmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.efdmin"), &assign_ExcSK_efdmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.emax"), &assign_ExcSK_emax));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.emin"), &assign_ExcSK_emin));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.k"), &assign_ExcSK_k));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.k1"), &assign_ExcSK_k1));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.k2"), &assign_ExcSK_k2));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.kc"), &assign_ExcSK_kc));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.kce"), &assign_ExcSK_kce));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.kd"), &assign_ExcSK_kd));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.kgob"), &assign_ExcSK_kgob));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.kp"), &assign_ExcSK_kp));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.kqi"), &assign_ExcSK_kqi));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.kqob"), &assign_ExcSK_kqob));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.kqp"), &assign_ExcSK_kqp));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.nq"), &assign_ExcSK_nq));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.qconoff"), &assign_ExcSK_qconoff));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.qz"), &assign_ExcSK_qz));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.remote"), &assign_ExcSK_remote));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.sbase"), &assign_ExcSK_sbase));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.tc"), &assign_ExcSK_tc));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.te"), &assign_ExcSK_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.ti"), &assign_ExcSK_ti));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.tp"), &assign_ExcSK_tp));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.tr"), &assign_ExcSK_tr));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.uimax"), &assign_ExcSK_uimax));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.uimin"), &assign_ExcSK_uimin));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.urmax"), &assign_ExcSK_urmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.urmin"), &assign_ExcSK_urmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.vtmax"), &assign_ExcSK_vtmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.vtmin"), &assign_ExcSK_vtmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcSK.yp"), &assign_ExcSK_yp));
}

void ExcSK::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcSK::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcSK.efdmax", &get_ExcSK_efdmax);
	get_map.emplace("cim:ExcSK.efdmin", &get_ExcSK_efdmin);
	get_map.emplace("cim:ExcSK.emax", &get_ExcSK_emax);
	get_map.emplace("cim:ExcSK.emin", &get_ExcSK_emin);
	get_map.emplace("cim:ExcSK.k", &get_ExcSK_k);
	get_map.emplace("cim:ExcSK.k1", &get_ExcSK_k1);
	get_map.emplace("cim:ExcSK.k2", &get_ExcSK_k2);
	get_map.emplace("cim:ExcSK.kc", &get_ExcSK_kc);
	get_map.emplace("cim:ExcSK.kce", &get_ExcSK_kce);
	get_map.emplace("cim:ExcSK.kd", &get_ExcSK_kd);
	get_map.emplace("cim:ExcSK.kgob", &get_ExcSK_kgob);
	get_map.emplace("cim:ExcSK.kp", &get_ExcSK_kp);
	get_map.emplace("cim:ExcSK.kqi", &get_ExcSK_kqi);
	get_map.emplace("cim:ExcSK.kqob", &get_ExcSK_kqob);
	get_map.emplace("cim:ExcSK.kqp", &get_ExcSK_kqp);
	get_map.emplace("cim:ExcSK.nq", &get_ExcSK_nq);
	get_map.emplace("cim:ExcSK.qconoff", &get_ExcSK_qconoff);
	get_map.emplace("cim:ExcSK.qz", &get_ExcSK_qz);
	get_map.emplace("cim:ExcSK.remote", &get_ExcSK_remote);
	get_map.emplace("cim:ExcSK.sbase", &get_ExcSK_sbase);
	get_map.emplace("cim:ExcSK.tc", &get_ExcSK_tc);
	get_map.emplace("cim:ExcSK.te", &get_ExcSK_te);
	get_map.emplace("cim:ExcSK.ti", &get_ExcSK_ti);
	get_map.emplace("cim:ExcSK.tp", &get_ExcSK_tp);
	get_map.emplace("cim:ExcSK.tr", &get_ExcSK_tr);
	get_map.emplace("cim:ExcSK.uimax", &get_ExcSK_uimax);
	get_map.emplace("cim:ExcSK.uimin", &get_ExcSK_uimin);
	get_map.emplace("cim:ExcSK.urmax", &get_ExcSK_urmax);
	get_map.emplace("cim:ExcSK.urmin", &get_ExcSK_urmin);
	get_map.emplace("cim:ExcSK.vtmax", &get_ExcSK_vtmax);
	get_map.emplace("cim:ExcSK.vtmin", &get_ExcSK_vtmin);
	get_map.emplace("cim:ExcSK.yp", &get_ExcSK_yp);
}

void ExcSK::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcSK::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcSK::declare()
{
	return BaseClassDefiner(ExcSK::addConstructToMap, ExcSK::addPrimitiveAssignFnsToMap, ExcSK::addClassAssignFnsToMap, ExcSK::debugName);
}

namespace CIMPP
{
	BaseClass* ExcSK_factory()
	{
		return new ExcSK;
	}
}
