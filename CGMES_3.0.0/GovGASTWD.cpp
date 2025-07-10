/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovGASTWD.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GovGASTWD(),
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
		{ "GovGASTWD.a", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.af1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.af2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.b", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.bf1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.bf2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.c", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.cf2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.ecr", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.etd", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.k3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.k4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.k5", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.k6", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.kd", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.kdroop", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.kf", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.ki", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.kp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.mwbase", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.t", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.t3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.t4", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.t5", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.tc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.tcd", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.td", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.tf", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.tmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.tmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.tr", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.trate", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGASTWD.tt", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

GovGASTWD::GovGASTWD() {}
GovGASTWD::~GovGASTWD() {}

const std::list<std::string>& GovGASTWD::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GovGASTWD::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GovGASTWD::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GovGASTWD::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GovGASTWD::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GovGASTWD::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GovGASTWD::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_GovGASTWD_a(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->a;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGASTWD_af1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->af1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGASTWD_af2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->af2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGASTWD_b(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->b;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGASTWD_bf1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->bf1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGASTWD_bf2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->bf2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGASTWD_c(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->c;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGASTWD_cf2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->cf2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGASTWD_ecr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ecr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGASTWD_etd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->etd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGASTWD_k3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGASTWD_k4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGASTWD_k5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGASTWD_k6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k6;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGASTWD_kd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
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

bool assign_GovGASTWD_kdroop(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kdroop;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGASTWD_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGASTWD_ki(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
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

bool assign_GovGASTWD_kp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
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

bool assign_GovGASTWD_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
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

bool assign_GovGASTWD_t(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGASTWD_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGASTWD_t4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGASTWD_t5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGASTWD_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
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

bool assign_GovGASTWD_tcd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tcd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGASTWD_td(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
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

bool assign_GovGASTWD_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
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

bool assign_GovGASTWD_tmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGASTWD_tmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGASTWD_tr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
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

bool assign_GovGASTWD_trate(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->trate;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGASTWD_tt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1);
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

bool get_GovGASTWD_a(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->a;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_af1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->af1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_af2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->af2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_b(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->b;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_bf1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->bf1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_bf2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->bf2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_c(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->c;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_cf2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->cf2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_ecr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ecr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_etd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->etd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_k3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_k4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_k5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_k6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
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

bool get_GovGASTWD_kdroop(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kdroop;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
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

bool get_GovGASTWD_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
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

bool get_GovGASTWD_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
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

bool get_GovGASTWD_t(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_t5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
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

bool get_GovGASTWD_tcd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tcd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_td(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
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

bool get_GovGASTWD_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
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

bool get_GovGASTWD_tmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_tmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_tr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
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

bool get_GovGASTWD_trate(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->trate;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGASTWD_tt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGASTWD* element = dynamic_cast<const GovGASTWD*>(BaseClass_ptr1);
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

const char GovGASTWD::debugName[] = "GovGASTWD";
const char* GovGASTWD::debugString() const
{
	return GovGASTWD::debugName;
}

void GovGASTWD::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("GovGASTWD", &GovGASTWD_factory);
}

void GovGASTWD::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("GovGASTWD.a", &assign_GovGASTWD_a);
	assign_map.emplace("GovGASTWD.af1", &assign_GovGASTWD_af1);
	assign_map.emplace("GovGASTWD.af2", &assign_GovGASTWD_af2);
	assign_map.emplace("GovGASTWD.b", &assign_GovGASTWD_b);
	assign_map.emplace("GovGASTWD.bf1", &assign_GovGASTWD_bf1);
	assign_map.emplace("GovGASTWD.bf2", &assign_GovGASTWD_bf2);
	assign_map.emplace("GovGASTWD.c", &assign_GovGASTWD_c);
	assign_map.emplace("GovGASTWD.cf2", &assign_GovGASTWD_cf2);
	assign_map.emplace("GovGASTWD.ecr", &assign_GovGASTWD_ecr);
	assign_map.emplace("GovGASTWD.etd", &assign_GovGASTWD_etd);
	assign_map.emplace("GovGASTWD.k3", &assign_GovGASTWD_k3);
	assign_map.emplace("GovGASTWD.k4", &assign_GovGASTWD_k4);
	assign_map.emplace("GovGASTWD.k5", &assign_GovGASTWD_k5);
	assign_map.emplace("GovGASTWD.k6", &assign_GovGASTWD_k6);
	assign_map.emplace("GovGASTWD.kd", &assign_GovGASTWD_kd);
	assign_map.emplace("GovGASTWD.kdroop", &assign_GovGASTWD_kdroop);
	assign_map.emplace("GovGASTWD.kf", &assign_GovGASTWD_kf);
	assign_map.emplace("GovGASTWD.ki", &assign_GovGASTWD_ki);
	assign_map.emplace("GovGASTWD.kp", &assign_GovGASTWD_kp);
	assign_map.emplace("GovGASTWD.mwbase", &assign_GovGASTWD_mwbase);
	assign_map.emplace("GovGASTWD.t", &assign_GovGASTWD_t);
	assign_map.emplace("GovGASTWD.t3", &assign_GovGASTWD_t3);
	assign_map.emplace("GovGASTWD.t4", &assign_GovGASTWD_t4);
	assign_map.emplace("GovGASTWD.t5", &assign_GovGASTWD_t5);
	assign_map.emplace("GovGASTWD.tc", &assign_GovGASTWD_tc);
	assign_map.emplace("GovGASTWD.tcd", &assign_GovGASTWD_tcd);
	assign_map.emplace("GovGASTWD.td", &assign_GovGASTWD_td);
	assign_map.emplace("GovGASTWD.tf", &assign_GovGASTWD_tf);
	assign_map.emplace("GovGASTWD.tmax", &assign_GovGASTWD_tmax);
	assign_map.emplace("GovGASTWD.tmin", &assign_GovGASTWD_tmin);
	assign_map.emplace("GovGASTWD.tr", &assign_GovGASTWD_tr);
	assign_map.emplace("GovGASTWD.trate", &assign_GovGASTWD_trate);
	assign_map.emplace("GovGASTWD.tt", &assign_GovGASTWD_tt);
}

void GovGASTWD::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovGASTWD::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("GovGASTWD.a", &get_GovGASTWD_a);
	get_map.emplace("GovGASTWD.af1", &get_GovGASTWD_af1);
	get_map.emplace("GovGASTWD.af2", &get_GovGASTWD_af2);
	get_map.emplace("GovGASTWD.b", &get_GovGASTWD_b);
	get_map.emplace("GovGASTWD.bf1", &get_GovGASTWD_bf1);
	get_map.emplace("GovGASTWD.bf2", &get_GovGASTWD_bf2);
	get_map.emplace("GovGASTWD.c", &get_GovGASTWD_c);
	get_map.emplace("GovGASTWD.cf2", &get_GovGASTWD_cf2);
	get_map.emplace("GovGASTWD.ecr", &get_GovGASTWD_ecr);
	get_map.emplace("GovGASTWD.etd", &get_GovGASTWD_etd);
	get_map.emplace("GovGASTWD.k3", &get_GovGASTWD_k3);
	get_map.emplace("GovGASTWD.k4", &get_GovGASTWD_k4);
	get_map.emplace("GovGASTWD.k5", &get_GovGASTWD_k5);
	get_map.emplace("GovGASTWD.k6", &get_GovGASTWD_k6);
	get_map.emplace("GovGASTWD.kd", &get_GovGASTWD_kd);
	get_map.emplace("GovGASTWD.kdroop", &get_GovGASTWD_kdroop);
	get_map.emplace("GovGASTWD.kf", &get_GovGASTWD_kf);
	get_map.emplace("GovGASTWD.ki", &get_GovGASTWD_ki);
	get_map.emplace("GovGASTWD.kp", &get_GovGASTWD_kp);
	get_map.emplace("GovGASTWD.mwbase", &get_GovGASTWD_mwbase);
	get_map.emplace("GovGASTWD.t", &get_GovGASTWD_t);
	get_map.emplace("GovGASTWD.t3", &get_GovGASTWD_t3);
	get_map.emplace("GovGASTWD.t4", &get_GovGASTWD_t4);
	get_map.emplace("GovGASTWD.t5", &get_GovGASTWD_t5);
	get_map.emplace("GovGASTWD.tc", &get_GovGASTWD_tc);
	get_map.emplace("GovGASTWD.tcd", &get_GovGASTWD_tcd);
	get_map.emplace("GovGASTWD.td", &get_GovGASTWD_td);
	get_map.emplace("GovGASTWD.tf", &get_GovGASTWD_tf);
	get_map.emplace("GovGASTWD.tmax", &get_GovGASTWD_tmax);
	get_map.emplace("GovGASTWD.tmin", &get_GovGASTWD_tmin);
	get_map.emplace("GovGASTWD.tr", &get_GovGASTWD_tr);
	get_map.emplace("GovGASTWD.trate", &get_GovGASTWD_trate);
	get_map.emplace("GovGASTWD.tt", &get_GovGASTWD_tt);
}

void GovGASTWD::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovGASTWD::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

bool GovGASTWD::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GovGASTWD" &&
		dynamic_cast<GovGASTWD*>(otherObject) != nullptr;
}

const BaseClassDefiner GovGASTWD::declare()
{
	return BaseClassDefiner(GovGASTWD::addConstructToMap, GovGASTWD::addPrimitiveAssignFnsToMap, GovGASTWD::addClassAssignFnsToMap, GovGASTWD::debugName);
}

std::map<std::string, AttrDetails> GovGASTWD::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TurbineGovernorDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GovGASTWD_factory()
	{
		return new GovGASTWD;
	}
}
