/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovSteamFV4.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GovSteamFV4(),
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
		{ "GovSteamFV4.cpsmn", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.cpsmx", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.crmn", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.crmx", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.kdc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.kf1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.kf3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.khp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.kic", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.kip", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.kit", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.kmp1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.kmp2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.kpc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.kpp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.kpt", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.krc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.ksh", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.lpi", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.lps", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.mnef", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.mxef", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.pr1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.pr2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.psmn", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.rsmimn", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.rsmimx", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.rvgmn", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.rvgmx", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.srmn", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.srmx", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.srsmp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.svmn", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.svmx", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.ta", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.tam", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.tc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.tcm", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.tdc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.tf1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.tf2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.thp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.tmp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.trh", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.tv", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.ty", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.y", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.yhpmn", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.yhpmx", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.ympmn", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteamFV4.ympmx", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

GovSteamFV4::GovSteamFV4() {}
GovSteamFV4::~GovSteamFV4() {}

const std::list<std::string>& GovSteamFV4::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GovSteamFV4::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GovSteamFV4::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GovSteamFV4::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GovSteamFV4::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GovSteamFV4::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GovSteamFV4::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_GovSteamFV4_cpsmn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->cpsmn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_cpsmx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->cpsmx;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_crmn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->crmn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_crmx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->crmx;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_kdc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kdc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_kf1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kf1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_kf3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kf3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_khp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->khp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_kic(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kic;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_kip(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kip;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_kit(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kit;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_kmp1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kmp1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_kmp2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kmp2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_kpc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_kpp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_kpt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_krc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->krc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_ksh(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ksh;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_lpi(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->lpi;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_lps(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->lps;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_mnef(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->mnef;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_mxef(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->mxef;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_pr1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pr1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_pr2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pr2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_psmn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->psmn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_rsmimn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rsmimn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_rsmimx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rsmimx;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_rvgmn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rvgmn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_rvgmx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rvgmx;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_srmn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->srmn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_srmx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->srmx;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_srsmp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->srsmp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_svmn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->svmn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_svmx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->svmx;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
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

bool assign_GovSteamFV4_tam(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tam;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
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

bool assign_GovSteamFV4_tcm(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tcm;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_tdc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tdc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_tf1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tf1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_tf2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tf2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_thp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->thp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_tmp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tmp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_trh(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->trh;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_tv(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
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

bool assign_GovSteamFV4_ty(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ty;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_y(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->y;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_yhpmn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->yhpmn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_yhpmx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->yhpmx;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_ympmn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ympmn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV4_ympmx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV4* element = dynamic_cast<GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ympmx;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_GovSteamFV4_cpsmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->cpsmn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_cpsmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->cpsmx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_crmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->crmn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_crmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->crmx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_kdc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kdc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_kf1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kf1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_kf3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kf3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_khp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->khp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_kic(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kic;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_kip(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kip;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_kit(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kit;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_kmp1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kmp1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_kmp2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kmp2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_kpc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_kpp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_kpt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_krc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->krc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_ksh(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ksh;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_lpi(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->lpi;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_lps(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->lps;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_mnef(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->mnef;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_mxef(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->mxef;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_pr1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pr1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_pr2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pr2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_psmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->psmn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_rsmimn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rsmimn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_rsmimx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rsmimx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_rvgmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rvgmn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_rvgmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rvgmx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_srmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->srmn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_srmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->srmx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_srsmp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->srsmp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_svmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->svmn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_svmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->svmx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
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

bool get_GovSteamFV4_tam(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tam;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
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

bool get_GovSteamFV4_tcm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tcm;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_tdc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tdc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_tf1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tf1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_tf2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tf2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_thp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->thp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_tmp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tmp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_trh(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->trh;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_tv(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
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

bool get_GovSteamFV4_ty(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ty;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_y(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->y;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_yhpmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->yhpmn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_yhpmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->yhpmx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_ympmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ympmn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV4_ympmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV4* element = dynamic_cast<const GovSteamFV4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ympmx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char GovSteamFV4::debugName[] = "GovSteamFV4";
const char* GovSteamFV4::debugString() const
{
	return GovSteamFV4::debugName;
}

void GovSteamFV4::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("GovSteamFV4", &GovSteamFV4_factory);
}

void GovSteamFV4::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("GovSteamFV4.cpsmn", &assign_GovSteamFV4_cpsmn);
	assign_map.emplace("GovSteamFV4.cpsmx", &assign_GovSteamFV4_cpsmx);
	assign_map.emplace("GovSteamFV4.crmn", &assign_GovSteamFV4_crmn);
	assign_map.emplace("GovSteamFV4.crmx", &assign_GovSteamFV4_crmx);
	assign_map.emplace("GovSteamFV4.kdc", &assign_GovSteamFV4_kdc);
	assign_map.emplace("GovSteamFV4.kf1", &assign_GovSteamFV4_kf1);
	assign_map.emplace("GovSteamFV4.kf3", &assign_GovSteamFV4_kf3);
	assign_map.emplace("GovSteamFV4.khp", &assign_GovSteamFV4_khp);
	assign_map.emplace("GovSteamFV4.kic", &assign_GovSteamFV4_kic);
	assign_map.emplace("GovSteamFV4.kip", &assign_GovSteamFV4_kip);
	assign_map.emplace("GovSteamFV4.kit", &assign_GovSteamFV4_kit);
	assign_map.emplace("GovSteamFV4.kmp1", &assign_GovSteamFV4_kmp1);
	assign_map.emplace("GovSteamFV4.kmp2", &assign_GovSteamFV4_kmp2);
	assign_map.emplace("GovSteamFV4.kpc", &assign_GovSteamFV4_kpc);
	assign_map.emplace("GovSteamFV4.kpp", &assign_GovSteamFV4_kpp);
	assign_map.emplace("GovSteamFV4.kpt", &assign_GovSteamFV4_kpt);
	assign_map.emplace("GovSteamFV4.krc", &assign_GovSteamFV4_krc);
	assign_map.emplace("GovSteamFV4.ksh", &assign_GovSteamFV4_ksh);
	assign_map.emplace("GovSteamFV4.lpi", &assign_GovSteamFV4_lpi);
	assign_map.emplace("GovSteamFV4.lps", &assign_GovSteamFV4_lps);
	assign_map.emplace("GovSteamFV4.mnef", &assign_GovSteamFV4_mnef);
	assign_map.emplace("GovSteamFV4.mxef", &assign_GovSteamFV4_mxef);
	assign_map.emplace("GovSteamFV4.pr1", &assign_GovSteamFV4_pr1);
	assign_map.emplace("GovSteamFV4.pr2", &assign_GovSteamFV4_pr2);
	assign_map.emplace("GovSteamFV4.psmn", &assign_GovSteamFV4_psmn);
	assign_map.emplace("GovSteamFV4.rsmimn", &assign_GovSteamFV4_rsmimn);
	assign_map.emplace("GovSteamFV4.rsmimx", &assign_GovSteamFV4_rsmimx);
	assign_map.emplace("GovSteamFV4.rvgmn", &assign_GovSteamFV4_rvgmn);
	assign_map.emplace("GovSteamFV4.rvgmx", &assign_GovSteamFV4_rvgmx);
	assign_map.emplace("GovSteamFV4.srmn", &assign_GovSteamFV4_srmn);
	assign_map.emplace("GovSteamFV4.srmx", &assign_GovSteamFV4_srmx);
	assign_map.emplace("GovSteamFV4.srsmp", &assign_GovSteamFV4_srsmp);
	assign_map.emplace("GovSteamFV4.svmn", &assign_GovSteamFV4_svmn);
	assign_map.emplace("GovSteamFV4.svmx", &assign_GovSteamFV4_svmx);
	assign_map.emplace("GovSteamFV4.ta", &assign_GovSteamFV4_ta);
	assign_map.emplace("GovSteamFV4.tam", &assign_GovSteamFV4_tam);
	assign_map.emplace("GovSteamFV4.tc", &assign_GovSteamFV4_tc);
	assign_map.emplace("GovSteamFV4.tcm", &assign_GovSteamFV4_tcm);
	assign_map.emplace("GovSteamFV4.tdc", &assign_GovSteamFV4_tdc);
	assign_map.emplace("GovSteamFV4.tf1", &assign_GovSteamFV4_tf1);
	assign_map.emplace("GovSteamFV4.tf2", &assign_GovSteamFV4_tf2);
	assign_map.emplace("GovSteamFV4.thp", &assign_GovSteamFV4_thp);
	assign_map.emplace("GovSteamFV4.tmp", &assign_GovSteamFV4_tmp);
	assign_map.emplace("GovSteamFV4.trh", &assign_GovSteamFV4_trh);
	assign_map.emplace("GovSteamFV4.tv", &assign_GovSteamFV4_tv);
	assign_map.emplace("GovSteamFV4.ty", &assign_GovSteamFV4_ty);
	assign_map.emplace("GovSteamFV4.y", &assign_GovSteamFV4_y);
	assign_map.emplace("GovSteamFV4.yhpmn", &assign_GovSteamFV4_yhpmn);
	assign_map.emplace("GovSteamFV4.yhpmx", &assign_GovSteamFV4_yhpmx);
	assign_map.emplace("GovSteamFV4.ympmn", &assign_GovSteamFV4_ympmn);
	assign_map.emplace("GovSteamFV4.ympmx", &assign_GovSteamFV4_ympmx);
}

void GovSteamFV4::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovSteamFV4::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("GovSteamFV4.cpsmn", &get_GovSteamFV4_cpsmn);
	get_map.emplace("GovSteamFV4.cpsmx", &get_GovSteamFV4_cpsmx);
	get_map.emplace("GovSteamFV4.crmn", &get_GovSteamFV4_crmn);
	get_map.emplace("GovSteamFV4.crmx", &get_GovSteamFV4_crmx);
	get_map.emplace("GovSteamFV4.kdc", &get_GovSteamFV4_kdc);
	get_map.emplace("GovSteamFV4.kf1", &get_GovSteamFV4_kf1);
	get_map.emplace("GovSteamFV4.kf3", &get_GovSteamFV4_kf3);
	get_map.emplace("GovSteamFV4.khp", &get_GovSteamFV4_khp);
	get_map.emplace("GovSteamFV4.kic", &get_GovSteamFV4_kic);
	get_map.emplace("GovSteamFV4.kip", &get_GovSteamFV4_kip);
	get_map.emplace("GovSteamFV4.kit", &get_GovSteamFV4_kit);
	get_map.emplace("GovSteamFV4.kmp1", &get_GovSteamFV4_kmp1);
	get_map.emplace("GovSteamFV4.kmp2", &get_GovSteamFV4_kmp2);
	get_map.emplace("GovSteamFV4.kpc", &get_GovSteamFV4_kpc);
	get_map.emplace("GovSteamFV4.kpp", &get_GovSteamFV4_kpp);
	get_map.emplace("GovSteamFV4.kpt", &get_GovSteamFV4_kpt);
	get_map.emplace("GovSteamFV4.krc", &get_GovSteamFV4_krc);
	get_map.emplace("GovSteamFV4.ksh", &get_GovSteamFV4_ksh);
	get_map.emplace("GovSteamFV4.lpi", &get_GovSteamFV4_lpi);
	get_map.emplace("GovSteamFV4.lps", &get_GovSteamFV4_lps);
	get_map.emplace("GovSteamFV4.mnef", &get_GovSteamFV4_mnef);
	get_map.emplace("GovSteamFV4.mxef", &get_GovSteamFV4_mxef);
	get_map.emplace("GovSteamFV4.pr1", &get_GovSteamFV4_pr1);
	get_map.emplace("GovSteamFV4.pr2", &get_GovSteamFV4_pr2);
	get_map.emplace("GovSteamFV4.psmn", &get_GovSteamFV4_psmn);
	get_map.emplace("GovSteamFV4.rsmimn", &get_GovSteamFV4_rsmimn);
	get_map.emplace("GovSteamFV4.rsmimx", &get_GovSteamFV4_rsmimx);
	get_map.emplace("GovSteamFV4.rvgmn", &get_GovSteamFV4_rvgmn);
	get_map.emplace("GovSteamFV4.rvgmx", &get_GovSteamFV4_rvgmx);
	get_map.emplace("GovSteamFV4.srmn", &get_GovSteamFV4_srmn);
	get_map.emplace("GovSteamFV4.srmx", &get_GovSteamFV4_srmx);
	get_map.emplace("GovSteamFV4.srsmp", &get_GovSteamFV4_srsmp);
	get_map.emplace("GovSteamFV4.svmn", &get_GovSteamFV4_svmn);
	get_map.emplace("GovSteamFV4.svmx", &get_GovSteamFV4_svmx);
	get_map.emplace("GovSteamFV4.ta", &get_GovSteamFV4_ta);
	get_map.emplace("GovSteamFV4.tam", &get_GovSteamFV4_tam);
	get_map.emplace("GovSteamFV4.tc", &get_GovSteamFV4_tc);
	get_map.emplace("GovSteamFV4.tcm", &get_GovSteamFV4_tcm);
	get_map.emplace("GovSteamFV4.tdc", &get_GovSteamFV4_tdc);
	get_map.emplace("GovSteamFV4.tf1", &get_GovSteamFV4_tf1);
	get_map.emplace("GovSteamFV4.tf2", &get_GovSteamFV4_tf2);
	get_map.emplace("GovSteamFV4.thp", &get_GovSteamFV4_thp);
	get_map.emplace("GovSteamFV4.tmp", &get_GovSteamFV4_tmp);
	get_map.emplace("GovSteamFV4.trh", &get_GovSteamFV4_trh);
	get_map.emplace("GovSteamFV4.tv", &get_GovSteamFV4_tv);
	get_map.emplace("GovSteamFV4.ty", &get_GovSteamFV4_ty);
	get_map.emplace("GovSteamFV4.y", &get_GovSteamFV4_y);
	get_map.emplace("GovSteamFV4.yhpmn", &get_GovSteamFV4_yhpmn);
	get_map.emplace("GovSteamFV4.yhpmx", &get_GovSteamFV4_yhpmx);
	get_map.emplace("GovSteamFV4.ympmn", &get_GovSteamFV4_ympmn);
	get_map.emplace("GovSteamFV4.ympmx", &get_GovSteamFV4_ympmx);
}

void GovSteamFV4::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovSteamFV4::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

bool GovSteamFV4::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GovSteamFV4" &&
		dynamic_cast<GovSteamFV4*>(otherObject) != nullptr;
}

const BaseClassDefiner GovSteamFV4::declare()
{
	return BaseClassDefiner(GovSteamFV4::addConstructToMap, GovSteamFV4::addPrimitiveAssignFnsToMap, GovSteamFV4::addClassAssignFnsToMap, GovSteamFV4::debugName);
}

std::map<std::string, AttrDetails> GovSteamFV4::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TurbineGovernorDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GovSteamFV4_factory()
	{
		return new GovSteamFV4;
	}
}
