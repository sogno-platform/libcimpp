/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindGenTurbineType1aIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindAeroConstIEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindGenTurbineType1aIEC(),
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
		{ "WindGenTurbineType1aIEC.WindAeroConstIEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindGenTurbineType1aIEC::WindGenTurbineType1aIEC() : WindAeroConstIEC(nullptr) {}
WindGenTurbineType1aIEC::~WindGenTurbineType1aIEC() {}

const std::list<std::string>& WindGenTurbineType1aIEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindGenTurbineType1aIEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindGenTurbineType1aIEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindGenTurbineType1aIEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindGenTurbineType1aIEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindGenTurbineType1aIEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindGenTurbineType1aIEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindAeroConstIEC_WindGenTurbineType1aIEC(BaseClass*, BaseClass*);
bool assign_WindGenTurbineType1aIEC_WindAeroConstIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindGenTurbineType1aIEC* element = dynamic_cast<WindGenTurbineType1aIEC*>(BaseClass_ptr1);
	WindAeroConstIEC* element2 = dynamic_cast<WindAeroConstIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindAeroConstIEC != element2)
		{
			element->WindAeroConstIEC = element2;
			return assign_WindAeroConstIEC_WindGenTurbineType1aIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_WindGenTurbineType1aIEC_WindAeroConstIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindGenTurbineType1aIEC* element = dynamic_cast<const WindGenTurbineType1aIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindAeroConstIEC != 0)
		{
			BaseClass_list.push_back(element->WindAeroConstIEC);
			return true;
		}
	}
	return false;
}

const char WindGenTurbineType1aIEC::debugName[] = "WindGenTurbineType1aIEC";
const char* WindGenTurbineType1aIEC::debugString() const
{
	return WindGenTurbineType1aIEC::debugName;
}

void WindGenTurbineType1aIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindGenTurbineType1aIEC", &WindGenTurbineType1aIEC_factory);
}

void WindGenTurbineType1aIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindGenTurbineType1aIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindGenTurbineType1aIEC.WindAeroConstIEC", &assign_WindGenTurbineType1aIEC_WindAeroConstIEC);
}

void WindGenTurbineType1aIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType1or2IEC::addPrimitiveGetFnsToMap(get_map);
}

void WindGenTurbineType1aIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindTurbineType1or2IEC::addClassGetFnsToMap(get_map);
	get_map.emplace("WindGenTurbineType1aIEC.WindAeroConstIEC", &get_WindGenTurbineType1aIEC_WindAeroConstIEC);
}

void WindGenTurbineType1aIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType1or2IEC::addEnumGetFnsToMap(get_map);
}

bool WindGenTurbineType1aIEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindGenTurbineType1aIEC" &&
		dynamic_cast<WindGenTurbineType1aIEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindGenTurbineType1aIEC::declare()
{
	return BaseClassDefiner(WindGenTurbineType1aIEC::addConstructToMap, WindGenTurbineType1aIEC::addPrimitiveAssignFnsToMap, WindGenTurbineType1aIEC::addClassAssignFnsToMap, WindGenTurbineType1aIEC::debugName);
}

std::map<std::string, AttrDetails> WindGenTurbineType1aIEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = WindTurbineType1or2IEC::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindGenTurbineType1aIEC_factory()
	{
		return new WindGenTurbineType1aIEC;
	}
}
