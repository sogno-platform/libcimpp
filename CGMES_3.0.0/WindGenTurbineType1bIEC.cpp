/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindGenTurbineType1bIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindPitchContPowerIEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindGenTurbineType1bIEC(),
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
		{ "WindGenTurbineType1bIEC.WindPitchContPowerIEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindGenTurbineType1bIEC::WindGenTurbineType1bIEC() : WindPitchContPowerIEC(nullptr) {}
WindGenTurbineType1bIEC::~WindGenTurbineType1bIEC() {}

const std::list<std::string>& WindGenTurbineType1bIEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindGenTurbineType1bIEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindGenTurbineType1bIEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindGenTurbineType1bIEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindGenTurbineType1bIEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindGenTurbineType1bIEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindGenTurbineType1bIEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindPitchContPowerIEC_WindGenTurbineType1bIEC(BaseClass*, BaseClass*);
bool assign_WindGenTurbineType1bIEC_WindPitchContPowerIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindGenTurbineType1bIEC* element = dynamic_cast<WindGenTurbineType1bIEC*>(BaseClass_ptr1);
	WindPitchContPowerIEC* element2 = dynamic_cast<WindPitchContPowerIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindPitchContPowerIEC != element2)
		{
			element->WindPitchContPowerIEC = element2;
			return assign_WindPitchContPowerIEC_WindGenTurbineType1bIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_WindGenTurbineType1bIEC_WindPitchContPowerIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindGenTurbineType1bIEC* element = dynamic_cast<const WindGenTurbineType1bIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindPitchContPowerIEC != 0)
		{
			BaseClass_list.push_back(element->WindPitchContPowerIEC);
			return true;
		}
	}
	return false;
}

const char WindGenTurbineType1bIEC::debugName[] = "WindGenTurbineType1bIEC";
const char* WindGenTurbineType1bIEC::debugString() const
{
	return WindGenTurbineType1bIEC::debugName;
}

void WindGenTurbineType1bIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindGenTurbineType1bIEC", &WindGenTurbineType1bIEC_factory);
}

void WindGenTurbineType1bIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindGenTurbineType1bIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindGenTurbineType1bIEC.WindPitchContPowerIEC", &assign_WindGenTurbineType1bIEC_WindPitchContPowerIEC);
}

void WindGenTurbineType1bIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType1or2IEC::addPrimitiveGetFnsToMap(get_map);
}

void WindGenTurbineType1bIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindTurbineType1or2IEC::addClassGetFnsToMap(get_map);
	get_map.emplace("WindGenTurbineType1bIEC.WindPitchContPowerIEC", &get_WindGenTurbineType1bIEC_WindPitchContPowerIEC);
}

void WindGenTurbineType1bIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType1or2IEC::addEnumGetFnsToMap(get_map);
}

bool WindGenTurbineType1bIEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindGenTurbineType1bIEC" &&
		dynamic_cast<WindGenTurbineType1bIEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindGenTurbineType1bIEC::declare()
{
	return BaseClassDefiner(WindGenTurbineType1bIEC::addConstructToMap, WindGenTurbineType1bIEC::addPrimitiveAssignFnsToMap, WindGenTurbineType1bIEC::addClassAssignFnsToMap, WindGenTurbineType1bIEC::debugName);
}

std::map<std::string, AttrDetails> WindGenTurbineType1bIEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = WindTurbineType1or2IEC::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindGenTurbineType1bIEC_factory()
	{
		return new WindGenTurbineType1bIEC;
	}
}
