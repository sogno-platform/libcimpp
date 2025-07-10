/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydroPID.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GovHydroPID(),
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
		{ "GovHydroPID.aturb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.bturb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.db1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.db2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.eps", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.gv1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.gv2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.gv3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.gv4", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.gv5", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.gv6", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.inputSignal", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.kd", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.kg", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.ki", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.kp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.mwbase", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.pgv1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.pgv2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.pgv3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.pgv4", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.pgv5", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.pgv6", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.pmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.pmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.r", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.td", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.tf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.tp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.tt", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.tturb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.velcl", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPID.velop", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

GovHydroPID::GovHydroPID() {}
GovHydroPID::~GovHydroPID() {}

const std::list<std::string>& GovHydroPID::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GovHydroPID::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GovHydroPID::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GovHydroPID::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GovHydroPID::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GovHydroPID::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GovHydroPID::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_GovHydroPID_aturb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_bturb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_db1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_db2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_eps(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_gv1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_gv2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_gv3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_gv4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_gv5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_gv6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_inputSignal(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_kd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPID_kg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_ki(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_kp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPID_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_pgv1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_pgv2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_pgv3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_pgv4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_pgv5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_pgv6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_pmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_pmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_r(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_td(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_tp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_tt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_tturb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_velcl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool assign_GovHydroPID_velop(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPID* element = dynamic_cast<GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_aturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_bturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_db1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_db2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_eps(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_gv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_gv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_gv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_gv4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_gv5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_gv6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_inputSignal(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID_kg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPID_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_pgv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_pgv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_pgv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_pgv4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_pgv5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_pgv6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_pmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_pmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_td(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_tp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_tt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_tturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_velcl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

bool get_GovHydroPID_velop(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPID* element = dynamic_cast<const GovHydroPID*>(BaseClass_ptr1);
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

const char GovHydroPID::debugName[] = "GovHydroPID";
const char* GovHydroPID::debugString() const
{
	return GovHydroPID::debugName;
}

void GovHydroPID::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("GovHydroPID", &GovHydroPID_factory);
}

void GovHydroPID::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("GovHydroPID.aturb", &assign_GovHydroPID_aturb);
	assign_map.emplace("GovHydroPID.bturb", &assign_GovHydroPID_bturb);
	assign_map.emplace("GovHydroPID.db1", &assign_GovHydroPID_db1);
	assign_map.emplace("GovHydroPID.db2", &assign_GovHydroPID_db2);
	assign_map.emplace("GovHydroPID.eps", &assign_GovHydroPID_eps);
	assign_map.emplace("GovHydroPID.gv1", &assign_GovHydroPID_gv1);
	assign_map.emplace("GovHydroPID.gv2", &assign_GovHydroPID_gv2);
	assign_map.emplace("GovHydroPID.gv3", &assign_GovHydroPID_gv3);
	assign_map.emplace("GovHydroPID.gv4", &assign_GovHydroPID_gv4);
	assign_map.emplace("GovHydroPID.gv5", &assign_GovHydroPID_gv5);
	assign_map.emplace("GovHydroPID.gv6", &assign_GovHydroPID_gv6);
	assign_map.emplace("GovHydroPID.inputSignal", &assign_GovHydroPID_inputSignal);
	assign_map.emplace("GovHydroPID.kd", &assign_GovHydroPID_kd);
	assign_map.emplace("GovHydroPID.kg", &assign_GovHydroPID_kg);
	assign_map.emplace("GovHydroPID.ki", &assign_GovHydroPID_ki);
	assign_map.emplace("GovHydroPID.kp", &assign_GovHydroPID_kp);
	assign_map.emplace("GovHydroPID.mwbase", &assign_GovHydroPID_mwbase);
	assign_map.emplace("GovHydroPID.pgv1", &assign_GovHydroPID_pgv1);
	assign_map.emplace("GovHydroPID.pgv2", &assign_GovHydroPID_pgv2);
	assign_map.emplace("GovHydroPID.pgv3", &assign_GovHydroPID_pgv3);
	assign_map.emplace("GovHydroPID.pgv4", &assign_GovHydroPID_pgv4);
	assign_map.emplace("GovHydroPID.pgv5", &assign_GovHydroPID_pgv5);
	assign_map.emplace("GovHydroPID.pgv6", &assign_GovHydroPID_pgv6);
	assign_map.emplace("GovHydroPID.pmax", &assign_GovHydroPID_pmax);
	assign_map.emplace("GovHydroPID.pmin", &assign_GovHydroPID_pmin);
	assign_map.emplace("GovHydroPID.r", &assign_GovHydroPID_r);
	assign_map.emplace("GovHydroPID.td", &assign_GovHydroPID_td);
	assign_map.emplace("GovHydroPID.tf", &assign_GovHydroPID_tf);
	assign_map.emplace("GovHydroPID.tp", &assign_GovHydroPID_tp);
	assign_map.emplace("GovHydroPID.tt", &assign_GovHydroPID_tt);
	assign_map.emplace("GovHydroPID.tturb", &assign_GovHydroPID_tturb);
	assign_map.emplace("GovHydroPID.velcl", &assign_GovHydroPID_velcl);
	assign_map.emplace("GovHydroPID.velop", &assign_GovHydroPID_velop);
}

void GovHydroPID::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovHydroPID::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("GovHydroPID.aturb", &get_GovHydroPID_aturb);
	get_map.emplace("GovHydroPID.bturb", &get_GovHydroPID_bturb);
	get_map.emplace("GovHydroPID.db1", &get_GovHydroPID_db1);
	get_map.emplace("GovHydroPID.db2", &get_GovHydroPID_db2);
	get_map.emplace("GovHydroPID.eps", &get_GovHydroPID_eps);
	get_map.emplace("GovHydroPID.gv1", &get_GovHydroPID_gv1);
	get_map.emplace("GovHydroPID.gv2", &get_GovHydroPID_gv2);
	get_map.emplace("GovHydroPID.gv3", &get_GovHydroPID_gv3);
	get_map.emplace("GovHydroPID.gv4", &get_GovHydroPID_gv4);
	get_map.emplace("GovHydroPID.gv5", &get_GovHydroPID_gv5);
	get_map.emplace("GovHydroPID.gv6", &get_GovHydroPID_gv6);
	get_map.emplace("GovHydroPID.inputSignal", &get_GovHydroPID_inputSignal);
	get_map.emplace("GovHydroPID.kd", &get_GovHydroPID_kd);
	get_map.emplace("GovHydroPID.kg", &get_GovHydroPID_kg);
	get_map.emplace("GovHydroPID.ki", &get_GovHydroPID_ki);
	get_map.emplace("GovHydroPID.kp", &get_GovHydroPID_kp);
	get_map.emplace("GovHydroPID.mwbase", &get_GovHydroPID_mwbase);
	get_map.emplace("GovHydroPID.pgv1", &get_GovHydroPID_pgv1);
	get_map.emplace("GovHydroPID.pgv2", &get_GovHydroPID_pgv2);
	get_map.emplace("GovHydroPID.pgv3", &get_GovHydroPID_pgv3);
	get_map.emplace("GovHydroPID.pgv4", &get_GovHydroPID_pgv4);
	get_map.emplace("GovHydroPID.pgv5", &get_GovHydroPID_pgv5);
	get_map.emplace("GovHydroPID.pgv6", &get_GovHydroPID_pgv6);
	get_map.emplace("GovHydroPID.pmax", &get_GovHydroPID_pmax);
	get_map.emplace("GovHydroPID.pmin", &get_GovHydroPID_pmin);
	get_map.emplace("GovHydroPID.r", &get_GovHydroPID_r);
	get_map.emplace("GovHydroPID.td", &get_GovHydroPID_td);
	get_map.emplace("GovHydroPID.tf", &get_GovHydroPID_tf);
	get_map.emplace("GovHydroPID.tp", &get_GovHydroPID_tp);
	get_map.emplace("GovHydroPID.tt", &get_GovHydroPID_tt);
	get_map.emplace("GovHydroPID.tturb", &get_GovHydroPID_tturb);
	get_map.emplace("GovHydroPID.velcl", &get_GovHydroPID_velcl);
	get_map.emplace("GovHydroPID.velop", &get_GovHydroPID_velop);
}

void GovHydroPID::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovHydroPID::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

bool GovHydroPID::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GovHydroPID" &&
		dynamic_cast<GovHydroPID*>(otherObject) != nullptr;
}

const BaseClassDefiner GovHydroPID::declare()
{
	return BaseClassDefiner(GovHydroPID::addConstructToMap, GovHydroPID::addPrimitiveAssignFnsToMap, GovHydroPID::addClassAssignFnsToMap, GovHydroPID::debugName);
}

std::map<std::string, AttrDetails> GovHydroPID::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TurbineGovernorDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GovHydroPID_factory()
	{
		return new GovHydroPID;
	}
}
