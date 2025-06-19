/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "UnderexcLimIEEE2.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

UnderexcLimIEEE2::UnderexcLimIEEE2() {}
UnderexcLimIEEE2::~UnderexcLimIEEE2() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:UnderexcLimIEEE2.k1", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.k2", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.kfb", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.kuf", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.kui", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.kul", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.p0", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.p1", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.p10", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.p2", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.p3", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.p4", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.p5", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.p6", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.p7", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.p8", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.p9", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.q0", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.q1", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.q10", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.q2", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.q3", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.q4", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.q5", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.q6", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.q7", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.q8", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.q9", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.tu1", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.tu2", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.tu3", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.tu4", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.tul", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.tup", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.tuq", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.tuv", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.vuimax", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.vuimin", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.vulmax", { CGMESProfile::DY, } },
	{ "cim:UnderexcLimIEEE2.vulmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
UnderexcLimIEEE2::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
UnderexcLimIEEE2::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = UnderexcitationLimiterDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_UnderexcLimIEEE2_k1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_k2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_kfb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kfb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_kuf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kuf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_kui(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kui;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_kul(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kul;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_p0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->p0;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_p1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->p1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_p10(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->p10;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_p2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->p2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_p3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->p3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_p4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->p4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_p5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->p5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_p6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->p6;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_p7(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->p7;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_p8(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->p8;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_p9(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->p9;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_q0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->q0;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_q1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->q1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_q10(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->q10;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_q2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->q2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_q3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->q3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_q4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->q4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_q5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->q5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_q6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->q6;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_q7(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->q7;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_q8(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->q8;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_q9(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->q9;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_tu1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tu1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_tu2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tu2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_tu3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tu3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_tu4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tu4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_tul(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tul;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_tup(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tup;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_tuq(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tuq;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_tuv(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tuv;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_vuimax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vuimax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_vuimin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vuimin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_vulmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vulmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_UnderexcLimIEEE2_vulmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	UnderexcLimIEEE2* element = dynamic_cast<UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vulmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_UnderexcLimIEEE2_k1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_UnderexcLimIEEE2_k2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_UnderexcLimIEEE2_kfb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kfb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_kuf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kuf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_kui(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kui;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_kul(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kul;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_p0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->p0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_p1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->p1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_p10(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->p10;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_p2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->p2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_p3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->p3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_p4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->p4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_p5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->p5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_p6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->p6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_p7(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->p7;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_p8(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->p8;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_p9(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->p9;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_q0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->q0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_q1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->q1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_q10(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->q10;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_q2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->q2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_q3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->q3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_q4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->q4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_q5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->q5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_q6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->q6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_q7(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->q7;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_q8(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->q8;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_q9(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->q9;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_tu1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tu1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_tu2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tu2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_tu3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tu3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_tu4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tu4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_tul(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tul;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_tup(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tup;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_tuq(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tuq;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_tuv(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tuv;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_vuimax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vuimax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_vuimin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vuimin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_vulmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vulmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_UnderexcLimIEEE2_vulmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const UnderexcLimIEEE2* element = dynamic_cast<const UnderexcLimIEEE2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vulmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char UnderexcLimIEEE2::debugName[] = "UnderexcLimIEEE2";
const char* UnderexcLimIEEE2::debugString() const
{
	return UnderexcLimIEEE2::debugName;
}

void UnderexcLimIEEE2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:UnderexcLimIEEE2", &UnderexcLimIEEE2_factory);
}

void UnderexcLimIEEE2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:UnderexcLimIEEE2.k1", &assign_UnderexcLimIEEE2_k1);
	assign_map.emplace("cim:UnderexcLimIEEE2.k2", &assign_UnderexcLimIEEE2_k2);
	assign_map.emplace("cim:UnderexcLimIEEE2.kfb", &assign_UnderexcLimIEEE2_kfb);
	assign_map.emplace("cim:UnderexcLimIEEE2.kuf", &assign_UnderexcLimIEEE2_kuf);
	assign_map.emplace("cim:UnderexcLimIEEE2.kui", &assign_UnderexcLimIEEE2_kui);
	assign_map.emplace("cim:UnderexcLimIEEE2.kul", &assign_UnderexcLimIEEE2_kul);
	assign_map.emplace("cim:UnderexcLimIEEE2.p0", &assign_UnderexcLimIEEE2_p0);
	assign_map.emplace("cim:UnderexcLimIEEE2.p1", &assign_UnderexcLimIEEE2_p1);
	assign_map.emplace("cim:UnderexcLimIEEE2.p10", &assign_UnderexcLimIEEE2_p10);
	assign_map.emplace("cim:UnderexcLimIEEE2.p2", &assign_UnderexcLimIEEE2_p2);
	assign_map.emplace("cim:UnderexcLimIEEE2.p3", &assign_UnderexcLimIEEE2_p3);
	assign_map.emplace("cim:UnderexcLimIEEE2.p4", &assign_UnderexcLimIEEE2_p4);
	assign_map.emplace("cim:UnderexcLimIEEE2.p5", &assign_UnderexcLimIEEE2_p5);
	assign_map.emplace("cim:UnderexcLimIEEE2.p6", &assign_UnderexcLimIEEE2_p6);
	assign_map.emplace("cim:UnderexcLimIEEE2.p7", &assign_UnderexcLimIEEE2_p7);
	assign_map.emplace("cim:UnderexcLimIEEE2.p8", &assign_UnderexcLimIEEE2_p8);
	assign_map.emplace("cim:UnderexcLimIEEE2.p9", &assign_UnderexcLimIEEE2_p9);
	assign_map.emplace("cim:UnderexcLimIEEE2.q0", &assign_UnderexcLimIEEE2_q0);
	assign_map.emplace("cim:UnderexcLimIEEE2.q1", &assign_UnderexcLimIEEE2_q1);
	assign_map.emplace("cim:UnderexcLimIEEE2.q10", &assign_UnderexcLimIEEE2_q10);
	assign_map.emplace("cim:UnderexcLimIEEE2.q2", &assign_UnderexcLimIEEE2_q2);
	assign_map.emplace("cim:UnderexcLimIEEE2.q3", &assign_UnderexcLimIEEE2_q3);
	assign_map.emplace("cim:UnderexcLimIEEE2.q4", &assign_UnderexcLimIEEE2_q4);
	assign_map.emplace("cim:UnderexcLimIEEE2.q5", &assign_UnderexcLimIEEE2_q5);
	assign_map.emplace("cim:UnderexcLimIEEE2.q6", &assign_UnderexcLimIEEE2_q6);
	assign_map.emplace("cim:UnderexcLimIEEE2.q7", &assign_UnderexcLimIEEE2_q7);
	assign_map.emplace("cim:UnderexcLimIEEE2.q8", &assign_UnderexcLimIEEE2_q8);
	assign_map.emplace("cim:UnderexcLimIEEE2.q9", &assign_UnderexcLimIEEE2_q9);
	assign_map.emplace("cim:UnderexcLimIEEE2.tu1", &assign_UnderexcLimIEEE2_tu1);
	assign_map.emplace("cim:UnderexcLimIEEE2.tu2", &assign_UnderexcLimIEEE2_tu2);
	assign_map.emplace("cim:UnderexcLimIEEE2.tu3", &assign_UnderexcLimIEEE2_tu3);
	assign_map.emplace("cim:UnderexcLimIEEE2.tu4", &assign_UnderexcLimIEEE2_tu4);
	assign_map.emplace("cim:UnderexcLimIEEE2.tul", &assign_UnderexcLimIEEE2_tul);
	assign_map.emplace("cim:UnderexcLimIEEE2.tup", &assign_UnderexcLimIEEE2_tup);
	assign_map.emplace("cim:UnderexcLimIEEE2.tuq", &assign_UnderexcLimIEEE2_tuq);
	assign_map.emplace("cim:UnderexcLimIEEE2.tuv", &assign_UnderexcLimIEEE2_tuv);
	assign_map.emplace("cim:UnderexcLimIEEE2.vuimax", &assign_UnderexcLimIEEE2_vuimax);
	assign_map.emplace("cim:UnderexcLimIEEE2.vuimin", &assign_UnderexcLimIEEE2_vuimin);
	assign_map.emplace("cim:UnderexcLimIEEE2.vulmax", &assign_UnderexcLimIEEE2_vulmax);
	assign_map.emplace("cim:UnderexcLimIEEE2.vulmin", &assign_UnderexcLimIEEE2_vulmin);
}

void UnderexcLimIEEE2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void UnderexcLimIEEE2::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:UnderexcLimIEEE2.k1", &get_UnderexcLimIEEE2_k1);
	get_map.emplace("cim:UnderexcLimIEEE2.k2", &get_UnderexcLimIEEE2_k2);
	get_map.emplace("cim:UnderexcLimIEEE2.kfb", &get_UnderexcLimIEEE2_kfb);
	get_map.emplace("cim:UnderexcLimIEEE2.kuf", &get_UnderexcLimIEEE2_kuf);
	get_map.emplace("cim:UnderexcLimIEEE2.kui", &get_UnderexcLimIEEE2_kui);
	get_map.emplace("cim:UnderexcLimIEEE2.kul", &get_UnderexcLimIEEE2_kul);
	get_map.emplace("cim:UnderexcLimIEEE2.p0", &get_UnderexcLimIEEE2_p0);
	get_map.emplace("cim:UnderexcLimIEEE2.p1", &get_UnderexcLimIEEE2_p1);
	get_map.emplace("cim:UnderexcLimIEEE2.p10", &get_UnderexcLimIEEE2_p10);
	get_map.emplace("cim:UnderexcLimIEEE2.p2", &get_UnderexcLimIEEE2_p2);
	get_map.emplace("cim:UnderexcLimIEEE2.p3", &get_UnderexcLimIEEE2_p3);
	get_map.emplace("cim:UnderexcLimIEEE2.p4", &get_UnderexcLimIEEE2_p4);
	get_map.emplace("cim:UnderexcLimIEEE2.p5", &get_UnderexcLimIEEE2_p5);
	get_map.emplace("cim:UnderexcLimIEEE2.p6", &get_UnderexcLimIEEE2_p6);
	get_map.emplace("cim:UnderexcLimIEEE2.p7", &get_UnderexcLimIEEE2_p7);
	get_map.emplace("cim:UnderexcLimIEEE2.p8", &get_UnderexcLimIEEE2_p8);
	get_map.emplace("cim:UnderexcLimIEEE2.p9", &get_UnderexcLimIEEE2_p9);
	get_map.emplace("cim:UnderexcLimIEEE2.q0", &get_UnderexcLimIEEE2_q0);
	get_map.emplace("cim:UnderexcLimIEEE2.q1", &get_UnderexcLimIEEE2_q1);
	get_map.emplace("cim:UnderexcLimIEEE2.q10", &get_UnderexcLimIEEE2_q10);
	get_map.emplace("cim:UnderexcLimIEEE2.q2", &get_UnderexcLimIEEE2_q2);
	get_map.emplace("cim:UnderexcLimIEEE2.q3", &get_UnderexcLimIEEE2_q3);
	get_map.emplace("cim:UnderexcLimIEEE2.q4", &get_UnderexcLimIEEE2_q4);
	get_map.emplace("cim:UnderexcLimIEEE2.q5", &get_UnderexcLimIEEE2_q5);
	get_map.emplace("cim:UnderexcLimIEEE2.q6", &get_UnderexcLimIEEE2_q6);
	get_map.emplace("cim:UnderexcLimIEEE2.q7", &get_UnderexcLimIEEE2_q7);
	get_map.emplace("cim:UnderexcLimIEEE2.q8", &get_UnderexcLimIEEE2_q8);
	get_map.emplace("cim:UnderexcLimIEEE2.q9", &get_UnderexcLimIEEE2_q9);
	get_map.emplace("cim:UnderexcLimIEEE2.tu1", &get_UnderexcLimIEEE2_tu1);
	get_map.emplace("cim:UnderexcLimIEEE2.tu2", &get_UnderexcLimIEEE2_tu2);
	get_map.emplace("cim:UnderexcLimIEEE2.tu3", &get_UnderexcLimIEEE2_tu3);
	get_map.emplace("cim:UnderexcLimIEEE2.tu4", &get_UnderexcLimIEEE2_tu4);
	get_map.emplace("cim:UnderexcLimIEEE2.tul", &get_UnderexcLimIEEE2_tul);
	get_map.emplace("cim:UnderexcLimIEEE2.tup", &get_UnderexcLimIEEE2_tup);
	get_map.emplace("cim:UnderexcLimIEEE2.tuq", &get_UnderexcLimIEEE2_tuq);
	get_map.emplace("cim:UnderexcLimIEEE2.tuv", &get_UnderexcLimIEEE2_tuv);
	get_map.emplace("cim:UnderexcLimIEEE2.vuimax", &get_UnderexcLimIEEE2_vuimax);
	get_map.emplace("cim:UnderexcLimIEEE2.vuimin", &get_UnderexcLimIEEE2_vuimin);
	get_map.emplace("cim:UnderexcLimIEEE2.vulmax", &get_UnderexcLimIEEE2_vulmax);
	get_map.emplace("cim:UnderexcLimIEEE2.vulmin", &get_UnderexcLimIEEE2_vulmin);
}

void UnderexcLimIEEE2::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addClassGetFnsToMap(get_map);
}

void UnderexcLimIEEE2::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner UnderexcLimIEEE2::declare()
{
	return BaseClassDefiner(UnderexcLimIEEE2::addConstructToMap, UnderexcLimIEEE2::addPrimitiveAssignFnsToMap, UnderexcLimIEEE2::addClassAssignFnsToMap, UnderexcLimIEEE2::debugName);
}

namespace CIMPP
{
	BaseClass* UnderexcLimIEEE2_factory()
	{
		return new UnderexcLimIEEE2;
	}
}
