/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PssPTIST3.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		PssPTIST3(),
		"http://iec.ch/TC57/CIM100#",
		{
			CGMESProfile::DY,
		},
		CGMESProfile::DY
	);
	return ClassDetails;
}

static const std::map<std::string, AttrDetails>& getClassAttrDetailsMap()
{
	static const std::map<std::string, AttrDetails> ClassAttrDetailsMap =
	{
		{ "PssPTIST3.a0", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.a1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.a2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.a3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.a4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.a5", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.al", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.athres", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.b0", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.b1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.b2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.b3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.b4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.b5", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.dl", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.dtc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.dtf", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.dtp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.isw", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.k", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.lthres", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.m", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.nav", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.ncl", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.ncr", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.pmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.t1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.t2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.t3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.t4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.t5", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.t6", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.tf", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "PssPTIST3.tp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

PssPTIST3::PssPTIST3() {}
PssPTIST3::~PssPTIST3() {}

const std::list<std::string>& PssPTIST3::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& PssPTIST3::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& PssPTIST3::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& PssPTIST3::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& PssPTIST3::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& PssPTIST3::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& PssPTIST3::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
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
	factory_map.emplace("PssPTIST3", &PssPTIST3_factory);
}

void PssPTIST3::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("PssPTIST3.a0", &assign_PssPTIST3_a0);
	assign_map.emplace("PssPTIST3.a1", &assign_PssPTIST3_a1);
	assign_map.emplace("PssPTIST3.a2", &assign_PssPTIST3_a2);
	assign_map.emplace("PssPTIST3.a3", &assign_PssPTIST3_a3);
	assign_map.emplace("PssPTIST3.a4", &assign_PssPTIST3_a4);
	assign_map.emplace("PssPTIST3.a5", &assign_PssPTIST3_a5);
	assign_map.emplace("PssPTIST3.al", &assign_PssPTIST3_al);
	assign_map.emplace("PssPTIST3.athres", &assign_PssPTIST3_athres);
	assign_map.emplace("PssPTIST3.b0", &assign_PssPTIST3_b0);
	assign_map.emplace("PssPTIST3.b1", &assign_PssPTIST3_b1);
	assign_map.emplace("PssPTIST3.b2", &assign_PssPTIST3_b2);
	assign_map.emplace("PssPTIST3.b3", &assign_PssPTIST3_b3);
	assign_map.emplace("PssPTIST3.b4", &assign_PssPTIST3_b4);
	assign_map.emplace("PssPTIST3.b5", &assign_PssPTIST3_b5);
	assign_map.emplace("PssPTIST3.dl", &assign_PssPTIST3_dl);
	assign_map.emplace("PssPTIST3.dtc", &assign_PssPTIST3_dtc);
	assign_map.emplace("PssPTIST3.dtf", &assign_PssPTIST3_dtf);
	assign_map.emplace("PssPTIST3.dtp", &assign_PssPTIST3_dtp);
	assign_map.emplace("PssPTIST3.isw", &assign_PssPTIST3_isw);
	assign_map.emplace("PssPTIST3.k", &assign_PssPTIST3_k);
	assign_map.emplace("PssPTIST3.lthres", &assign_PssPTIST3_lthres);
	assign_map.emplace("PssPTIST3.m", &assign_PssPTIST3_m);
	assign_map.emplace("PssPTIST3.nav", &assign_PssPTIST3_nav);
	assign_map.emplace("PssPTIST3.ncl", &assign_PssPTIST3_ncl);
	assign_map.emplace("PssPTIST3.ncr", &assign_PssPTIST3_ncr);
	assign_map.emplace("PssPTIST3.pmin", &assign_PssPTIST3_pmin);
	assign_map.emplace("PssPTIST3.t1", &assign_PssPTIST3_t1);
	assign_map.emplace("PssPTIST3.t2", &assign_PssPTIST3_t2);
	assign_map.emplace("PssPTIST3.t3", &assign_PssPTIST3_t3);
	assign_map.emplace("PssPTIST3.t4", &assign_PssPTIST3_t4);
	assign_map.emplace("PssPTIST3.t5", &assign_PssPTIST3_t5);
	assign_map.emplace("PssPTIST3.t6", &assign_PssPTIST3_t6);
	assign_map.emplace("PssPTIST3.tf", &assign_PssPTIST3_tf);
	assign_map.emplace("PssPTIST3.tp", &assign_PssPTIST3_tp);
}

void PssPTIST3::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void PssPTIST3::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("PssPTIST3.a0", &get_PssPTIST3_a0);
	get_map.emplace("PssPTIST3.a1", &get_PssPTIST3_a1);
	get_map.emplace("PssPTIST3.a2", &get_PssPTIST3_a2);
	get_map.emplace("PssPTIST3.a3", &get_PssPTIST3_a3);
	get_map.emplace("PssPTIST3.a4", &get_PssPTIST3_a4);
	get_map.emplace("PssPTIST3.a5", &get_PssPTIST3_a5);
	get_map.emplace("PssPTIST3.al", &get_PssPTIST3_al);
	get_map.emplace("PssPTIST3.athres", &get_PssPTIST3_athres);
	get_map.emplace("PssPTIST3.b0", &get_PssPTIST3_b0);
	get_map.emplace("PssPTIST3.b1", &get_PssPTIST3_b1);
	get_map.emplace("PssPTIST3.b2", &get_PssPTIST3_b2);
	get_map.emplace("PssPTIST3.b3", &get_PssPTIST3_b3);
	get_map.emplace("PssPTIST3.b4", &get_PssPTIST3_b4);
	get_map.emplace("PssPTIST3.b5", &get_PssPTIST3_b5);
	get_map.emplace("PssPTIST3.dl", &get_PssPTIST3_dl);
	get_map.emplace("PssPTIST3.dtc", &get_PssPTIST3_dtc);
	get_map.emplace("PssPTIST3.dtf", &get_PssPTIST3_dtf);
	get_map.emplace("PssPTIST3.dtp", &get_PssPTIST3_dtp);
	get_map.emplace("PssPTIST3.isw", &get_PssPTIST3_isw);
	get_map.emplace("PssPTIST3.k", &get_PssPTIST3_k);
	get_map.emplace("PssPTIST3.lthres", &get_PssPTIST3_lthres);
	get_map.emplace("PssPTIST3.m", &get_PssPTIST3_m);
	get_map.emplace("PssPTIST3.nav", &get_PssPTIST3_nav);
	get_map.emplace("PssPTIST3.ncl", &get_PssPTIST3_ncl);
	get_map.emplace("PssPTIST3.ncr", &get_PssPTIST3_ncr);
	get_map.emplace("PssPTIST3.pmin", &get_PssPTIST3_pmin);
	get_map.emplace("PssPTIST3.t1", &get_PssPTIST3_t1);
	get_map.emplace("PssPTIST3.t2", &get_PssPTIST3_t2);
	get_map.emplace("PssPTIST3.t3", &get_PssPTIST3_t3);
	get_map.emplace("PssPTIST3.t4", &get_PssPTIST3_t4);
	get_map.emplace("PssPTIST3.t5", &get_PssPTIST3_t5);
	get_map.emplace("PssPTIST3.t6", &get_PssPTIST3_t6);
	get_map.emplace("PssPTIST3.tf", &get_PssPTIST3_tf);
	get_map.emplace("PssPTIST3.tp", &get_PssPTIST3_tp);
}

void PssPTIST3::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addClassGetFnsToMap(get_map);
}

void PssPTIST3::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addEnumGetFnsToMap(get_map);
}

bool PssPTIST3::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "PssPTIST3" &&
		dynamic_cast<PssPTIST3*>(otherObject) != nullptr;
}

const BaseClassDefiner PssPTIST3::declare()
{
	return BaseClassDefiner(PssPTIST3::addConstructToMap, PssPTIST3::addPrimitiveAssignFnsToMap, PssPTIST3::addClassAssignFnsToMap, PssPTIST3::debugName);
}

std::map<std::string, AttrDetails> PssPTIST3::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = PowerSystemStabilizerDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* PssPTIST3_factory()
	{
		return new PssPTIST3;
	}
}
