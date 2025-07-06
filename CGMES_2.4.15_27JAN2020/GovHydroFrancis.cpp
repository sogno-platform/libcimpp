/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydroFrancis.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GovHydroFrancis(),
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
		{ "GovHydroFrancis.am", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroFrancis.av0", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroFrancis.av1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroFrancis.bp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroFrancis.db1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroFrancis.etamax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroFrancis.governorControl", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroFrancis.h1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroFrancis.h2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroFrancis.hn", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroFrancis.kc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroFrancis.kg", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroFrancis.kt", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroFrancis.qc0", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroFrancis.qn", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroFrancis.ta", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroFrancis.td", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroFrancis.ts", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroFrancis.twnc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroFrancis.twng", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroFrancis.tx", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroFrancis.va", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroFrancis.valvmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroFrancis.valvmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroFrancis.vc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroFrancis.waterTunnelSurgeChamberSimulation", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovHydroFrancis.zsfc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

GovHydroFrancis::GovHydroFrancis() {}
GovHydroFrancis::~GovHydroFrancis() {}

const std::list<std::string>& GovHydroFrancis::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GovHydroFrancis::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GovHydroFrancis::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GovHydroFrancis::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GovHydroFrancis::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GovHydroFrancis::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GovHydroFrancis::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_GovHydroFrancis_am(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->am;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroFrancis_av0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1);
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

bool assign_GovHydroFrancis_av1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1);
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

bool assign_GovHydroFrancis_bp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1);
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

bool assign_GovHydroFrancis_db1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1);
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

bool assign_GovHydroFrancis_etamax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->etamax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroFrancis_governorControl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1);
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

bool assign_GovHydroFrancis_h1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1);
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

bool assign_GovHydroFrancis_h2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1);
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

bool assign_GovHydroFrancis_hn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1);
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

bool assign_GovHydroFrancis_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1);
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

bool assign_GovHydroFrancis_kg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1);
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

bool assign_GovHydroFrancis_kt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroFrancis_qc0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1);
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

bool assign_GovHydroFrancis_qn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1);
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

bool assign_GovHydroFrancis_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1);
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

bool assign_GovHydroFrancis_td(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1);
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

bool assign_GovHydroFrancis_ts(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1);
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

bool assign_GovHydroFrancis_twnc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1);
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

bool assign_GovHydroFrancis_twng(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1);
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

bool assign_GovHydroFrancis_tx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1);
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

bool assign_GovHydroFrancis_va(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1);
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

bool assign_GovHydroFrancis_valvmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1);
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

bool assign_GovHydroFrancis_valvmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1);
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

bool assign_GovHydroFrancis_vc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1);
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

bool assign_GovHydroFrancis_waterTunnelSurgeChamberSimulation(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1);
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

bool assign_GovHydroFrancis_zsfc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroFrancis* element = dynamic_cast<GovHydroFrancis*>(BaseClass_ptr1);
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

bool get_GovHydroFrancis_am(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroFrancis* element = dynamic_cast<const GovHydroFrancis*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->am;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroFrancis_av0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroFrancis* element = dynamic_cast<const GovHydroFrancis*>(BaseClass_ptr1);
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

bool get_GovHydroFrancis_av1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroFrancis* element = dynamic_cast<const GovHydroFrancis*>(BaseClass_ptr1);
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

bool get_GovHydroFrancis_bp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroFrancis* element = dynamic_cast<const GovHydroFrancis*>(BaseClass_ptr1);
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

bool get_GovHydroFrancis_db1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroFrancis* element = dynamic_cast<const GovHydroFrancis*>(BaseClass_ptr1);
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

bool get_GovHydroFrancis_etamax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroFrancis* element = dynamic_cast<const GovHydroFrancis*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->etamax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroFrancis_governorControl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroFrancis* element = dynamic_cast<const GovHydroFrancis*>(BaseClass_ptr1);
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

bool get_GovHydroFrancis_h1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroFrancis* element = dynamic_cast<const GovHydroFrancis*>(BaseClass_ptr1);
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

bool get_GovHydroFrancis_h2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroFrancis* element = dynamic_cast<const GovHydroFrancis*>(BaseClass_ptr1);
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

bool get_GovHydroFrancis_hn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroFrancis* element = dynamic_cast<const GovHydroFrancis*>(BaseClass_ptr1);
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

bool get_GovHydroFrancis_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroFrancis* element = dynamic_cast<const GovHydroFrancis*>(BaseClass_ptr1);
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

bool get_GovHydroFrancis_kg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroFrancis* element = dynamic_cast<const GovHydroFrancis*>(BaseClass_ptr1);
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

bool get_GovHydroFrancis_kt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroFrancis* element = dynamic_cast<const GovHydroFrancis*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroFrancis_qc0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroFrancis* element = dynamic_cast<const GovHydroFrancis*>(BaseClass_ptr1);
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

bool get_GovHydroFrancis_qn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroFrancis* element = dynamic_cast<const GovHydroFrancis*>(BaseClass_ptr1);
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

bool get_GovHydroFrancis_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroFrancis* element = dynamic_cast<const GovHydroFrancis*>(BaseClass_ptr1);
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

bool get_GovHydroFrancis_td(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroFrancis* element = dynamic_cast<const GovHydroFrancis*>(BaseClass_ptr1);
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

bool get_GovHydroFrancis_ts(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroFrancis* element = dynamic_cast<const GovHydroFrancis*>(BaseClass_ptr1);
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

bool get_GovHydroFrancis_twnc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroFrancis* element = dynamic_cast<const GovHydroFrancis*>(BaseClass_ptr1);
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

bool get_GovHydroFrancis_twng(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroFrancis* element = dynamic_cast<const GovHydroFrancis*>(BaseClass_ptr1);
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

bool get_GovHydroFrancis_tx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroFrancis* element = dynamic_cast<const GovHydroFrancis*>(BaseClass_ptr1);
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

bool get_GovHydroFrancis_va(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroFrancis* element = dynamic_cast<const GovHydroFrancis*>(BaseClass_ptr1);
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

bool get_GovHydroFrancis_valvmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroFrancis* element = dynamic_cast<const GovHydroFrancis*>(BaseClass_ptr1);
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

bool get_GovHydroFrancis_valvmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroFrancis* element = dynamic_cast<const GovHydroFrancis*>(BaseClass_ptr1);
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

bool get_GovHydroFrancis_vc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroFrancis* element = dynamic_cast<const GovHydroFrancis*>(BaseClass_ptr1);
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

bool get_GovHydroFrancis_waterTunnelSurgeChamberSimulation(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroFrancis* element = dynamic_cast<const GovHydroFrancis*>(BaseClass_ptr1);
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

bool get_GovHydroFrancis_zsfc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroFrancis* element = dynamic_cast<const GovHydroFrancis*>(BaseClass_ptr1);
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

const char GovHydroFrancis::debugName[] = "GovHydroFrancis";
const char* GovHydroFrancis::debugString() const
{
	return GovHydroFrancis::debugName;
}

void GovHydroFrancis::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("GovHydroFrancis", &GovHydroFrancis_factory);
}

void GovHydroFrancis::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("GovHydroFrancis.am", &assign_GovHydroFrancis_am);
	assign_map.emplace("GovHydroFrancis.av0", &assign_GovHydroFrancis_av0);
	assign_map.emplace("GovHydroFrancis.av1", &assign_GovHydroFrancis_av1);
	assign_map.emplace("GovHydroFrancis.bp", &assign_GovHydroFrancis_bp);
	assign_map.emplace("GovHydroFrancis.db1", &assign_GovHydroFrancis_db1);
	assign_map.emplace("GovHydroFrancis.etamax", &assign_GovHydroFrancis_etamax);
	assign_map.emplace("GovHydroFrancis.governorControl", &assign_GovHydroFrancis_governorControl);
	assign_map.emplace("GovHydroFrancis.h1", &assign_GovHydroFrancis_h1);
	assign_map.emplace("GovHydroFrancis.h2", &assign_GovHydroFrancis_h2);
	assign_map.emplace("GovHydroFrancis.hn", &assign_GovHydroFrancis_hn);
	assign_map.emplace("GovHydroFrancis.kc", &assign_GovHydroFrancis_kc);
	assign_map.emplace("GovHydroFrancis.kg", &assign_GovHydroFrancis_kg);
	assign_map.emplace("GovHydroFrancis.kt", &assign_GovHydroFrancis_kt);
	assign_map.emplace("GovHydroFrancis.qc0", &assign_GovHydroFrancis_qc0);
	assign_map.emplace("GovHydroFrancis.qn", &assign_GovHydroFrancis_qn);
	assign_map.emplace("GovHydroFrancis.ta", &assign_GovHydroFrancis_ta);
	assign_map.emplace("GovHydroFrancis.td", &assign_GovHydroFrancis_td);
	assign_map.emplace("GovHydroFrancis.ts", &assign_GovHydroFrancis_ts);
	assign_map.emplace("GovHydroFrancis.twnc", &assign_GovHydroFrancis_twnc);
	assign_map.emplace("GovHydroFrancis.twng", &assign_GovHydroFrancis_twng);
	assign_map.emplace("GovHydroFrancis.tx", &assign_GovHydroFrancis_tx);
	assign_map.emplace("GovHydroFrancis.va", &assign_GovHydroFrancis_va);
	assign_map.emplace("GovHydroFrancis.valvmax", &assign_GovHydroFrancis_valvmax);
	assign_map.emplace("GovHydroFrancis.valvmin", &assign_GovHydroFrancis_valvmin);
	assign_map.emplace("GovHydroFrancis.vc", &assign_GovHydroFrancis_vc);
	assign_map.emplace("GovHydroFrancis.waterTunnelSurgeChamberSimulation", &assign_GovHydroFrancis_waterTunnelSurgeChamberSimulation);
	assign_map.emplace("GovHydroFrancis.zsfc", &assign_GovHydroFrancis_zsfc);
}

void GovHydroFrancis::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovHydroFrancis::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("GovHydroFrancis.am", &get_GovHydroFrancis_am);
	get_map.emplace("GovHydroFrancis.av0", &get_GovHydroFrancis_av0);
	get_map.emplace("GovHydroFrancis.av1", &get_GovHydroFrancis_av1);
	get_map.emplace("GovHydroFrancis.bp", &get_GovHydroFrancis_bp);
	get_map.emplace("GovHydroFrancis.db1", &get_GovHydroFrancis_db1);
	get_map.emplace("GovHydroFrancis.etamax", &get_GovHydroFrancis_etamax);
	get_map.emplace("GovHydroFrancis.h1", &get_GovHydroFrancis_h1);
	get_map.emplace("GovHydroFrancis.h2", &get_GovHydroFrancis_h2);
	get_map.emplace("GovHydroFrancis.hn", &get_GovHydroFrancis_hn);
	get_map.emplace("GovHydroFrancis.kc", &get_GovHydroFrancis_kc);
	get_map.emplace("GovHydroFrancis.kg", &get_GovHydroFrancis_kg);
	get_map.emplace("GovHydroFrancis.kt", &get_GovHydroFrancis_kt);
	get_map.emplace("GovHydroFrancis.qc0", &get_GovHydroFrancis_qc0);
	get_map.emplace("GovHydroFrancis.qn", &get_GovHydroFrancis_qn);
	get_map.emplace("GovHydroFrancis.ta", &get_GovHydroFrancis_ta);
	get_map.emplace("GovHydroFrancis.td", &get_GovHydroFrancis_td);
	get_map.emplace("GovHydroFrancis.ts", &get_GovHydroFrancis_ts);
	get_map.emplace("GovHydroFrancis.twnc", &get_GovHydroFrancis_twnc);
	get_map.emplace("GovHydroFrancis.twng", &get_GovHydroFrancis_twng);
	get_map.emplace("GovHydroFrancis.tx", &get_GovHydroFrancis_tx);
	get_map.emplace("GovHydroFrancis.va", &get_GovHydroFrancis_va);
	get_map.emplace("GovHydroFrancis.valvmax", &get_GovHydroFrancis_valvmax);
	get_map.emplace("GovHydroFrancis.valvmin", &get_GovHydroFrancis_valvmin);
	get_map.emplace("GovHydroFrancis.vc", &get_GovHydroFrancis_vc);
	get_map.emplace("GovHydroFrancis.waterTunnelSurgeChamberSimulation", &get_GovHydroFrancis_waterTunnelSurgeChamberSimulation);
	get_map.emplace("GovHydroFrancis.zsfc", &get_GovHydroFrancis_zsfc);
}

void GovHydroFrancis::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovHydroFrancis::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
	get_map.emplace("GovHydroFrancis.governorControl", &get_GovHydroFrancis_governorControl);
}

bool GovHydroFrancis::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GovHydroFrancis" &&
		dynamic_cast<GovHydroFrancis*>(otherObject) != nullptr;
}

const BaseClassDefiner GovHydroFrancis::declare()
{
	return BaseClassDefiner(GovHydroFrancis::addConstructToMap, GovHydroFrancis::addPrimitiveAssignFnsToMap, GovHydroFrancis::addClassAssignFnsToMap, GovHydroFrancis::debugName);
}

std::map<std::string, AttrDetails> GovHydroFrancis::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TurbineGovernorDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GovHydroFrancis_factory()
	{
		return new GovHydroFrancis;
	}
}
