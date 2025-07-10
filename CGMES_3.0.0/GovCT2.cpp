/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovCT2.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GovCT2(),
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
		{ "GovCT2.aset", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.db", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.dm", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.flim1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.flim10", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.flim2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.flim3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.flim4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.flim5", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.flim6", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.flim7", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.flim8", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.flim9", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.ka", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.kdgov", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.kigov", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.kiload", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.kimw", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.kpgov", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.kpload", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.kturb", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.ldref", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.maxerr", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.minerr", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.mwbase", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.plim1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.plim10", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.plim2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.plim3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.plim4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.plim5", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.plim6", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.plim7", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.plim8", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.plim9", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.prate", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.r", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.rclose", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.rdown", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.ropen", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.rselect", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.rup", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.ta", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.tact", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.tb", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.tc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.tdgov", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.teng", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.tfload", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.tpelec", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.tsa", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.tsb", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.vmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.vmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.wfnl", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovCT2.wfspd", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

GovCT2::GovCT2() {}
GovCT2::~GovCT2() {}

const std::list<std::string>& GovCT2::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GovCT2::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GovCT2::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GovCT2::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GovCT2::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GovCT2::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GovCT2::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_GovCT2_aset(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->aset;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_db(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->db;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_dm(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dm;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_flim1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->flim1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_flim10(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->flim10;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_flim2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->flim2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_flim3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->flim3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_flim4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->flim4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_flim5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->flim5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_flim6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->flim6;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_flim7(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->flim7;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_flim8(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->flim8;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_flim9(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->flim9;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ka;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_kdgov(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kdgov;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_kigov(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kigov;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_kiload(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kiload;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_kimw(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kimw;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_kpgov(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpgov;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_kpload(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpload;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_kturb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
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

bool assign_GovCT2_ldref(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ldref;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_maxerr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->maxerr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_minerr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->minerr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
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

bool assign_GovCT2_plim1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->plim1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_plim10(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->plim10;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_plim2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->plim2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_plim3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->plim3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_plim4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->plim4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_plim5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->plim5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_plim6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->plim6;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_plim7(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->plim7;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_plim8(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->plim8;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_plim9(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->plim9;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_prate(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->prate;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_r(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
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

bool assign_GovCT2_rclose(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rclose;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_rdown(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rdown;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_ropen(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ropen;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_rselect(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rselect;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_rup(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rup;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
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

bool assign_GovCT2_tact(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tact;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_tdgov(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tdgov;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_teng(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->teng;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_tfload(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tfload;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_tpelec(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tpelec;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_tsa(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tsa;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_tsb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tsb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_vmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_vmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_wfnl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->wfnl;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT2_wfspd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT2* element = dynamic_cast<GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->wfspd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_GovCT2_aset(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->aset;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_db(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->db;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_dm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dm;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_flim1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->flim1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_flim10(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->flim10;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_flim2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->flim2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_flim3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->flim3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_flim4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->flim4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_flim5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->flim5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_flim6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->flim6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_flim7(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->flim7;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_flim8(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->flim8;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_flim9(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->flim9;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ka;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_kdgov(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kdgov;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_kigov(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kigov;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_kiload(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kiload;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_kimw(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kimw;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_kpgov(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpgov;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_kpload(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpload;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_kturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
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

bool get_GovCT2_ldref(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ldref;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_maxerr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->maxerr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_minerr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->minerr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
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

bool get_GovCT2_plim1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->plim1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_plim10(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->plim10;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_plim2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->plim2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_plim3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->plim3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_plim4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->plim4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_plim5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->plim5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_plim6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->plim6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_plim7(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->plim7;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_plim8(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->plim8;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_plim9(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->plim9;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_prate(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->prate;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
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

bool get_GovCT2_rclose(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rclose;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_rdown(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rdown;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_ropen(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ropen;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_rselect(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rselect;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_rup(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rup;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
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

bool get_GovCT2_tact(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tact;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_tdgov(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tdgov;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_teng(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->teng;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_tfload(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tfload;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_tpelec(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tpelec;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_tsa(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tsa;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_tsb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tsb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_vmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_vmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_wfnl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->wfnl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT2_wfspd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT2* element = dynamic_cast<const GovCT2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->wfspd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char GovCT2::debugName[] = "GovCT2";
const char* GovCT2::debugString() const
{
	return GovCT2::debugName;
}

void GovCT2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("GovCT2", &GovCT2_factory);
}

void GovCT2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("GovCT2.aset", &assign_GovCT2_aset);
	assign_map.emplace("GovCT2.db", &assign_GovCT2_db);
	assign_map.emplace("GovCT2.dm", &assign_GovCT2_dm);
	assign_map.emplace("GovCT2.flim1", &assign_GovCT2_flim1);
	assign_map.emplace("GovCT2.flim10", &assign_GovCT2_flim10);
	assign_map.emplace("GovCT2.flim2", &assign_GovCT2_flim2);
	assign_map.emplace("GovCT2.flim3", &assign_GovCT2_flim3);
	assign_map.emplace("GovCT2.flim4", &assign_GovCT2_flim4);
	assign_map.emplace("GovCT2.flim5", &assign_GovCT2_flim5);
	assign_map.emplace("GovCT2.flim6", &assign_GovCT2_flim6);
	assign_map.emplace("GovCT2.flim7", &assign_GovCT2_flim7);
	assign_map.emplace("GovCT2.flim8", &assign_GovCT2_flim8);
	assign_map.emplace("GovCT2.flim9", &assign_GovCT2_flim9);
	assign_map.emplace("GovCT2.ka", &assign_GovCT2_ka);
	assign_map.emplace("GovCT2.kdgov", &assign_GovCT2_kdgov);
	assign_map.emplace("GovCT2.kigov", &assign_GovCT2_kigov);
	assign_map.emplace("GovCT2.kiload", &assign_GovCT2_kiload);
	assign_map.emplace("GovCT2.kimw", &assign_GovCT2_kimw);
	assign_map.emplace("GovCT2.kpgov", &assign_GovCT2_kpgov);
	assign_map.emplace("GovCT2.kpload", &assign_GovCT2_kpload);
	assign_map.emplace("GovCT2.kturb", &assign_GovCT2_kturb);
	assign_map.emplace("GovCT2.ldref", &assign_GovCT2_ldref);
	assign_map.emplace("GovCT2.maxerr", &assign_GovCT2_maxerr);
	assign_map.emplace("GovCT2.minerr", &assign_GovCT2_minerr);
	assign_map.emplace("GovCT2.mwbase", &assign_GovCT2_mwbase);
	assign_map.emplace("GovCT2.plim1", &assign_GovCT2_plim1);
	assign_map.emplace("GovCT2.plim10", &assign_GovCT2_plim10);
	assign_map.emplace("GovCT2.plim2", &assign_GovCT2_plim2);
	assign_map.emplace("GovCT2.plim3", &assign_GovCT2_plim3);
	assign_map.emplace("GovCT2.plim4", &assign_GovCT2_plim4);
	assign_map.emplace("GovCT2.plim5", &assign_GovCT2_plim5);
	assign_map.emplace("GovCT2.plim6", &assign_GovCT2_plim6);
	assign_map.emplace("GovCT2.plim7", &assign_GovCT2_plim7);
	assign_map.emplace("GovCT2.plim8", &assign_GovCT2_plim8);
	assign_map.emplace("GovCT2.plim9", &assign_GovCT2_plim9);
	assign_map.emplace("GovCT2.prate", &assign_GovCT2_prate);
	assign_map.emplace("GovCT2.r", &assign_GovCT2_r);
	assign_map.emplace("GovCT2.rclose", &assign_GovCT2_rclose);
	assign_map.emplace("GovCT2.rdown", &assign_GovCT2_rdown);
	assign_map.emplace("GovCT2.ropen", &assign_GovCT2_ropen);
	assign_map.emplace("GovCT2.rselect", &assign_GovCT2_rselect);
	assign_map.emplace("GovCT2.rup", &assign_GovCT2_rup);
	assign_map.emplace("GovCT2.ta", &assign_GovCT2_ta);
	assign_map.emplace("GovCT2.tact", &assign_GovCT2_tact);
	assign_map.emplace("GovCT2.tb", &assign_GovCT2_tb);
	assign_map.emplace("GovCT2.tc", &assign_GovCT2_tc);
	assign_map.emplace("GovCT2.tdgov", &assign_GovCT2_tdgov);
	assign_map.emplace("GovCT2.teng", &assign_GovCT2_teng);
	assign_map.emplace("GovCT2.tfload", &assign_GovCT2_tfload);
	assign_map.emplace("GovCT2.tpelec", &assign_GovCT2_tpelec);
	assign_map.emplace("GovCT2.tsa", &assign_GovCT2_tsa);
	assign_map.emplace("GovCT2.tsb", &assign_GovCT2_tsb);
	assign_map.emplace("GovCT2.vmax", &assign_GovCT2_vmax);
	assign_map.emplace("GovCT2.vmin", &assign_GovCT2_vmin);
	assign_map.emplace("GovCT2.wfnl", &assign_GovCT2_wfnl);
	assign_map.emplace("GovCT2.wfspd", &assign_GovCT2_wfspd);
}

void GovCT2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovCT2::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("GovCT2.aset", &get_GovCT2_aset);
	get_map.emplace("GovCT2.db", &get_GovCT2_db);
	get_map.emplace("GovCT2.dm", &get_GovCT2_dm);
	get_map.emplace("GovCT2.flim1", &get_GovCT2_flim1);
	get_map.emplace("GovCT2.flim10", &get_GovCT2_flim10);
	get_map.emplace("GovCT2.flim2", &get_GovCT2_flim2);
	get_map.emplace("GovCT2.flim3", &get_GovCT2_flim3);
	get_map.emplace("GovCT2.flim4", &get_GovCT2_flim4);
	get_map.emplace("GovCT2.flim5", &get_GovCT2_flim5);
	get_map.emplace("GovCT2.flim6", &get_GovCT2_flim6);
	get_map.emplace("GovCT2.flim7", &get_GovCT2_flim7);
	get_map.emplace("GovCT2.flim8", &get_GovCT2_flim8);
	get_map.emplace("GovCT2.flim9", &get_GovCT2_flim9);
	get_map.emplace("GovCT2.ka", &get_GovCT2_ka);
	get_map.emplace("GovCT2.kdgov", &get_GovCT2_kdgov);
	get_map.emplace("GovCT2.kigov", &get_GovCT2_kigov);
	get_map.emplace("GovCT2.kiload", &get_GovCT2_kiload);
	get_map.emplace("GovCT2.kimw", &get_GovCT2_kimw);
	get_map.emplace("GovCT2.kpgov", &get_GovCT2_kpgov);
	get_map.emplace("GovCT2.kpload", &get_GovCT2_kpload);
	get_map.emplace("GovCT2.kturb", &get_GovCT2_kturb);
	get_map.emplace("GovCT2.ldref", &get_GovCT2_ldref);
	get_map.emplace("GovCT2.maxerr", &get_GovCT2_maxerr);
	get_map.emplace("GovCT2.minerr", &get_GovCT2_minerr);
	get_map.emplace("GovCT2.mwbase", &get_GovCT2_mwbase);
	get_map.emplace("GovCT2.plim1", &get_GovCT2_plim1);
	get_map.emplace("GovCT2.plim10", &get_GovCT2_plim10);
	get_map.emplace("GovCT2.plim2", &get_GovCT2_plim2);
	get_map.emplace("GovCT2.plim3", &get_GovCT2_plim3);
	get_map.emplace("GovCT2.plim4", &get_GovCT2_plim4);
	get_map.emplace("GovCT2.plim5", &get_GovCT2_plim5);
	get_map.emplace("GovCT2.plim6", &get_GovCT2_plim6);
	get_map.emplace("GovCT2.plim7", &get_GovCT2_plim7);
	get_map.emplace("GovCT2.plim8", &get_GovCT2_plim8);
	get_map.emplace("GovCT2.plim9", &get_GovCT2_plim9);
	get_map.emplace("GovCT2.prate", &get_GovCT2_prate);
	get_map.emplace("GovCT2.r", &get_GovCT2_r);
	get_map.emplace("GovCT2.rclose", &get_GovCT2_rclose);
	get_map.emplace("GovCT2.rdown", &get_GovCT2_rdown);
	get_map.emplace("GovCT2.ropen", &get_GovCT2_ropen);
	get_map.emplace("GovCT2.rup", &get_GovCT2_rup);
	get_map.emplace("GovCT2.ta", &get_GovCT2_ta);
	get_map.emplace("GovCT2.tact", &get_GovCT2_tact);
	get_map.emplace("GovCT2.tb", &get_GovCT2_tb);
	get_map.emplace("GovCT2.tc", &get_GovCT2_tc);
	get_map.emplace("GovCT2.tdgov", &get_GovCT2_tdgov);
	get_map.emplace("GovCT2.teng", &get_GovCT2_teng);
	get_map.emplace("GovCT2.tfload", &get_GovCT2_tfload);
	get_map.emplace("GovCT2.tpelec", &get_GovCT2_tpelec);
	get_map.emplace("GovCT2.tsa", &get_GovCT2_tsa);
	get_map.emplace("GovCT2.tsb", &get_GovCT2_tsb);
	get_map.emplace("GovCT2.vmax", &get_GovCT2_vmax);
	get_map.emplace("GovCT2.vmin", &get_GovCT2_vmin);
	get_map.emplace("GovCT2.wfnl", &get_GovCT2_wfnl);
	get_map.emplace("GovCT2.wfspd", &get_GovCT2_wfspd);
}

void GovCT2::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovCT2::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
	get_map.emplace("GovCT2.rselect", &get_GovCT2_rselect);
}

bool GovCT2::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GovCT2" &&
		dynamic_cast<GovCT2*>(otherObject) != nullptr;
}

const BaseClassDefiner GovCT2::declare()
{
	return BaseClassDefiner(GovCT2::addConstructToMap, GovCT2::addPrimitiveAssignFnsToMap, GovCT2::addClassAssignFnsToMap, GovCT2::debugName);
}

std::map<std::string, AttrDetails> GovCT2::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TurbineGovernorDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GovCT2_factory()
	{
		return new GovCT2;
	}
}
