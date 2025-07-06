/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydroPelton.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GovHydroPelton(),
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
		{ "GovHydroPelton.av0", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPelton.av1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPelton.bp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPelton.db1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPelton.db2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPelton.h1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPelton.h2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPelton.hn", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPelton.kc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPelton.kg", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPelton.qc0", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPelton.qn", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPelton.simplifiedPelton", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPelton.staticCompensating", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPelton.ta", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPelton.ts", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPelton.tv", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPelton.twnc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPelton.twng", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPelton.tx", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPelton.va", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPelton.valvmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPelton.valvmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPelton.vav", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPelton.vc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPelton.vcv", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPelton.waterTunnelSurgeChamberSimulation", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroPelton.zsfc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

GovHydroPelton::GovHydroPelton() {}
GovHydroPelton::~GovHydroPelton() {}

const std::list<std::string>& GovHydroPelton::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GovHydroPelton::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GovHydroPelton::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GovHydroPelton::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GovHydroPelton::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GovHydroPelton::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GovHydroPelton::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_GovHydroPelton_av0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->av0;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPelton_av1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->av1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPelton_bp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->bp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPelton_db1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1);
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

bool assign_GovHydroPelton_db2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1);
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

bool assign_GovHydroPelton_h1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->h1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPelton_h2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->h2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPelton_hn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->hn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPelton_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPelton_kg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1);
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

bool assign_GovHydroPelton_qc0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qc0;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPelton_qn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPelton_simplifiedPelton(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->simplifiedPelton;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPelton_staticCompensating(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->staticCompensating;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPelton_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ta;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPelton_ts(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ts;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPelton_tv(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tv;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPelton_twnc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->twnc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPelton_twng(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->twng;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPelton_tx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tx;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPelton_va(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->va;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPelton_valvmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->valvmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPelton_valvmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->valvmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPelton_vav(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vav;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPelton_vc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPelton_vcv(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vcv;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPelton_waterTunnelSurgeChamberSimulation(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->waterTunnelSurgeChamberSimulation;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroPelton_zsfc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroPelton* element = dynamic_cast<GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->zsfc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_GovHydroPelton_av0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->av0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_av1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->av1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_bp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->bp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_db1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1);
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

bool get_GovHydroPelton_db2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1);
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

bool get_GovHydroPelton_h1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->h1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_h2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->h2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_hn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->hn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_kg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1);
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

bool get_GovHydroPelton_qc0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->qc0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_qn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->qn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_simplifiedPelton(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->simplifiedPelton;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_staticCompensating(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->staticCompensating;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ta;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_ts(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ts;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_tv(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tv;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_twnc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->twnc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_twng(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->twng;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_tx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_va(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->va;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_valvmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->valvmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_valvmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->valvmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_vav(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vav;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_vc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_vcv(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vcv;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_waterTunnelSurgeChamberSimulation(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->waterTunnelSurgeChamberSimulation;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroPelton_zsfc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroPelton* element = dynamic_cast<const GovHydroPelton*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->zsfc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char GovHydroPelton::debugName[] = "GovHydroPelton";
const char* GovHydroPelton::debugString() const
{
	return GovHydroPelton::debugName;
}

void GovHydroPelton::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("GovHydroPelton", &GovHydroPelton_factory);
}

void GovHydroPelton::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("GovHydroPelton.av0", &assign_GovHydroPelton_av0);
	assign_map.emplace("GovHydroPelton.av1", &assign_GovHydroPelton_av1);
	assign_map.emplace("GovHydroPelton.bp", &assign_GovHydroPelton_bp);
	assign_map.emplace("GovHydroPelton.db1", &assign_GovHydroPelton_db1);
	assign_map.emplace("GovHydroPelton.db2", &assign_GovHydroPelton_db2);
	assign_map.emplace("GovHydroPelton.h1", &assign_GovHydroPelton_h1);
	assign_map.emplace("GovHydroPelton.h2", &assign_GovHydroPelton_h2);
	assign_map.emplace("GovHydroPelton.hn", &assign_GovHydroPelton_hn);
	assign_map.emplace("GovHydroPelton.kc", &assign_GovHydroPelton_kc);
	assign_map.emplace("GovHydroPelton.kg", &assign_GovHydroPelton_kg);
	assign_map.emplace("GovHydroPelton.qc0", &assign_GovHydroPelton_qc0);
	assign_map.emplace("GovHydroPelton.qn", &assign_GovHydroPelton_qn);
	assign_map.emplace("GovHydroPelton.simplifiedPelton", &assign_GovHydroPelton_simplifiedPelton);
	assign_map.emplace("GovHydroPelton.staticCompensating", &assign_GovHydroPelton_staticCompensating);
	assign_map.emplace("GovHydroPelton.ta", &assign_GovHydroPelton_ta);
	assign_map.emplace("GovHydroPelton.ts", &assign_GovHydroPelton_ts);
	assign_map.emplace("GovHydroPelton.tv", &assign_GovHydroPelton_tv);
	assign_map.emplace("GovHydroPelton.twnc", &assign_GovHydroPelton_twnc);
	assign_map.emplace("GovHydroPelton.twng", &assign_GovHydroPelton_twng);
	assign_map.emplace("GovHydroPelton.tx", &assign_GovHydroPelton_tx);
	assign_map.emplace("GovHydroPelton.va", &assign_GovHydroPelton_va);
	assign_map.emplace("GovHydroPelton.valvmax", &assign_GovHydroPelton_valvmax);
	assign_map.emplace("GovHydroPelton.valvmin", &assign_GovHydroPelton_valvmin);
	assign_map.emplace("GovHydroPelton.vav", &assign_GovHydroPelton_vav);
	assign_map.emplace("GovHydroPelton.vc", &assign_GovHydroPelton_vc);
	assign_map.emplace("GovHydroPelton.vcv", &assign_GovHydroPelton_vcv);
	assign_map.emplace("GovHydroPelton.waterTunnelSurgeChamberSimulation", &assign_GovHydroPelton_waterTunnelSurgeChamberSimulation);
	assign_map.emplace("GovHydroPelton.zsfc", &assign_GovHydroPelton_zsfc);
}

void GovHydroPelton::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovHydroPelton::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("GovHydroPelton.av0", &get_GovHydroPelton_av0);
	get_map.emplace("GovHydroPelton.av1", &get_GovHydroPelton_av1);
	get_map.emplace("GovHydroPelton.bp", &get_GovHydroPelton_bp);
	get_map.emplace("GovHydroPelton.db1", &get_GovHydroPelton_db1);
	get_map.emplace("GovHydroPelton.db2", &get_GovHydroPelton_db2);
	get_map.emplace("GovHydroPelton.h1", &get_GovHydroPelton_h1);
	get_map.emplace("GovHydroPelton.h2", &get_GovHydroPelton_h2);
	get_map.emplace("GovHydroPelton.hn", &get_GovHydroPelton_hn);
	get_map.emplace("GovHydroPelton.kc", &get_GovHydroPelton_kc);
	get_map.emplace("GovHydroPelton.kg", &get_GovHydroPelton_kg);
	get_map.emplace("GovHydroPelton.qc0", &get_GovHydroPelton_qc0);
	get_map.emplace("GovHydroPelton.qn", &get_GovHydroPelton_qn);
	get_map.emplace("GovHydroPelton.simplifiedPelton", &get_GovHydroPelton_simplifiedPelton);
	get_map.emplace("GovHydroPelton.staticCompensating", &get_GovHydroPelton_staticCompensating);
	get_map.emplace("GovHydroPelton.ta", &get_GovHydroPelton_ta);
	get_map.emplace("GovHydroPelton.ts", &get_GovHydroPelton_ts);
	get_map.emplace("GovHydroPelton.tv", &get_GovHydroPelton_tv);
	get_map.emplace("GovHydroPelton.twnc", &get_GovHydroPelton_twnc);
	get_map.emplace("GovHydroPelton.twng", &get_GovHydroPelton_twng);
	get_map.emplace("GovHydroPelton.tx", &get_GovHydroPelton_tx);
	get_map.emplace("GovHydroPelton.va", &get_GovHydroPelton_va);
	get_map.emplace("GovHydroPelton.valvmax", &get_GovHydroPelton_valvmax);
	get_map.emplace("GovHydroPelton.valvmin", &get_GovHydroPelton_valvmin);
	get_map.emplace("GovHydroPelton.vav", &get_GovHydroPelton_vav);
	get_map.emplace("GovHydroPelton.vc", &get_GovHydroPelton_vc);
	get_map.emplace("GovHydroPelton.vcv", &get_GovHydroPelton_vcv);
	get_map.emplace("GovHydroPelton.waterTunnelSurgeChamberSimulation", &get_GovHydroPelton_waterTunnelSurgeChamberSimulation);
	get_map.emplace("GovHydroPelton.zsfc", &get_GovHydroPelton_zsfc);
}

void GovHydroPelton::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovHydroPelton::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

bool GovHydroPelton::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GovHydroPelton" &&
		dynamic_cast<GovHydroPelton*>(otherObject) != nullptr;
}

const BaseClassDefiner GovHydroPelton::declare()
{
	return BaseClassDefiner(GovHydroPelton::addConstructToMap, GovHydroPelton::addPrimitiveAssignFnsToMap, GovHydroPelton::addClassAssignFnsToMap, GovHydroPelton::debugName);
}

std::map<std::string, AttrDetails> GovHydroPelton::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TurbineGovernorDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GovHydroPelton_factory()
	{
		return new GovHydroPelton;
	}
}
