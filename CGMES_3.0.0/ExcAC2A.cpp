/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcAC2A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcAC2A(),
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
		{ "ExcAC2A.hvgate", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC2A.ka", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC2A.kb", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC2A.kb1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC2A.kc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC2A.kd", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC2A.ke", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC2A.kf", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC2A.kh", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC2A.kl", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC2A.kl1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC2A.ks", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC2A.lvgate", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC2A.seve1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC2A.seve2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC2A.ta", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC2A.tb", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC2A.tc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC2A.te", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC2A.tf", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC2A.vamax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC2A.vamin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC2A.ve1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC2A.ve2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC2A.vfemax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC2A.vlr", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC2A.vrmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcAC2A.vrmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcAC2A::ExcAC2A() {}
ExcAC2A::~ExcAC2A() {}

const std::list<std::string>& ExcAC2A::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcAC2A::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcAC2A::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcAC2A::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcAC2A::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcAC2A::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcAC2A::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcAC2A_hvgate(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->hvgate;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC2A_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1);
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

bool assign_ExcAC2A_kb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC2A_kb1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kb1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC2A_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1);
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

bool assign_ExcAC2A_kd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1);
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

bool assign_ExcAC2A_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1);
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

bool assign_ExcAC2A_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1);
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

bool assign_ExcAC2A_kh(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1);
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

bool assign_ExcAC2A_kl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kl;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC2A_kl1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kl1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC2A_ks(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1);
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

bool assign_ExcAC2A_lvgate(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->lvgate;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC2A_seve1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->seve1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC2A_seve2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->seve2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC2A_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1);
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

bool assign_ExcAC2A_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1);
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

bool assign_ExcAC2A_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1);
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

bool assign_ExcAC2A_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1);
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

bool assign_ExcAC2A_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1);
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

bool assign_ExcAC2A_vamax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vamax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC2A_vamin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vamin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC2A_ve1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ve1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC2A_ve2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ve2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC2A_vfemax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vfemax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC2A_vlr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vlr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC2A_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1);
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

bool assign_ExcAC2A_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1);
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

bool get_ExcAC2A_hvgate(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC2A* element = dynamic_cast<const ExcAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->hvgate;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC2A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC2A* element = dynamic_cast<const ExcAC2A*>(BaseClass_ptr1);
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

bool get_ExcAC2A_kb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC2A* element = dynamic_cast<const ExcAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC2A_kb1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC2A* element = dynamic_cast<const ExcAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kb1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC2A_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC2A* element = dynamic_cast<const ExcAC2A*>(BaseClass_ptr1);
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

bool get_ExcAC2A_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC2A* element = dynamic_cast<const ExcAC2A*>(BaseClass_ptr1);
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

bool get_ExcAC2A_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC2A* element = dynamic_cast<const ExcAC2A*>(BaseClass_ptr1);
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

bool get_ExcAC2A_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC2A* element = dynamic_cast<const ExcAC2A*>(BaseClass_ptr1);
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

bool get_ExcAC2A_kh(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC2A* element = dynamic_cast<const ExcAC2A*>(BaseClass_ptr1);
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

bool get_ExcAC2A_kl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC2A* element = dynamic_cast<const ExcAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC2A_kl1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC2A* element = dynamic_cast<const ExcAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kl1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC2A_ks(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC2A* element = dynamic_cast<const ExcAC2A*>(BaseClass_ptr1);
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

bool get_ExcAC2A_lvgate(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC2A* element = dynamic_cast<const ExcAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->lvgate;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC2A_seve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC2A* element = dynamic_cast<const ExcAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->seve1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC2A_seve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC2A* element = dynamic_cast<const ExcAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->seve2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC2A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC2A* element = dynamic_cast<const ExcAC2A*>(BaseClass_ptr1);
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

bool get_ExcAC2A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC2A* element = dynamic_cast<const ExcAC2A*>(BaseClass_ptr1);
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

bool get_ExcAC2A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC2A* element = dynamic_cast<const ExcAC2A*>(BaseClass_ptr1);
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

bool get_ExcAC2A_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC2A* element = dynamic_cast<const ExcAC2A*>(BaseClass_ptr1);
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

bool get_ExcAC2A_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC2A* element = dynamic_cast<const ExcAC2A*>(BaseClass_ptr1);
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

bool get_ExcAC2A_vamax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC2A* element = dynamic_cast<const ExcAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vamax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC2A_vamin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC2A* element = dynamic_cast<const ExcAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vamin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC2A_ve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC2A* element = dynamic_cast<const ExcAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ve1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC2A_ve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC2A* element = dynamic_cast<const ExcAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ve2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC2A_vfemax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC2A* element = dynamic_cast<const ExcAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vfemax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC2A_vlr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC2A* element = dynamic_cast<const ExcAC2A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vlr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC2A_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC2A* element = dynamic_cast<const ExcAC2A*>(BaseClass_ptr1);
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

bool get_ExcAC2A_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC2A* element = dynamic_cast<const ExcAC2A*>(BaseClass_ptr1);
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

const char ExcAC2A::debugName[] = "ExcAC2A";
const char* ExcAC2A::debugString() const
{
	return ExcAC2A::debugName;
}

void ExcAC2A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcAC2A", &ExcAC2A_factory);
}

void ExcAC2A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcAC2A.hvgate", &assign_ExcAC2A_hvgate);
	assign_map.emplace("ExcAC2A.ka", &assign_ExcAC2A_ka);
	assign_map.emplace("ExcAC2A.kb", &assign_ExcAC2A_kb);
	assign_map.emplace("ExcAC2A.kb1", &assign_ExcAC2A_kb1);
	assign_map.emplace("ExcAC2A.kc", &assign_ExcAC2A_kc);
	assign_map.emplace("ExcAC2A.kd", &assign_ExcAC2A_kd);
	assign_map.emplace("ExcAC2A.ke", &assign_ExcAC2A_ke);
	assign_map.emplace("ExcAC2A.kf", &assign_ExcAC2A_kf);
	assign_map.emplace("ExcAC2A.kh", &assign_ExcAC2A_kh);
	assign_map.emplace("ExcAC2A.kl", &assign_ExcAC2A_kl);
	assign_map.emplace("ExcAC2A.kl1", &assign_ExcAC2A_kl1);
	assign_map.emplace("ExcAC2A.ks", &assign_ExcAC2A_ks);
	assign_map.emplace("ExcAC2A.lvgate", &assign_ExcAC2A_lvgate);
	assign_map.emplace("ExcAC2A.seve1", &assign_ExcAC2A_seve1);
	assign_map.emplace("ExcAC2A.seve2", &assign_ExcAC2A_seve2);
	assign_map.emplace("ExcAC2A.ta", &assign_ExcAC2A_ta);
	assign_map.emplace("ExcAC2A.tb", &assign_ExcAC2A_tb);
	assign_map.emplace("ExcAC2A.tc", &assign_ExcAC2A_tc);
	assign_map.emplace("ExcAC2A.te", &assign_ExcAC2A_te);
	assign_map.emplace("ExcAC2A.tf", &assign_ExcAC2A_tf);
	assign_map.emplace("ExcAC2A.vamax", &assign_ExcAC2A_vamax);
	assign_map.emplace("ExcAC2A.vamin", &assign_ExcAC2A_vamin);
	assign_map.emplace("ExcAC2A.ve1", &assign_ExcAC2A_ve1);
	assign_map.emplace("ExcAC2A.ve2", &assign_ExcAC2A_ve2);
	assign_map.emplace("ExcAC2A.vfemax", &assign_ExcAC2A_vfemax);
	assign_map.emplace("ExcAC2A.vlr", &assign_ExcAC2A_vlr);
	assign_map.emplace("ExcAC2A.vrmax", &assign_ExcAC2A_vrmax);
	assign_map.emplace("ExcAC2A.vrmin", &assign_ExcAC2A_vrmin);
}

void ExcAC2A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcAC2A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcAC2A.hvgate", &get_ExcAC2A_hvgate);
	get_map.emplace("ExcAC2A.ka", &get_ExcAC2A_ka);
	get_map.emplace("ExcAC2A.kb", &get_ExcAC2A_kb);
	get_map.emplace("ExcAC2A.kb1", &get_ExcAC2A_kb1);
	get_map.emplace("ExcAC2A.kc", &get_ExcAC2A_kc);
	get_map.emplace("ExcAC2A.kd", &get_ExcAC2A_kd);
	get_map.emplace("ExcAC2A.ke", &get_ExcAC2A_ke);
	get_map.emplace("ExcAC2A.kf", &get_ExcAC2A_kf);
	get_map.emplace("ExcAC2A.kh", &get_ExcAC2A_kh);
	get_map.emplace("ExcAC2A.kl", &get_ExcAC2A_kl);
	get_map.emplace("ExcAC2A.kl1", &get_ExcAC2A_kl1);
	get_map.emplace("ExcAC2A.ks", &get_ExcAC2A_ks);
	get_map.emplace("ExcAC2A.lvgate", &get_ExcAC2A_lvgate);
	get_map.emplace("ExcAC2A.seve1", &get_ExcAC2A_seve1);
	get_map.emplace("ExcAC2A.seve2", &get_ExcAC2A_seve2);
	get_map.emplace("ExcAC2A.ta", &get_ExcAC2A_ta);
	get_map.emplace("ExcAC2A.tb", &get_ExcAC2A_tb);
	get_map.emplace("ExcAC2A.tc", &get_ExcAC2A_tc);
	get_map.emplace("ExcAC2A.te", &get_ExcAC2A_te);
	get_map.emplace("ExcAC2A.tf", &get_ExcAC2A_tf);
	get_map.emplace("ExcAC2A.vamax", &get_ExcAC2A_vamax);
	get_map.emplace("ExcAC2A.vamin", &get_ExcAC2A_vamin);
	get_map.emplace("ExcAC2A.ve1", &get_ExcAC2A_ve1);
	get_map.emplace("ExcAC2A.ve2", &get_ExcAC2A_ve2);
	get_map.emplace("ExcAC2A.vfemax", &get_ExcAC2A_vfemax);
	get_map.emplace("ExcAC2A.vlr", &get_ExcAC2A_vlr);
	get_map.emplace("ExcAC2A.vrmax", &get_ExcAC2A_vrmax);
	get_map.emplace("ExcAC2A.vrmin", &get_ExcAC2A_vrmin);
}

void ExcAC2A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcAC2A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcAC2A::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcAC2A" &&
		dynamic_cast<ExcAC2A*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcAC2A::declare()
{
	return BaseClassDefiner(ExcAC2A::addConstructToMap, ExcAC2A::addPrimitiveAssignFnsToMap, ExcAC2A::addClassAssignFnsToMap, ExcAC2A::debugName);
}

std::map<std::string, AttrDetails> ExcAC2A::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcAC2A_factory()
	{
		return new ExcAC2A;
	}
}
