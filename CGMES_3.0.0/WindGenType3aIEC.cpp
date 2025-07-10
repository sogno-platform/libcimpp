/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindGenType3aIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindTurbineType4IEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindGenType3aIEC(),
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
		{ "WindGenType3aIEC.WindTurbineType4IEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindGenType3aIEC.kpc", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindGenType3aIEC.tic", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindGenType3aIEC::WindGenType3aIEC() : WindTurbineType4IEC(nullptr) {}
WindGenType3aIEC::~WindGenType3aIEC() {}

const std::list<std::string>& WindGenType3aIEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindGenType3aIEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindGenType3aIEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindGenType3aIEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindGenType3aIEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindGenType3aIEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindGenType3aIEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindTurbineType4IEC_WindGenType3aIEC(BaseClass*, BaseClass*);
bool assign_WindGenType3aIEC_WindTurbineType4IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindGenType3aIEC* element = dynamic_cast<WindGenType3aIEC*>(BaseClass_ptr1);
	WindTurbineType4IEC* element2 = dynamic_cast<WindTurbineType4IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType4IEC != element2)
		{
			element->WindTurbineType4IEC = element2;
			return assign_WindTurbineType4IEC_WindGenType3aIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindGenType3aIEC_kpc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindGenType3aIEC* element = dynamic_cast<WindGenType3aIEC*>(BaseClass_ptr1);
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

bool assign_WindGenType3aIEC_tic(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindGenType3aIEC* element = dynamic_cast<WindGenType3aIEC*>(BaseClass_ptr1);
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


bool get_WindGenType3aIEC_kpc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindGenType3aIEC* element = dynamic_cast<const WindGenType3aIEC*>(BaseClass_ptr1);
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

bool get_WindGenType3aIEC_tic(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindGenType3aIEC* element = dynamic_cast<const WindGenType3aIEC*>(BaseClass_ptr1);
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

const char WindGenType3aIEC::debugName[] = "WindGenType3aIEC";
const char* WindGenType3aIEC::debugString() const
{
	return WindGenType3aIEC::debugName;
}

void WindGenType3aIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindGenType3aIEC", &WindGenType3aIEC_factory);
}

void WindGenType3aIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("WindGenType3aIEC.kpc", &assign_WindGenType3aIEC_kpc);
	assign_map.emplace("WindGenType3aIEC.tic", &assign_WindGenType3aIEC_tic);
}

void WindGenType3aIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindGenType3aIEC.WindTurbineType4IEC", &assign_WindGenType3aIEC_WindTurbineType4IEC);
}

void WindGenType3aIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindGenType3IEC::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("WindGenType3aIEC.kpc", &get_WindGenType3aIEC_kpc);
	get_map.emplace("WindGenType3aIEC.tic", &get_WindGenType3aIEC_tic);
}

void WindGenType3aIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindGenType3IEC::addClassGetFnsToMap(get_map);
}

void WindGenType3aIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindGenType3IEC::addEnumGetFnsToMap(get_map);
}

bool WindGenType3aIEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindGenType3aIEC" &&
		dynamic_cast<WindGenType3aIEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindGenType3aIEC::declare()
{
	return BaseClassDefiner(WindGenType3aIEC::addConstructToMap, WindGenType3aIEC::addPrimitiveAssignFnsToMap, WindGenType3aIEC::addClassAssignFnsToMap, WindGenType3aIEC::debugName);
}

std::map<std::string, AttrDetails> WindGenType3aIEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = WindGenType3IEC::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindGenType3aIEC_factory()
	{
		return new WindGenType3aIEC;
	}
}
