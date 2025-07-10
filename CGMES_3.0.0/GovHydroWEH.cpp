/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydroWEH.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GovHydroWEH(),
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
		{ "GovHydroWEH.db", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.dicn", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.dpv", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.dturb", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.feedbackSignal", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.fl1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.fl2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.fl3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.fl4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.fl5", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.fp1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.fp10", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.fp2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.fp3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.fp4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.fp5", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.fp6", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.fp7", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.fp8", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.fp9", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.gmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.gmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.gtmxcl", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.gtmxop", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.gv1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.gv2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.gv3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.gv4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.gv5", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.kd", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.ki", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.kp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.mwbase", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.pmss1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.pmss10", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.pmss2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.pmss3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.pmss4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.pmss5", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.pmss6", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.pmss7", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.pmss8", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.pmss9", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.rpg", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.rpp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.td", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.tdv", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.tg", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.tp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.tpe", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovHydroWEH.tw", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

GovHydroWEH::GovHydroWEH() {}
GovHydroWEH::~GovHydroWEH() {}

const std::list<std::string>& GovHydroWEH::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GovHydroWEH::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GovHydroWEH::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GovHydroWEH::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GovHydroWEH::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GovHydroWEH::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GovHydroWEH::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_GovHydroWEH_db(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
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

bool assign_GovHydroWEH_dicn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dicn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_dpv(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dpv;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_dturb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
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

bool assign_GovHydroWEH_feedbackSignal(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->feedbackSignal;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fl1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fl1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fl2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fl2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fl3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fl3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fl4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fl4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fl5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fl5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fp1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fp1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fp10(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fp10;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fp2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fp2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fp3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fp3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fp4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fp4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fp5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fp5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fp6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fp6;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fp7(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fp7;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fp8(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fp8;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_fp9(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fp9;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_gmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
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

bool assign_GovHydroWEH_gmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
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

bool assign_GovHydroWEH_gtmxcl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->gtmxcl;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_gtmxop(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->gtmxop;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_gv1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
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

bool assign_GovHydroWEH_gv2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
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

bool assign_GovHydroWEH_gv3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
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

bool assign_GovHydroWEH_gv4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
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

bool assign_GovHydroWEH_gv5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
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

bool assign_GovHydroWEH_kd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
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

bool assign_GovHydroWEH_ki(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
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

bool assign_GovHydroWEH_kp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
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

bool assign_GovHydroWEH_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
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

bool assign_GovHydroWEH_pmss1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmss1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_pmss10(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmss10;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_pmss2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmss2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_pmss3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmss3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_pmss4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmss4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_pmss5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmss5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_pmss6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmss6;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_pmss7(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmss7;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_pmss8(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmss8;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_pmss9(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmss9;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_rpg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rpg;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_rpp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rpp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_td(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
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

bool assign_GovHydroWEH_tdv(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tdv;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_tg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
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

bool assign_GovHydroWEH_tp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
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

bool assign_GovHydroWEH_tpe(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tpe;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovHydroWEH_tw(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovHydroWEH* element = dynamic_cast<GovHydroWEH*>(BaseClass_ptr1);
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

bool get_GovHydroWEH_db(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
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

bool get_GovHydroWEH_dicn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dicn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_dpv(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dpv;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_dturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
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

bool get_GovHydroWEH_feedbackSignal(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->feedbackSignal;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fl1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fl1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fl2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fl2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fl3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fl3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fl4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fl4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fl5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fl5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fp1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fp1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fp10(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fp10;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fp2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fp2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fp3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fp3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fp4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fp4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fp5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fp5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fp6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fp6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fp7(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fp7;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fp8(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fp8;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_fp9(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fp9;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_gmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
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

bool get_GovHydroWEH_gmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
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

bool get_GovHydroWEH_gtmxcl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->gtmxcl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_gtmxop(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->gtmxop;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_gv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
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

bool get_GovHydroWEH_gv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
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

bool get_GovHydroWEH_gv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
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

bool get_GovHydroWEH_gv4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
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

bool get_GovHydroWEH_gv5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
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

bool get_GovHydroWEH_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
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

bool get_GovHydroWEH_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
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

bool get_GovHydroWEH_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
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

bool get_GovHydroWEH_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
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

bool get_GovHydroWEH_pmss1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmss1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_pmss10(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmss10;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_pmss2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmss2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_pmss3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmss3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_pmss4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmss4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_pmss5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmss5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_pmss6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmss6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_pmss7(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmss7;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_pmss8(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmss8;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_pmss9(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmss9;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_rpg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rpg;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_rpp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rpp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_td(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
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

bool get_GovHydroWEH_tdv(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tdv;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_tg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
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

bool get_GovHydroWEH_tp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
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

bool get_GovHydroWEH_tpe(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tpe;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroWEH_tw(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovHydroWEH* element = dynamic_cast<const GovHydroWEH*>(BaseClass_ptr1);
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

const char GovHydroWEH::debugName[] = "GovHydroWEH";
const char* GovHydroWEH::debugString() const
{
	return GovHydroWEH::debugName;
}

void GovHydroWEH::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("GovHydroWEH", &GovHydroWEH_factory);
}

void GovHydroWEH::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("GovHydroWEH.db", &assign_GovHydroWEH_db);
	assign_map.emplace("GovHydroWEH.dicn", &assign_GovHydroWEH_dicn);
	assign_map.emplace("GovHydroWEH.dpv", &assign_GovHydroWEH_dpv);
	assign_map.emplace("GovHydroWEH.dturb", &assign_GovHydroWEH_dturb);
	assign_map.emplace("GovHydroWEH.feedbackSignal", &assign_GovHydroWEH_feedbackSignal);
	assign_map.emplace("GovHydroWEH.fl1", &assign_GovHydroWEH_fl1);
	assign_map.emplace("GovHydroWEH.fl2", &assign_GovHydroWEH_fl2);
	assign_map.emplace("GovHydroWEH.fl3", &assign_GovHydroWEH_fl3);
	assign_map.emplace("GovHydroWEH.fl4", &assign_GovHydroWEH_fl4);
	assign_map.emplace("GovHydroWEH.fl5", &assign_GovHydroWEH_fl5);
	assign_map.emplace("GovHydroWEH.fp1", &assign_GovHydroWEH_fp1);
	assign_map.emplace("GovHydroWEH.fp10", &assign_GovHydroWEH_fp10);
	assign_map.emplace("GovHydroWEH.fp2", &assign_GovHydroWEH_fp2);
	assign_map.emplace("GovHydroWEH.fp3", &assign_GovHydroWEH_fp3);
	assign_map.emplace("GovHydroWEH.fp4", &assign_GovHydroWEH_fp4);
	assign_map.emplace("GovHydroWEH.fp5", &assign_GovHydroWEH_fp5);
	assign_map.emplace("GovHydroWEH.fp6", &assign_GovHydroWEH_fp6);
	assign_map.emplace("GovHydroWEH.fp7", &assign_GovHydroWEH_fp7);
	assign_map.emplace("GovHydroWEH.fp8", &assign_GovHydroWEH_fp8);
	assign_map.emplace("GovHydroWEH.fp9", &assign_GovHydroWEH_fp9);
	assign_map.emplace("GovHydroWEH.gmax", &assign_GovHydroWEH_gmax);
	assign_map.emplace("GovHydroWEH.gmin", &assign_GovHydroWEH_gmin);
	assign_map.emplace("GovHydroWEH.gtmxcl", &assign_GovHydroWEH_gtmxcl);
	assign_map.emplace("GovHydroWEH.gtmxop", &assign_GovHydroWEH_gtmxop);
	assign_map.emplace("GovHydroWEH.gv1", &assign_GovHydroWEH_gv1);
	assign_map.emplace("GovHydroWEH.gv2", &assign_GovHydroWEH_gv2);
	assign_map.emplace("GovHydroWEH.gv3", &assign_GovHydroWEH_gv3);
	assign_map.emplace("GovHydroWEH.gv4", &assign_GovHydroWEH_gv4);
	assign_map.emplace("GovHydroWEH.gv5", &assign_GovHydroWEH_gv5);
	assign_map.emplace("GovHydroWEH.kd", &assign_GovHydroWEH_kd);
	assign_map.emplace("GovHydroWEH.ki", &assign_GovHydroWEH_ki);
	assign_map.emplace("GovHydroWEH.kp", &assign_GovHydroWEH_kp);
	assign_map.emplace("GovHydroWEH.mwbase", &assign_GovHydroWEH_mwbase);
	assign_map.emplace("GovHydroWEH.pmss1", &assign_GovHydroWEH_pmss1);
	assign_map.emplace("GovHydroWEH.pmss10", &assign_GovHydroWEH_pmss10);
	assign_map.emplace("GovHydroWEH.pmss2", &assign_GovHydroWEH_pmss2);
	assign_map.emplace("GovHydroWEH.pmss3", &assign_GovHydroWEH_pmss3);
	assign_map.emplace("GovHydroWEH.pmss4", &assign_GovHydroWEH_pmss4);
	assign_map.emplace("GovHydroWEH.pmss5", &assign_GovHydroWEH_pmss5);
	assign_map.emplace("GovHydroWEH.pmss6", &assign_GovHydroWEH_pmss6);
	assign_map.emplace("GovHydroWEH.pmss7", &assign_GovHydroWEH_pmss7);
	assign_map.emplace("GovHydroWEH.pmss8", &assign_GovHydroWEH_pmss8);
	assign_map.emplace("GovHydroWEH.pmss9", &assign_GovHydroWEH_pmss9);
	assign_map.emplace("GovHydroWEH.rpg", &assign_GovHydroWEH_rpg);
	assign_map.emplace("GovHydroWEH.rpp", &assign_GovHydroWEH_rpp);
	assign_map.emplace("GovHydroWEH.td", &assign_GovHydroWEH_td);
	assign_map.emplace("GovHydroWEH.tdv", &assign_GovHydroWEH_tdv);
	assign_map.emplace("GovHydroWEH.tg", &assign_GovHydroWEH_tg);
	assign_map.emplace("GovHydroWEH.tp", &assign_GovHydroWEH_tp);
	assign_map.emplace("GovHydroWEH.tpe", &assign_GovHydroWEH_tpe);
	assign_map.emplace("GovHydroWEH.tw", &assign_GovHydroWEH_tw);
}

void GovHydroWEH::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovHydroWEH::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("GovHydroWEH.db", &get_GovHydroWEH_db);
	get_map.emplace("GovHydroWEH.dicn", &get_GovHydroWEH_dicn);
	get_map.emplace("GovHydroWEH.dpv", &get_GovHydroWEH_dpv);
	get_map.emplace("GovHydroWEH.dturb", &get_GovHydroWEH_dturb);
	get_map.emplace("GovHydroWEH.feedbackSignal", &get_GovHydroWEH_feedbackSignal);
	get_map.emplace("GovHydroWEH.fl1", &get_GovHydroWEH_fl1);
	get_map.emplace("GovHydroWEH.fl2", &get_GovHydroWEH_fl2);
	get_map.emplace("GovHydroWEH.fl3", &get_GovHydroWEH_fl3);
	get_map.emplace("GovHydroWEH.fl4", &get_GovHydroWEH_fl4);
	get_map.emplace("GovHydroWEH.fl5", &get_GovHydroWEH_fl5);
	get_map.emplace("GovHydroWEH.fp1", &get_GovHydroWEH_fp1);
	get_map.emplace("GovHydroWEH.fp10", &get_GovHydroWEH_fp10);
	get_map.emplace("GovHydroWEH.fp2", &get_GovHydroWEH_fp2);
	get_map.emplace("GovHydroWEH.fp3", &get_GovHydroWEH_fp3);
	get_map.emplace("GovHydroWEH.fp4", &get_GovHydroWEH_fp4);
	get_map.emplace("GovHydroWEH.fp5", &get_GovHydroWEH_fp5);
	get_map.emplace("GovHydroWEH.fp6", &get_GovHydroWEH_fp6);
	get_map.emplace("GovHydroWEH.fp7", &get_GovHydroWEH_fp7);
	get_map.emplace("GovHydroWEH.fp8", &get_GovHydroWEH_fp8);
	get_map.emplace("GovHydroWEH.fp9", &get_GovHydroWEH_fp9);
	get_map.emplace("GovHydroWEH.gmax", &get_GovHydroWEH_gmax);
	get_map.emplace("GovHydroWEH.gmin", &get_GovHydroWEH_gmin);
	get_map.emplace("GovHydroWEH.gtmxcl", &get_GovHydroWEH_gtmxcl);
	get_map.emplace("GovHydroWEH.gtmxop", &get_GovHydroWEH_gtmxop);
	get_map.emplace("GovHydroWEH.gv1", &get_GovHydroWEH_gv1);
	get_map.emplace("GovHydroWEH.gv2", &get_GovHydroWEH_gv2);
	get_map.emplace("GovHydroWEH.gv3", &get_GovHydroWEH_gv3);
	get_map.emplace("GovHydroWEH.gv4", &get_GovHydroWEH_gv4);
	get_map.emplace("GovHydroWEH.gv5", &get_GovHydroWEH_gv5);
	get_map.emplace("GovHydroWEH.kd", &get_GovHydroWEH_kd);
	get_map.emplace("GovHydroWEH.ki", &get_GovHydroWEH_ki);
	get_map.emplace("GovHydroWEH.kp", &get_GovHydroWEH_kp);
	get_map.emplace("GovHydroWEH.mwbase", &get_GovHydroWEH_mwbase);
	get_map.emplace("GovHydroWEH.pmss1", &get_GovHydroWEH_pmss1);
	get_map.emplace("GovHydroWEH.pmss10", &get_GovHydroWEH_pmss10);
	get_map.emplace("GovHydroWEH.pmss2", &get_GovHydroWEH_pmss2);
	get_map.emplace("GovHydroWEH.pmss3", &get_GovHydroWEH_pmss3);
	get_map.emplace("GovHydroWEH.pmss4", &get_GovHydroWEH_pmss4);
	get_map.emplace("GovHydroWEH.pmss5", &get_GovHydroWEH_pmss5);
	get_map.emplace("GovHydroWEH.pmss6", &get_GovHydroWEH_pmss6);
	get_map.emplace("GovHydroWEH.pmss7", &get_GovHydroWEH_pmss7);
	get_map.emplace("GovHydroWEH.pmss8", &get_GovHydroWEH_pmss8);
	get_map.emplace("GovHydroWEH.pmss9", &get_GovHydroWEH_pmss9);
	get_map.emplace("GovHydroWEH.rpg", &get_GovHydroWEH_rpg);
	get_map.emplace("GovHydroWEH.rpp", &get_GovHydroWEH_rpp);
	get_map.emplace("GovHydroWEH.td", &get_GovHydroWEH_td);
	get_map.emplace("GovHydroWEH.tdv", &get_GovHydroWEH_tdv);
	get_map.emplace("GovHydroWEH.tg", &get_GovHydroWEH_tg);
	get_map.emplace("GovHydroWEH.tp", &get_GovHydroWEH_tp);
	get_map.emplace("GovHydroWEH.tpe", &get_GovHydroWEH_tpe);
	get_map.emplace("GovHydroWEH.tw", &get_GovHydroWEH_tw);
}

void GovHydroWEH::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovHydroWEH::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

bool GovHydroWEH::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GovHydroWEH" &&
		dynamic_cast<GovHydroWEH*>(otherObject) != nullptr;
}

const BaseClassDefiner GovHydroWEH::declare()
{
	return BaseClassDefiner(GovHydroWEH::addConstructToMap, GovHydroWEH::addPrimitiveAssignFnsToMap, GovHydroWEH::addClassAssignFnsToMap, GovHydroWEH::debugName);
}

std::map<std::string, AttrDetails> GovHydroWEH::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TurbineGovernorDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GovHydroWEH_factory()
	{
		return new GovHydroWEH;
	}
}
