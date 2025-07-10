/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovSteam2.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		GovSteam2(),
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
		{ "GovSteam2.dbf", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteam2.k", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteam2.mnef", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteam2.mxef", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteam2.pmax", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteam2.pmin", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteam2.t1", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "GovSteam2.t2", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

GovSteam2::GovSteam2() {}
GovSteam2::~GovSteam2() {}

const std::list<std::string>& GovSteam2::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& GovSteam2::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& GovSteam2::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& GovSteam2::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& GovSteam2::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& GovSteam2::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& GovSteam2::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_GovSteam2_dbf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam2* element = dynamic_cast<GovSteam2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dbf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteam2_k(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam2* element = dynamic_cast<GovSteam2*>(BaseClass_ptr1);
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

bool assign_GovSteam2_mnef(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam2* element = dynamic_cast<GovSteam2*>(BaseClass_ptr1);
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

bool assign_GovSteam2_mxef(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam2* element = dynamic_cast<GovSteam2*>(BaseClass_ptr1);
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

bool assign_GovSteam2_pmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam2* element = dynamic_cast<GovSteam2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteam2_pmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam2* element = dynamic_cast<GovSteam2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteam2_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam2* element = dynamic_cast<GovSteam2*>(BaseClass_ptr1);
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

bool assign_GovSteam2_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteam2* element = dynamic_cast<GovSteam2*>(BaseClass_ptr1);
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

bool get_GovSteam2_dbf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam2* element = dynamic_cast<const GovSteam2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dbf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteam2_k(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam2* element = dynamic_cast<const GovSteam2*>(BaseClass_ptr1);
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

bool get_GovSteam2_mnef(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam2* element = dynamic_cast<const GovSteam2*>(BaseClass_ptr1);
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

bool get_GovSteam2_mxef(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam2* element = dynamic_cast<const GovSteam2*>(BaseClass_ptr1);
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

bool get_GovSteam2_pmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam2* element = dynamic_cast<const GovSteam2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteam2_pmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam2* element = dynamic_cast<const GovSteam2*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteam2_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam2* element = dynamic_cast<const GovSteam2*>(BaseClass_ptr1);
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

bool get_GovSteam2_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteam2* element = dynamic_cast<const GovSteam2*>(BaseClass_ptr1);
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

const char GovSteam2::debugName[] = "GovSteam2";
const char* GovSteam2::debugString() const
{
	return GovSteam2::debugName;
}

void GovSteam2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("GovSteam2", &GovSteam2_factory);
}

void GovSteam2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("GovSteam2.dbf", &assign_GovSteam2_dbf);
	assign_map.emplace("GovSteam2.k", &assign_GovSteam2_k);
	assign_map.emplace("GovSteam2.mnef", &assign_GovSteam2_mnef);
	assign_map.emplace("GovSteam2.mxef", &assign_GovSteam2_mxef);
	assign_map.emplace("GovSteam2.pmax", &assign_GovSteam2_pmax);
	assign_map.emplace("GovSteam2.pmin", &assign_GovSteam2_pmin);
	assign_map.emplace("GovSteam2.t1", &assign_GovSteam2_t1);
	assign_map.emplace("GovSteam2.t2", &assign_GovSteam2_t2);
}

void GovSteam2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovSteam2::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("GovSteam2.dbf", &get_GovSteam2_dbf);
	get_map.emplace("GovSteam2.k", &get_GovSteam2_k);
	get_map.emplace("GovSteam2.mnef", &get_GovSteam2_mnef);
	get_map.emplace("GovSteam2.mxef", &get_GovSteam2_mxef);
	get_map.emplace("GovSteam2.pmax", &get_GovSteam2_pmax);
	get_map.emplace("GovSteam2.pmin", &get_GovSteam2_pmin);
	get_map.emplace("GovSteam2.t1", &get_GovSteam2_t1);
	get_map.emplace("GovSteam2.t2", &get_GovSteam2_t2);
}

void GovSteam2::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovSteam2::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

bool GovSteam2::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "GovSteam2" &&
		dynamic_cast<GovSteam2*>(otherObject) != nullptr;
}

const BaseClassDefiner GovSteam2::declare()
{
	return BaseClassDefiner(GovSteam2::addConstructToMap, GovSteam2::addPrimitiveAssignFnsToMap, GovSteam2::addClassAssignFnsToMap, GovSteam2::debugName);
}

std::map<std::string, AttrDetails> GovSteam2::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = TurbineGovernorDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* GovSteam2_factory()
	{
		return new GovSteam2;
	}
}
