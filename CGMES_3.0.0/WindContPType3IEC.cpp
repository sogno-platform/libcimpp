/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindContPType3IEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindDynamicsLookupTable.hpp"
#include "WindTurbineType3IEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindContPType3IEC(),
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
		{ "WindContPType3IEC.WindDynamicsLookupTable", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPType3IEC.WindTurbineType3IEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPType3IEC.dpmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPType3IEC.dprefmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPType3IEC.dprefmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPType3IEC.dthetamax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPType3IEC.dthetamaxuvrt", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPType3IEC.kdtd", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPType3IEC.kip", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPType3IEC.kpp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPType3IEC.mpuvrt", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPType3IEC.omegadtd", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPType3IEC.omegaoffset", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPType3IEC.pdtdmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPType3IEC.tdvs", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPType3IEC.thetaemin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPType3IEC.thetauscale", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPType3IEC.tomegafiltp3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPType3IEC.tomegaref", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPType3IEC.tpfiltp3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPType3IEC.tpord", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPType3IEC.tufiltp3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPType3IEC.udvs", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPType3IEC.updip", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindContPType3IEC.zeta", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindContPType3IEC::WindContPType3IEC() : WindTurbineType3IEC(nullptr) {}
WindContPType3IEC::~WindContPType3IEC() {}

const std::list<std::string>& WindContPType3IEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindContPType3IEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindContPType3IEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindContPType3IEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindContPType3IEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindContPType3IEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindContPType3IEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindDynamicsLookupTable_WindContPType3IEC(BaseClass*, BaseClass*);
bool assign_WindContPType3IEC_WindDynamicsLookupTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1);
	WindDynamicsLookupTable* element2 = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->WindDynamicsLookupTable.begin(), element->WindDynamicsLookupTable.end(), element2) == element->WindDynamicsLookupTable.end())
		{
			element->WindDynamicsLookupTable.push_back(element2);
			return assign_WindDynamicsLookupTable_WindContPType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindTurbineType3IEC_WindContPType3IEC(BaseClass*, BaseClass*);
bool assign_WindContPType3IEC_WindTurbineType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1);
	WindTurbineType3IEC* element2 = dynamic_cast<WindTurbineType3IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType3IEC != element2)
		{
			element->WindTurbineType3IEC = element2;
			return assign_WindTurbineType3IEC_WindContPType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindContPType3IEC_dpmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dpmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPType3IEC_dprefmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dprefmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPType3IEC_dprefmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dprefmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPType3IEC_dthetamax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dthetamax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPType3IEC_dthetamaxuvrt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dthetamaxuvrt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPType3IEC_kdtd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kdtd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPType3IEC_kip(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1);
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

bool assign_WindContPType3IEC_kpp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1);
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

bool assign_WindContPType3IEC_mpuvrt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->mpuvrt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPType3IEC_omegadtd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->omegadtd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPType3IEC_omegaoffset(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->omegaoffset;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPType3IEC_pdtdmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pdtdmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPType3IEC_tdvs(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tdvs;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPType3IEC_thetaemin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->thetaemin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPType3IEC_thetauscale(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->thetauscale;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPType3IEC_tomegafiltp3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tomegafiltp3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPType3IEC_tomegaref(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tomegaref;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPType3IEC_tpfiltp3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tpfiltp3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPType3IEC_tpord(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tpord;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPType3IEC_tufiltp3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tufiltp3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPType3IEC_udvs(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->udvs;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPType3IEC_updip(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->updip;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContPType3IEC_zeta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContPType3IEC* element = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->zeta;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}



bool get_WindContPType3IEC_dpmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dpmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_dprefmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dprefmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_dprefmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dprefmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_dthetamax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dthetamax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_dthetamaxuvrt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dthetamaxuvrt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_kdtd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kdtd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_kip(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1);
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

bool get_WindContPType3IEC_kpp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1);
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

bool get_WindContPType3IEC_mpuvrt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->mpuvrt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_omegadtd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->omegadtd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_omegaoffset(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->omegaoffset;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_pdtdmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pdtdmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_tdvs(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tdvs;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_thetaemin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->thetaemin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_thetauscale(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->thetauscale;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_tomegafiltp3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tomegafiltp3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_tomegaref(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tomegaref;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_tpfiltp3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tpfiltp3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_tpord(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tpord;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_tufiltp3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tufiltp3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_udvs(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->udvs;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_updip(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->updip;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContPType3IEC_zeta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContPType3IEC* element = dynamic_cast<const WindContPType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->zeta;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char WindContPType3IEC::debugName[] = "WindContPType3IEC";
const char* WindContPType3IEC::debugString() const
{
	return WindContPType3IEC::debugName;
}

void WindContPType3IEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindContPType3IEC", &WindContPType3IEC_factory);
}

void WindContPType3IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("WindContPType3IEC.dpmax", &assign_WindContPType3IEC_dpmax);
	assign_map.emplace("WindContPType3IEC.dprefmax", &assign_WindContPType3IEC_dprefmax);
	assign_map.emplace("WindContPType3IEC.dprefmin", &assign_WindContPType3IEC_dprefmin);
	assign_map.emplace("WindContPType3IEC.dthetamax", &assign_WindContPType3IEC_dthetamax);
	assign_map.emplace("WindContPType3IEC.dthetamaxuvrt", &assign_WindContPType3IEC_dthetamaxuvrt);
	assign_map.emplace("WindContPType3IEC.kdtd", &assign_WindContPType3IEC_kdtd);
	assign_map.emplace("WindContPType3IEC.kip", &assign_WindContPType3IEC_kip);
	assign_map.emplace("WindContPType3IEC.kpp", &assign_WindContPType3IEC_kpp);
	assign_map.emplace("WindContPType3IEC.mpuvrt", &assign_WindContPType3IEC_mpuvrt);
	assign_map.emplace("WindContPType3IEC.omegadtd", &assign_WindContPType3IEC_omegadtd);
	assign_map.emplace("WindContPType3IEC.omegaoffset", &assign_WindContPType3IEC_omegaoffset);
	assign_map.emplace("WindContPType3IEC.pdtdmax", &assign_WindContPType3IEC_pdtdmax);
	assign_map.emplace("WindContPType3IEC.tdvs", &assign_WindContPType3IEC_tdvs);
	assign_map.emplace("WindContPType3IEC.thetaemin", &assign_WindContPType3IEC_thetaemin);
	assign_map.emplace("WindContPType3IEC.thetauscale", &assign_WindContPType3IEC_thetauscale);
	assign_map.emplace("WindContPType3IEC.tomegafiltp3", &assign_WindContPType3IEC_tomegafiltp3);
	assign_map.emplace("WindContPType3IEC.tomegaref", &assign_WindContPType3IEC_tomegaref);
	assign_map.emplace("WindContPType3IEC.tpfiltp3", &assign_WindContPType3IEC_tpfiltp3);
	assign_map.emplace("WindContPType3IEC.tpord", &assign_WindContPType3IEC_tpord);
	assign_map.emplace("WindContPType3IEC.tufiltp3", &assign_WindContPType3IEC_tufiltp3);
	assign_map.emplace("WindContPType3IEC.udvs", &assign_WindContPType3IEC_udvs);
	assign_map.emplace("WindContPType3IEC.updip", &assign_WindContPType3IEC_updip);
	assign_map.emplace("WindContPType3IEC.zeta", &assign_WindContPType3IEC_zeta);
}

void WindContPType3IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindContPType3IEC.WindDynamicsLookupTable", &assign_WindContPType3IEC_WindDynamicsLookupTable);
	assign_map.emplace("WindContPType3IEC.WindTurbineType3IEC", &assign_WindContPType3IEC_WindTurbineType3IEC);
}

void WindContPType3IEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("WindContPType3IEC.dpmax", &get_WindContPType3IEC_dpmax);
	get_map.emplace("WindContPType3IEC.dprefmax", &get_WindContPType3IEC_dprefmax);
	get_map.emplace("WindContPType3IEC.dprefmin", &get_WindContPType3IEC_dprefmin);
	get_map.emplace("WindContPType3IEC.dthetamax", &get_WindContPType3IEC_dthetamax);
	get_map.emplace("WindContPType3IEC.dthetamaxuvrt", &get_WindContPType3IEC_dthetamaxuvrt);
	get_map.emplace("WindContPType3IEC.kdtd", &get_WindContPType3IEC_kdtd);
	get_map.emplace("WindContPType3IEC.kip", &get_WindContPType3IEC_kip);
	get_map.emplace("WindContPType3IEC.kpp", &get_WindContPType3IEC_kpp);
	get_map.emplace("WindContPType3IEC.mpuvrt", &get_WindContPType3IEC_mpuvrt);
	get_map.emplace("WindContPType3IEC.omegadtd", &get_WindContPType3IEC_omegadtd);
	get_map.emplace("WindContPType3IEC.omegaoffset", &get_WindContPType3IEC_omegaoffset);
	get_map.emplace("WindContPType3IEC.pdtdmax", &get_WindContPType3IEC_pdtdmax);
	get_map.emplace("WindContPType3IEC.tdvs", &get_WindContPType3IEC_tdvs);
	get_map.emplace("WindContPType3IEC.thetaemin", &get_WindContPType3IEC_thetaemin);
	get_map.emplace("WindContPType3IEC.thetauscale", &get_WindContPType3IEC_thetauscale);
	get_map.emplace("WindContPType3IEC.tomegafiltp3", &get_WindContPType3IEC_tomegafiltp3);
	get_map.emplace("WindContPType3IEC.tomegaref", &get_WindContPType3IEC_tomegaref);
	get_map.emplace("WindContPType3IEC.tpfiltp3", &get_WindContPType3IEC_tpfiltp3);
	get_map.emplace("WindContPType3IEC.tpord", &get_WindContPType3IEC_tpord);
	get_map.emplace("WindContPType3IEC.tufiltp3", &get_WindContPType3IEC_tufiltp3);
	get_map.emplace("WindContPType3IEC.udvs", &get_WindContPType3IEC_udvs);
	get_map.emplace("WindContPType3IEC.updip", &get_WindContPType3IEC_updip);
	get_map.emplace("WindContPType3IEC.zeta", &get_WindContPType3IEC_zeta);
}

void WindContPType3IEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindContPType3IEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

bool WindContPType3IEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindContPType3IEC" &&
		dynamic_cast<WindContPType3IEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindContPType3IEC::declare()
{
	return BaseClassDefiner(WindContPType3IEC::addConstructToMap, WindContPType3IEC::addPrimitiveAssignFnsToMap, WindContPType3IEC::addClassAssignFnsToMap, WindContPType3IEC::debugName);
}

std::map<std::string, AttrDetails> WindContPType3IEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = IdentifiedObject::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindContPType3IEC_factory()
	{
		return new WindContPType3IEC;
	}
}
