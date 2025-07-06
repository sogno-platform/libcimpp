/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovSteam0.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GovSteam0(),
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
		{ "GovSteam0.dt", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam0.mwbase", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam0.r", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam0.t1", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam0.t2", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam0.t3", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam0.vmax", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "GovSteam0.vmin", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

GovSteam0::GovSteam0() {}
GovSteam0::~GovSteam0() {}

const std::list<std::string>& GovSteam0::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GovSteam0::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GovSteam0::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GovSteam0::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GovSteam0::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GovSteam0::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GovSteam0::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_GovSteam0_dt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam0* element = dynamic_cast<GovSteam0*>(BaseClass_ptr1);
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

bool assign_GovSteam0_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam0* element = dynamic_cast<GovSteam0*>(BaseClass_ptr1);
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

bool assign_GovSteam0_r(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam0* element = dynamic_cast<GovSteam0*>(BaseClass_ptr1);
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

bool assign_GovSteam0_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam0* element = dynamic_cast<GovSteam0*>(BaseClass_ptr1);
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

bool assign_GovSteam0_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam0* element = dynamic_cast<GovSteam0*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteam0_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam0* element = dynamic_cast<GovSteam0*>(BaseClass_ptr1);
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

bool assign_GovSteam0_vmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam0* element = dynamic_cast<GovSteam0*>(BaseClass_ptr1);
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

bool assign_GovSteam0_vmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam0* element = dynamic_cast<GovSteam0*>(BaseClass_ptr1);
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

bool get_GovSteam0_dt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam0* element = dynamic_cast<const GovSteam0*>(BaseClass_ptr1);
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

bool get_GovSteam0_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam0* element = dynamic_cast<const GovSteam0*>(BaseClass_ptr1);
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

bool get_GovSteam0_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam0* element = dynamic_cast<const GovSteam0*>(BaseClass_ptr1);
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

bool get_GovSteam0_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam0* element = dynamic_cast<const GovSteam0*>(BaseClass_ptr1);
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

bool get_GovSteam0_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam0* element = dynamic_cast<const GovSteam0*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteam0_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam0* element = dynamic_cast<const GovSteam0*>(BaseClass_ptr1);
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

bool get_GovSteam0_vmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam0* element = dynamic_cast<const GovSteam0*>(BaseClass_ptr1);
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

bool get_GovSteam0_vmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam0* element = dynamic_cast<const GovSteam0*>(BaseClass_ptr1);
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

const char GovSteam0::debugName[] = "GovSteam0";
const char* GovSteam0::debugString() const
{
	return GovSteam0::debugName;
}

void GovSteam0::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("GovSteam0", &GovSteam0_factory);
}

void GovSteam0::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("GovSteam0.dt", &assign_GovSteam0_dt);
	assign_map.emplace("GovSteam0.mwbase", &assign_GovSteam0_mwbase);
	assign_map.emplace("GovSteam0.r", &assign_GovSteam0_r);
	assign_map.emplace("GovSteam0.t1", &assign_GovSteam0_t1);
	assign_map.emplace("GovSteam0.t2", &assign_GovSteam0_t2);
	assign_map.emplace("GovSteam0.t3", &assign_GovSteam0_t3);
	assign_map.emplace("GovSteam0.vmax", &assign_GovSteam0_vmax);
	assign_map.emplace("GovSteam0.vmin", &assign_GovSteam0_vmin);
}

void GovSteam0::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovSteam0::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("GovSteam0.dt", &get_GovSteam0_dt);
	get_map.emplace("GovSteam0.mwbase", &get_GovSteam0_mwbase);
	get_map.emplace("GovSteam0.r", &get_GovSteam0_r);
	get_map.emplace("GovSteam0.t1", &get_GovSteam0_t1);
	get_map.emplace("GovSteam0.t2", &get_GovSteam0_t2);
	get_map.emplace("GovSteam0.t3", &get_GovSteam0_t3);
	get_map.emplace("GovSteam0.vmax", &get_GovSteam0_vmax);
	get_map.emplace("GovSteam0.vmin", &get_GovSteam0_vmin);
}

void GovSteam0::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovSteam0::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

bool GovSteam0::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GovSteam0" &&
		dynamic_cast<GovSteam0*>(otherObject) != nullptr;
}

const BaseClassDefiner GovSteam0::declare()
{
	return BaseClassDefiner(GovSteam0::addConstructToMap, GovSteam0::addPrimitiveAssignFnsToMap, GovSteam0::addClassAssignFnsToMap, GovSteam0::debugName);
}

std::map<std::string, AttrDetails> GovSteam0::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TurbineGovernorDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GovSteam0_factory()
	{
		return new GovSteam0;
	}
}
