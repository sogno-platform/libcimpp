/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindGenTurbineType2IEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindContRotorRIEC.hpp"
#include "WindPitchContPowerIEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindGenTurbineType2IEC(),
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
		{ "WindGenTurbineType2IEC.WindContRotorRIEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindGenTurbineType2IEC.WindPitchContPowerIEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindGenTurbineType2IEC::WindGenTurbineType2IEC() : WindContRotorRIEC(nullptr), WindPitchContPowerIEC(nullptr) {}
WindGenTurbineType2IEC::~WindGenTurbineType2IEC() {}

const std::list<std::string>& WindGenTurbineType2IEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindGenTurbineType2IEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindGenTurbineType2IEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindGenTurbineType2IEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindGenTurbineType2IEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindGenTurbineType2IEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindGenTurbineType2IEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindContRotorRIEC_WindGenTurbineType2IEC(BaseClass*, BaseClass*);
bool assign_WindGenTurbineType2IEC_WindContRotorRIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindGenTurbineType2IEC* element = dynamic_cast<WindGenTurbineType2IEC*>(BaseClass_ptr1);
	WindContRotorRIEC* element2 = dynamic_cast<WindContRotorRIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContRotorRIEC != element2)
		{
			element->WindContRotorRIEC = element2;
			return assign_WindContRotorRIEC_WindGenTurbineType2IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindPitchContPowerIEC_WindGenTurbineType2IEC(BaseClass*, BaseClass*);
bool assign_WindGenTurbineType2IEC_WindPitchContPowerIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindGenTurbineType2IEC* element = dynamic_cast<WindGenTurbineType2IEC*>(BaseClass_ptr1);
	WindPitchContPowerIEC* element2 = dynamic_cast<WindPitchContPowerIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindPitchContPowerIEC != element2)
		{
			element->WindPitchContPowerIEC = element2;
			return assign_WindPitchContPowerIEC_WindGenTurbineType2IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_WindGenTurbineType2IEC_WindContRotorRIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindGenTurbineType2IEC* element = dynamic_cast<const WindGenTurbineType2IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindContRotorRIEC != 0)
		{
			BaseClass_list.push_back(element->WindContRotorRIEC);
			return true;
		}
	}
	return false;
}

bool get_WindGenTurbineType2IEC_WindPitchContPowerIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindGenTurbineType2IEC* element = dynamic_cast<const WindGenTurbineType2IEC*>(BaseClass_ptr1);
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

const char WindGenTurbineType2IEC::debugName[] = "WindGenTurbineType2IEC";
const char* WindGenTurbineType2IEC::debugString() const
{
	return WindGenTurbineType2IEC::debugName;
}

void WindGenTurbineType2IEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindGenTurbineType2IEC", &WindGenTurbineType2IEC_factory);
}

void WindGenTurbineType2IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindGenTurbineType2IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindGenTurbineType2IEC.WindContRotorRIEC", &assign_WindGenTurbineType2IEC_WindContRotorRIEC);
	assign_map.emplace("WindGenTurbineType2IEC.WindPitchContPowerIEC", &assign_WindGenTurbineType2IEC_WindPitchContPowerIEC);
}

void WindGenTurbineType2IEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType1or2IEC::addPrimitiveGetFnsToMap(get_map);
}

void WindGenTurbineType2IEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindTurbineType1or2IEC::addClassGetFnsToMap(get_map);
	get_map.emplace("WindGenTurbineType2IEC.WindContRotorRIEC", &get_WindGenTurbineType2IEC_WindContRotorRIEC);
	get_map.emplace("WindGenTurbineType2IEC.WindPitchContPowerIEC", &get_WindGenTurbineType2IEC_WindPitchContPowerIEC);
}

void WindGenTurbineType2IEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType1or2IEC::addEnumGetFnsToMap(get_map);
}

bool WindGenTurbineType2IEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindGenTurbineType2IEC" &&
		dynamic_cast<WindGenTurbineType2IEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindGenTurbineType2IEC::declare()
{
	return BaseClassDefiner(WindGenTurbineType2IEC::addConstructToMap, WindGenTurbineType2IEC::addPrimitiveAssignFnsToMap, WindGenTurbineType2IEC::addClassAssignFnsToMap, WindGenTurbineType2IEC::debugName);
}

std::map<std::string, AttrDetails> WindGenTurbineType2IEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = WindTurbineType1or2IEC::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindGenTurbineType2IEC_factory()
	{
		return new WindGenTurbineType2IEC;
	}
}
