/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindTurbineType4bIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindContPType4bIEC.hpp"
#include "WindMechIEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindTurbineType4bIEC(),
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
		{ "WindTurbineType4bIEC.WindContPType4bIEC", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
		{ "WindTurbineType4bIEC.WindMechIEC", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindTurbineType4bIEC::WindTurbineType4bIEC() : WindContPType4bIEC(nullptr), WindMechIEC(nullptr) {}
WindTurbineType4bIEC::~WindTurbineType4bIEC() {}

const std::list<std::string>& WindTurbineType4bIEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindTurbineType4bIEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindTurbineType4bIEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindTurbineType4bIEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindTurbineType4bIEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindTurbineType4bIEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindTurbineType4bIEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindContPType4bIEC_WindTurbineType4bIEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType4bIEC_WindContPType4bIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType4bIEC* element = dynamic_cast<WindTurbineType4bIEC*>(BaseClass_ptr1);
	WindContPType4bIEC* element2 = dynamic_cast<WindContPType4bIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContPType4bIEC != element2)
		{
			element->WindContPType4bIEC = element2;
			return assign_WindContPType4bIEC_WindTurbineType4bIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindMechIEC_WindTurbineType4bIEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType4bIEC_WindMechIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType4bIEC* element = dynamic_cast<WindTurbineType4bIEC*>(BaseClass_ptr1);
	WindMechIEC* element2 = dynamic_cast<WindMechIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindMechIEC != element2)
		{
			element->WindMechIEC = element2;
			return assign_WindMechIEC_WindTurbineType4bIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_WindTurbineType4bIEC_WindContPType4bIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindTurbineType4bIEC* element = dynamic_cast<const WindTurbineType4bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindContPType4bIEC != 0)
		{
			BaseClass_list.push_back(element->WindContPType4bIEC);
			return true;
		}
	}
	return false;
}

bool get_WindTurbineType4bIEC_WindMechIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindTurbineType4bIEC* element = dynamic_cast<const WindTurbineType4bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindMechIEC != 0)
		{
			BaseClass_list.push_back(element->WindMechIEC);
			return true;
		}
	}
	return false;
}

const char WindTurbineType4bIEC::debugName[] = "WindTurbineType4bIEC";
const char* WindTurbineType4bIEC::debugString() const
{
	return WindTurbineType4bIEC::debugName;
}

void WindTurbineType4bIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindTurbineType4bIEC", &WindTurbineType4bIEC_factory);
}

void WindTurbineType4bIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindTurbineType4bIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindTurbineType4bIEC.WindContPType4bIEC", &assign_WindTurbineType4bIEC_WindContPType4bIEC);
	assign_map.emplace("WindTurbineType4bIEC.WindMechIEC", &assign_WindTurbineType4bIEC_WindMechIEC);
}

void WindTurbineType4bIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindGenType4IEC::addPrimitiveGetFnsToMap(get_map);
}

void WindTurbineType4bIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindGenType4IEC::addClassGetFnsToMap(get_map);
	get_map.emplace("WindTurbineType4bIEC.WindContPType4bIEC", &get_WindTurbineType4bIEC_WindContPType4bIEC);
	get_map.emplace("WindTurbineType4bIEC.WindMechIEC", &get_WindTurbineType4bIEC_WindMechIEC);
}

void WindTurbineType4bIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindGenType4IEC::addEnumGetFnsToMap(get_map);
}

bool WindTurbineType4bIEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindTurbineType4bIEC" &&
		dynamic_cast<WindTurbineType4bIEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindTurbineType4bIEC::declare()
{
	return BaseClassDefiner(WindTurbineType4bIEC::addConstructToMap, WindTurbineType4bIEC::addPrimitiveAssignFnsToMap, WindTurbineType4bIEC::addClassAssignFnsToMap, WindTurbineType4bIEC::debugName);
}

std::map<std::string, AttrDetails> WindTurbineType4bIEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = WindGenType4IEC::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindTurbineType4bIEC_factory()
	{
		return new WindTurbineType4bIEC;
	}
}
