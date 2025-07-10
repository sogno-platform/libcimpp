/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovGAST3.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GovGAST3(),
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
		{ "GovGAST3.bca", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST3.bp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST3.dtc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST3.ka", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST3.kac", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST3.kca", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST3.ksi", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST3.ky", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST3.mnef", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST3.mxef", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST3.rcmn", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST3.rcmx", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST3.tac", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST3.tc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST3.td", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST3.tfen", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST3.tg", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST3.tsi", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST3.tt", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST3.ttc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST3.ty", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

GovGAST3::GovGAST3() {}
GovGAST3::~GovGAST3() {}

const std::list<std::string>& GovGAST3::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GovGAST3::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GovGAST3::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GovGAST3::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GovGAST3::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GovGAST3::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GovGAST3::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_GovGAST3_bca(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->bca;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST3_bp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->bp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST3_dtc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dtc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST3_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1);
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

bool assign_GovGAST3_kac(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kac;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST3_kca(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kca;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST3_ksi(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ksi;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST3_ky(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ky;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST3_mnef(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1);
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

bool assign_GovGAST3_mxef(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1);
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

bool assign_GovGAST3_rcmn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rcmn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST3_rcmx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rcmx;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST3_tac(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tac;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST3_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1);
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

bool assign_GovGAST3_td(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1);
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

bool assign_GovGAST3_tfen(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tfen;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST3_tg(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1);
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

bool assign_GovGAST3_tsi(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tsi;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST3_tt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1);
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

bool assign_GovGAST3_ttc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ttc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST3_ty(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST3* element = dynamic_cast<GovGAST3*>(BaseClass_ptr1);
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

bool get_GovGAST3_bca(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->bca;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_bp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->bp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_dtc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dtc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1);
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

bool get_GovGAST3_kac(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kac;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_kca(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kca;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_ksi(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ksi;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_ky(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ky;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_mnef(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1);
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

bool get_GovGAST3_mxef(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1);
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

bool get_GovGAST3_rcmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rcmn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_rcmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rcmx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_tac(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tac;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1);
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

bool get_GovGAST3_td(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1);
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

bool get_GovGAST3_tfen(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tfen;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_tg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1);
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

bool get_GovGAST3_tsi(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tsi;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_tt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1);
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

bool get_GovGAST3_ttc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ttc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST3_ty(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST3* element = dynamic_cast<const GovGAST3*>(BaseClass_ptr1);
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

const char GovGAST3::debugName[] = "GovGAST3";
const char* GovGAST3::debugString() const
{
	return GovGAST3::debugName;
}

void GovGAST3::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("GovGAST3", &GovGAST3_factory);
}

void GovGAST3::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("GovGAST3.bca", &assign_GovGAST3_bca);
	assign_map.emplace("GovGAST3.bp", &assign_GovGAST3_bp);
	assign_map.emplace("GovGAST3.dtc", &assign_GovGAST3_dtc);
	assign_map.emplace("GovGAST3.ka", &assign_GovGAST3_ka);
	assign_map.emplace("GovGAST3.kac", &assign_GovGAST3_kac);
	assign_map.emplace("GovGAST3.kca", &assign_GovGAST3_kca);
	assign_map.emplace("GovGAST3.ksi", &assign_GovGAST3_ksi);
	assign_map.emplace("GovGAST3.ky", &assign_GovGAST3_ky);
	assign_map.emplace("GovGAST3.mnef", &assign_GovGAST3_mnef);
	assign_map.emplace("GovGAST3.mxef", &assign_GovGAST3_mxef);
	assign_map.emplace("GovGAST3.rcmn", &assign_GovGAST3_rcmn);
	assign_map.emplace("GovGAST3.rcmx", &assign_GovGAST3_rcmx);
	assign_map.emplace("GovGAST3.tac", &assign_GovGAST3_tac);
	assign_map.emplace("GovGAST3.tc", &assign_GovGAST3_tc);
	assign_map.emplace("GovGAST3.td", &assign_GovGAST3_td);
	assign_map.emplace("GovGAST3.tfen", &assign_GovGAST3_tfen);
	assign_map.emplace("GovGAST3.tg", &assign_GovGAST3_tg);
	assign_map.emplace("GovGAST3.tsi", &assign_GovGAST3_tsi);
	assign_map.emplace("GovGAST3.tt", &assign_GovGAST3_tt);
	assign_map.emplace("GovGAST3.ttc", &assign_GovGAST3_ttc);
	assign_map.emplace("GovGAST3.ty", &assign_GovGAST3_ty);
}

void GovGAST3::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovGAST3::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("GovGAST3.bca", &get_GovGAST3_bca);
	get_map.emplace("GovGAST3.bp", &get_GovGAST3_bp);
	get_map.emplace("GovGAST3.dtc", &get_GovGAST3_dtc);
	get_map.emplace("GovGAST3.ka", &get_GovGAST3_ka);
	get_map.emplace("GovGAST3.kac", &get_GovGAST3_kac);
	get_map.emplace("GovGAST3.kca", &get_GovGAST3_kca);
	get_map.emplace("GovGAST3.ksi", &get_GovGAST3_ksi);
	get_map.emplace("GovGAST3.ky", &get_GovGAST3_ky);
	get_map.emplace("GovGAST3.mnef", &get_GovGAST3_mnef);
	get_map.emplace("GovGAST3.mxef", &get_GovGAST3_mxef);
	get_map.emplace("GovGAST3.rcmn", &get_GovGAST3_rcmn);
	get_map.emplace("GovGAST3.rcmx", &get_GovGAST3_rcmx);
	get_map.emplace("GovGAST3.tac", &get_GovGAST3_tac);
	get_map.emplace("GovGAST3.tc", &get_GovGAST3_tc);
	get_map.emplace("GovGAST3.td", &get_GovGAST3_td);
	get_map.emplace("GovGAST3.tfen", &get_GovGAST3_tfen);
	get_map.emplace("GovGAST3.tg", &get_GovGAST3_tg);
	get_map.emplace("GovGAST3.tsi", &get_GovGAST3_tsi);
	get_map.emplace("GovGAST3.tt", &get_GovGAST3_tt);
	get_map.emplace("GovGAST3.ttc", &get_GovGAST3_ttc);
	get_map.emplace("GovGAST3.ty", &get_GovGAST3_ty);
}

void GovGAST3::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovGAST3::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

bool GovGAST3::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GovGAST3" &&
		dynamic_cast<GovGAST3*>(otherObject) != nullptr;
}

const BaseClassDefiner GovGAST3::declare()
{
	return BaseClassDefiner(GovGAST3::addConstructToMap, GovGAST3::addPrimitiveAssignFnsToMap, GovGAST3::addClassAssignFnsToMap, GovGAST3::debugName);
}

std::map<std::string, AttrDetails> GovGAST3::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TurbineGovernorDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GovGAST3_factory()
	{
		return new GovGAST3;
	}
}
