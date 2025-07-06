/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEAC7B.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcIEEEAC7B(),
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
		{ "ExcIEEEAC7B.kc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC7B.kd", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC7B.kdr", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC7B.ke", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC7B.kf1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC7B.kf2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC7B.kf3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC7B.kia", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC7B.kir", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC7B.kl", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC7B.kp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC7B.kpa", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC7B.kpr", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC7B.seve1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC7B.seve2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC7B.tdr", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC7B.te", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC7B.tf", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC7B.vamax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC7B.vamin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC7B.ve1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC7B.ve2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC7B.vemin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC7B.vfemax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC7B.vrmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcIEEEAC7B.vrmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcIEEEAC7B::ExcIEEEAC7B() {}
ExcIEEEAC7B::~ExcIEEEAC7B() {}

const std::list<std::string>& ExcIEEEAC7B::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcIEEEAC7B::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcIEEEAC7B::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcIEEEAC7B::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcIEEEAC7B::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcIEEEAC7B::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcIEEEAC7B::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcIEEEAC7B_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC7B* element = dynamic_cast<ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC7B_kd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC7B* element = dynamic_cast<ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC7B_kdr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC7B* element = dynamic_cast<ExcIEEEAC7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kdr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEAC7B_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC7B* element = dynamic_cast<ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC7B_kf1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC7B* element = dynamic_cast<ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC7B_kf2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC7B* element = dynamic_cast<ExcIEEEAC7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kf2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEAC7B_kf3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC7B* element = dynamic_cast<ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC7B_kia(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC7B* element = dynamic_cast<ExcIEEEAC7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kia;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEAC7B_kir(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC7B* element = dynamic_cast<ExcIEEEAC7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kir;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEAC7B_kl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC7B* element = dynamic_cast<ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC7B_kp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC7B* element = dynamic_cast<ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC7B_kpa(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC7B* element = dynamic_cast<ExcIEEEAC7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpa;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEAC7B_kpr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC7B* element = dynamic_cast<ExcIEEEAC7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEAC7B_seve1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC7B* element = dynamic_cast<ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC7B_seve2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC7B* element = dynamic_cast<ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC7B_tdr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC7B* element = dynamic_cast<ExcIEEEAC7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tdr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEAC7B_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC7B* element = dynamic_cast<ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC7B_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC7B* element = dynamic_cast<ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC7B_vamax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC7B* element = dynamic_cast<ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC7B_vamin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC7B* element = dynamic_cast<ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC7B_ve1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC7B* element = dynamic_cast<ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC7B_ve2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC7B* element = dynamic_cast<ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC7B_vemin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC7B* element = dynamic_cast<ExcIEEEAC7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vemin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEAC7B_vfemax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC7B* element = dynamic_cast<ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC7B_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC7B* element = dynamic_cast<ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEAC7B_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEAC7B* element = dynamic_cast<ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC7B_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC7B* element = dynamic_cast<const ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC7B_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC7B* element = dynamic_cast<const ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC7B_kdr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC7B* element = dynamic_cast<const ExcIEEEAC7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kdr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC7B_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC7B* element = dynamic_cast<const ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC7B_kf1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC7B* element = dynamic_cast<const ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC7B_kf2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC7B* element = dynamic_cast<const ExcIEEEAC7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kf2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC7B_kf3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC7B* element = dynamic_cast<const ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC7B_kia(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC7B* element = dynamic_cast<const ExcIEEEAC7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kia;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC7B_kir(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC7B* element = dynamic_cast<const ExcIEEEAC7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kir;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC7B_kl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC7B* element = dynamic_cast<const ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC7B_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC7B* element = dynamic_cast<const ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC7B_kpa(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC7B* element = dynamic_cast<const ExcIEEEAC7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpa;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC7B_kpr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC7B* element = dynamic_cast<const ExcIEEEAC7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC7B_seve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC7B* element = dynamic_cast<const ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC7B_seve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC7B* element = dynamic_cast<const ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC7B_tdr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC7B* element = dynamic_cast<const ExcIEEEAC7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tdr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC7B_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC7B* element = dynamic_cast<const ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC7B_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC7B* element = dynamic_cast<const ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC7B_vamax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC7B* element = dynamic_cast<const ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC7B_vamin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC7B* element = dynamic_cast<const ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC7B_ve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC7B* element = dynamic_cast<const ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC7B_ve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC7B* element = dynamic_cast<const ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC7B_vemin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC7B* element = dynamic_cast<const ExcIEEEAC7B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vemin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEAC7B_vfemax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC7B* element = dynamic_cast<const ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC7B_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC7B* element = dynamic_cast<const ExcIEEEAC7B*>(BaseClass_ptr1);
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

bool get_ExcIEEEAC7B_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEAC7B* element = dynamic_cast<const ExcIEEEAC7B*>(BaseClass_ptr1);
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

const char ExcIEEEAC7B::debugName[] = "ExcIEEEAC7B";
const char* ExcIEEEAC7B::debugString() const
{
	return ExcIEEEAC7B::debugName;
}

void ExcIEEEAC7B::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcIEEEAC7B", &ExcIEEEAC7B_factory);
}

void ExcIEEEAC7B::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcIEEEAC7B.kc", &assign_ExcIEEEAC7B_kc);
	assign_map.emplace("ExcIEEEAC7B.kd", &assign_ExcIEEEAC7B_kd);
	assign_map.emplace("ExcIEEEAC7B.kdr", &assign_ExcIEEEAC7B_kdr);
	assign_map.emplace("ExcIEEEAC7B.ke", &assign_ExcIEEEAC7B_ke);
	assign_map.emplace("ExcIEEEAC7B.kf1", &assign_ExcIEEEAC7B_kf1);
	assign_map.emplace("ExcIEEEAC7B.kf2", &assign_ExcIEEEAC7B_kf2);
	assign_map.emplace("ExcIEEEAC7B.kf3", &assign_ExcIEEEAC7B_kf3);
	assign_map.emplace("ExcIEEEAC7B.kia", &assign_ExcIEEEAC7B_kia);
	assign_map.emplace("ExcIEEEAC7B.kir", &assign_ExcIEEEAC7B_kir);
	assign_map.emplace("ExcIEEEAC7B.kl", &assign_ExcIEEEAC7B_kl);
	assign_map.emplace("ExcIEEEAC7B.kp", &assign_ExcIEEEAC7B_kp);
	assign_map.emplace("ExcIEEEAC7B.kpa", &assign_ExcIEEEAC7B_kpa);
	assign_map.emplace("ExcIEEEAC7B.kpr", &assign_ExcIEEEAC7B_kpr);
	assign_map.emplace("ExcIEEEAC7B.seve1", &assign_ExcIEEEAC7B_seve1);
	assign_map.emplace("ExcIEEEAC7B.seve2", &assign_ExcIEEEAC7B_seve2);
	assign_map.emplace("ExcIEEEAC7B.tdr", &assign_ExcIEEEAC7B_tdr);
	assign_map.emplace("ExcIEEEAC7B.te", &assign_ExcIEEEAC7B_te);
	assign_map.emplace("ExcIEEEAC7B.tf", &assign_ExcIEEEAC7B_tf);
	assign_map.emplace("ExcIEEEAC7B.vamax", &assign_ExcIEEEAC7B_vamax);
	assign_map.emplace("ExcIEEEAC7B.vamin", &assign_ExcIEEEAC7B_vamin);
	assign_map.emplace("ExcIEEEAC7B.ve1", &assign_ExcIEEEAC7B_ve1);
	assign_map.emplace("ExcIEEEAC7B.ve2", &assign_ExcIEEEAC7B_ve2);
	assign_map.emplace("ExcIEEEAC7B.vemin", &assign_ExcIEEEAC7B_vemin);
	assign_map.emplace("ExcIEEEAC7B.vfemax", &assign_ExcIEEEAC7B_vfemax);
	assign_map.emplace("ExcIEEEAC7B.vrmax", &assign_ExcIEEEAC7B_vrmax);
	assign_map.emplace("ExcIEEEAC7B.vrmin", &assign_ExcIEEEAC7B_vrmin);
}

void ExcIEEEAC7B::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcIEEEAC7B::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcIEEEAC7B.kc", &get_ExcIEEEAC7B_kc);
	get_map.emplace("ExcIEEEAC7B.kd", &get_ExcIEEEAC7B_kd);
	get_map.emplace("ExcIEEEAC7B.kdr", &get_ExcIEEEAC7B_kdr);
	get_map.emplace("ExcIEEEAC7B.ke", &get_ExcIEEEAC7B_ke);
	get_map.emplace("ExcIEEEAC7B.kf1", &get_ExcIEEEAC7B_kf1);
	get_map.emplace("ExcIEEEAC7B.kf2", &get_ExcIEEEAC7B_kf2);
	get_map.emplace("ExcIEEEAC7B.kf3", &get_ExcIEEEAC7B_kf3);
	get_map.emplace("ExcIEEEAC7B.kia", &get_ExcIEEEAC7B_kia);
	get_map.emplace("ExcIEEEAC7B.kir", &get_ExcIEEEAC7B_kir);
	get_map.emplace("ExcIEEEAC7B.kl", &get_ExcIEEEAC7B_kl);
	get_map.emplace("ExcIEEEAC7B.kp", &get_ExcIEEEAC7B_kp);
	get_map.emplace("ExcIEEEAC7B.kpa", &get_ExcIEEEAC7B_kpa);
	get_map.emplace("ExcIEEEAC7B.kpr", &get_ExcIEEEAC7B_kpr);
	get_map.emplace("ExcIEEEAC7B.seve1", &get_ExcIEEEAC7B_seve1);
	get_map.emplace("ExcIEEEAC7B.seve2", &get_ExcIEEEAC7B_seve2);
	get_map.emplace("ExcIEEEAC7B.tdr", &get_ExcIEEEAC7B_tdr);
	get_map.emplace("ExcIEEEAC7B.te", &get_ExcIEEEAC7B_te);
	get_map.emplace("ExcIEEEAC7B.tf", &get_ExcIEEEAC7B_tf);
	get_map.emplace("ExcIEEEAC7B.vamax", &get_ExcIEEEAC7B_vamax);
	get_map.emplace("ExcIEEEAC7B.vamin", &get_ExcIEEEAC7B_vamin);
	get_map.emplace("ExcIEEEAC7B.ve1", &get_ExcIEEEAC7B_ve1);
	get_map.emplace("ExcIEEEAC7B.ve2", &get_ExcIEEEAC7B_ve2);
	get_map.emplace("ExcIEEEAC7B.vemin", &get_ExcIEEEAC7B_vemin);
	get_map.emplace("ExcIEEEAC7B.vfemax", &get_ExcIEEEAC7B_vfemax);
	get_map.emplace("ExcIEEEAC7B.vrmax", &get_ExcIEEEAC7B_vrmax);
	get_map.emplace("ExcIEEEAC7B.vrmin", &get_ExcIEEEAC7B_vrmin);
}

void ExcIEEEAC7B::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcIEEEAC7B::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcIEEEAC7B::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcIEEEAC7B" &&
		dynamic_cast<ExcIEEEAC7B*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcIEEEAC7B::declare()
{
	return BaseClassDefiner(ExcIEEEAC7B::addConstructToMap, ExcIEEEAC7B::addPrimitiveAssignFnsToMap, ExcIEEEAC7B::addClassAssignFnsToMap, ExcIEEEAC7B::debugName);
}

std::map<std::string, AttrDetails> ExcIEEEAC7B::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcIEEEAC7B_factory()
	{
		return new ExcIEEEAC7B;
	}
}
