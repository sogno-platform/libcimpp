/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindTurbineType4aIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindContPType4aIEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindTurbineType4aIEC(),
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
		{ "WindTurbineType4aIEC.WindContPType4aIEC", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindTurbineType4aIEC::WindTurbineType4aIEC() : WindContPType4aIEC(nullptr) {}
WindTurbineType4aIEC::~WindTurbineType4aIEC() {}

const std::list<std::string>& WindTurbineType4aIEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindTurbineType4aIEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindTurbineType4aIEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindTurbineType4aIEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindTurbineType4aIEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindTurbineType4aIEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindTurbineType4aIEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindContPType4aIEC_WindTurbineType4aIEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType4aIEC_WindContPType4aIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType4aIEC* element = dynamic_cast<WindTurbineType4aIEC*>(BaseClass_ptr1);
	WindContPType4aIEC* element2 = dynamic_cast<WindContPType4aIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContPType4aIEC != element2)
		{
			element->WindContPType4aIEC = element2;
			return assign_WindContPType4aIEC_WindTurbineType4aIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_WindTurbineType4aIEC_WindContPType4aIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindTurbineType4aIEC* element = dynamic_cast<const WindTurbineType4aIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindContPType4aIEC != 0)
		{
			BaseClass_list.push_back(element->WindContPType4aIEC);
			return true;
		}
	}
	return false;
}

const char WindTurbineType4aIEC::debugName[] = "WindTurbineType4aIEC";
const char* WindTurbineType4aIEC::debugString() const
{
	return WindTurbineType4aIEC::debugName;
}

void WindTurbineType4aIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindTurbineType4aIEC", &WindTurbineType4aIEC_factory);
}

void WindTurbineType4aIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindTurbineType4aIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindTurbineType4aIEC.WindContPType4aIEC", &assign_WindTurbineType4aIEC_WindContPType4aIEC);
}

void WindTurbineType4aIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindGenType4IEC::addPrimitiveGetFnsToMap(get_map);
}

void WindTurbineType4aIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindGenType4IEC::addClassGetFnsToMap(get_map);
	get_map.emplace("WindTurbineType4aIEC.WindContPType4aIEC", &get_WindTurbineType4aIEC_WindContPType4aIEC);
}

void WindTurbineType4aIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindGenType4IEC::addEnumGetFnsToMap(get_map);
}

bool WindTurbineType4aIEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindTurbineType4aIEC" &&
		dynamic_cast<WindTurbineType4aIEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindTurbineType4aIEC::declare()
{
	return BaseClassDefiner(WindTurbineType4aIEC::addConstructToMap, WindTurbineType4aIEC::addPrimitiveAssignFnsToMap, WindTurbineType4aIEC::addClassAssignFnsToMap, WindTurbineType4aIEC::debugName);
}

std::map<std::string, AttrDetails> WindTurbineType4aIEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = WindGenType4IEC::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindTurbineType4aIEC_factory()
	{
		return new WindTurbineType4aIEC;
	}
}
