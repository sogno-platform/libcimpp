/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcAC3A.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcAC3A(),
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
		{ "ExcAC3A.efdn", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC3A.ka", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC3A.kc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC3A.kd", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC3A.ke", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC3A.kf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC3A.kf1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC3A.kf2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC3A.klv", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC3A.kn", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC3A.kr", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC3A.ks", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC3A.seve1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC3A.seve2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC3A.ta", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC3A.tb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC3A.tc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC3A.te", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC3A.tf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC3A.vamax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC3A.vamin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC3A.ve1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC3A.ve2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC3A.vemin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC3A.vfemax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcAC3A.vlv", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcAC3A::ExcAC3A() {}
ExcAC3A::~ExcAC3A() {}

const std::list<std::string>& ExcAC3A::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcAC3A::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcAC3A::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcAC3A::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcAC3A::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcAC3A::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcAC3A::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcAC3A_efdn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC3A* element = dynamic_cast<ExcAC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efdn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC3A_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC3A* element = dynamic_cast<ExcAC3A*>(BaseClass_ptr1);
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

bool assign_ExcAC3A_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC3A* element = dynamic_cast<ExcAC3A*>(BaseClass_ptr1);
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

bool assign_ExcAC3A_kd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC3A* element = dynamic_cast<ExcAC3A*>(BaseClass_ptr1);
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

bool assign_ExcAC3A_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC3A* element = dynamic_cast<ExcAC3A*>(BaseClass_ptr1);
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

bool assign_ExcAC3A_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC3A* element = dynamic_cast<ExcAC3A*>(BaseClass_ptr1);
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

bool assign_ExcAC3A_kf1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC3A* element = dynamic_cast<ExcAC3A*>(BaseClass_ptr1);
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

bool assign_ExcAC3A_kf2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC3A* element = dynamic_cast<ExcAC3A*>(BaseClass_ptr1);
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

bool assign_ExcAC3A_klv(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC3A* element = dynamic_cast<ExcAC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->klv;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC3A_kn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC3A* element = dynamic_cast<ExcAC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC3A_kr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC3A* element = dynamic_cast<ExcAC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC3A_ks(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC3A* element = dynamic_cast<ExcAC3A*>(BaseClass_ptr1);
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

bool assign_ExcAC3A_seve1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC3A* element = dynamic_cast<ExcAC3A*>(BaseClass_ptr1);
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

bool assign_ExcAC3A_seve2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC3A* element = dynamic_cast<ExcAC3A*>(BaseClass_ptr1);
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

bool assign_ExcAC3A_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC3A* element = dynamic_cast<ExcAC3A*>(BaseClass_ptr1);
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

bool assign_ExcAC3A_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC3A* element = dynamic_cast<ExcAC3A*>(BaseClass_ptr1);
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

bool assign_ExcAC3A_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC3A* element = dynamic_cast<ExcAC3A*>(BaseClass_ptr1);
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

bool assign_ExcAC3A_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC3A* element = dynamic_cast<ExcAC3A*>(BaseClass_ptr1);
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

bool assign_ExcAC3A_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC3A* element = dynamic_cast<ExcAC3A*>(BaseClass_ptr1);
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

bool assign_ExcAC3A_vamax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC3A* element = dynamic_cast<ExcAC3A*>(BaseClass_ptr1);
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

bool assign_ExcAC3A_vamin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC3A* element = dynamic_cast<ExcAC3A*>(BaseClass_ptr1);
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

bool assign_ExcAC3A_ve1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC3A* element = dynamic_cast<ExcAC3A*>(BaseClass_ptr1);
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

bool assign_ExcAC3A_ve2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC3A* element = dynamic_cast<ExcAC3A*>(BaseClass_ptr1);
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

bool assign_ExcAC3A_vemin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC3A* element = dynamic_cast<ExcAC3A*>(BaseClass_ptr1);
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

bool assign_ExcAC3A_vfemax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC3A* element = dynamic_cast<ExcAC3A*>(BaseClass_ptr1);
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

bool assign_ExcAC3A_vlv(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC3A* element = dynamic_cast<ExcAC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vlv;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ExcAC3A_efdn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC3A* element = dynamic_cast<const ExcAC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efdn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC3A_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC3A* element = dynamic_cast<const ExcAC3A*>(BaseClass_ptr1);
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

bool get_ExcAC3A_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC3A* element = dynamic_cast<const ExcAC3A*>(BaseClass_ptr1);
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

bool get_ExcAC3A_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC3A* element = dynamic_cast<const ExcAC3A*>(BaseClass_ptr1);
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

bool get_ExcAC3A_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC3A* element = dynamic_cast<const ExcAC3A*>(BaseClass_ptr1);
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

bool get_ExcAC3A_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC3A* element = dynamic_cast<const ExcAC3A*>(BaseClass_ptr1);
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

bool get_ExcAC3A_kf1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC3A* element = dynamic_cast<const ExcAC3A*>(BaseClass_ptr1);
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

bool get_ExcAC3A_kf2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC3A* element = dynamic_cast<const ExcAC3A*>(BaseClass_ptr1);
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

bool get_ExcAC3A_klv(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC3A* element = dynamic_cast<const ExcAC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->klv;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC3A_kn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC3A* element = dynamic_cast<const ExcAC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC3A_kr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC3A* element = dynamic_cast<const ExcAC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC3A_ks(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC3A* element = dynamic_cast<const ExcAC3A*>(BaseClass_ptr1);
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

bool get_ExcAC3A_seve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC3A* element = dynamic_cast<const ExcAC3A*>(BaseClass_ptr1);
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

bool get_ExcAC3A_seve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC3A* element = dynamic_cast<const ExcAC3A*>(BaseClass_ptr1);
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

bool get_ExcAC3A_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC3A* element = dynamic_cast<const ExcAC3A*>(BaseClass_ptr1);
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

bool get_ExcAC3A_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC3A* element = dynamic_cast<const ExcAC3A*>(BaseClass_ptr1);
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

bool get_ExcAC3A_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC3A* element = dynamic_cast<const ExcAC3A*>(BaseClass_ptr1);
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

bool get_ExcAC3A_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC3A* element = dynamic_cast<const ExcAC3A*>(BaseClass_ptr1);
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

bool get_ExcAC3A_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC3A* element = dynamic_cast<const ExcAC3A*>(BaseClass_ptr1);
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

bool get_ExcAC3A_vamax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC3A* element = dynamic_cast<const ExcAC3A*>(BaseClass_ptr1);
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

bool get_ExcAC3A_vamin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC3A* element = dynamic_cast<const ExcAC3A*>(BaseClass_ptr1);
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

bool get_ExcAC3A_ve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC3A* element = dynamic_cast<const ExcAC3A*>(BaseClass_ptr1);
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

bool get_ExcAC3A_ve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC3A* element = dynamic_cast<const ExcAC3A*>(BaseClass_ptr1);
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

bool get_ExcAC3A_vemin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC3A* element = dynamic_cast<const ExcAC3A*>(BaseClass_ptr1);
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

bool get_ExcAC3A_vfemax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC3A* element = dynamic_cast<const ExcAC3A*>(BaseClass_ptr1);
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

bool get_ExcAC3A_vlv(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC3A* element = dynamic_cast<const ExcAC3A*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vlv;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ExcAC3A::debugName[] = "ExcAC3A";
const char* ExcAC3A::debugString() const
{
	return ExcAC3A::debugName;
}

void ExcAC3A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcAC3A", &ExcAC3A_factory);
}

void ExcAC3A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcAC3A.efdn", &assign_ExcAC3A_efdn);
	assign_map.emplace("ExcAC3A.ka", &assign_ExcAC3A_ka);
	assign_map.emplace("ExcAC3A.kc", &assign_ExcAC3A_kc);
	assign_map.emplace("ExcAC3A.kd", &assign_ExcAC3A_kd);
	assign_map.emplace("ExcAC3A.ke", &assign_ExcAC3A_ke);
	assign_map.emplace("ExcAC3A.kf", &assign_ExcAC3A_kf);
	assign_map.emplace("ExcAC3A.kf1", &assign_ExcAC3A_kf1);
	assign_map.emplace("ExcAC3A.kf2", &assign_ExcAC3A_kf2);
	assign_map.emplace("ExcAC3A.klv", &assign_ExcAC3A_klv);
	assign_map.emplace("ExcAC3A.kn", &assign_ExcAC3A_kn);
	assign_map.emplace("ExcAC3A.kr", &assign_ExcAC3A_kr);
	assign_map.emplace("ExcAC3A.ks", &assign_ExcAC3A_ks);
	assign_map.emplace("ExcAC3A.seve1", &assign_ExcAC3A_seve1);
	assign_map.emplace("ExcAC3A.seve2", &assign_ExcAC3A_seve2);
	assign_map.emplace("ExcAC3A.ta", &assign_ExcAC3A_ta);
	assign_map.emplace("ExcAC3A.tb", &assign_ExcAC3A_tb);
	assign_map.emplace("ExcAC3A.tc", &assign_ExcAC3A_tc);
	assign_map.emplace("ExcAC3A.te", &assign_ExcAC3A_te);
	assign_map.emplace("ExcAC3A.tf", &assign_ExcAC3A_tf);
	assign_map.emplace("ExcAC3A.vamax", &assign_ExcAC3A_vamax);
	assign_map.emplace("ExcAC3A.vamin", &assign_ExcAC3A_vamin);
	assign_map.emplace("ExcAC3A.ve1", &assign_ExcAC3A_ve1);
	assign_map.emplace("ExcAC3A.ve2", &assign_ExcAC3A_ve2);
	assign_map.emplace("ExcAC3A.vemin", &assign_ExcAC3A_vemin);
	assign_map.emplace("ExcAC3A.vfemax", &assign_ExcAC3A_vfemax);
	assign_map.emplace("ExcAC3A.vlv", &assign_ExcAC3A_vlv);
}

void ExcAC3A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcAC3A::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcAC3A.efdn", &get_ExcAC3A_efdn);
	get_map.emplace("ExcAC3A.ka", &get_ExcAC3A_ka);
	get_map.emplace("ExcAC3A.kc", &get_ExcAC3A_kc);
	get_map.emplace("ExcAC3A.kd", &get_ExcAC3A_kd);
	get_map.emplace("ExcAC3A.ke", &get_ExcAC3A_ke);
	get_map.emplace("ExcAC3A.kf", &get_ExcAC3A_kf);
	get_map.emplace("ExcAC3A.kf1", &get_ExcAC3A_kf1);
	get_map.emplace("ExcAC3A.kf2", &get_ExcAC3A_kf2);
	get_map.emplace("ExcAC3A.klv", &get_ExcAC3A_klv);
	get_map.emplace("ExcAC3A.kn", &get_ExcAC3A_kn);
	get_map.emplace("ExcAC3A.kr", &get_ExcAC3A_kr);
	get_map.emplace("ExcAC3A.ks", &get_ExcAC3A_ks);
	get_map.emplace("ExcAC3A.seve1", &get_ExcAC3A_seve1);
	get_map.emplace("ExcAC3A.seve2", &get_ExcAC3A_seve2);
	get_map.emplace("ExcAC3A.ta", &get_ExcAC3A_ta);
	get_map.emplace("ExcAC3A.tb", &get_ExcAC3A_tb);
	get_map.emplace("ExcAC3A.tc", &get_ExcAC3A_tc);
	get_map.emplace("ExcAC3A.te", &get_ExcAC3A_te);
	get_map.emplace("ExcAC3A.tf", &get_ExcAC3A_tf);
	get_map.emplace("ExcAC3A.vamax", &get_ExcAC3A_vamax);
	get_map.emplace("ExcAC3A.vamin", &get_ExcAC3A_vamin);
	get_map.emplace("ExcAC3A.ve1", &get_ExcAC3A_ve1);
	get_map.emplace("ExcAC3A.ve2", &get_ExcAC3A_ve2);
	get_map.emplace("ExcAC3A.vemin", &get_ExcAC3A_vemin);
	get_map.emplace("ExcAC3A.vfemax", &get_ExcAC3A_vfemax);
	get_map.emplace("ExcAC3A.vlv", &get_ExcAC3A_vlv);
}

void ExcAC3A::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcAC3A::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcAC3A::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcAC3A" &&
		dynamic_cast<ExcAC3A*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcAC3A::declare()
{
	return BaseClassDefiner(ExcAC3A::addConstructToMap, ExcAC3A::addPrimitiveAssignFnsToMap, ExcAC3A::addClassAssignFnsToMap, ExcAC3A::debugName);
}

std::map<std::string, AttrDetails> ExcAC3A::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcAC3A_factory()
	{
		return new ExcAC3A;
	}
}
