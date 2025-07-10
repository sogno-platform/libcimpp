/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydro3.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GovHydro3(),
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
		{ "GovHydro3.at", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.db1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.db2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.dturb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.eps", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.governorControl", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.gv1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.gv2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.gv3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.gv4", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.gv5", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.gv6", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.h0", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.k1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.k2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.kg", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.ki", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.mwbase", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.pgv1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.pgv2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.pgv3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.pgv4", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.pgv5", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.pgv6", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.pmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.pmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.qnl", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.relec", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.rgate", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.td", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.tf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.tp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.tt", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.tw", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.velcl", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydro3.velop", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

GovHydro3::GovHydro3() {}
GovHydro3::~GovHydro3() {}

const std::list<std::string>& GovHydro3::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GovHydro3::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GovHydro3::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GovHydro3::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GovHydro3::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GovHydro3::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GovHydro3::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_GovHydro3_at(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->at;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro3_db1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
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

bool assign_GovHydro3_db2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
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

bool assign_GovHydro3_dturb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dturb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro3_eps(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
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

bool assign_GovHydro3_governorControl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->governorControl;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro3_gv1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
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

bool assign_GovHydro3_gv2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
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

bool assign_GovHydro3_gv3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
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

bool assign_GovHydro3_gv4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
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

bool assign_GovHydro3_gv5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
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

bool assign_GovHydro3_gv6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
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

bool assign_GovHydro3_h0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->h0;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro3_k1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
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

bool assign_GovHydro3_k2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
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

bool assign_GovHydro3_kg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kg;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro3_ki(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ki;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro3_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
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

bool assign_GovHydro3_pgv1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
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

bool assign_GovHydro3_pgv2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
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

bool assign_GovHydro3_pgv3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
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

bool assign_GovHydro3_pgv4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
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

bool assign_GovHydro3_pgv5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
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

bool assign_GovHydro3_pgv6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
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

bool assign_GovHydro3_pmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
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

bool assign_GovHydro3_pmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
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

bool assign_GovHydro3_qnl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qnl;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro3_relec(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->relec;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro3_rgate(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rgate;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro3_td(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->td;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro3_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
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

bool assign_GovHydro3_tp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
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

bool assign_GovHydro3_tt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
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

bool assign_GovHydro3_tw(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
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

bool assign_GovHydro3_velcl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->velcl;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydro3_velop(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydro3* element = dynamic_cast<GovHydro3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->velop;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_GovHydro3_at(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->at;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro3_db1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
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

bool get_GovHydro3_db2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
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

bool get_GovHydro3_dturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dturb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro3_eps(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
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

bool get_GovHydro3_governorControl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->governorControl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro3_gv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
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

bool get_GovHydro3_gv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
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

bool get_GovHydro3_gv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
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

bool get_GovHydro3_gv4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
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

bool get_GovHydro3_gv5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
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

bool get_GovHydro3_gv6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
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

bool get_GovHydro3_h0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->h0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro3_k1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
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

bool get_GovHydro3_k2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
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

bool get_GovHydro3_kg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kg;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro3_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ki;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro3_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
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

bool get_GovHydro3_pgv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
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

bool get_GovHydro3_pgv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
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

bool get_GovHydro3_pgv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
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

bool get_GovHydro3_pgv4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
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

bool get_GovHydro3_pgv5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
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

bool get_GovHydro3_pgv6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
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

bool get_GovHydro3_pmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
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

bool get_GovHydro3_pmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
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

bool get_GovHydro3_qnl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->qnl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro3_relec(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->relec;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro3_rgate(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rgate;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro3_td(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->td;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro3_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
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

bool get_GovHydro3_tp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
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

bool get_GovHydro3_tt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
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

bool get_GovHydro3_tw(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
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

bool get_GovHydro3_velcl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->velcl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydro3_velop(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydro3* element = dynamic_cast<const GovHydro3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->velop;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char GovHydro3::debugName[] = "GovHydro3";
const char* GovHydro3::debugString() const
{
	return GovHydro3::debugName;
}

void GovHydro3::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("GovHydro3", &GovHydro3_factory);
}

void GovHydro3::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("GovHydro3.at", &assign_GovHydro3_at);
	assign_map.emplace("GovHydro3.db1", &assign_GovHydro3_db1);
	assign_map.emplace("GovHydro3.db2", &assign_GovHydro3_db2);
	assign_map.emplace("GovHydro3.dturb", &assign_GovHydro3_dturb);
	assign_map.emplace("GovHydro3.eps", &assign_GovHydro3_eps);
	assign_map.emplace("GovHydro3.governorControl", &assign_GovHydro3_governorControl);
	assign_map.emplace("GovHydro3.gv1", &assign_GovHydro3_gv1);
	assign_map.emplace("GovHydro3.gv2", &assign_GovHydro3_gv2);
	assign_map.emplace("GovHydro3.gv3", &assign_GovHydro3_gv3);
	assign_map.emplace("GovHydro3.gv4", &assign_GovHydro3_gv4);
	assign_map.emplace("GovHydro3.gv5", &assign_GovHydro3_gv5);
	assign_map.emplace("GovHydro3.gv6", &assign_GovHydro3_gv6);
	assign_map.emplace("GovHydro3.h0", &assign_GovHydro3_h0);
	assign_map.emplace("GovHydro3.k1", &assign_GovHydro3_k1);
	assign_map.emplace("GovHydro3.k2", &assign_GovHydro3_k2);
	assign_map.emplace("GovHydro3.kg", &assign_GovHydro3_kg);
	assign_map.emplace("GovHydro3.ki", &assign_GovHydro3_ki);
	assign_map.emplace("GovHydro3.mwbase", &assign_GovHydro3_mwbase);
	assign_map.emplace("GovHydro3.pgv1", &assign_GovHydro3_pgv1);
	assign_map.emplace("GovHydro3.pgv2", &assign_GovHydro3_pgv2);
	assign_map.emplace("GovHydro3.pgv3", &assign_GovHydro3_pgv3);
	assign_map.emplace("GovHydro3.pgv4", &assign_GovHydro3_pgv4);
	assign_map.emplace("GovHydro3.pgv5", &assign_GovHydro3_pgv5);
	assign_map.emplace("GovHydro3.pgv6", &assign_GovHydro3_pgv6);
	assign_map.emplace("GovHydro3.pmax", &assign_GovHydro3_pmax);
	assign_map.emplace("GovHydro3.pmin", &assign_GovHydro3_pmin);
	assign_map.emplace("GovHydro3.qnl", &assign_GovHydro3_qnl);
	assign_map.emplace("GovHydro3.relec", &assign_GovHydro3_relec);
	assign_map.emplace("GovHydro3.rgate", &assign_GovHydro3_rgate);
	assign_map.emplace("GovHydro3.td", &assign_GovHydro3_td);
	assign_map.emplace("GovHydro3.tf", &assign_GovHydro3_tf);
	assign_map.emplace("GovHydro3.tp", &assign_GovHydro3_tp);
	assign_map.emplace("GovHydro3.tt", &assign_GovHydro3_tt);
	assign_map.emplace("GovHydro3.tw", &assign_GovHydro3_tw);
	assign_map.emplace("GovHydro3.velcl", &assign_GovHydro3_velcl);
	assign_map.emplace("GovHydro3.velop", &assign_GovHydro3_velop);
}

void GovHydro3::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovHydro3::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("GovHydro3.at", &get_GovHydro3_at);
	get_map.emplace("GovHydro3.db1", &get_GovHydro3_db1);
	get_map.emplace("GovHydro3.db2", &get_GovHydro3_db2);
	get_map.emplace("GovHydro3.dturb", &get_GovHydro3_dturb);
	get_map.emplace("GovHydro3.eps", &get_GovHydro3_eps);
	get_map.emplace("GovHydro3.governorControl", &get_GovHydro3_governorControl);
	get_map.emplace("GovHydro3.gv1", &get_GovHydro3_gv1);
	get_map.emplace("GovHydro3.gv2", &get_GovHydro3_gv2);
	get_map.emplace("GovHydro3.gv3", &get_GovHydro3_gv3);
	get_map.emplace("GovHydro3.gv4", &get_GovHydro3_gv4);
	get_map.emplace("GovHydro3.gv5", &get_GovHydro3_gv5);
	get_map.emplace("GovHydro3.gv6", &get_GovHydro3_gv6);
	get_map.emplace("GovHydro3.h0", &get_GovHydro3_h0);
	get_map.emplace("GovHydro3.k1", &get_GovHydro3_k1);
	get_map.emplace("GovHydro3.k2", &get_GovHydro3_k2);
	get_map.emplace("GovHydro3.kg", &get_GovHydro3_kg);
	get_map.emplace("GovHydro3.ki", &get_GovHydro3_ki);
	get_map.emplace("GovHydro3.mwbase", &get_GovHydro3_mwbase);
	get_map.emplace("GovHydro3.pgv1", &get_GovHydro3_pgv1);
	get_map.emplace("GovHydro3.pgv2", &get_GovHydro3_pgv2);
	get_map.emplace("GovHydro3.pgv3", &get_GovHydro3_pgv3);
	get_map.emplace("GovHydro3.pgv4", &get_GovHydro3_pgv4);
	get_map.emplace("GovHydro3.pgv5", &get_GovHydro3_pgv5);
	get_map.emplace("GovHydro3.pgv6", &get_GovHydro3_pgv6);
	get_map.emplace("GovHydro3.pmax", &get_GovHydro3_pmax);
	get_map.emplace("GovHydro3.pmin", &get_GovHydro3_pmin);
	get_map.emplace("GovHydro3.qnl", &get_GovHydro3_qnl);
	get_map.emplace("GovHydro3.relec", &get_GovHydro3_relec);
	get_map.emplace("GovHydro3.rgate", &get_GovHydro3_rgate);
	get_map.emplace("GovHydro3.td", &get_GovHydro3_td);
	get_map.emplace("GovHydro3.tf", &get_GovHydro3_tf);
	get_map.emplace("GovHydro3.tp", &get_GovHydro3_tp);
	get_map.emplace("GovHydro3.tt", &get_GovHydro3_tt);
	get_map.emplace("GovHydro3.tw", &get_GovHydro3_tw);
	get_map.emplace("GovHydro3.velcl", &get_GovHydro3_velcl);
	get_map.emplace("GovHydro3.velop", &get_GovHydro3_velop);
}

void GovHydro3::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovHydro3::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

bool GovHydro3::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GovHydro3" &&
		dynamic_cast<GovHydro3*>(otherObject) != nullptr;
}

const BaseClassDefiner GovHydro3::declare()
{
	return BaseClassDefiner(GovHydro3::addConstructToMap, GovHydro3::addPrimitiveAssignFnsToMap, GovHydro3::addClassAssignFnsToMap, GovHydro3::debugName);
}

std::map<std::string, AttrDetails> GovHydro3::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TurbineGovernorDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GovHydro3_factory()
	{
		return new GovHydro3;
	}
}
