/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindTurbineType3or4IEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindContCurrLimIEC.hpp"
#include "WindContQIEC.hpp"
#include "WindContQLimIEC.hpp"
#include "WindContQPQULimIEC.hpp"
#include "WindProtectionIEC.hpp"
#include "WindRefFrameRotIEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindTurbineType3or4IEC(),
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
		{ "WindTurbineType3or4IEC.WIndContQIEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindTurbineType3or4IEC.WindContCurrLimIEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindTurbineType3or4IEC.WindContQLimIEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindTurbineType3or4IEC.WindContQPQULimIEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindTurbineType3or4IEC.WindProtectionIEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindTurbineType3or4IEC.WindRefFrameRotIEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindTurbineType3or4IEC::WindTurbineType3or4IEC() : WIndContQIEC(nullptr), WindContCurrLimIEC(nullptr), WindContQLimIEC(nullptr), WindContQPQULimIEC(nullptr), WindProtectionIEC(nullptr), WindRefFrameRotIEC(nullptr) {}
WindTurbineType3or4IEC::~WindTurbineType3or4IEC() {}

const std::list<std::string>& WindTurbineType3or4IEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindTurbineType3or4IEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindTurbineType3or4IEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindTurbineType3or4IEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindTurbineType3or4IEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindTurbineType3or4IEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindTurbineType3or4IEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindContQIEC_WindTurbineType3or4IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType3or4IEC_WIndContQIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3or4IEC* element = dynamic_cast<WindTurbineType3or4IEC*>(BaseClass_ptr1);
	WindContQIEC* element2 = dynamic_cast<WindContQIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WIndContQIEC != element2)
		{
			element->WIndContQIEC = element2;
			return assign_WindContQIEC_WindTurbineType3or4IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindContCurrLimIEC_WindTurbineType3or4IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType3or4IEC_WindContCurrLimIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3or4IEC* element = dynamic_cast<WindTurbineType3or4IEC*>(BaseClass_ptr1);
	WindContCurrLimIEC* element2 = dynamic_cast<WindContCurrLimIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContCurrLimIEC != element2)
		{
			element->WindContCurrLimIEC = element2;
			return assign_WindContCurrLimIEC_WindTurbineType3or4IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindContQLimIEC_WindTurbineType3or4IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType3or4IEC_WindContQLimIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3or4IEC* element = dynamic_cast<WindTurbineType3or4IEC*>(BaseClass_ptr1);
	WindContQLimIEC* element2 = dynamic_cast<WindContQLimIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContQLimIEC != element2)
		{
			element->WindContQLimIEC = element2;
			return assign_WindContQLimIEC_WindTurbineType3or4IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindContQPQULimIEC_WindTurbineType3or4IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType3or4IEC_WindContQPQULimIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3or4IEC* element = dynamic_cast<WindTurbineType3or4IEC*>(BaseClass_ptr1);
	WindContQPQULimIEC* element2 = dynamic_cast<WindContQPQULimIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContQPQULimIEC != element2)
		{
			element->WindContQPQULimIEC = element2;
			return assign_WindContQPQULimIEC_WindTurbineType3or4IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindProtectionIEC_WindTurbineType3or4IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType3or4IEC_WindProtectionIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3or4IEC* element = dynamic_cast<WindTurbineType3or4IEC*>(BaseClass_ptr1);
	WindProtectionIEC* element2 = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindProtectionIEC != element2)
		{
			element->WindProtectionIEC = element2;
			return assign_WindProtectionIEC_WindTurbineType3or4IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindRefFrameRotIEC_WindTurbineType3or4IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType3or4IEC_WindRefFrameRotIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3or4IEC* element = dynamic_cast<WindTurbineType3or4IEC*>(BaseClass_ptr1);
	WindRefFrameRotIEC* element2 = dynamic_cast<WindRefFrameRotIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindRefFrameRotIEC != element2)
		{
			element->WindRefFrameRotIEC = element2;
			return assign_WindRefFrameRotIEC_WindTurbineType3or4IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_WindTurbineType3or4IEC_WIndContQIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindTurbineType3or4IEC* element = dynamic_cast<const WindTurbineType3or4IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WIndContQIEC != 0)
		{
			BaseClass_list.push_back(element->WIndContQIEC);
			return true;
		}
	}
	return false;
}

bool get_WindTurbineType3or4IEC_WindContCurrLimIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindTurbineType3or4IEC* element = dynamic_cast<const WindTurbineType3or4IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindContCurrLimIEC != 0)
		{
			BaseClass_list.push_back(element->WindContCurrLimIEC);
			return true;
		}
	}
	return false;
}

bool get_WindTurbineType3or4IEC_WindContQLimIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindTurbineType3or4IEC* element = dynamic_cast<const WindTurbineType3or4IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindContQLimIEC != 0)
		{
			BaseClass_list.push_back(element->WindContQLimIEC);
			return true;
		}
	}
	return false;
}

bool get_WindTurbineType3or4IEC_WindContQPQULimIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindTurbineType3or4IEC* element = dynamic_cast<const WindTurbineType3or4IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindContQPQULimIEC != 0)
		{
			BaseClass_list.push_back(element->WindContQPQULimIEC);
			return true;
		}
	}
	return false;
}

bool get_WindTurbineType3or4IEC_WindProtectionIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindTurbineType3or4IEC* element = dynamic_cast<const WindTurbineType3or4IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindProtectionIEC != 0)
		{
			BaseClass_list.push_back(element->WindProtectionIEC);
			return true;
		}
	}
	return false;
}

bool get_WindTurbineType3or4IEC_WindRefFrameRotIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindTurbineType3or4IEC* element = dynamic_cast<const WindTurbineType3or4IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindRefFrameRotIEC != 0)
		{
			BaseClass_list.push_back(element->WindRefFrameRotIEC);
			return true;
		}
	}
	return false;
}

const char WindTurbineType3or4IEC::debugName[] = "WindTurbineType3or4IEC";
const char* WindTurbineType3or4IEC::debugString() const
{
	return WindTurbineType3or4IEC::debugName;
}

void WindTurbineType3or4IEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindTurbineType3or4IEC", &WindTurbineType3or4IEC_factory);
}

void WindTurbineType3or4IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindTurbineType3or4IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindTurbineType3or4IEC.WIndContQIEC", &assign_WindTurbineType3or4IEC_WIndContQIEC);
	assign_map.emplace("WindTurbineType3or4IEC.WindContCurrLimIEC", &assign_WindTurbineType3or4IEC_WindContCurrLimIEC);
	assign_map.emplace("WindTurbineType3or4IEC.WindContQLimIEC", &assign_WindTurbineType3or4IEC_WindContQLimIEC);
	assign_map.emplace("WindTurbineType3or4IEC.WindContQPQULimIEC", &assign_WindTurbineType3or4IEC_WindContQPQULimIEC);
	assign_map.emplace("WindTurbineType3or4IEC.WindProtectionIEC", &assign_WindTurbineType3or4IEC_WindProtectionIEC);
	assign_map.emplace("WindTurbineType3or4IEC.WindRefFrameRotIEC", &assign_WindTurbineType3or4IEC_WindRefFrameRotIEC);
}

void WindTurbineType3or4IEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType3or4Dynamics::addPrimitiveGetFnsToMap(get_map);
}

void WindTurbineType3or4IEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindTurbineType3or4Dynamics::addClassGetFnsToMap(get_map);
	get_map.emplace("WindTurbineType3or4IEC.WIndContQIEC", &get_WindTurbineType3or4IEC_WIndContQIEC);
	get_map.emplace("WindTurbineType3or4IEC.WindContCurrLimIEC", &get_WindTurbineType3or4IEC_WindContCurrLimIEC);
	get_map.emplace("WindTurbineType3or4IEC.WindContQLimIEC", &get_WindTurbineType3or4IEC_WindContQLimIEC);
	get_map.emplace("WindTurbineType3or4IEC.WindContQPQULimIEC", &get_WindTurbineType3or4IEC_WindContQPQULimIEC);
	get_map.emplace("WindTurbineType3or4IEC.WindProtectionIEC", &get_WindTurbineType3or4IEC_WindProtectionIEC);
	get_map.emplace("WindTurbineType3or4IEC.WindRefFrameRotIEC", &get_WindTurbineType3or4IEC_WindRefFrameRotIEC);
}

void WindTurbineType3or4IEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType3or4Dynamics::addEnumGetFnsToMap(get_map);
}

bool WindTurbineType3or4IEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindTurbineType3or4IEC" &&
		dynamic_cast<WindTurbineType3or4IEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindTurbineType3or4IEC::declare()
{
	return BaseClassDefiner(WindTurbineType3or4IEC::addConstructToMap, WindTurbineType3or4IEC::addPrimitiveAssignFnsToMap, WindTurbineType3or4IEC::addClassAssignFnsToMap, WindTurbineType3or4IEC::debugName);
}

std::map<std::string, AttrDetails> WindTurbineType3or4IEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = WindTurbineType3or4Dynamics::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindTurbineType3or4IEC_factory()
	{
		return new WindTurbineType3or4IEC;
	}
}
