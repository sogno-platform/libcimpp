/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydroIEEE2.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GovHydroIEEE2(),
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
		{ "GovHydroIEEE2.aturb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroIEEE2.bturb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroIEEE2.gv1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroIEEE2.gv2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroIEEE2.gv3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroIEEE2.gv4", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroIEEE2.gv5", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroIEEE2.gv6", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroIEEE2.kturb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroIEEE2.mwbase", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroIEEE2.pgv1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroIEEE2.pgv2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroIEEE2.pgv3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroIEEE2.pgv4", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroIEEE2.pgv5", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroIEEE2.pgv6", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroIEEE2.pmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroIEEE2.pmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroIEEE2.rperm", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroIEEE2.rtemp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroIEEE2.tg", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroIEEE2.tp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroIEEE2.tr", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroIEEE2.tw", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroIEEE2.uc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroIEEE2.uo", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

GovHydroIEEE2::GovHydroIEEE2() {}
GovHydroIEEE2::~GovHydroIEEE2() {}

const std::list<std::string>& GovHydroIEEE2::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GovHydroIEEE2::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GovHydroIEEE2::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GovHydroIEEE2::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GovHydroIEEE2::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GovHydroIEEE2::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GovHydroIEEE2::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_GovHydroIEEE2_aturb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1);
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

bool assign_GovHydroIEEE2_bturb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1);
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

bool assign_GovHydroIEEE2_gv1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1);
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

bool assign_GovHydroIEEE2_gv2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1);
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

bool assign_GovHydroIEEE2_gv3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1);
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

bool assign_GovHydroIEEE2_gv4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1);
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

bool assign_GovHydroIEEE2_gv5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1);
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

bool assign_GovHydroIEEE2_gv6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1);
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

bool assign_GovHydroIEEE2_kturb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1);
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

bool assign_GovHydroIEEE2_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1);
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

bool assign_GovHydroIEEE2_pgv1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1);
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

bool assign_GovHydroIEEE2_pgv2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1);
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

bool assign_GovHydroIEEE2_pgv3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1);
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

bool assign_GovHydroIEEE2_pgv4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1);
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

bool assign_GovHydroIEEE2_pgv5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1);
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

bool assign_GovHydroIEEE2_pgv6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1);
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

bool assign_GovHydroIEEE2_pmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1);
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

bool assign_GovHydroIEEE2_pmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1);
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

bool assign_GovHydroIEEE2_rperm(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1);
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

bool assign_GovHydroIEEE2_rtemp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1);
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

bool assign_GovHydroIEEE2_tg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1);
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

bool assign_GovHydroIEEE2_tp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1);
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

bool assign_GovHydroIEEE2_tr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1);
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

bool assign_GovHydroIEEE2_tw(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1);
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

bool assign_GovHydroIEEE2_uc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1);
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

bool assign_GovHydroIEEE2_uo(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroIEEE2* element = dynamic_cast<GovHydroIEEE2*>(BaseClass_ptr1);
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

bool get_GovHydroIEEE2_aturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1);
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

bool get_GovHydroIEEE2_bturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1);
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

bool get_GovHydroIEEE2_gv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1);
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

bool get_GovHydroIEEE2_gv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1);
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

bool get_GovHydroIEEE2_gv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1);
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

bool get_GovHydroIEEE2_gv4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1);
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

bool get_GovHydroIEEE2_gv5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1);
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

bool get_GovHydroIEEE2_gv6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1);
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

bool get_GovHydroIEEE2_kturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1);
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

bool get_GovHydroIEEE2_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1);
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

bool get_GovHydroIEEE2_pgv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1);
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

bool get_GovHydroIEEE2_pgv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1);
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

bool get_GovHydroIEEE2_pgv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1);
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

bool get_GovHydroIEEE2_pgv4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1);
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

bool get_GovHydroIEEE2_pgv5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1);
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

bool get_GovHydroIEEE2_pgv6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1);
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

bool get_GovHydroIEEE2_pmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1);
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

bool get_GovHydroIEEE2_pmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1);
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

bool get_GovHydroIEEE2_rperm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1);
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

bool get_GovHydroIEEE2_rtemp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1);
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

bool get_GovHydroIEEE2_tg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1);
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

bool get_GovHydroIEEE2_tp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1);
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

bool get_GovHydroIEEE2_tr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1);
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

bool get_GovHydroIEEE2_tw(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1);
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

bool get_GovHydroIEEE2_uc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1);
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

bool get_GovHydroIEEE2_uo(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroIEEE2* element = dynamic_cast<const GovHydroIEEE2*>(BaseClass_ptr1);
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

const char GovHydroIEEE2::debugName[] = "GovHydroIEEE2";
const char* GovHydroIEEE2::debugString() const
{
	return GovHydroIEEE2::debugName;
}

void GovHydroIEEE2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("GovHydroIEEE2", &GovHydroIEEE2_factory);
}

void GovHydroIEEE2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("GovHydroIEEE2.aturb", &assign_GovHydroIEEE2_aturb);
	assign_map.emplace("GovHydroIEEE2.bturb", &assign_GovHydroIEEE2_bturb);
	assign_map.emplace("GovHydroIEEE2.gv1", &assign_GovHydroIEEE2_gv1);
	assign_map.emplace("GovHydroIEEE2.gv2", &assign_GovHydroIEEE2_gv2);
	assign_map.emplace("GovHydroIEEE2.gv3", &assign_GovHydroIEEE2_gv3);
	assign_map.emplace("GovHydroIEEE2.gv4", &assign_GovHydroIEEE2_gv4);
	assign_map.emplace("GovHydroIEEE2.gv5", &assign_GovHydroIEEE2_gv5);
	assign_map.emplace("GovHydroIEEE2.gv6", &assign_GovHydroIEEE2_gv6);
	assign_map.emplace("GovHydroIEEE2.kturb", &assign_GovHydroIEEE2_kturb);
	assign_map.emplace("GovHydroIEEE2.mwbase", &assign_GovHydroIEEE2_mwbase);
	assign_map.emplace("GovHydroIEEE2.pgv1", &assign_GovHydroIEEE2_pgv1);
	assign_map.emplace("GovHydroIEEE2.pgv2", &assign_GovHydroIEEE2_pgv2);
	assign_map.emplace("GovHydroIEEE2.pgv3", &assign_GovHydroIEEE2_pgv3);
	assign_map.emplace("GovHydroIEEE2.pgv4", &assign_GovHydroIEEE2_pgv4);
	assign_map.emplace("GovHydroIEEE2.pgv5", &assign_GovHydroIEEE2_pgv5);
	assign_map.emplace("GovHydroIEEE2.pgv6", &assign_GovHydroIEEE2_pgv6);
	assign_map.emplace("GovHydroIEEE2.pmax", &assign_GovHydroIEEE2_pmax);
	assign_map.emplace("GovHydroIEEE2.pmin", &assign_GovHydroIEEE2_pmin);
	assign_map.emplace("GovHydroIEEE2.rperm", &assign_GovHydroIEEE2_rperm);
	assign_map.emplace("GovHydroIEEE2.rtemp", &assign_GovHydroIEEE2_rtemp);
	assign_map.emplace("GovHydroIEEE2.tg", &assign_GovHydroIEEE2_tg);
	assign_map.emplace("GovHydroIEEE2.tp", &assign_GovHydroIEEE2_tp);
	assign_map.emplace("GovHydroIEEE2.tr", &assign_GovHydroIEEE2_tr);
	assign_map.emplace("GovHydroIEEE2.tw", &assign_GovHydroIEEE2_tw);
	assign_map.emplace("GovHydroIEEE2.uc", &assign_GovHydroIEEE2_uc);
	assign_map.emplace("GovHydroIEEE2.uo", &assign_GovHydroIEEE2_uo);
}

void GovHydroIEEE2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovHydroIEEE2::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("GovHydroIEEE2.aturb", &get_GovHydroIEEE2_aturb);
	get_map.emplace("GovHydroIEEE2.bturb", &get_GovHydroIEEE2_bturb);
	get_map.emplace("GovHydroIEEE2.gv1", &get_GovHydroIEEE2_gv1);
	get_map.emplace("GovHydroIEEE2.gv2", &get_GovHydroIEEE2_gv2);
	get_map.emplace("GovHydroIEEE2.gv3", &get_GovHydroIEEE2_gv3);
	get_map.emplace("GovHydroIEEE2.gv4", &get_GovHydroIEEE2_gv4);
	get_map.emplace("GovHydroIEEE2.gv5", &get_GovHydroIEEE2_gv5);
	get_map.emplace("GovHydroIEEE2.gv6", &get_GovHydroIEEE2_gv6);
	get_map.emplace("GovHydroIEEE2.kturb", &get_GovHydroIEEE2_kturb);
	get_map.emplace("GovHydroIEEE2.mwbase", &get_GovHydroIEEE2_mwbase);
	get_map.emplace("GovHydroIEEE2.pgv1", &get_GovHydroIEEE2_pgv1);
	get_map.emplace("GovHydroIEEE2.pgv2", &get_GovHydroIEEE2_pgv2);
	get_map.emplace("GovHydroIEEE2.pgv3", &get_GovHydroIEEE2_pgv3);
	get_map.emplace("GovHydroIEEE2.pgv4", &get_GovHydroIEEE2_pgv4);
	get_map.emplace("GovHydroIEEE2.pgv5", &get_GovHydroIEEE2_pgv5);
	get_map.emplace("GovHydroIEEE2.pgv6", &get_GovHydroIEEE2_pgv6);
	get_map.emplace("GovHydroIEEE2.pmax", &get_GovHydroIEEE2_pmax);
	get_map.emplace("GovHydroIEEE2.pmin", &get_GovHydroIEEE2_pmin);
	get_map.emplace("GovHydroIEEE2.rperm", &get_GovHydroIEEE2_rperm);
	get_map.emplace("GovHydroIEEE2.rtemp", &get_GovHydroIEEE2_rtemp);
	get_map.emplace("GovHydroIEEE2.tg", &get_GovHydroIEEE2_tg);
	get_map.emplace("GovHydroIEEE2.tp", &get_GovHydroIEEE2_tp);
	get_map.emplace("GovHydroIEEE2.tr", &get_GovHydroIEEE2_tr);
	get_map.emplace("GovHydroIEEE2.tw", &get_GovHydroIEEE2_tw);
	get_map.emplace("GovHydroIEEE2.uc", &get_GovHydroIEEE2_uc);
	get_map.emplace("GovHydroIEEE2.uo", &get_GovHydroIEEE2_uo);
}

void GovHydroIEEE2::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovHydroIEEE2::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

bool GovHydroIEEE2::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GovHydroIEEE2" &&
		dynamic_cast<GovHydroIEEE2*>(otherObject) != nullptr;
}

const BaseClassDefiner GovHydroIEEE2::declare()
{
	return BaseClassDefiner(GovHydroIEEE2::addConstructToMap, GovHydroIEEE2::addPrimitiveAssignFnsToMap, GovHydroIEEE2::addClassAssignFnsToMap, GovHydroIEEE2::debugName);
}

std::map<std::string, AttrDetails> GovHydroIEEE2::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TurbineGovernorDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GovHydroIEEE2_factory()
	{
		return new GovHydroIEEE2;
	}
}
