/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovGAST4.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GovGAST4(),
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
		{ "GovGAST4.bp", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST4.ktm", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST4.mnef", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST4.mxef", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST4.rymn", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST4.rymx", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST4.ta", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST4.tc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST4.tcm", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST4.tm", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovGAST4.ty", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

GovGAST4::GovGAST4() {}
GovGAST4::~GovGAST4() {}

const std::list<std::string>& GovGAST4::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GovGAST4::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GovGAST4::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GovGAST4::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GovGAST4::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GovGAST4::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GovGAST4::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_GovGAST4_bp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1);
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

bool assign_GovGAST4_ktm(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ktm;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST4_mnef(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1);
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

bool assign_GovGAST4_mxef(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1);
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

bool assign_GovGAST4_rymn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rymn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST4_rymx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rymx;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST4_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1);
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

bool assign_GovGAST4_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1);
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

bool assign_GovGAST4_tcm(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1);
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

bool assign_GovGAST4_tm(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tm;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovGAST4_ty(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovGAST4* element = dynamic_cast<GovGAST4*>(BaseClass_ptr1);
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

bool get_GovGAST4_bp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST4* element = dynamic_cast<const GovGAST4*>(BaseClass_ptr1);
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

bool get_GovGAST4_ktm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST4* element = dynamic_cast<const GovGAST4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ktm;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST4_mnef(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST4* element = dynamic_cast<const GovGAST4*>(BaseClass_ptr1);
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

bool get_GovGAST4_mxef(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST4* element = dynamic_cast<const GovGAST4*>(BaseClass_ptr1);
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

bool get_GovGAST4_rymn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST4* element = dynamic_cast<const GovGAST4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rymn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST4_rymx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST4* element = dynamic_cast<const GovGAST4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rymx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST4_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST4* element = dynamic_cast<const GovGAST4*>(BaseClass_ptr1);
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

bool get_GovGAST4_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST4* element = dynamic_cast<const GovGAST4*>(BaseClass_ptr1);
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

bool get_GovGAST4_tcm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST4* element = dynamic_cast<const GovGAST4*>(BaseClass_ptr1);
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

bool get_GovGAST4_tm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST4* element = dynamic_cast<const GovGAST4*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tm;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovGAST4_ty(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovGAST4* element = dynamic_cast<const GovGAST4*>(BaseClass_ptr1);
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

const char GovGAST4::debugName[] = "GovGAST4";
const char* GovGAST4::debugString() const
{
	return GovGAST4::debugName;
}

void GovGAST4::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("GovGAST4", &GovGAST4_factory);
}

void GovGAST4::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("GovGAST4.bp", &assign_GovGAST4_bp);
	assign_map.emplace("GovGAST4.ktm", &assign_GovGAST4_ktm);
	assign_map.emplace("GovGAST4.mnef", &assign_GovGAST4_mnef);
	assign_map.emplace("GovGAST4.mxef", &assign_GovGAST4_mxef);
	assign_map.emplace("GovGAST4.rymn", &assign_GovGAST4_rymn);
	assign_map.emplace("GovGAST4.rymx", &assign_GovGAST4_rymx);
	assign_map.emplace("GovGAST4.ta", &assign_GovGAST4_ta);
	assign_map.emplace("GovGAST4.tc", &assign_GovGAST4_tc);
	assign_map.emplace("GovGAST4.tcm", &assign_GovGAST4_tcm);
	assign_map.emplace("GovGAST4.tm", &assign_GovGAST4_tm);
	assign_map.emplace("GovGAST4.ty", &assign_GovGAST4_ty);
}

void GovGAST4::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovGAST4::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("GovGAST4.bp", &get_GovGAST4_bp);
	get_map.emplace("GovGAST4.ktm", &get_GovGAST4_ktm);
	get_map.emplace("GovGAST4.mnef", &get_GovGAST4_mnef);
	get_map.emplace("GovGAST4.mxef", &get_GovGAST4_mxef);
	get_map.emplace("GovGAST4.rymn", &get_GovGAST4_rymn);
	get_map.emplace("GovGAST4.rymx", &get_GovGAST4_rymx);
	get_map.emplace("GovGAST4.ta", &get_GovGAST4_ta);
	get_map.emplace("GovGAST4.tc", &get_GovGAST4_tc);
	get_map.emplace("GovGAST4.tcm", &get_GovGAST4_tcm);
	get_map.emplace("GovGAST4.tm", &get_GovGAST4_tm);
	get_map.emplace("GovGAST4.ty", &get_GovGAST4_ty);
}

void GovGAST4::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovGAST4::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

bool GovGAST4::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GovGAST4" &&
		dynamic_cast<GovGAST4*>(otherObject) != nullptr;
}

const BaseClassDefiner GovGAST4::declare()
{
	return BaseClassDefiner(GovGAST4::addConstructToMap, GovGAST4::addPrimitiveAssignFnsToMap, GovGAST4::addClassAssignFnsToMap, GovGAST4::debugName);
}

std::map<std::string, AttrDetails> GovGAST4::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TurbineGovernorDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GovGAST4_factory()
	{
		return new GovGAST4;
	}
}
