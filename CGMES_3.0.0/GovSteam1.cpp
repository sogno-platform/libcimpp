/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovSteam1.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GovSteam1(),
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
		{ "GovSteam1.db1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.db2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.eps", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.gv1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.gv2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.gv3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.gv4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.gv5", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.gv6", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.k", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.k1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.k2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.k3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.k4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.k5", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.k6", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.k7", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.k8", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.mwbase", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.pgv1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.pgv2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.pgv3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.pgv4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.pgv5", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.pgv6", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.pmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.pmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.sdb1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.sdb2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.t1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.t2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.t3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.t4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.t5", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.t6", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.t7", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.uc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.uo", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam1.valve", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

GovSteam1::GovSteam1() {}
GovSteam1::~GovSteam1() {}

const std::list<std::string>& GovSteam1::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GovSteam1::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GovSteam1::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GovSteam1::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GovSteam1::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GovSteam1::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GovSteam1::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_GovSteam1_db1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_db2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_eps(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_gv1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_gv2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_gv3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_gv4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_gv5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_gv6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_k(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_k1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_k2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_k3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_k4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_k5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_k6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_k7(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k7;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteam1_k8(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k8;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteam1_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_pgv1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_pgv2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_pgv3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_pgv4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_pgv5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_pgv6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_pmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteam1_pmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_sdb1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->sdb1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteam1_sdb2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->sdb2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteam1_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_t4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_t5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_t6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
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

bool assign_GovSteam1_t7(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t7;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteam1_uc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->uc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteam1_uo(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->uo;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteam1_valve(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam1* element = dynamic_cast<GovSteam1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->valve;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_GovSteam1_db1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_db2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_eps(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_gv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_gv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_gv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_gv4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_gv5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_gv6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_k(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_k1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_k2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_k3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_k4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_k5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_k6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_k7(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k7;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteam1_k8(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k8;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteam1_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_pgv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_pgv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_pgv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_pgv4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_pgv5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_pgv6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_pmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovSteam1_pmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_sdb1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->sdb1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteam1_sdb2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->sdb2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteam1_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_t5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_t6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
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

bool get_GovSteam1_t7(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t7;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteam1_uc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovSteam1_uo(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovSteam1_valve(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam1* element = dynamic_cast<const GovSteam1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->valve;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char GovSteam1::debugName[] = "GovSteam1";
const char* GovSteam1::debugString() const
{
	return GovSteam1::debugName;
}

void GovSteam1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("GovSteam1", &GovSteam1_factory);
}

void GovSteam1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("GovSteam1.db1", &assign_GovSteam1_db1);
	assign_map.emplace("GovSteam1.db2", &assign_GovSteam1_db2);
	assign_map.emplace("GovSteam1.eps", &assign_GovSteam1_eps);
	assign_map.emplace("GovSteam1.gv1", &assign_GovSteam1_gv1);
	assign_map.emplace("GovSteam1.gv2", &assign_GovSteam1_gv2);
	assign_map.emplace("GovSteam1.gv3", &assign_GovSteam1_gv3);
	assign_map.emplace("GovSteam1.gv4", &assign_GovSteam1_gv4);
	assign_map.emplace("GovSteam1.gv5", &assign_GovSteam1_gv5);
	assign_map.emplace("GovSteam1.gv6", &assign_GovSteam1_gv6);
	assign_map.emplace("GovSteam1.k", &assign_GovSteam1_k);
	assign_map.emplace("GovSteam1.k1", &assign_GovSteam1_k1);
	assign_map.emplace("GovSteam1.k2", &assign_GovSteam1_k2);
	assign_map.emplace("GovSteam1.k3", &assign_GovSteam1_k3);
	assign_map.emplace("GovSteam1.k4", &assign_GovSteam1_k4);
	assign_map.emplace("GovSteam1.k5", &assign_GovSteam1_k5);
	assign_map.emplace("GovSteam1.k6", &assign_GovSteam1_k6);
	assign_map.emplace("GovSteam1.k7", &assign_GovSteam1_k7);
	assign_map.emplace("GovSteam1.k8", &assign_GovSteam1_k8);
	assign_map.emplace("GovSteam1.mwbase", &assign_GovSteam1_mwbase);
	assign_map.emplace("GovSteam1.pgv1", &assign_GovSteam1_pgv1);
	assign_map.emplace("GovSteam1.pgv2", &assign_GovSteam1_pgv2);
	assign_map.emplace("GovSteam1.pgv3", &assign_GovSteam1_pgv3);
	assign_map.emplace("GovSteam1.pgv4", &assign_GovSteam1_pgv4);
	assign_map.emplace("GovSteam1.pgv5", &assign_GovSteam1_pgv5);
	assign_map.emplace("GovSteam1.pgv6", &assign_GovSteam1_pgv6);
	assign_map.emplace("GovSteam1.pmax", &assign_GovSteam1_pmax);
	assign_map.emplace("GovSteam1.pmin", &assign_GovSteam1_pmin);
	assign_map.emplace("GovSteam1.sdb1", &assign_GovSteam1_sdb1);
	assign_map.emplace("GovSteam1.sdb2", &assign_GovSteam1_sdb2);
	assign_map.emplace("GovSteam1.t1", &assign_GovSteam1_t1);
	assign_map.emplace("GovSteam1.t2", &assign_GovSteam1_t2);
	assign_map.emplace("GovSteam1.t3", &assign_GovSteam1_t3);
	assign_map.emplace("GovSteam1.t4", &assign_GovSteam1_t4);
	assign_map.emplace("GovSteam1.t5", &assign_GovSteam1_t5);
	assign_map.emplace("GovSteam1.t6", &assign_GovSteam1_t6);
	assign_map.emplace("GovSteam1.t7", &assign_GovSteam1_t7);
	assign_map.emplace("GovSteam1.uc", &assign_GovSteam1_uc);
	assign_map.emplace("GovSteam1.uo", &assign_GovSteam1_uo);
	assign_map.emplace("GovSteam1.valve", &assign_GovSteam1_valve);
}

void GovSteam1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovSteam1::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("GovSteam1.db1", &get_GovSteam1_db1);
	get_map.emplace("GovSteam1.db2", &get_GovSteam1_db2);
	get_map.emplace("GovSteam1.eps", &get_GovSteam1_eps);
	get_map.emplace("GovSteam1.gv1", &get_GovSteam1_gv1);
	get_map.emplace("GovSteam1.gv2", &get_GovSteam1_gv2);
	get_map.emplace("GovSteam1.gv3", &get_GovSteam1_gv3);
	get_map.emplace("GovSteam1.gv4", &get_GovSteam1_gv4);
	get_map.emplace("GovSteam1.gv5", &get_GovSteam1_gv5);
	get_map.emplace("GovSteam1.gv6", &get_GovSteam1_gv6);
	get_map.emplace("GovSteam1.k", &get_GovSteam1_k);
	get_map.emplace("GovSteam1.k1", &get_GovSteam1_k1);
	get_map.emplace("GovSteam1.k2", &get_GovSteam1_k2);
	get_map.emplace("GovSteam1.k3", &get_GovSteam1_k3);
	get_map.emplace("GovSteam1.k4", &get_GovSteam1_k4);
	get_map.emplace("GovSteam1.k5", &get_GovSteam1_k5);
	get_map.emplace("GovSteam1.k6", &get_GovSteam1_k6);
	get_map.emplace("GovSteam1.k7", &get_GovSteam1_k7);
	get_map.emplace("GovSteam1.k8", &get_GovSteam1_k8);
	get_map.emplace("GovSteam1.mwbase", &get_GovSteam1_mwbase);
	get_map.emplace("GovSteam1.pgv1", &get_GovSteam1_pgv1);
	get_map.emplace("GovSteam1.pgv2", &get_GovSteam1_pgv2);
	get_map.emplace("GovSteam1.pgv3", &get_GovSteam1_pgv3);
	get_map.emplace("GovSteam1.pgv4", &get_GovSteam1_pgv4);
	get_map.emplace("GovSteam1.pgv5", &get_GovSteam1_pgv5);
	get_map.emplace("GovSteam1.pgv6", &get_GovSteam1_pgv6);
	get_map.emplace("GovSteam1.pmax", &get_GovSteam1_pmax);
	get_map.emplace("GovSteam1.pmin", &get_GovSteam1_pmin);
	get_map.emplace("GovSteam1.sdb1", &get_GovSteam1_sdb1);
	get_map.emplace("GovSteam1.sdb2", &get_GovSteam1_sdb2);
	get_map.emplace("GovSteam1.t1", &get_GovSteam1_t1);
	get_map.emplace("GovSteam1.t2", &get_GovSteam1_t2);
	get_map.emplace("GovSteam1.t3", &get_GovSteam1_t3);
	get_map.emplace("GovSteam1.t4", &get_GovSteam1_t4);
	get_map.emplace("GovSteam1.t5", &get_GovSteam1_t5);
	get_map.emplace("GovSteam1.t6", &get_GovSteam1_t6);
	get_map.emplace("GovSteam1.t7", &get_GovSteam1_t7);
	get_map.emplace("GovSteam1.uc", &get_GovSteam1_uc);
	get_map.emplace("GovSteam1.uo", &get_GovSteam1_uo);
	get_map.emplace("GovSteam1.valve", &get_GovSteam1_valve);
}

void GovSteam1::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovSteam1::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

bool GovSteam1::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GovSteam1" &&
		dynamic_cast<GovSteam1*>(otherObject) != nullptr;
}

const BaseClassDefiner GovSteam1::declare()
{
	return BaseClassDefiner(GovSteam1::addConstructToMap, GovSteam1::addPrimitiveAssignFnsToMap, GovSteam1::addClassAssignFnsToMap, GovSteam1::debugName);
}

std::map<std::string, AttrDetails> GovSteam1::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TurbineGovernorDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GovSteam1_factory()
	{
		return new GovSteam1;
	}
}
