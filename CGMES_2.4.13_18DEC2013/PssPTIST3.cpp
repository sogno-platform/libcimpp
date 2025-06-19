/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PssPTIST3.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

PssPTIST3::PssPTIST3() {}
PssPTIST3::~PssPTIST3() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PssPTIST3.a0", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.a1", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.a2", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.a3", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.a4", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.a5", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.al", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.athres", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.b0", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.b1", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.b2", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.b3", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.b4", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.b5", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.dl", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.dtc", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.dtf", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.dtp", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.isw", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.k", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.lthres", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.m", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.nav", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.ncl", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.ncr", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.pmin", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.t1", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.t2", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.t3", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.t4", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.t5", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.t6", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.tf", { CGMESProfile::DY, } },
	{ "cim:PssPTIST3.tp", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
PssPTIST3::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PssPTIST3::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PowerSystemStabilizerDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_PssPTIST3_a0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a0;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST3_a1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST3_a2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST3_a3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST3_a4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST3_a5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST3_al(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->al;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST3_athres(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->athres;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST3_b0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->b0;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST3_b1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->b1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST3_b2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->b2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST3_b3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->b3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST3_b4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->b4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST3_b5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->b5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST3_dl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dl;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST3_dtc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dtc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST3_dtf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dtf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST3_dtp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dtp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST3_isw(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->isw;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST3_k(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST3_lthres(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->lthres;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST3_m(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->m;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST3_nav(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->nav;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST3_ncl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ncl;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST3_ncr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ncr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_PssPTIST3_pmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
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

bool assign_PssPTIST3_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
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

bool assign_PssPTIST3_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
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

bool assign_PssPTIST3_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
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

bool assign_PssPTIST3_t4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
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

bool assign_PssPTIST3_t5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
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

bool assign_PssPTIST3_t6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
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

bool assign_PssPTIST3_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
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

bool assign_PssPTIST3_tp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PssPTIST3* element = dynamic_cast<PssPTIST3*>(BaseClass_ptr1);
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

bool get_PssPTIST3_a0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->a0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST3_a1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->a1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST3_a2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->a2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST3_a3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->a3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST3_a4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->a4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST3_a5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->a5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST3_al(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->al;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST3_athres(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->athres;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST3_b0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->b0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST3_b1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->b1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST3_b2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->b2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST3_b3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->b3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST3_b4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->b4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST3_b5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->b5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST3_dl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST3_dtc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dtc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST3_dtf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dtf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST3_dtp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dtp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST3_isw(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->isw;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST3_k(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_PssPTIST3_lthres(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->lthres;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST3_m(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->m;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST3_nav(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->nav;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST3_ncl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ncl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST3_ncr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ncr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_PssPTIST3_pmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
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

bool get_PssPTIST3_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
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

bool get_PssPTIST3_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
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

bool get_PssPTIST3_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
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

bool get_PssPTIST3_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
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

bool get_PssPTIST3_t5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
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

bool get_PssPTIST3_t6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
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

bool get_PssPTIST3_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
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

bool get_PssPTIST3_tp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PssPTIST3* element = dynamic_cast<const PssPTIST3*>(BaseClass_ptr1);
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

const char PssPTIST3::debugName[] = "PssPTIST3";
const char* PssPTIST3::debugString() const
{
	return PssPTIST3::debugName;
}

void PssPTIST3::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:PssPTIST3", &PssPTIST3_factory);
}

void PssPTIST3::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:PssPTIST3.a0", &assign_PssPTIST3_a0);
	assign_map.emplace("cim:PssPTIST3.a1", &assign_PssPTIST3_a1);
	assign_map.emplace("cim:PssPTIST3.a2", &assign_PssPTIST3_a2);
	assign_map.emplace("cim:PssPTIST3.a3", &assign_PssPTIST3_a3);
	assign_map.emplace("cim:PssPTIST3.a4", &assign_PssPTIST3_a4);
	assign_map.emplace("cim:PssPTIST3.a5", &assign_PssPTIST3_a5);
	assign_map.emplace("cim:PssPTIST3.al", &assign_PssPTIST3_al);
	assign_map.emplace("cim:PssPTIST3.athres", &assign_PssPTIST3_athres);
	assign_map.emplace("cim:PssPTIST3.b0", &assign_PssPTIST3_b0);
	assign_map.emplace("cim:PssPTIST3.b1", &assign_PssPTIST3_b1);
	assign_map.emplace("cim:PssPTIST3.b2", &assign_PssPTIST3_b2);
	assign_map.emplace("cim:PssPTIST3.b3", &assign_PssPTIST3_b3);
	assign_map.emplace("cim:PssPTIST3.b4", &assign_PssPTIST3_b4);
	assign_map.emplace("cim:PssPTIST3.b5", &assign_PssPTIST3_b5);
	assign_map.emplace("cim:PssPTIST3.dl", &assign_PssPTIST3_dl);
	assign_map.emplace("cim:PssPTIST3.dtc", &assign_PssPTIST3_dtc);
	assign_map.emplace("cim:PssPTIST3.dtf", &assign_PssPTIST3_dtf);
	assign_map.emplace("cim:PssPTIST3.dtp", &assign_PssPTIST3_dtp);
	assign_map.emplace("cim:PssPTIST3.isw", &assign_PssPTIST3_isw);
	assign_map.emplace("cim:PssPTIST3.k", &assign_PssPTIST3_k);
	assign_map.emplace("cim:PssPTIST3.lthres", &assign_PssPTIST3_lthres);
	assign_map.emplace("cim:PssPTIST3.m", &assign_PssPTIST3_m);
	assign_map.emplace("cim:PssPTIST3.nav", &assign_PssPTIST3_nav);
	assign_map.emplace("cim:PssPTIST3.ncl", &assign_PssPTIST3_ncl);
	assign_map.emplace("cim:PssPTIST3.ncr", &assign_PssPTIST3_ncr);
	assign_map.emplace("cim:PssPTIST3.pmin", &assign_PssPTIST3_pmin);
	assign_map.emplace("cim:PssPTIST3.t1", &assign_PssPTIST3_t1);
	assign_map.emplace("cim:PssPTIST3.t2", &assign_PssPTIST3_t2);
	assign_map.emplace("cim:PssPTIST3.t3", &assign_PssPTIST3_t3);
	assign_map.emplace("cim:PssPTIST3.t4", &assign_PssPTIST3_t4);
	assign_map.emplace("cim:PssPTIST3.t5", &assign_PssPTIST3_t5);
	assign_map.emplace("cim:PssPTIST3.t6", &assign_PssPTIST3_t6);
	assign_map.emplace("cim:PssPTIST3.tf", &assign_PssPTIST3_tf);
	assign_map.emplace("cim:PssPTIST3.tp", &assign_PssPTIST3_tp);
}

void PssPTIST3::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PssPTIST3::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:PssPTIST3.a0", &get_PssPTIST3_a0);
	get_map.emplace("cim:PssPTIST3.a1", &get_PssPTIST3_a1);
	get_map.emplace("cim:PssPTIST3.a2", &get_PssPTIST3_a2);
	get_map.emplace("cim:PssPTIST3.a3", &get_PssPTIST3_a3);
	get_map.emplace("cim:PssPTIST3.a4", &get_PssPTIST3_a4);
	get_map.emplace("cim:PssPTIST3.a5", &get_PssPTIST3_a5);
	get_map.emplace("cim:PssPTIST3.al", &get_PssPTIST3_al);
	get_map.emplace("cim:PssPTIST3.athres", &get_PssPTIST3_athres);
	get_map.emplace("cim:PssPTIST3.b0", &get_PssPTIST3_b0);
	get_map.emplace("cim:PssPTIST3.b1", &get_PssPTIST3_b1);
	get_map.emplace("cim:PssPTIST3.b2", &get_PssPTIST3_b2);
	get_map.emplace("cim:PssPTIST3.b3", &get_PssPTIST3_b3);
	get_map.emplace("cim:PssPTIST3.b4", &get_PssPTIST3_b4);
	get_map.emplace("cim:PssPTIST3.b5", &get_PssPTIST3_b5);
	get_map.emplace("cim:PssPTIST3.dl", &get_PssPTIST3_dl);
	get_map.emplace("cim:PssPTIST3.dtc", &get_PssPTIST3_dtc);
	get_map.emplace("cim:PssPTIST3.dtf", &get_PssPTIST3_dtf);
	get_map.emplace("cim:PssPTIST3.dtp", &get_PssPTIST3_dtp);
	get_map.emplace("cim:PssPTIST3.isw", &get_PssPTIST3_isw);
	get_map.emplace("cim:PssPTIST3.k", &get_PssPTIST3_k);
	get_map.emplace("cim:PssPTIST3.lthres", &get_PssPTIST3_lthres);
	get_map.emplace("cim:PssPTIST3.m", &get_PssPTIST3_m);
	get_map.emplace("cim:PssPTIST3.nav", &get_PssPTIST3_nav);
	get_map.emplace("cim:PssPTIST3.ncl", &get_PssPTIST3_ncl);
	get_map.emplace("cim:PssPTIST3.ncr", &get_PssPTIST3_ncr);
	get_map.emplace("cim:PssPTIST3.pmin", &get_PssPTIST3_pmin);
	get_map.emplace("cim:PssPTIST3.t1", &get_PssPTIST3_t1);
	get_map.emplace("cim:PssPTIST3.t2", &get_PssPTIST3_t2);
	get_map.emplace("cim:PssPTIST3.t3", &get_PssPTIST3_t3);
	get_map.emplace("cim:PssPTIST3.t4", &get_PssPTIST3_t4);
	get_map.emplace("cim:PssPTIST3.t5", &get_PssPTIST3_t5);
	get_map.emplace("cim:PssPTIST3.t6", &get_PssPTIST3_t6);
	get_map.emplace("cim:PssPTIST3.tf", &get_PssPTIST3_tf);
	get_map.emplace("cim:PssPTIST3.tp", &get_PssPTIST3_tp);
}

void PssPTIST3::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addClassGetFnsToMap(get_map);
}

void PssPTIST3::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PssPTIST3::declare()
{
	return BaseClassDefiner(PssPTIST3::addConstructToMap, PssPTIST3::addPrimitiveAssignFnsToMap, PssPTIST3::addClassAssignFnsToMap, PssPTIST3::debugName);
}

namespace CIMPP
{
	BaseClass* PssPTIST3_factory()
	{
		return new PssPTIST3;
	}
}
