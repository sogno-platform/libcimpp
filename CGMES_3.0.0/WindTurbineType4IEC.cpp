/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindTurbineType4IEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindGenType3aIEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindTurbineType4IEC(),
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
		{ "WindTurbineType4IEC.WindGenType3aIEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindTurbineType4IEC::WindTurbineType4IEC() : WindGenType3aIEC(nullptr) {}
WindTurbineType4IEC::~WindTurbineType4IEC() {}

const std::list<std::string>& WindTurbineType4IEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindTurbineType4IEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindTurbineType4IEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindTurbineType4IEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindTurbineType4IEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindTurbineType4IEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindTurbineType4IEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindGenType3aIEC_WindTurbineType4IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType4IEC_WindGenType3aIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType4IEC* element = dynamic_cast<WindTurbineType4IEC*>(BaseClass_ptr1);
	WindGenType3aIEC* element2 = dynamic_cast<WindGenType3aIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindGenType3aIEC != element2)
		{
			element->WindGenType3aIEC = element2;
			return assign_WindGenType3aIEC_WindTurbineType4IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_WindTurbineType4IEC_WindGenType3aIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindTurbineType4IEC* element = dynamic_cast<const WindTurbineType4IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindGenType3aIEC != 0)
		{
			BaseClass_list.push_back(element->WindGenType3aIEC);
			return true;
		}
	}
	return false;
}

const char WindTurbineType4IEC::debugName[] = "WindTurbineType4IEC";
const char* WindTurbineType4IEC::debugString() const
{
	return WindTurbineType4IEC::debugName;
}

void WindTurbineType4IEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindTurbineType4IEC", &WindTurbineType4IEC_factory);
}

void WindTurbineType4IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindTurbineType4IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindTurbineType4IEC.WindGenType3aIEC", &assign_WindTurbineType4IEC_WindGenType3aIEC);
}

void WindTurbineType4IEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType3or4IEC::addPrimitiveGetFnsToMap(get_map);
}

void WindTurbineType4IEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindTurbineType3or4IEC::addClassGetFnsToMap(get_map);
	get_map.emplace("WindTurbineType4IEC.WindGenType3aIEC", &get_WindTurbineType4IEC_WindGenType3aIEC);
}

void WindTurbineType4IEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType3or4IEC::addEnumGetFnsToMap(get_map);
}

bool WindTurbineType4IEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindTurbineType4IEC" &&
		dynamic_cast<WindTurbineType4IEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindTurbineType4IEC::declare()
{
	return BaseClassDefiner(WindTurbineType4IEC::addConstructToMap, WindTurbineType4IEC::addPrimitiveAssignFnsToMap, WindTurbineType4IEC::addClassAssignFnsToMap, WindTurbineType4IEC::debugName);
}

std::map<std::string, AttrDetails> WindTurbineType4IEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = WindTurbineType3or4IEC::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindTurbineType4IEC_factory()
	{
		return new WindTurbineType4IEC;
	}
}
