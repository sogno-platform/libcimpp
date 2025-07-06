/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindGenTurbineType3aIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindGenTurbineType3aIEC(),
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
		{ "WindGenTurbineType3aIEC.kpc", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindGenTurbineType3aIEC.tic", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindGenTurbineType3aIEC.xs", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindGenTurbineType3aIEC::WindGenTurbineType3aIEC() {}
WindGenTurbineType3aIEC::~WindGenTurbineType3aIEC() {}

const std::list<std::string>& WindGenTurbineType3aIEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindGenTurbineType3aIEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindGenTurbineType3aIEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindGenTurbineType3aIEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindGenTurbineType3aIEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindGenTurbineType3aIEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindGenTurbineType3aIEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindGenTurbineType3aIEC_kpc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindGenTurbineType3aIEC* element = dynamic_cast<WindGenTurbineType3aIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindGenTurbineType3aIEC_tic(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindGenTurbineType3aIEC* element = dynamic_cast<WindGenTurbineType3aIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tic;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindGenTurbineType3aIEC_xs(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindGenTurbineType3aIEC* element = dynamic_cast<WindGenTurbineType3aIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xs;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_WindGenTurbineType3aIEC_kpc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindGenTurbineType3aIEC* element = dynamic_cast<const WindGenTurbineType3aIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindGenTurbineType3aIEC_tic(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindGenTurbineType3aIEC* element = dynamic_cast<const WindGenTurbineType3aIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tic;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindGenTurbineType3aIEC_xs(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindGenTurbineType3aIEC* element = dynamic_cast<const WindGenTurbineType3aIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xs;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char WindGenTurbineType3aIEC::debugName[] = "WindGenTurbineType3aIEC";
const char* WindGenTurbineType3aIEC::debugString() const
{
	return WindGenTurbineType3aIEC::debugName;
}

void WindGenTurbineType3aIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindGenTurbineType3aIEC", &WindGenTurbineType3aIEC_factory);
}

void WindGenTurbineType3aIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("WindGenTurbineType3aIEC.kpc", &assign_WindGenTurbineType3aIEC_kpc);
	assign_map.emplace("WindGenTurbineType3aIEC.tic", &assign_WindGenTurbineType3aIEC_tic);
	assign_map.emplace("WindGenTurbineType3aIEC.xs", &assign_WindGenTurbineType3aIEC_xs);
}

void WindGenTurbineType3aIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void WindGenTurbineType3aIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindGenTurbineType3IEC::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("WindGenTurbineType3aIEC.kpc", &get_WindGenTurbineType3aIEC_kpc);
	get_map.emplace("WindGenTurbineType3aIEC.tic", &get_WindGenTurbineType3aIEC_tic);
	get_map.emplace("WindGenTurbineType3aIEC.xs", &get_WindGenTurbineType3aIEC_xs);
}

void WindGenTurbineType3aIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindGenTurbineType3IEC::addClassGetFnsToMap(get_map);
}

void WindGenTurbineType3aIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindGenTurbineType3IEC::addEnumGetFnsToMap(get_map);
}

bool WindGenTurbineType3aIEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindGenTurbineType3aIEC" &&
		dynamic_cast<WindGenTurbineType3aIEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindGenTurbineType3aIEC::declare()
{
	return BaseClassDefiner(WindGenTurbineType3aIEC::addConstructToMap, WindGenTurbineType3aIEC::addPrimitiveAssignFnsToMap, WindGenTurbineType3aIEC::addClassAssignFnsToMap, WindGenTurbineType3aIEC::debugName);
}

std::map<std::string, AttrDetails> WindGenTurbineType3aIEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = WindGenTurbineType3IEC::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindGenTurbineType3aIEC_factory()
	{
		return new WindGenTurbineType3aIEC;
	}
}
