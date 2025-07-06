/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcSK.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		ExcSK(),
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
		{ "ExcSK.efdmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.efdmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.emax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.emin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.k", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.k1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.k2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.kc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.kce", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.kd", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.kgob", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.kp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.kqi", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.kqob", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.kqp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.nq", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.qconoff", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.qz", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.remote", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.sbase", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.tc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.te", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.ti", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.tp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.tr", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.uimax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.uimin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.urmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.urmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.vtmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.vtmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "ExcSK.yp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

ExcSK::ExcSK() {}
ExcSK::~ExcSK() {}

const std::list<std::string>& ExcSK::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& ExcSK::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& ExcSK::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& ExcSK::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& ExcSK::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& ExcSK::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& ExcSK::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_ExcSK_efdmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efdmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSK_efdmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efdmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSK_emax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->emax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSK_emin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->emin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSK_k(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSK_k1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
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

bool assign_ExcSK_k2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
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

bool assign_ExcSK_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
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

bool assign_ExcSK_kce(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kce;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSK_kd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
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

bool assign_ExcSK_kgob(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kgob;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSK_kp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
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

bool assign_ExcSK_kqi(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kqi;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSK_kqob(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kqob;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSK_kqp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kqp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSK_nq(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->nq;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSK_qconoff(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qconoff;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSK_qz(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qz;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSK_remote(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->remote;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSK_sbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->sbase;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSK_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
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

bool assign_ExcSK_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
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

bool assign_ExcSK_ti(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ti;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSK_tp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
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

bool assign_ExcSK_tr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
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

bool assign_ExcSK_uimax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->uimax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSK_uimin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->uimin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSK_urmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->urmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSK_urmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->urmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSK_vtmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vtmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSK_vtmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vtmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcSK_yp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcSK* element = dynamic_cast<ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->yp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ExcSK_efdmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efdmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_efdmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efdmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_emax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->emax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_emin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->emin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_k(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_k1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
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

bool get_ExcSK_k2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
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

bool get_ExcSK_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
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

bool get_ExcSK_kce(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kce;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
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

bool get_ExcSK_kgob(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kgob;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
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

bool get_ExcSK_kqi(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kqi;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_kqob(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kqob;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_kqp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kqp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_nq(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->nq;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_qconoff(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->qconoff;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_qz(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->qz;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_remote(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->remote;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_sbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->sbase;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
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

bool get_ExcSK_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
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

bool get_ExcSK_ti(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ti;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_tp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
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

bool get_ExcSK_tr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
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

bool get_ExcSK_uimax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->uimax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_uimin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->uimin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_urmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->urmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_urmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->urmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_vtmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vtmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_vtmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vtmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcSK_yp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcSK* element = dynamic_cast<const ExcSK*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->yp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ExcSK::debugName[] = "ExcSK";
const char* ExcSK::debugString() const
{
	return ExcSK::debugName;
}

void ExcSK::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("ExcSK", &ExcSK_factory);
}

void ExcSK::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("ExcSK.efdmax", &assign_ExcSK_efdmax);
	assign_map.emplace("ExcSK.efdmin", &assign_ExcSK_efdmin);
	assign_map.emplace("ExcSK.emax", &assign_ExcSK_emax);
	assign_map.emplace("ExcSK.emin", &assign_ExcSK_emin);
	assign_map.emplace("ExcSK.k", &assign_ExcSK_k);
	assign_map.emplace("ExcSK.k1", &assign_ExcSK_k1);
	assign_map.emplace("ExcSK.k2", &assign_ExcSK_k2);
	assign_map.emplace("ExcSK.kc", &assign_ExcSK_kc);
	assign_map.emplace("ExcSK.kce", &assign_ExcSK_kce);
	assign_map.emplace("ExcSK.kd", &assign_ExcSK_kd);
	assign_map.emplace("ExcSK.kgob", &assign_ExcSK_kgob);
	assign_map.emplace("ExcSK.kp", &assign_ExcSK_kp);
	assign_map.emplace("ExcSK.kqi", &assign_ExcSK_kqi);
	assign_map.emplace("ExcSK.kqob", &assign_ExcSK_kqob);
	assign_map.emplace("ExcSK.kqp", &assign_ExcSK_kqp);
	assign_map.emplace("ExcSK.nq", &assign_ExcSK_nq);
	assign_map.emplace("ExcSK.qconoff", &assign_ExcSK_qconoff);
	assign_map.emplace("ExcSK.qz", &assign_ExcSK_qz);
	assign_map.emplace("ExcSK.remote", &assign_ExcSK_remote);
	assign_map.emplace("ExcSK.sbase", &assign_ExcSK_sbase);
	assign_map.emplace("ExcSK.tc", &assign_ExcSK_tc);
	assign_map.emplace("ExcSK.te", &assign_ExcSK_te);
	assign_map.emplace("ExcSK.ti", &assign_ExcSK_ti);
	assign_map.emplace("ExcSK.tp", &assign_ExcSK_tp);
	assign_map.emplace("ExcSK.tr", &assign_ExcSK_tr);
	assign_map.emplace("ExcSK.uimax", &assign_ExcSK_uimax);
	assign_map.emplace("ExcSK.uimin", &assign_ExcSK_uimin);
	assign_map.emplace("ExcSK.urmax", &assign_ExcSK_urmax);
	assign_map.emplace("ExcSK.urmin", &assign_ExcSK_urmin);
	assign_map.emplace("ExcSK.vtmax", &assign_ExcSK_vtmax);
	assign_map.emplace("ExcSK.vtmin", &assign_ExcSK_vtmin);
	assign_map.emplace("ExcSK.yp", &assign_ExcSK_yp);
}

void ExcSK::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcSK::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("ExcSK.efdmax", &get_ExcSK_efdmax);
	get_map.emplace("ExcSK.efdmin", &get_ExcSK_efdmin);
	get_map.emplace("ExcSK.emax", &get_ExcSK_emax);
	get_map.emplace("ExcSK.emin", &get_ExcSK_emin);
	get_map.emplace("ExcSK.k", &get_ExcSK_k);
	get_map.emplace("ExcSK.k1", &get_ExcSK_k1);
	get_map.emplace("ExcSK.k2", &get_ExcSK_k2);
	get_map.emplace("ExcSK.kc", &get_ExcSK_kc);
	get_map.emplace("ExcSK.kce", &get_ExcSK_kce);
	get_map.emplace("ExcSK.kd", &get_ExcSK_kd);
	get_map.emplace("ExcSK.kgob", &get_ExcSK_kgob);
	get_map.emplace("ExcSK.kp", &get_ExcSK_kp);
	get_map.emplace("ExcSK.kqi", &get_ExcSK_kqi);
	get_map.emplace("ExcSK.kqob", &get_ExcSK_kqob);
	get_map.emplace("ExcSK.kqp", &get_ExcSK_kqp);
	get_map.emplace("ExcSK.nq", &get_ExcSK_nq);
	get_map.emplace("ExcSK.qconoff", &get_ExcSK_qconoff);
	get_map.emplace("ExcSK.qz", &get_ExcSK_qz);
	get_map.emplace("ExcSK.remote", &get_ExcSK_remote);
	get_map.emplace("ExcSK.sbase", &get_ExcSK_sbase);
	get_map.emplace("ExcSK.tc", &get_ExcSK_tc);
	get_map.emplace("ExcSK.te", &get_ExcSK_te);
	get_map.emplace("ExcSK.ti", &get_ExcSK_ti);
	get_map.emplace("ExcSK.tp", &get_ExcSK_tp);
	get_map.emplace("ExcSK.tr", &get_ExcSK_tr);
	get_map.emplace("ExcSK.uimax", &get_ExcSK_uimax);
	get_map.emplace("ExcSK.uimin", &get_ExcSK_uimin);
	get_map.emplace("ExcSK.urmax", &get_ExcSK_urmax);
	get_map.emplace("ExcSK.urmin", &get_ExcSK_urmin);
	get_map.emplace("ExcSK.vtmax", &get_ExcSK_vtmax);
	get_map.emplace("ExcSK.vtmin", &get_ExcSK_vtmin);
	get_map.emplace("ExcSK.yp", &get_ExcSK_yp);
}

void ExcSK::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcSK::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

bool ExcSK::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "ExcSK" &&
		dynamic_cast<ExcSK*>(otherObject) != nullptr;
}

const BaseClassDefiner ExcSK::declare()
{
	return BaseClassDefiner(ExcSK::addConstructToMap, ExcSK::addPrimitiveAssignFnsToMap, ExcSK::addClassAssignFnsToMap, ExcSK::debugName);
}

std::map<std::string, AttrDetails> ExcSK::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = ExcitationSystemDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* ExcSK_factory()
	{
		return new ExcSK;
	}
}
