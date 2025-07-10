/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindGenTurbineType1IEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindAeroConstIEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindGenTurbineType1IEC(),
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
		{ "WindGenTurbineType1IEC.WindAeroConstIEC", { "http://iec.ch/TC57/2013/CIM-schema-cim16#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindGenTurbineType1IEC::WindGenTurbineType1IEC() : WindAeroConstIEC(nullptr) {}
WindGenTurbineType1IEC::~WindGenTurbineType1IEC() {}

const std::list<std::string>& WindGenTurbineType1IEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindGenTurbineType1IEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindGenTurbineType1IEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindGenTurbineType1IEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindGenTurbineType1IEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindGenTurbineType1IEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindGenTurbineType1IEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindAeroConstIEC_WindGenTurbineType1IEC(BaseClass*, BaseClass*);
bool assign_WindGenTurbineType1IEC_WindAeroConstIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindGenTurbineType1IEC* element = dynamic_cast<WindGenTurbineType1IEC*>(BaseClass_ptr1);
	WindAeroConstIEC* element2 = dynamic_cast<WindAeroConstIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindAeroConstIEC != element2)
		{
			element->WindAeroConstIEC = element2;
			return assign_WindAeroConstIEC_WindGenTurbineType1IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_WindGenTurbineType1IEC_WindAeroConstIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindGenTurbineType1IEC* element = dynamic_cast<const WindGenTurbineType1IEC*>(BaseClass_ptr1);
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

const char WindGenTurbineType1IEC::debugName[] = "WindGenTurbineType1IEC";
const char* WindGenTurbineType1IEC::debugString() const
{
	return WindGenTurbineType1IEC::debugName;
}

void WindGenTurbineType1IEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindGenTurbineType1IEC", &WindGenTurbineType1IEC_factory);
}

void WindGenTurbineType1IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindGenTurbineType1IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindGenTurbineType1IEC.WindAeroConstIEC", &assign_WindGenTurbineType1IEC_WindAeroConstIEC);
}

void WindGenTurbineType1IEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType1or2IEC::addPrimitiveGetFnsToMap(get_map);
}

void WindGenTurbineType1IEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindTurbineType1or2IEC::addClassGetFnsToMap(get_map);
	get_map.emplace("WindGenTurbineType1IEC.WindAeroConstIEC", &get_WindGenTurbineType1IEC_WindAeroConstIEC);
}

void WindGenTurbineType1IEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType1or2IEC::addEnumGetFnsToMap(get_map);
}

bool WindGenTurbineType1IEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindGenTurbineType1IEC" &&
		dynamic_cast<WindGenTurbineType1IEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindGenTurbineType1IEC::declare()
{
	return BaseClassDefiner(WindGenTurbineType1IEC::addConstructToMap, WindGenTurbineType1IEC::addPrimitiveAssignFnsToMap, WindGenTurbineType1IEC::addClassAssignFnsToMap, WindGenTurbineType1IEC::debugName);
}

std::map<std::string, AttrDetails> WindGenTurbineType1IEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = WindTurbineType1or2IEC::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindGenTurbineType1IEC_factory()
	{
		return new WindGenTurbineType1IEC;
	}
}
