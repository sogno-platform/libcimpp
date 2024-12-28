/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcREXS.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "ExcREXSFeedbackSignalKind.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
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
#include "PU.hpp"
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
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcREXS::ExcREXS() {};
ExcREXS::~ExcREXS() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcREXS.e1", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.e2", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.fbf", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.flimf", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.kc", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.kd", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.ke", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.kefd", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.kf", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.kh", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.kii", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.kip", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.ks", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.kvi", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.kvp", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.kvphz", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.nvphz", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.se1", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.se2", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.ta", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.tb1", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.tb2", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.tc1", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.tc2", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.te", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.tf", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.tf1", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.tf2", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.tp", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.vcmax", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.vfmax", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.vfmin", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.vimax", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.vrmin", { CGMESProfile::DY, } },
	{ "cim:ExcREXS.xc", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcREXS::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcREXS::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_ExcREXS_e1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->e1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_e2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->e2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_fbf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->fbf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_flimf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->flimf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_kc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->kc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_kd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->kd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->ke;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_kefd(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->kefd;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->kf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_kh(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->kh;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_kii(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->kii;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_kip(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->kip;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_ks(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->ks;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_kvi(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->kvi;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_kvp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->kvp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_kvphz(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->kvphz;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_nvphz(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->nvphz;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_se1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->se1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_se2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->se2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->ta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_tb1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->tb1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_tb2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->tb2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_tc1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->tc1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_tc2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->tc2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->te;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->tf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_tf1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->tf1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_tf2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->tf2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_tp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->tp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_vcmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->vcmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_vfmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->vfmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_vfmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->vfmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_vimax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->vimax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->vrmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->vrmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ExcREXS_xc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1))
	{
		buffer >> element->xc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_ExcREXS_e1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
	{
		buffer << element->e1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_e2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
	{
		buffer << element->e2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_flimf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
	{
		buffer << element->flimf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
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

bool get_ExcREXS_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
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

bool get_ExcREXS_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
	{
		buffer << element->ke;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_kefd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
	{
		buffer << element->kefd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
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

bool get_ExcREXS_kh(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
	{
		buffer << element->kh;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_kii(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
	{
		buffer << element->kii;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_kip(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
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

bool get_ExcREXS_ks(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
	{
		buffer << element->ks;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_kvi(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
	{
		buffer << element->kvi;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_kvp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
	{
		buffer << element->kvp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_kvphz(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
	{
		buffer << element->kvphz;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_nvphz(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
	{
		buffer << element->nvphz;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_se1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
	{
		buffer << element->se1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_se2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
	{
		buffer << element->se2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
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

bool get_ExcREXS_tb1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
	{
		buffer << element->tb1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_tb2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
	{
		buffer << element->tb2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_tc1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
	{
		buffer << element->tc1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_tc2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
	{
		buffer << element->tc2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
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

bool get_ExcREXS_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
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

bool get_ExcREXS_tf1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
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

bool get_ExcREXS_tf2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
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

bool get_ExcREXS_tp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
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

bool get_ExcREXS_vcmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
	{
		buffer << element->vcmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_vfmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
	{
		buffer << element->vfmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_vfmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
	{
		buffer << element->vfmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_vimax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
	{
		buffer << element->vimax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
	{
		buffer << element->vrmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
	{
		buffer << element->vrmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_xc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
	{
		buffer << element->xc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



bool get_ExcREXS_fbf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1))
	{
		buffer << element->fbf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ExcREXS::debugName[] = "ExcREXS";
const char* ExcREXS::debugString() const
{
	return ExcREXS::debugName;
}

void ExcREXS::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ExcREXS"), &ExcREXS_factory));
}

void ExcREXS::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.e1"), &assign_ExcREXS_e1));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.e2"), &assign_ExcREXS_e2));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.fbf"), &assign_ExcREXS_fbf));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.flimf"), &assign_ExcREXS_flimf));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.kc"), &assign_ExcREXS_kc));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.kd"), &assign_ExcREXS_kd));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.ke"), &assign_ExcREXS_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.kefd"), &assign_ExcREXS_kefd));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.kf"), &assign_ExcREXS_kf));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.kh"), &assign_ExcREXS_kh));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.kii"), &assign_ExcREXS_kii));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.kip"), &assign_ExcREXS_kip));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.ks"), &assign_ExcREXS_ks));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.kvi"), &assign_ExcREXS_kvi));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.kvp"), &assign_ExcREXS_kvp));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.kvphz"), &assign_ExcREXS_kvphz));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.nvphz"), &assign_ExcREXS_nvphz));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.se1"), &assign_ExcREXS_se1));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.se2"), &assign_ExcREXS_se2));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.ta"), &assign_ExcREXS_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.tb1"), &assign_ExcREXS_tb1));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.tb2"), &assign_ExcREXS_tb2));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.tc1"), &assign_ExcREXS_tc1));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.tc2"), &assign_ExcREXS_tc2));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.te"), &assign_ExcREXS_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.tf"), &assign_ExcREXS_tf));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.tf1"), &assign_ExcREXS_tf1));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.tf2"), &assign_ExcREXS_tf2));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.tp"), &assign_ExcREXS_tp));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.vcmax"), &assign_ExcREXS_vcmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.vfmax"), &assign_ExcREXS_vfmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.vfmin"), &assign_ExcREXS_vfmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.vimax"), &assign_ExcREXS_vimax));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.vrmax"), &assign_ExcREXS_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.vrmin"), &assign_ExcREXS_vrmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcREXS.xc"), &assign_ExcREXS_xc));
}

void ExcREXS::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcREXS::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcREXS.e1", &get_ExcREXS_e1);
	get_map.emplace("cim:ExcREXS.e2", &get_ExcREXS_e2);
	get_map.emplace("cim:ExcREXS.flimf", &get_ExcREXS_flimf);
	get_map.emplace("cim:ExcREXS.kc", &get_ExcREXS_kc);
	get_map.emplace("cim:ExcREXS.kd", &get_ExcREXS_kd);
	get_map.emplace("cim:ExcREXS.ke", &get_ExcREXS_ke);
	get_map.emplace("cim:ExcREXS.kefd", &get_ExcREXS_kefd);
	get_map.emplace("cim:ExcREXS.kf", &get_ExcREXS_kf);
	get_map.emplace("cim:ExcREXS.kh", &get_ExcREXS_kh);
	get_map.emplace("cim:ExcREXS.kii", &get_ExcREXS_kii);
	get_map.emplace("cim:ExcREXS.kip", &get_ExcREXS_kip);
	get_map.emplace("cim:ExcREXS.ks", &get_ExcREXS_ks);
	get_map.emplace("cim:ExcREXS.kvi", &get_ExcREXS_kvi);
	get_map.emplace("cim:ExcREXS.kvp", &get_ExcREXS_kvp);
	get_map.emplace("cim:ExcREXS.kvphz", &get_ExcREXS_kvphz);
	get_map.emplace("cim:ExcREXS.nvphz", &get_ExcREXS_nvphz);
	get_map.emplace("cim:ExcREXS.se1", &get_ExcREXS_se1);
	get_map.emplace("cim:ExcREXS.se2", &get_ExcREXS_se2);
	get_map.emplace("cim:ExcREXS.ta", &get_ExcREXS_ta);
	get_map.emplace("cim:ExcREXS.tb1", &get_ExcREXS_tb1);
	get_map.emplace("cim:ExcREXS.tb2", &get_ExcREXS_tb2);
	get_map.emplace("cim:ExcREXS.tc1", &get_ExcREXS_tc1);
	get_map.emplace("cim:ExcREXS.tc2", &get_ExcREXS_tc2);
	get_map.emplace("cim:ExcREXS.te", &get_ExcREXS_te);
	get_map.emplace("cim:ExcREXS.tf", &get_ExcREXS_tf);
	get_map.emplace("cim:ExcREXS.tf1", &get_ExcREXS_tf1);
	get_map.emplace("cim:ExcREXS.tf2", &get_ExcREXS_tf2);
	get_map.emplace("cim:ExcREXS.tp", &get_ExcREXS_tp);
	get_map.emplace("cim:ExcREXS.vcmax", &get_ExcREXS_vcmax);
	get_map.emplace("cim:ExcREXS.vfmax", &get_ExcREXS_vfmax);
	get_map.emplace("cim:ExcREXS.vfmin", &get_ExcREXS_vfmin);
	get_map.emplace("cim:ExcREXS.vimax", &get_ExcREXS_vimax);
	get_map.emplace("cim:ExcREXS.vrmax", &get_ExcREXS_vrmax);
	get_map.emplace("cim:ExcREXS.vrmin", &get_ExcREXS_vrmin);
	get_map.emplace("cim:ExcREXS.xc", &get_ExcREXS_xc);
}

void ExcREXS::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcREXS::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:ExcREXS.fbf", &get_ExcREXS_fbf);
}

const BaseClassDefiner ExcREXS::declare()
{
	return BaseClassDefiner(ExcREXS::addConstructToMap, ExcREXS::addPrimitiveAssignFnsToMap, ExcREXS::addClassAssignFnsToMap, ExcREXS::debugName);
}

namespace CIMPP
{
	BaseClass* ExcREXS_factory()
	{
		return new ExcREXS;
	}
}
