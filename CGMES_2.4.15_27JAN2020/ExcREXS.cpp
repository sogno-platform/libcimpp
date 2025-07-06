/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcREXS.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcREXS(),
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
		{ "ExcREXS.e1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.e2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.fbf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.flimf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.kc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.kd", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.ke", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.kefd", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.kf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.kh", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.kii", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.kip", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.ks", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.kvi", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.kvp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.kvphz", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.nvphz", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.se1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.se2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.ta", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.tb1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.tb2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.tc1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.tc2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.te", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.tf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.tf1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.tf2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.tp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.vcmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.vfmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.vfmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.vimax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.vrmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.vrmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcREXS.xc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcREXS::ExcREXS() {}
ExcREXS::~ExcREXS() {}

const std::list<std::string>& ExcREXS::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcREXS::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcREXS::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcREXS::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcREXS::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcREXS::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcREXS::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcREXS_e1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->e1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcREXS_e2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->e2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcREXS_fbf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fbf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcREXS_flimf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->flimf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcREXS_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
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

bool assign_ExcREXS_kd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
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

bool assign_ExcREXS_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ke;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcREXS_kefd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kefd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcREXS_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
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

bool assign_ExcREXS_kh(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kh;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcREXS_kii(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kii;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcREXS_kip(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
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

bool assign_ExcREXS_ks(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ks;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcREXS_kvi(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kvi;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcREXS_kvp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kvp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcREXS_kvphz(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kvphz;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcREXS_nvphz(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->nvphz;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcREXS_se1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->se1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcREXS_se2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->se2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcREXS_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
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

bool assign_ExcREXS_tb1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tb1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcREXS_tb2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tb2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcREXS_tc1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tc1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcREXS_tc2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tc2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcREXS_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->te;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcREXS_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
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

bool assign_ExcREXS_tf1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
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

bool assign_ExcREXS_tf2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
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

bool assign_ExcREXS_tp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
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

bool assign_ExcREXS_vcmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vcmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcREXS_vfmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vfmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcREXS_vfmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vfmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcREXS_vimax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vimax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcREXS_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vrmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcREXS_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vrmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcREXS_xc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcREXS* element = dynamic_cast<ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ExcREXS_e1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->e1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_e2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->e2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_fbf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fbf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_flimf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->flimf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
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

bool get_ExcREXS_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
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

bool get_ExcREXS_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ke;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_kefd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kefd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
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

bool get_ExcREXS_kh(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kh;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_kii(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kii;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_kip(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
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

bool get_ExcREXS_ks(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ks;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_kvi(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kvi;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_kvp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kvp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_kvphz(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kvphz;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_nvphz(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->nvphz;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_se1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->se1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_se2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->se2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
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

bool get_ExcREXS_tb1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tb1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_tb2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tb2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_tc1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tc1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_tc2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tc2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->te;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
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

bool get_ExcREXS_tf1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
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

bool get_ExcREXS_tf2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
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

bool get_ExcREXS_tp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
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

bool get_ExcREXS_vcmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vcmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_vfmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vfmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_vfmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vfmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_vimax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vimax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vrmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vrmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcREXS_xc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcREXS* element = dynamic_cast<const ExcREXS*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ExcREXS::debugName[] = "ExcREXS";
const char* ExcREXS::debugString() const
{
	return ExcREXS::debugName;
}

void ExcREXS::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcREXS", &ExcREXS_factory);
}

void ExcREXS::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcREXS.e1", &assign_ExcREXS_e1);
	assign_map.emplace("ExcREXS.e2", &assign_ExcREXS_e2);
	assign_map.emplace("ExcREXS.fbf", &assign_ExcREXS_fbf);
	assign_map.emplace("ExcREXS.flimf", &assign_ExcREXS_flimf);
	assign_map.emplace("ExcREXS.kc", &assign_ExcREXS_kc);
	assign_map.emplace("ExcREXS.kd", &assign_ExcREXS_kd);
	assign_map.emplace("ExcREXS.ke", &assign_ExcREXS_ke);
	assign_map.emplace("ExcREXS.kefd", &assign_ExcREXS_kefd);
	assign_map.emplace("ExcREXS.kf", &assign_ExcREXS_kf);
	assign_map.emplace("ExcREXS.kh", &assign_ExcREXS_kh);
	assign_map.emplace("ExcREXS.kii", &assign_ExcREXS_kii);
	assign_map.emplace("ExcREXS.kip", &assign_ExcREXS_kip);
	assign_map.emplace("ExcREXS.ks", &assign_ExcREXS_ks);
	assign_map.emplace("ExcREXS.kvi", &assign_ExcREXS_kvi);
	assign_map.emplace("ExcREXS.kvp", &assign_ExcREXS_kvp);
	assign_map.emplace("ExcREXS.kvphz", &assign_ExcREXS_kvphz);
	assign_map.emplace("ExcREXS.nvphz", &assign_ExcREXS_nvphz);
	assign_map.emplace("ExcREXS.se1", &assign_ExcREXS_se1);
	assign_map.emplace("ExcREXS.se2", &assign_ExcREXS_se2);
	assign_map.emplace("ExcREXS.ta", &assign_ExcREXS_ta);
	assign_map.emplace("ExcREXS.tb1", &assign_ExcREXS_tb1);
	assign_map.emplace("ExcREXS.tb2", &assign_ExcREXS_tb2);
	assign_map.emplace("ExcREXS.tc1", &assign_ExcREXS_tc1);
	assign_map.emplace("ExcREXS.tc2", &assign_ExcREXS_tc2);
	assign_map.emplace("ExcREXS.te", &assign_ExcREXS_te);
	assign_map.emplace("ExcREXS.tf", &assign_ExcREXS_tf);
	assign_map.emplace("ExcREXS.tf1", &assign_ExcREXS_tf1);
	assign_map.emplace("ExcREXS.tf2", &assign_ExcREXS_tf2);
	assign_map.emplace("ExcREXS.tp", &assign_ExcREXS_tp);
	assign_map.emplace("ExcREXS.vcmax", &assign_ExcREXS_vcmax);
	assign_map.emplace("ExcREXS.vfmax", &assign_ExcREXS_vfmax);
	assign_map.emplace("ExcREXS.vfmin", &assign_ExcREXS_vfmin);
	assign_map.emplace("ExcREXS.vimax", &assign_ExcREXS_vimax);
	assign_map.emplace("ExcREXS.vrmax", &assign_ExcREXS_vrmax);
	assign_map.emplace("ExcREXS.vrmin", &assign_ExcREXS_vrmin);
	assign_map.emplace("ExcREXS.xc", &assign_ExcREXS_xc);
}

void ExcREXS::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcREXS::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcREXS.e1", &get_ExcREXS_e1);
	get_map.emplace("ExcREXS.e2", &get_ExcREXS_e2);
	get_map.emplace("ExcREXS.flimf", &get_ExcREXS_flimf);
	get_map.emplace("ExcREXS.kc", &get_ExcREXS_kc);
	get_map.emplace("ExcREXS.kd", &get_ExcREXS_kd);
	get_map.emplace("ExcREXS.ke", &get_ExcREXS_ke);
	get_map.emplace("ExcREXS.kefd", &get_ExcREXS_kefd);
	get_map.emplace("ExcREXS.kf", &get_ExcREXS_kf);
	get_map.emplace("ExcREXS.kh", &get_ExcREXS_kh);
	get_map.emplace("ExcREXS.kii", &get_ExcREXS_kii);
	get_map.emplace("ExcREXS.kip", &get_ExcREXS_kip);
	get_map.emplace("ExcREXS.ks", &get_ExcREXS_ks);
	get_map.emplace("ExcREXS.kvi", &get_ExcREXS_kvi);
	get_map.emplace("ExcREXS.kvp", &get_ExcREXS_kvp);
	get_map.emplace("ExcREXS.kvphz", &get_ExcREXS_kvphz);
	get_map.emplace("ExcREXS.nvphz", &get_ExcREXS_nvphz);
	get_map.emplace("ExcREXS.se1", &get_ExcREXS_se1);
	get_map.emplace("ExcREXS.se2", &get_ExcREXS_se2);
	get_map.emplace("ExcREXS.ta", &get_ExcREXS_ta);
	get_map.emplace("ExcREXS.tb1", &get_ExcREXS_tb1);
	get_map.emplace("ExcREXS.tb2", &get_ExcREXS_tb2);
	get_map.emplace("ExcREXS.tc1", &get_ExcREXS_tc1);
	get_map.emplace("ExcREXS.tc2", &get_ExcREXS_tc2);
	get_map.emplace("ExcREXS.te", &get_ExcREXS_te);
	get_map.emplace("ExcREXS.tf", &get_ExcREXS_tf);
	get_map.emplace("ExcREXS.tf1", &get_ExcREXS_tf1);
	get_map.emplace("ExcREXS.tf2", &get_ExcREXS_tf2);
	get_map.emplace("ExcREXS.tp", &get_ExcREXS_tp);
	get_map.emplace("ExcREXS.vcmax", &get_ExcREXS_vcmax);
	get_map.emplace("ExcREXS.vfmax", &get_ExcREXS_vfmax);
	get_map.emplace("ExcREXS.vfmin", &get_ExcREXS_vfmin);
	get_map.emplace("ExcREXS.vimax", &get_ExcREXS_vimax);
	get_map.emplace("ExcREXS.vrmax", &get_ExcREXS_vrmax);
	get_map.emplace("ExcREXS.vrmin", &get_ExcREXS_vrmin);
	get_map.emplace("ExcREXS.xc", &get_ExcREXS_xc);
}

void ExcREXS::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcREXS::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
	get_map.emplace("ExcREXS.fbf", &get_ExcREXS_fbf);
}

bool ExcREXS::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcREXS" &&
		dynamic_cast<ExcREXS*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcREXS::declare()
{
	return BaseClassDefiner(ExcREXS::addConstructToMap, ExcREXS::addPrimitiveAssignFnsToMap, ExcREXS::addClassAssignFnsToMap, ExcREXS::debugName);
}

std::map<std::string, AttrDetails> ExcREXS::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcREXS_factory()
	{
		return new ExcREXS;
	}
}
