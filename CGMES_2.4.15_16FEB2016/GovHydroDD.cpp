/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydroDD.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GovHydroDD(),
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
		{ "GovHydroDD.aturb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.bturb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.db1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.db2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.eps", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.gmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.gmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.gv1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.gv2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.gv3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.gv4", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.gv5", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.gv6", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.inputSignal", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.k1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.k2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.kg", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.ki", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.mwbase", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.pgv1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.pgv2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.pgv3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.pgv4", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.pgv5", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.pgv6", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.pmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.pmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.r", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.td", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.tf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.tp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.tt", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.tturb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.velcl", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroDD.velop", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

GovHydroDD::GovHydroDD() {}
GovHydroDD::~GovHydroDD() {}

const std::list<std::string>& GovHydroDD::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GovHydroDD::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GovHydroDD::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GovHydroDD::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GovHydroDD::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GovHydroDD::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GovHydroDD::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_GovHydroDD_aturb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_bturb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_db1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_db2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_eps(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_gmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->gmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroDD_gmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->gmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroDD_gv1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_gv2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_gv3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_gv4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_gv5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_gv6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_inputSignal(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->inputSignal;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroDD_k1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_k2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_kg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_ki(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_pgv1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_pgv2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_pgv3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_pgv4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_pgv5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_pgv6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_pmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_pmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_r(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_td(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_tp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_tt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_tturb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tturb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroDD_velcl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool assign_GovHydroDD_velop(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_aturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_bturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_db1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_db2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_eps(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_gmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->gmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_gmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->gmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_gv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_gv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_gv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_gv4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_gv5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_gv6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_inputSignal(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->inputSignal;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_k1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_k2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_kg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_pgv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_pgv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_pgv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_pgv4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_pgv5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_pgv6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_pmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_pmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_td(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_tp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_tt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_tturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tturb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_velcl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

bool get_GovHydroDD_velop(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1);
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

const char GovHydroDD::debugName[] = "GovHydroDD";
const char* GovHydroDD::debugString() const
{
	return GovHydroDD::debugName;
}

void GovHydroDD::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("GovHydroDD", &GovHydroDD_factory);
}

void GovHydroDD::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("GovHydroDD.aturb", &assign_GovHydroDD_aturb);
	assign_map.emplace("GovHydroDD.bturb", &assign_GovHydroDD_bturb);
	assign_map.emplace("GovHydroDD.db1", &assign_GovHydroDD_db1);
	assign_map.emplace("GovHydroDD.db2", &assign_GovHydroDD_db2);
	assign_map.emplace("GovHydroDD.eps", &assign_GovHydroDD_eps);
	assign_map.emplace("GovHydroDD.gmax", &assign_GovHydroDD_gmax);
	assign_map.emplace("GovHydroDD.gmin", &assign_GovHydroDD_gmin);
	assign_map.emplace("GovHydroDD.gv1", &assign_GovHydroDD_gv1);
	assign_map.emplace("GovHydroDD.gv2", &assign_GovHydroDD_gv2);
	assign_map.emplace("GovHydroDD.gv3", &assign_GovHydroDD_gv3);
	assign_map.emplace("GovHydroDD.gv4", &assign_GovHydroDD_gv4);
	assign_map.emplace("GovHydroDD.gv5", &assign_GovHydroDD_gv5);
	assign_map.emplace("GovHydroDD.gv6", &assign_GovHydroDD_gv6);
	assign_map.emplace("GovHydroDD.inputSignal", &assign_GovHydroDD_inputSignal);
	assign_map.emplace("GovHydroDD.k1", &assign_GovHydroDD_k1);
	assign_map.emplace("GovHydroDD.k2", &assign_GovHydroDD_k2);
	assign_map.emplace("GovHydroDD.kg", &assign_GovHydroDD_kg);
	assign_map.emplace("GovHydroDD.ki", &assign_GovHydroDD_ki);
	assign_map.emplace("GovHydroDD.mwbase", &assign_GovHydroDD_mwbase);
	assign_map.emplace("GovHydroDD.pgv1", &assign_GovHydroDD_pgv1);
	assign_map.emplace("GovHydroDD.pgv2", &assign_GovHydroDD_pgv2);
	assign_map.emplace("GovHydroDD.pgv3", &assign_GovHydroDD_pgv3);
	assign_map.emplace("GovHydroDD.pgv4", &assign_GovHydroDD_pgv4);
	assign_map.emplace("GovHydroDD.pgv5", &assign_GovHydroDD_pgv5);
	assign_map.emplace("GovHydroDD.pgv6", &assign_GovHydroDD_pgv6);
	assign_map.emplace("GovHydroDD.pmax", &assign_GovHydroDD_pmax);
	assign_map.emplace("GovHydroDD.pmin", &assign_GovHydroDD_pmin);
	assign_map.emplace("GovHydroDD.r", &assign_GovHydroDD_r);
	assign_map.emplace("GovHydroDD.td", &assign_GovHydroDD_td);
	assign_map.emplace("GovHydroDD.tf", &assign_GovHydroDD_tf);
	assign_map.emplace("GovHydroDD.tp", &assign_GovHydroDD_tp);
	assign_map.emplace("GovHydroDD.tt", &assign_GovHydroDD_tt);
	assign_map.emplace("GovHydroDD.tturb", &assign_GovHydroDD_tturb);
	assign_map.emplace("GovHydroDD.velcl", &assign_GovHydroDD_velcl);
	assign_map.emplace("GovHydroDD.velop", &assign_GovHydroDD_velop);
}

void GovHydroDD::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovHydroDD::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("GovHydroDD.aturb", &get_GovHydroDD_aturb);
	get_map.emplace("GovHydroDD.bturb", &get_GovHydroDD_bturb);
	get_map.emplace("GovHydroDD.db1", &get_GovHydroDD_db1);
	get_map.emplace("GovHydroDD.db2", &get_GovHydroDD_db2);
	get_map.emplace("GovHydroDD.eps", &get_GovHydroDD_eps);
	get_map.emplace("GovHydroDD.gmax", &get_GovHydroDD_gmax);
	get_map.emplace("GovHydroDD.gmin", &get_GovHydroDD_gmin);
	get_map.emplace("GovHydroDD.gv1", &get_GovHydroDD_gv1);
	get_map.emplace("GovHydroDD.gv2", &get_GovHydroDD_gv2);
	get_map.emplace("GovHydroDD.gv3", &get_GovHydroDD_gv3);
	get_map.emplace("GovHydroDD.gv4", &get_GovHydroDD_gv4);
	get_map.emplace("GovHydroDD.gv5", &get_GovHydroDD_gv5);
	get_map.emplace("GovHydroDD.gv6", &get_GovHydroDD_gv6);
	get_map.emplace("GovHydroDD.inputSignal", &get_GovHydroDD_inputSignal);
	get_map.emplace("GovHydroDD.k1", &get_GovHydroDD_k1);
	get_map.emplace("GovHydroDD.k2", &get_GovHydroDD_k2);
	get_map.emplace("GovHydroDD.kg", &get_GovHydroDD_kg);
	get_map.emplace("GovHydroDD.ki", &get_GovHydroDD_ki);
	get_map.emplace("GovHydroDD.mwbase", &get_GovHydroDD_mwbase);
	get_map.emplace("GovHydroDD.pgv1", &get_GovHydroDD_pgv1);
	get_map.emplace("GovHydroDD.pgv2", &get_GovHydroDD_pgv2);
	get_map.emplace("GovHydroDD.pgv3", &get_GovHydroDD_pgv3);
	get_map.emplace("GovHydroDD.pgv4", &get_GovHydroDD_pgv4);
	get_map.emplace("GovHydroDD.pgv5", &get_GovHydroDD_pgv5);
	get_map.emplace("GovHydroDD.pgv6", &get_GovHydroDD_pgv6);
	get_map.emplace("GovHydroDD.pmax", &get_GovHydroDD_pmax);
	get_map.emplace("GovHydroDD.pmin", &get_GovHydroDD_pmin);
	get_map.emplace("GovHydroDD.r", &get_GovHydroDD_r);
	get_map.emplace("GovHydroDD.td", &get_GovHydroDD_td);
	get_map.emplace("GovHydroDD.tf", &get_GovHydroDD_tf);
	get_map.emplace("GovHydroDD.tp", &get_GovHydroDD_tp);
	get_map.emplace("GovHydroDD.tt", &get_GovHydroDD_tt);
	get_map.emplace("GovHydroDD.tturb", &get_GovHydroDD_tturb);
	get_map.emplace("GovHydroDD.velcl", &get_GovHydroDD_velcl);
	get_map.emplace("GovHydroDD.velop", &get_GovHydroDD_velop);
}

void GovHydroDD::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovHydroDD::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

bool GovHydroDD::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GovHydroDD" &&
		dynamic_cast<GovHydroDD*>(otherObject) != nullptr;
}

const BaseClassDefiner GovHydroDD::declare()
{
	return BaseClassDefiner(GovHydroDD::addConstructToMap, GovHydroDD::addPrimitiveAssignFnsToMap, GovHydroDD::addClassAssignFnsToMap, GovHydroDD::debugName);
}

std::map<std::string, AttrDetails> GovHydroDD::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TurbineGovernorDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GovHydroDD_factory()
	{
		return new GovHydroDD;
	}
}
