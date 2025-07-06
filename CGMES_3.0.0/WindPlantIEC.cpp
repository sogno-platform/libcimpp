/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindPlantIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindPlantFreqPcontrolIEC.hpp"
#include "WindPlantReactiveControlIEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindPlantIEC(),
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
		{ "WindPlantIEC.WindPlantFreqPcontrolIEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindPlantIEC.WindPlantReactiveControlIEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindPlantIEC::WindPlantIEC() : WindPlantFreqPcontrolIEC(nullptr), WindPlantReactiveControlIEC(nullptr) {}
WindPlantIEC::~WindPlantIEC() {}

const std::list<std::string>& WindPlantIEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindPlantIEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindPlantIEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindPlantIEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindPlantIEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindPlantIEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindPlantIEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindPlantFreqPcontrolIEC_WindPlantIEC(BaseClass*, BaseClass*);
bool assign_WindPlantIEC_WindPlantFreqPcontrolIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindPlantIEC* element = dynamic_cast<WindPlantIEC*>(BaseClass_ptr1);
	WindPlantFreqPcontrolIEC* element2 = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindPlantFreqPcontrolIEC != element2)
		{
			element->WindPlantFreqPcontrolIEC = element2;
			return assign_WindPlantFreqPcontrolIEC_WindPlantIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_WindPlantIEC(BaseClass*, BaseClass*);
bool assign_WindPlantIEC_WindPlantReactiveControlIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindPlantIEC* element = dynamic_cast<WindPlantIEC*>(BaseClass_ptr1);
	WindPlantReactiveControlIEC* element2 = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindPlantReactiveControlIEC != element2)
		{
			element->WindPlantReactiveControlIEC = element2;
			return assign_WindPlantReactiveControlIEC_WindPlantIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_WindPlantIEC_WindPlantFreqPcontrolIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindPlantIEC* element = dynamic_cast<const WindPlantIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindPlantFreqPcontrolIEC != 0)
		{
			BaseClass_list.push_back(element->WindPlantFreqPcontrolIEC);
			return true;
		}
	}
	return false;
}

bool get_WindPlantIEC_WindPlantReactiveControlIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindPlantIEC* element = dynamic_cast<const WindPlantIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindPlantReactiveControlIEC != 0)
		{
			BaseClass_list.push_back(element->WindPlantReactiveControlIEC);
			return true;
		}
	}
	return false;
}

const char WindPlantIEC::debugName[] = "WindPlantIEC";
const char* WindPlantIEC::debugString() const
{
	return WindPlantIEC::debugName;
}

void WindPlantIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindPlantIEC", &WindPlantIEC_factory);
}

void WindPlantIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindPlantIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindPlantIEC.WindPlantFreqPcontrolIEC", &assign_WindPlantIEC_WindPlantFreqPcontrolIEC);
	assign_map.emplace("WindPlantIEC.WindPlantReactiveControlIEC", &assign_WindPlantIEC_WindPlantReactiveControlIEC);
}

void WindPlantIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindPlantDynamics::addPrimitiveGetFnsToMap(get_map);
}

void WindPlantIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindPlantDynamics::addClassGetFnsToMap(get_map);
	get_map.emplace("WindPlantIEC.WindPlantFreqPcontrolIEC", &get_WindPlantIEC_WindPlantFreqPcontrolIEC);
	get_map.emplace("WindPlantIEC.WindPlantReactiveControlIEC", &get_WindPlantIEC_WindPlantReactiveControlIEC);
}

void WindPlantIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindPlantDynamics::addEnumGetFnsToMap(get_map);
}

bool WindPlantIEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindPlantIEC" &&
		dynamic_cast<WindPlantIEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindPlantIEC::declare()
{
	return BaseClassDefiner(WindPlantIEC::addConstructToMap, WindPlantIEC::addPrimitiveAssignFnsToMap, WindPlantIEC::addClassAssignFnsToMap, WindPlantIEC::debugName);
}

std::map<std::string, AttrDetails> WindPlantIEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = WindPlantDynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindPlantIEC_factory()
	{
		return new WindPlantIEC;
	}
}
