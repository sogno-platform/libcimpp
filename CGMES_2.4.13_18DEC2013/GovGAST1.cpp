/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovGAST1.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

GovGAST1::GovGAST1() {}
GovGAST1::~GovGAST1() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GovGAST1.a", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.b", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.db1", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.db2", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.eps", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.fidle", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.gv1", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.gv2", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.gv3", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.gv4", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.gv5", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.gv6", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.ka", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.kt", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.lmax", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.loadinc", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.ltrate", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.mwbase", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.pgv1", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.pgv2", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.pgv3", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.pgv4", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.pgv5", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.pgv6", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.r", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.rmax", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.t1", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.t2", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.t3", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.t4", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.t5", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.tltr", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.vmax", { CGMESProfile::DY, } },
	{ "cim:GovGAST1.vmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
GovGAST1::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GovGAST1::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineGovernorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_GovGAST1_a(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST1_b(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->b;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST1_db1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
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

bool assign_GovGAST1_db2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
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

bool assign_GovGAST1_eps(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
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

bool assign_GovGAST1_fidle(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fidle;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST1_gv1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
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

bool assign_GovGAST1_gv2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
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

bool assign_GovGAST1_gv3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
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

bool assign_GovGAST1_gv4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
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

bool assign_GovGAST1_gv5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
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

bool assign_GovGAST1_gv6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
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

bool assign_GovGAST1_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ka;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST1_kt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST1_lmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->lmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST1_loadinc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->loadinc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST1_ltrate(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ltrate;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST1_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
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

bool assign_GovGAST1_pgv1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
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

bool assign_GovGAST1_pgv2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
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

bool assign_GovGAST1_pgv3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
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

bool assign_GovGAST1_pgv4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
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

bool assign_GovGAST1_pgv5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
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

bool assign_GovGAST1_pgv6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
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

bool assign_GovGAST1_r(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
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

bool assign_GovGAST1_rmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST1_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
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

bool assign_GovGAST1_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
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

bool assign_GovGAST1_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
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

bool assign_GovGAST1_t4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
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

bool assign_GovGAST1_t5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
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

bool assign_GovGAST1_tltr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tltr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST1_vmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST1_vmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST1* element = dynamic_cast<GovGAST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_GovGAST1_a(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovGAST1_b(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovGAST1_db1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
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

bool get_GovGAST1_db2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
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

bool get_GovGAST1_eps(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
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

bool get_GovGAST1_fidle(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fidle;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST1_gv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
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

bool get_GovGAST1_gv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
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

bool get_GovGAST1_gv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
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

bool get_GovGAST1_gv4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
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

bool get_GovGAST1_gv5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
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

bool get_GovGAST1_gv6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
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

bool get_GovGAST1_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ka;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST1_kt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST1_lmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->lmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST1_loadinc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->loadinc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST1_ltrate(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ltrate;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST1_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
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

bool get_GovGAST1_pgv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
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

bool get_GovGAST1_pgv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
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

bool get_GovGAST1_pgv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
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

bool get_GovGAST1_pgv4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
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

bool get_GovGAST1_pgv5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
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

bool get_GovGAST1_pgv6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
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

bool get_GovGAST1_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
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

bool get_GovGAST1_rmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST1_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
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

bool get_GovGAST1_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
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

bool get_GovGAST1_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
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

bool get_GovGAST1_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
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

bool get_GovGAST1_t5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
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

bool get_GovGAST1_tltr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tltr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST1_vmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST1_vmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST1* element = dynamic_cast<const GovGAST1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char GovGAST1::debugName[] = "GovGAST1";
const char* GovGAST1::debugString() const
{
	return GovGAST1::debugName;
}

void GovGAST1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:GovGAST1", &GovGAST1_factory);
}

void GovGAST1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:GovGAST1.a", &assign_GovGAST1_a);
	assign_map.emplace("cim:GovGAST1.b", &assign_GovGAST1_b);
	assign_map.emplace("cim:GovGAST1.db1", &assign_GovGAST1_db1);
	assign_map.emplace("cim:GovGAST1.db2", &assign_GovGAST1_db2);
	assign_map.emplace("cim:GovGAST1.eps", &assign_GovGAST1_eps);
	assign_map.emplace("cim:GovGAST1.fidle", &assign_GovGAST1_fidle);
	assign_map.emplace("cim:GovGAST1.gv1", &assign_GovGAST1_gv1);
	assign_map.emplace("cim:GovGAST1.gv2", &assign_GovGAST1_gv2);
	assign_map.emplace("cim:GovGAST1.gv3", &assign_GovGAST1_gv3);
	assign_map.emplace("cim:GovGAST1.gv4", &assign_GovGAST1_gv4);
	assign_map.emplace("cim:GovGAST1.gv5", &assign_GovGAST1_gv5);
	assign_map.emplace("cim:GovGAST1.gv6", &assign_GovGAST1_gv6);
	assign_map.emplace("cim:GovGAST1.ka", &assign_GovGAST1_ka);
	assign_map.emplace("cim:GovGAST1.kt", &assign_GovGAST1_kt);
	assign_map.emplace("cim:GovGAST1.lmax", &assign_GovGAST1_lmax);
	assign_map.emplace("cim:GovGAST1.loadinc", &assign_GovGAST1_loadinc);
	assign_map.emplace("cim:GovGAST1.ltrate", &assign_GovGAST1_ltrate);
	assign_map.emplace("cim:GovGAST1.mwbase", &assign_GovGAST1_mwbase);
	assign_map.emplace("cim:GovGAST1.pgv1", &assign_GovGAST1_pgv1);
	assign_map.emplace("cim:GovGAST1.pgv2", &assign_GovGAST1_pgv2);
	assign_map.emplace("cim:GovGAST1.pgv3", &assign_GovGAST1_pgv3);
	assign_map.emplace("cim:GovGAST1.pgv4", &assign_GovGAST1_pgv4);
	assign_map.emplace("cim:GovGAST1.pgv5", &assign_GovGAST1_pgv5);
	assign_map.emplace("cim:GovGAST1.pgv6", &assign_GovGAST1_pgv6);
	assign_map.emplace("cim:GovGAST1.r", &assign_GovGAST1_r);
	assign_map.emplace("cim:GovGAST1.rmax", &assign_GovGAST1_rmax);
	assign_map.emplace("cim:GovGAST1.t1", &assign_GovGAST1_t1);
	assign_map.emplace("cim:GovGAST1.t2", &assign_GovGAST1_t2);
	assign_map.emplace("cim:GovGAST1.t3", &assign_GovGAST1_t3);
	assign_map.emplace("cim:GovGAST1.t4", &assign_GovGAST1_t4);
	assign_map.emplace("cim:GovGAST1.t5", &assign_GovGAST1_t5);
	assign_map.emplace("cim:GovGAST1.tltr", &assign_GovGAST1_tltr);
	assign_map.emplace("cim:GovGAST1.vmax", &assign_GovGAST1_vmax);
	assign_map.emplace("cim:GovGAST1.vmin", &assign_GovGAST1_vmin);
}

void GovGAST1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovGAST1::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GovGAST1.a", &get_GovGAST1_a);
	get_map.emplace("cim:GovGAST1.b", &get_GovGAST1_b);
	get_map.emplace("cim:GovGAST1.db1", &get_GovGAST1_db1);
	get_map.emplace("cim:GovGAST1.db2", &get_GovGAST1_db2);
	get_map.emplace("cim:GovGAST1.eps", &get_GovGAST1_eps);
	get_map.emplace("cim:GovGAST1.fidle", &get_GovGAST1_fidle);
	get_map.emplace("cim:GovGAST1.gv1", &get_GovGAST1_gv1);
	get_map.emplace("cim:GovGAST1.gv2", &get_GovGAST1_gv2);
	get_map.emplace("cim:GovGAST1.gv3", &get_GovGAST1_gv3);
	get_map.emplace("cim:GovGAST1.gv4", &get_GovGAST1_gv4);
	get_map.emplace("cim:GovGAST1.gv5", &get_GovGAST1_gv5);
	get_map.emplace("cim:GovGAST1.gv6", &get_GovGAST1_gv6);
	get_map.emplace("cim:GovGAST1.ka", &get_GovGAST1_ka);
	get_map.emplace("cim:GovGAST1.kt", &get_GovGAST1_kt);
	get_map.emplace("cim:GovGAST1.lmax", &get_GovGAST1_lmax);
	get_map.emplace("cim:GovGAST1.loadinc", &get_GovGAST1_loadinc);
	get_map.emplace("cim:GovGAST1.ltrate", &get_GovGAST1_ltrate);
	get_map.emplace("cim:GovGAST1.mwbase", &get_GovGAST1_mwbase);
	get_map.emplace("cim:GovGAST1.pgv1", &get_GovGAST1_pgv1);
	get_map.emplace("cim:GovGAST1.pgv2", &get_GovGAST1_pgv2);
	get_map.emplace("cim:GovGAST1.pgv3", &get_GovGAST1_pgv3);
	get_map.emplace("cim:GovGAST1.pgv4", &get_GovGAST1_pgv4);
	get_map.emplace("cim:GovGAST1.pgv5", &get_GovGAST1_pgv5);
	get_map.emplace("cim:GovGAST1.pgv6", &get_GovGAST1_pgv6);
	get_map.emplace("cim:GovGAST1.r", &get_GovGAST1_r);
	get_map.emplace("cim:GovGAST1.rmax", &get_GovGAST1_rmax);
	get_map.emplace("cim:GovGAST1.t1", &get_GovGAST1_t1);
	get_map.emplace("cim:GovGAST1.t2", &get_GovGAST1_t2);
	get_map.emplace("cim:GovGAST1.t3", &get_GovGAST1_t3);
	get_map.emplace("cim:GovGAST1.t4", &get_GovGAST1_t4);
	get_map.emplace("cim:GovGAST1.t5", &get_GovGAST1_t5);
	get_map.emplace("cim:GovGAST1.tltr", &get_GovGAST1_tltr);
	get_map.emplace("cim:GovGAST1.vmax", &get_GovGAST1_vmax);
	get_map.emplace("cim:GovGAST1.vmin", &get_GovGAST1_vmin);
}

void GovGAST1::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovGAST1::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner GovGAST1::declare()
{
	return BaseClassDefiner(GovGAST1::addConstructToMap, GovGAST1::addPrimitiveAssignFnsToMap, GovGAST1::addClassAssignFnsToMap, GovGAST1::debugName);
}

namespace CIMPP
{
	BaseClass* GovGAST1_factory()
	{
		return new GovGAST1;
	}
}
