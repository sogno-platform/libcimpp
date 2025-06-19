/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovGAST2.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

GovGAST2::GovGAST2() {}
GovGAST2::~GovGAST2() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GovGAST2.a", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.af1", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.af2", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.b", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.bf1", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.bf2", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.c", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.cf2", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.ecr", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.etd", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.k3", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.k4", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.k5", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.k6", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.kf", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.mwbase", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.t", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.t3", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.t4", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.t5", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.tc", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.tcd", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.tf", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.tmax", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.tmin", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.tr", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.trate", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.tt", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.w", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.x", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.y", { CGMESProfile::DY, } },
	{ "cim:GovGAST2.z", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
GovGAST2::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GovGAST2::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineGovernorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_GovGAST2_a(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
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

bool assign_GovGAST2_af1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->af1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST2_af2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->af2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST2_b(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
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

bool assign_GovGAST2_bf1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->bf1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST2_bf2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->bf2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST2_c(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->c;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST2_cf2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->cf2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST2_ecr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ecr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST2_etd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->etd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST2_k3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST2_k4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST2_k5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST2_k6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k6;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST2_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST2_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
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

bool assign_GovGAST2_t(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST2_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
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

bool assign_GovGAST2_t4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
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

bool assign_GovGAST2_t5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
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

bool assign_GovGAST2_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST2_tcd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tcd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST2_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST2_tmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST2_tmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST2_tr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST2_trate(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->trate;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST2_tt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
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

bool assign_GovGAST2_w(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->w;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST2_x(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->x;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST2_y(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->y;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST2_z(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST2* element = dynamic_cast<GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->z;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_GovGAST2_a(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
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

bool get_GovGAST2_af1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovGAST2_af2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovGAST2_b(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
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

bool get_GovGAST2_bf1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovGAST2_bf2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovGAST2_c(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovGAST2_cf2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovGAST2_ecr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovGAST2_etd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovGAST2_k3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovGAST2_k4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovGAST2_k5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovGAST2_k6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovGAST2_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovGAST2_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
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

bool get_GovGAST2_t(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovGAST2_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
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

bool get_GovGAST2_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
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

bool get_GovGAST2_t5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
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

bool get_GovGAST2_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovGAST2_tcd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovGAST2_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovGAST2_tmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovGAST2_tmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovGAST2_tr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovGAST2_trate(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovGAST2_tt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
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

bool get_GovGAST2_w(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->w;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST2_x(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->x;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST2_y(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovGAST2_z(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST2* element = dynamic_cast<const GovGAST2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->z;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char GovGAST2::debugName[] = "GovGAST2";
const char* GovGAST2::debugString() const
{
	return GovGAST2::debugName;
}

void GovGAST2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:GovGAST2", &GovGAST2_factory);
}

void GovGAST2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:GovGAST2.a", &assign_GovGAST2_a);
	assign_map.emplace("cim:GovGAST2.af1", &assign_GovGAST2_af1);
	assign_map.emplace("cim:GovGAST2.af2", &assign_GovGAST2_af2);
	assign_map.emplace("cim:GovGAST2.b", &assign_GovGAST2_b);
	assign_map.emplace("cim:GovGAST2.bf1", &assign_GovGAST2_bf1);
	assign_map.emplace("cim:GovGAST2.bf2", &assign_GovGAST2_bf2);
	assign_map.emplace("cim:GovGAST2.c", &assign_GovGAST2_c);
	assign_map.emplace("cim:GovGAST2.cf2", &assign_GovGAST2_cf2);
	assign_map.emplace("cim:GovGAST2.ecr", &assign_GovGAST2_ecr);
	assign_map.emplace("cim:GovGAST2.etd", &assign_GovGAST2_etd);
	assign_map.emplace("cim:GovGAST2.k3", &assign_GovGAST2_k3);
	assign_map.emplace("cim:GovGAST2.k4", &assign_GovGAST2_k4);
	assign_map.emplace("cim:GovGAST2.k5", &assign_GovGAST2_k5);
	assign_map.emplace("cim:GovGAST2.k6", &assign_GovGAST2_k6);
	assign_map.emplace("cim:GovGAST2.kf", &assign_GovGAST2_kf);
	assign_map.emplace("cim:GovGAST2.mwbase", &assign_GovGAST2_mwbase);
	assign_map.emplace("cim:GovGAST2.t", &assign_GovGAST2_t);
	assign_map.emplace("cim:GovGAST2.t3", &assign_GovGAST2_t3);
	assign_map.emplace("cim:GovGAST2.t4", &assign_GovGAST2_t4);
	assign_map.emplace("cim:GovGAST2.t5", &assign_GovGAST2_t5);
	assign_map.emplace("cim:GovGAST2.tc", &assign_GovGAST2_tc);
	assign_map.emplace("cim:GovGAST2.tcd", &assign_GovGAST2_tcd);
	assign_map.emplace("cim:GovGAST2.tf", &assign_GovGAST2_tf);
	assign_map.emplace("cim:GovGAST2.tmax", &assign_GovGAST2_tmax);
	assign_map.emplace("cim:GovGAST2.tmin", &assign_GovGAST2_tmin);
	assign_map.emplace("cim:GovGAST2.tr", &assign_GovGAST2_tr);
	assign_map.emplace("cim:GovGAST2.trate", &assign_GovGAST2_trate);
	assign_map.emplace("cim:GovGAST2.tt", &assign_GovGAST2_tt);
	assign_map.emplace("cim:GovGAST2.w", &assign_GovGAST2_w);
	assign_map.emplace("cim:GovGAST2.x", &assign_GovGAST2_x);
	assign_map.emplace("cim:GovGAST2.y", &assign_GovGAST2_y);
	assign_map.emplace("cim:GovGAST2.z", &assign_GovGAST2_z);
}

void GovGAST2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovGAST2::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GovGAST2.a", &get_GovGAST2_a);
	get_map.emplace("cim:GovGAST2.af1", &get_GovGAST2_af1);
	get_map.emplace("cim:GovGAST2.af2", &get_GovGAST2_af2);
	get_map.emplace("cim:GovGAST2.b", &get_GovGAST2_b);
	get_map.emplace("cim:GovGAST2.bf1", &get_GovGAST2_bf1);
	get_map.emplace("cim:GovGAST2.bf2", &get_GovGAST2_bf2);
	get_map.emplace("cim:GovGAST2.c", &get_GovGAST2_c);
	get_map.emplace("cim:GovGAST2.cf2", &get_GovGAST2_cf2);
	get_map.emplace("cim:GovGAST2.ecr", &get_GovGAST2_ecr);
	get_map.emplace("cim:GovGAST2.etd", &get_GovGAST2_etd);
	get_map.emplace("cim:GovGAST2.k3", &get_GovGAST2_k3);
	get_map.emplace("cim:GovGAST2.k4", &get_GovGAST2_k4);
	get_map.emplace("cim:GovGAST2.k5", &get_GovGAST2_k5);
	get_map.emplace("cim:GovGAST2.k6", &get_GovGAST2_k6);
	get_map.emplace("cim:GovGAST2.kf", &get_GovGAST2_kf);
	get_map.emplace("cim:GovGAST2.mwbase", &get_GovGAST2_mwbase);
	get_map.emplace("cim:GovGAST2.t", &get_GovGAST2_t);
	get_map.emplace("cim:GovGAST2.t3", &get_GovGAST2_t3);
	get_map.emplace("cim:GovGAST2.t4", &get_GovGAST2_t4);
	get_map.emplace("cim:GovGAST2.t5", &get_GovGAST2_t5);
	get_map.emplace("cim:GovGAST2.tc", &get_GovGAST2_tc);
	get_map.emplace("cim:GovGAST2.tcd", &get_GovGAST2_tcd);
	get_map.emplace("cim:GovGAST2.tf", &get_GovGAST2_tf);
	get_map.emplace("cim:GovGAST2.tmax", &get_GovGAST2_tmax);
	get_map.emplace("cim:GovGAST2.tmin", &get_GovGAST2_tmin);
	get_map.emplace("cim:GovGAST2.tr", &get_GovGAST2_tr);
	get_map.emplace("cim:GovGAST2.trate", &get_GovGAST2_trate);
	get_map.emplace("cim:GovGAST2.tt", &get_GovGAST2_tt);
	get_map.emplace("cim:GovGAST2.w", &get_GovGAST2_w);
	get_map.emplace("cim:GovGAST2.x", &get_GovGAST2_x);
	get_map.emplace("cim:GovGAST2.y", &get_GovGAST2_y);
	get_map.emplace("cim:GovGAST2.z", &get_GovGAST2_z);
}

void GovGAST2::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovGAST2::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner GovGAST2::declare()
{
	return BaseClassDefiner(GovGAST2::addConstructToMap, GovGAST2::addPrimitiveAssignFnsToMap, GovGAST2::addClassAssignFnsToMap, GovGAST2::debugName);
}

namespace CIMPP
{
	BaseClass* GovGAST2_factory()
	{
		return new GovGAST2;
	}
}
