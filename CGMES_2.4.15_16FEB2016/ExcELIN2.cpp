/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcELIN2.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcELIN2(),
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
		{ "ExcELIN2.efdbas", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN2.iefmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN2.iefmax2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN2.iefmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN2.k1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN2.k1ec", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN2.k2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN2.k3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN2.k4", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN2.kd1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN2.ke2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN2.ketb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN2.pid1max", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN2.seve1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN2.seve2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN2.tb1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN2.te", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN2.te2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN2.ti1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN2.ti3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN2.ti4", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN2.tr4", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN2.upmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN2.upmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN2.ve1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN2.ve2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "ExcELIN2.xp", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcELIN2::ExcELIN2() {}
ExcELIN2::~ExcELIN2() {}

const std::list<std::string>& ExcELIN2::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcELIN2::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcELIN2::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcELIN2::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcELIN2::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcELIN2::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcELIN2::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcELIN2_efdbas(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efdbas;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN2_iefmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->iefmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN2_iefmax2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->iefmax2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN2_iefmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->iefmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN2_k1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN2_k1ec(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k1ec;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN2_k2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN2_k3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1);
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

bool assign_ExcELIN2_k4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1);
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

bool assign_ExcELIN2_kd1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kd1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN2_ke2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ke2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN2_ketb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ketb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN2_pid1max(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pid1max;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN2_seve1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1);
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

bool assign_ExcELIN2_seve2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1);
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

bool assign_ExcELIN2_tb1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1);
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

bool assign_ExcELIN2_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1);
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

bool assign_ExcELIN2_te2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->te2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN2_ti1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ti1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN2_ti3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ti3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN2_ti4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ti4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN2_tr4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tr4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN2_upmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->upmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN2_upmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->upmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcELIN2_ve1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1);
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

bool assign_ExcELIN2_ve2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1);
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

bool assign_ExcELIN2_xp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcELIN2* element = dynamic_cast<ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ExcELIN2_efdbas(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efdbas;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_iefmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->iefmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_iefmax2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->iefmax2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_iefmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->iefmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_k1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_k1ec(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k1ec;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_k2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_k3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1);
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

bool get_ExcELIN2_k4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1);
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

bool get_ExcELIN2_kd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kd1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_ke2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ke2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_ketb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ketb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_pid1max(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pid1max;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_seve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1);
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

bool get_ExcELIN2_seve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1);
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

bool get_ExcELIN2_tb1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1);
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

bool get_ExcELIN2_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1);
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

bool get_ExcELIN2_te2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->te2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_ti1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ti1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_ti3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ti3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_ti4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ti4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_tr4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tr4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_upmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->upmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_upmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->upmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcELIN2_ve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1);
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

bool get_ExcELIN2_ve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1);
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

bool get_ExcELIN2_xp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcELIN2* element = dynamic_cast<const ExcELIN2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ExcELIN2::debugName[] = "ExcELIN2";
const char* ExcELIN2::debugString() const
{
	return ExcELIN2::debugName;
}

void ExcELIN2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcELIN2", &ExcELIN2_factory);
}

void ExcELIN2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcELIN2.efdbas", &assign_ExcELIN2_efdbas);
	assign_map.emplace("ExcELIN2.iefmax", &assign_ExcELIN2_iefmax);
	assign_map.emplace("ExcELIN2.iefmax2", &assign_ExcELIN2_iefmax2);
	assign_map.emplace("ExcELIN2.iefmin", &assign_ExcELIN2_iefmin);
	assign_map.emplace("ExcELIN2.k1", &assign_ExcELIN2_k1);
	assign_map.emplace("ExcELIN2.k1ec", &assign_ExcELIN2_k1ec);
	assign_map.emplace("ExcELIN2.k2", &assign_ExcELIN2_k2);
	assign_map.emplace("ExcELIN2.k3", &assign_ExcELIN2_k3);
	assign_map.emplace("ExcELIN2.k4", &assign_ExcELIN2_k4);
	assign_map.emplace("ExcELIN2.kd1", &assign_ExcELIN2_kd1);
	assign_map.emplace("ExcELIN2.ke2", &assign_ExcELIN2_ke2);
	assign_map.emplace("ExcELIN2.ketb", &assign_ExcELIN2_ketb);
	assign_map.emplace("ExcELIN2.pid1max", &assign_ExcELIN2_pid1max);
	assign_map.emplace("ExcELIN2.seve1", &assign_ExcELIN2_seve1);
	assign_map.emplace("ExcELIN2.seve2", &assign_ExcELIN2_seve2);
	assign_map.emplace("ExcELIN2.tb1", &assign_ExcELIN2_tb1);
	assign_map.emplace("ExcELIN2.te", &assign_ExcELIN2_te);
	assign_map.emplace("ExcELIN2.te2", &assign_ExcELIN2_te2);
	assign_map.emplace("ExcELIN2.ti1", &assign_ExcELIN2_ti1);
	assign_map.emplace("ExcELIN2.ti3", &assign_ExcELIN2_ti3);
	assign_map.emplace("ExcELIN2.ti4", &assign_ExcELIN2_ti4);
	assign_map.emplace("ExcELIN2.tr4", &assign_ExcELIN2_tr4);
	assign_map.emplace("ExcELIN2.upmax", &assign_ExcELIN2_upmax);
	assign_map.emplace("ExcELIN2.upmin", &assign_ExcELIN2_upmin);
	assign_map.emplace("ExcELIN2.ve1", &assign_ExcELIN2_ve1);
	assign_map.emplace("ExcELIN2.ve2", &assign_ExcELIN2_ve2);
	assign_map.emplace("ExcELIN2.xp", &assign_ExcELIN2_xp);
}

void ExcELIN2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcELIN2::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcELIN2.efdbas", &get_ExcELIN2_efdbas);
	get_map.emplace("ExcELIN2.iefmax", &get_ExcELIN2_iefmax);
	get_map.emplace("ExcELIN2.iefmax2", &get_ExcELIN2_iefmax2);
	get_map.emplace("ExcELIN2.iefmin", &get_ExcELIN2_iefmin);
	get_map.emplace("ExcELIN2.k1", &get_ExcELIN2_k1);
	get_map.emplace("ExcELIN2.k1ec", &get_ExcELIN2_k1ec);
	get_map.emplace("ExcELIN2.k2", &get_ExcELIN2_k2);
	get_map.emplace("ExcELIN2.k3", &get_ExcELIN2_k3);
	get_map.emplace("ExcELIN2.k4", &get_ExcELIN2_k4);
	get_map.emplace("ExcELIN2.kd1", &get_ExcELIN2_kd1);
	get_map.emplace("ExcELIN2.ke2", &get_ExcELIN2_ke2);
	get_map.emplace("ExcELIN2.ketb", &get_ExcELIN2_ketb);
	get_map.emplace("ExcELIN2.pid1max", &get_ExcELIN2_pid1max);
	get_map.emplace("ExcELIN2.seve1", &get_ExcELIN2_seve1);
	get_map.emplace("ExcELIN2.seve2", &get_ExcELIN2_seve2);
	get_map.emplace("ExcELIN2.tb1", &get_ExcELIN2_tb1);
	get_map.emplace("ExcELIN2.te", &get_ExcELIN2_te);
	get_map.emplace("ExcELIN2.te2", &get_ExcELIN2_te2);
	get_map.emplace("ExcELIN2.ti1", &get_ExcELIN2_ti1);
	get_map.emplace("ExcELIN2.ti3", &get_ExcELIN2_ti3);
	get_map.emplace("ExcELIN2.ti4", &get_ExcELIN2_ti4);
	get_map.emplace("ExcELIN2.tr4", &get_ExcELIN2_tr4);
	get_map.emplace("ExcELIN2.upmax", &get_ExcELIN2_upmax);
	get_map.emplace("ExcELIN2.upmin", &get_ExcELIN2_upmin);
	get_map.emplace("ExcELIN2.ve1", &get_ExcELIN2_ve1);
	get_map.emplace("ExcELIN2.ve2", &get_ExcELIN2_ve2);
	get_map.emplace("ExcELIN2.xp", &get_ExcELIN2_xp);
}

void ExcELIN2::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcELIN2::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcELIN2::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcELIN2" &&
		dynamic_cast<ExcELIN2*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcELIN2::declare()
{
	return BaseClassDefiner(ExcELIN2::addConstructToMap, ExcELIN2::addPrimitiveAssignFnsToMap, ExcELIN2::addClassAssignFnsToMap, ExcELIN2::debugName);
}

std::map<std::string, AttrDetails> ExcELIN2::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcELIN2_factory()
	{
		return new ExcELIN2;
	}
}
