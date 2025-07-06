/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydro2.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GovHydro2(),
		"http://iec.ch/TC57/2013/CIM-schema-cim16#",
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
		{ "GovHydro2.aturb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro2.bturb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro2.db1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro2.db2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro2.eps", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro2.gv1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro2.gv2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro2.gv3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro2.gv4", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro2.gv5", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro2.gv6", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro2.kturb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro2.mwbase", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro2.pgv1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro2.pgv2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro2.pgv3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro2.pgv4", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro2.pgv5", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro2.pgv6", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro2.pmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro2.pmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro2.rperm", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro2.rtemp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro2.tg", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro2.tp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro2.tr", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro2.tw", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro2.uc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro2.uo", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

GovHydro2::GovHydro2() {}
GovHydro2::~GovHydro2() {}

const std::list<std::string>& GovHydro2::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GovHydro2::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GovHydro2::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GovHydro2::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GovHydro2::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GovHydro2::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GovHydro2::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_GovHydro2_aturb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->aturb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro2_bturb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->bturb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro2_db1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
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

bool assign_GovHydro2_db2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
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

bool assign_GovHydro2_eps(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
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

bool assign_GovHydro2_gv1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
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

bool assign_GovHydro2_gv2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
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

bool assign_GovHydro2_gv3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
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

bool assign_GovHydro2_gv4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
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

bool assign_GovHydro2_gv5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
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

bool assign_GovHydro2_gv6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
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

bool assign_GovHydro2_kturb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kturb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro2_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
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

bool assign_GovHydro2_pgv1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
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

bool assign_GovHydro2_pgv2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
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

bool assign_GovHydro2_pgv3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
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

bool assign_GovHydro2_pgv4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
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

bool assign_GovHydro2_pgv5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
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

bool assign_GovHydro2_pgv6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
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

bool assign_GovHydro2_pmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
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

bool assign_GovHydro2_pmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
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

bool assign_GovHydro2_rperm(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rperm;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro2_rtemp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rtemp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro2_tg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tg;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro2_tp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
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

bool assign_GovHydro2_tr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
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

bool assign_GovHydro2_tw(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tw;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro2_uc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
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

bool assign_GovHydro2_uo(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro2* element = dynamic_cast<GovHydro2*>(BaseClass_ptr1);
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

bool get_GovHydro2_aturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovHydro2_bturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovHydro2_db1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
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

bool get_GovHydro2_db2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
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

bool get_GovHydro2_eps(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
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

bool get_GovHydro2_gv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
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

bool get_GovHydro2_gv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
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

bool get_GovHydro2_gv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
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

bool get_GovHydro2_gv4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
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

bool get_GovHydro2_gv5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
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

bool get_GovHydro2_gv6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
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

bool get_GovHydro2_kturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovHydro2_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
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

bool get_GovHydro2_pgv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
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

bool get_GovHydro2_pgv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
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

bool get_GovHydro2_pgv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
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

bool get_GovHydro2_pgv4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
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

bool get_GovHydro2_pgv5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
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

bool get_GovHydro2_pgv6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
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

bool get_GovHydro2_pmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
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

bool get_GovHydro2_pmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
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

bool get_GovHydro2_rperm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovHydro2_rtemp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovHydro2_tg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovHydro2_tp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
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

bool get_GovHydro2_tr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
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

bool get_GovHydro2_tw(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovHydro2_uc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
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

bool get_GovHydro2_uo(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro2* element = dynamic_cast<const GovHydro2*>(BaseClass_ptr1);
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

const char GovHydro2::debugName[] = "GovHydro2";
const char* GovHydro2::debugString() const
{
	return GovHydro2::debugName;
}

void GovHydro2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("GovHydro2", &GovHydro2_factory);
}

void GovHydro2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("GovHydro2.aturb", &assign_GovHydro2_aturb);
	assign_map.emplace("GovHydro2.bturb", &assign_GovHydro2_bturb);
	assign_map.emplace("GovHydro2.db1", &assign_GovHydro2_db1);
	assign_map.emplace("GovHydro2.db2", &assign_GovHydro2_db2);
	assign_map.emplace("GovHydro2.eps", &assign_GovHydro2_eps);
	assign_map.emplace("GovHydro2.gv1", &assign_GovHydro2_gv1);
	assign_map.emplace("GovHydro2.gv2", &assign_GovHydro2_gv2);
	assign_map.emplace("GovHydro2.gv3", &assign_GovHydro2_gv3);
	assign_map.emplace("GovHydro2.gv4", &assign_GovHydro2_gv4);
	assign_map.emplace("GovHydro2.gv5", &assign_GovHydro2_gv5);
	assign_map.emplace("GovHydro2.gv6", &assign_GovHydro2_gv6);
	assign_map.emplace("GovHydro2.kturb", &assign_GovHydro2_kturb);
	assign_map.emplace("GovHydro2.mwbase", &assign_GovHydro2_mwbase);
	assign_map.emplace("GovHydro2.pgv1", &assign_GovHydro2_pgv1);
	assign_map.emplace("GovHydro2.pgv2", &assign_GovHydro2_pgv2);
	assign_map.emplace("GovHydro2.pgv3", &assign_GovHydro2_pgv3);
	assign_map.emplace("GovHydro2.pgv4", &assign_GovHydro2_pgv4);
	assign_map.emplace("GovHydro2.pgv5", &assign_GovHydro2_pgv5);
	assign_map.emplace("GovHydro2.pgv6", &assign_GovHydro2_pgv6);
	assign_map.emplace("GovHydro2.pmax", &assign_GovHydro2_pmax);
	assign_map.emplace("GovHydro2.pmin", &assign_GovHydro2_pmin);
	assign_map.emplace("GovHydro2.rperm", &assign_GovHydro2_rperm);
	assign_map.emplace("GovHydro2.rtemp", &assign_GovHydro2_rtemp);
	assign_map.emplace("GovHydro2.tg", &assign_GovHydro2_tg);
	assign_map.emplace("GovHydro2.tp", &assign_GovHydro2_tp);
	assign_map.emplace("GovHydro2.tr", &assign_GovHydro2_tr);
	assign_map.emplace("GovHydro2.tw", &assign_GovHydro2_tw);
	assign_map.emplace("GovHydro2.uc", &assign_GovHydro2_uc);
	assign_map.emplace("GovHydro2.uo", &assign_GovHydro2_uo);
}

void GovHydro2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovHydro2::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("GovHydro2.aturb", &get_GovHydro2_aturb);
	get_map.emplace("GovHydro2.bturb", &get_GovHydro2_bturb);
	get_map.emplace("GovHydro2.db1", &get_GovHydro2_db1);
	get_map.emplace("GovHydro2.db2", &get_GovHydro2_db2);
	get_map.emplace("GovHydro2.eps", &get_GovHydro2_eps);
	get_map.emplace("GovHydro2.gv1", &get_GovHydro2_gv1);
	get_map.emplace("GovHydro2.gv2", &get_GovHydro2_gv2);
	get_map.emplace("GovHydro2.gv3", &get_GovHydro2_gv3);
	get_map.emplace("GovHydro2.gv4", &get_GovHydro2_gv4);
	get_map.emplace("GovHydro2.gv5", &get_GovHydro2_gv5);
	get_map.emplace("GovHydro2.gv6", &get_GovHydro2_gv6);
	get_map.emplace("GovHydro2.kturb", &get_GovHydro2_kturb);
	get_map.emplace("GovHydro2.mwbase", &get_GovHydro2_mwbase);
	get_map.emplace("GovHydro2.pgv1", &get_GovHydro2_pgv1);
	get_map.emplace("GovHydro2.pgv2", &get_GovHydro2_pgv2);
	get_map.emplace("GovHydro2.pgv3", &get_GovHydro2_pgv3);
	get_map.emplace("GovHydro2.pgv4", &get_GovHydro2_pgv4);
	get_map.emplace("GovHydro2.pgv5", &get_GovHydro2_pgv5);
	get_map.emplace("GovHydro2.pgv6", &get_GovHydro2_pgv6);
	get_map.emplace("GovHydro2.pmax", &get_GovHydro2_pmax);
	get_map.emplace("GovHydro2.pmin", &get_GovHydro2_pmin);
	get_map.emplace("GovHydro2.rperm", &get_GovHydro2_rperm);
	get_map.emplace("GovHydro2.rtemp", &get_GovHydro2_rtemp);
	get_map.emplace("GovHydro2.tg", &get_GovHydro2_tg);
	get_map.emplace("GovHydro2.tp", &get_GovHydro2_tp);
	get_map.emplace("GovHydro2.tr", &get_GovHydro2_tr);
	get_map.emplace("GovHydro2.tw", &get_GovHydro2_tw);
	get_map.emplace("GovHydro2.uc", &get_GovHydro2_uc);
	get_map.emplace("GovHydro2.uo", &get_GovHydro2_uo);
}

void GovHydro2::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovHydro2::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

bool GovHydro2::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GovHydro2" &&
		dynamic_cast<GovHydro2*>(otherObject) != nullptr;
}

const BaseClassDefiner GovHydro2::declare()
{
	return BaseClassDefiner(GovHydro2::addConstructToMap, GovHydro2::addPrimitiveAssignFnsToMap, GovHydro2::addClassAssignFnsToMap, GovHydro2::debugName);
}

std::map<std::string, AttrDetails> GovHydro2::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TurbineGovernorDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GovHydro2_factory()
	{
		return new GovHydro2;
	}
}
