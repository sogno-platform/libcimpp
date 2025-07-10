/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovSteamFV2.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GovSteamFV2(),
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
		{ "GovSteamFV2.dt", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteamFV2.k", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteamFV2.mwbase", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteamFV2.r", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteamFV2.t1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteamFV2.t3", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteamFV2.ta", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteamFV2.tb", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteamFV2.tc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteamFV2.ti", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteamFV2.tt", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteamFV2.vmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteamFV2.vmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

GovSteamFV2::GovSteamFV2() {}
GovSteamFV2::~GovSteamFV2() {}

const std::list<std::string>& GovSteamFV2::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GovSteamFV2::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GovSteamFV2::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GovSteamFV2::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GovSteamFV2::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GovSteamFV2::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GovSteamFV2::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_GovSteamFV2_dt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV2_k(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1);
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

bool assign_GovSteamFV2_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1);
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

bool assign_GovSteamFV2_r(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->r;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV2_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV2_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1);
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

bool assign_GovSteamFV2_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1);
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

bool assign_GovSteamFV2_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1);
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

bool assign_GovSteamFV2_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1);
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

bool assign_GovSteamFV2_ti(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1);
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

bool assign_GovSteamFV2_tt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1);
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

bool assign_GovSteamFV2_vmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamFV2_vmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_GovSteamFV2_dt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV2* element = dynamic_cast<const GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV2_k(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV2* element = dynamic_cast<const GovSteamFV2*>(BaseClass_ptr1);
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

bool get_GovSteamFV2_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV2* element = dynamic_cast<const GovSteamFV2*>(BaseClass_ptr1);
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

bool get_GovSteamFV2_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV2* element = dynamic_cast<const GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->r;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV2_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV2* element = dynamic_cast<const GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV2_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV2* element = dynamic_cast<const GovSteamFV2*>(BaseClass_ptr1);
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

bool get_GovSteamFV2_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV2* element = dynamic_cast<const GovSteamFV2*>(BaseClass_ptr1);
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

bool get_GovSteamFV2_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV2* element = dynamic_cast<const GovSteamFV2*>(BaseClass_ptr1);
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

bool get_GovSteamFV2_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV2* element = dynamic_cast<const GovSteamFV2*>(BaseClass_ptr1);
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

bool get_GovSteamFV2_ti(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV2* element = dynamic_cast<const GovSteamFV2*>(BaseClass_ptr1);
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

bool get_GovSteamFV2_tt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV2* element = dynamic_cast<const GovSteamFV2*>(BaseClass_ptr1);
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

bool get_GovSteamFV2_vmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV2* element = dynamic_cast<const GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamFV2_vmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamFV2* element = dynamic_cast<const GovSteamFV2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char GovSteamFV2::debugName[] = "GovSteamFV2";
const char* GovSteamFV2::debugString() const
{
	return GovSteamFV2::debugName;
}

void GovSteamFV2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("GovSteamFV2", &GovSteamFV2_factory);
}

void GovSteamFV2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("GovSteamFV2.dt", &assign_GovSteamFV2_dt);
	assign_map.emplace("GovSteamFV2.k", &assign_GovSteamFV2_k);
	assign_map.emplace("GovSteamFV2.mwbase", &assign_GovSteamFV2_mwbase);
	assign_map.emplace("GovSteamFV2.r", &assign_GovSteamFV2_r);
	assign_map.emplace("GovSteamFV2.t1", &assign_GovSteamFV2_t1);
	assign_map.emplace("GovSteamFV2.t3", &assign_GovSteamFV2_t3);
	assign_map.emplace("GovSteamFV2.ta", &assign_GovSteamFV2_ta);
	assign_map.emplace("GovSteamFV2.tb", &assign_GovSteamFV2_tb);
	assign_map.emplace("GovSteamFV2.tc", &assign_GovSteamFV2_tc);
	assign_map.emplace("GovSteamFV2.ti", &assign_GovSteamFV2_ti);
	assign_map.emplace("GovSteamFV2.tt", &assign_GovSteamFV2_tt);
	assign_map.emplace("GovSteamFV2.vmax", &assign_GovSteamFV2_vmax);
	assign_map.emplace("GovSteamFV2.vmin", &assign_GovSteamFV2_vmin);
}

void GovSteamFV2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovSteamFV2::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("GovSteamFV2.dt", &get_GovSteamFV2_dt);
	get_map.emplace("GovSteamFV2.k", &get_GovSteamFV2_k);
	get_map.emplace("GovSteamFV2.mwbase", &get_GovSteamFV2_mwbase);
	get_map.emplace("GovSteamFV2.r", &get_GovSteamFV2_r);
	get_map.emplace("GovSteamFV2.t1", &get_GovSteamFV2_t1);
	get_map.emplace("GovSteamFV2.t3", &get_GovSteamFV2_t3);
	get_map.emplace("GovSteamFV2.ta", &get_GovSteamFV2_ta);
	get_map.emplace("GovSteamFV2.tb", &get_GovSteamFV2_tb);
	get_map.emplace("GovSteamFV2.tc", &get_GovSteamFV2_tc);
	get_map.emplace("GovSteamFV2.ti", &get_GovSteamFV2_ti);
	get_map.emplace("GovSteamFV2.tt", &get_GovSteamFV2_tt);
	get_map.emplace("GovSteamFV2.vmax", &get_GovSteamFV2_vmax);
	get_map.emplace("GovSteamFV2.vmin", &get_GovSteamFV2_vmin);
}

void GovSteamFV2::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovSteamFV2::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

bool GovSteamFV2::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GovSteamFV2" &&
		dynamic_cast<GovSteamFV2*>(otherObject) != nullptr;
}

const BaseClassDefiner GovSteamFV2::declare()
{
	return BaseClassDefiner(GovSteamFV2::addConstructToMap, GovSteamFV2::addPrimitiveAssignFnsToMap, GovSteamFV2::addClassAssignFnsToMap, GovSteamFV2::debugName);
}

std::map<std::string, AttrDetails> GovSteamFV2::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TurbineGovernorDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GovSteamFV2_factory()
	{
		return new GovSteamFV2;
	}
}
