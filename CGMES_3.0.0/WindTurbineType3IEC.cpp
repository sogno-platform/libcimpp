/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindTurbineType3IEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindAeroOneDimIEC.hpp"
#include "WindAeroTwoDimIEC.hpp"
#include "WindContPType3IEC.hpp"
#include "WindContPitchAngleIEC.hpp"
#include "WindGenType3IEC.hpp"
#include "WindMechIEC.hpp"

using namespace CIMPP;

static const CimClassDetails& getCimClassDetails()
{
	static const CimClassDetails ClassDetails = CimClassDetails(
		WindTurbineType3IEC(),
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
		{ "WindTurbineType3IEC.WindAeroOneDimIEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindTurbineType3IEC.WindAeroTwoDimIEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindTurbineType3IEC.WindContPType3IEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindTurbineType3IEC.WindContPitchAngleIEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindTurbineType3IEC.WindGenType3IEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
		{ "WindTurbineType3IEC.WindMechIEC", { "http://iec.ch/TC57/CIM100#", { CGMESProfile::DY, } } },
	};
    return ClassAttrDetailsMap;
}

WindTurbineType3IEC::WindTurbineType3IEC() : WindAeroOneDimIEC(nullptr), WindAeroTwoDimIEC(nullptr), WindContPType3IEC(nullptr), WindContPitchAngleIEC(nullptr), WindGenType3IEC(nullptr), WindMechIEC(nullptr) {}
WindTurbineType3IEC::~WindTurbineType3IEC() {}

const std::list<std::string>& WindTurbineType3IEC::getAttributeNames() const
{
	return getCimClassDetails().AttrNamesList;
}

const std::string& WindTurbineType3IEC::getClassNamespaceUrl() const
{
	return getCimClassDetails().ClassNamespace;
}

const std::string& WindTurbineType3IEC::getAttributeNamespaceUrl(const std::string& attrName) const
{
	return getCimClassDetails().getAttributeNamespaceUrl(attrName);
}

const std::list<CGMESProfile>& WindTurbineType3IEC::getPossibleProfiles() const
{
	return getCimClassDetails().PossibleProfiles;
}

const CGMESProfile& WindTurbineType3IEC::getRecommendedProfile() const
{
	return getCimClassDetails().RecommendedProfile;
}

const std::list<CGMESProfile>& WindTurbineType3IEC::getPossibleAttributeProfiles(const std::string& attrName) const
{
	return getCimClassDetails().getPossibleAttributeProfiles(attrName);
}

const std::list<CGMESProfile>& WindTurbineType3IEC::getPossibleProfilesIncludingAttributes() const
{
	return getCimClassDetails().PossibleProfilesIncludingAttributes;
}

bool assign_WindAeroOneDimIEC_WindTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType3IEC_WindAeroOneDimIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3IEC* element = dynamic_cast<WindTurbineType3IEC*>(BaseClass_ptr1);
	WindAeroOneDimIEC* element2 = dynamic_cast<WindAeroOneDimIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindAeroOneDimIEC != element2)
		{
			element->WindAeroOneDimIEC = element2;
			return assign_WindAeroOneDimIEC_WindTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindAeroTwoDimIEC_WindTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType3IEC_WindAeroTwoDimIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3IEC* element = dynamic_cast<WindTurbineType3IEC*>(BaseClass_ptr1);
	WindAeroTwoDimIEC* element2 = dynamic_cast<WindAeroTwoDimIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindAeroTwoDimIEC != element2)
		{
			element->WindAeroTwoDimIEC = element2;
			return assign_WindAeroTwoDimIEC_WindTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindContPType3IEC_WindTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType3IEC_WindContPType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3IEC* element = dynamic_cast<WindTurbineType3IEC*>(BaseClass_ptr1);
	WindContPType3IEC* element2 = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContPType3IEC != element2)
		{
			element->WindContPType3IEC = element2;
			return assign_WindContPType3IEC_WindTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindContPitchAngleIEC_WindTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType3IEC_WindContPitchAngleIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3IEC* element = dynamic_cast<WindTurbineType3IEC*>(BaseClass_ptr1);
	WindContPitchAngleIEC* element2 = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContPitchAngleIEC != element2)
		{
			element->WindContPitchAngleIEC = element2;
			return assign_WindContPitchAngleIEC_WindTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindGenType3IEC_WindTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType3IEC_WindGenType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3IEC* element = dynamic_cast<WindTurbineType3IEC*>(BaseClass_ptr1);
	WindGenType3IEC* element2 = dynamic_cast<WindGenType3IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindGenType3IEC != element2)
		{
			element->WindGenType3IEC = element2;
			return assign_WindGenType3IEC_WindTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindMechIEC_WindTurbineType3IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType3IEC_WindMechIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType3IEC* element = dynamic_cast<WindTurbineType3IEC*>(BaseClass_ptr1);
	WindMechIEC* element2 = dynamic_cast<WindMechIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindMechIEC != element2)
		{
			element->WindMechIEC = element2;
			return assign_WindMechIEC_WindTurbineType3IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_WindTurbineType3IEC_WindAeroOneDimIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindTurbineType3IEC* element = dynamic_cast<const WindTurbineType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindAeroOneDimIEC != 0)
		{
			BaseClass_list.push_back(element->WindAeroOneDimIEC);
			return true;
		}
	}
	return false;
}

bool get_WindTurbineType3IEC_WindAeroTwoDimIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindTurbineType3IEC* element = dynamic_cast<const WindTurbineType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindAeroTwoDimIEC != 0)
		{
			BaseClass_list.push_back(element->WindAeroTwoDimIEC);
			return true;
		}
	}
	return false;
}

bool get_WindTurbineType3IEC_WindContPType3IEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindTurbineType3IEC* element = dynamic_cast<const WindTurbineType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindContPType3IEC != 0)
		{
			BaseClass_list.push_back(element->WindContPType3IEC);
			return true;
		}
	}
	return false;
}

bool get_WindTurbineType3IEC_WindContPitchAngleIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindTurbineType3IEC* element = dynamic_cast<const WindTurbineType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindContPitchAngleIEC != 0)
		{
			BaseClass_list.push_back(element->WindContPitchAngleIEC);
			return true;
		}
	}
	return false;
}

bool get_WindTurbineType3IEC_WindGenType3IEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindTurbineType3IEC* element = dynamic_cast<const WindTurbineType3IEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindGenType3IEC != 0)
		{
			BaseClass_list.push_back(element->WindGenType3IEC);
			return true;
		}
	}
	return false;
}

bool get_WindTurbineType3IEC_WindMechIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindTurbineType3IEC* element = dynamic_cast<const WindTurbineType3IEC*>(BaseClass_ptr1);
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

const char WindTurbineType3IEC::debugName[] = "WindTurbineType3IEC";
const char* WindTurbineType3IEC::debugString() const
{
	return WindTurbineType3IEC::debugName;
}

void WindTurbineType3IEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("WindTurbineType3IEC", &WindTurbineType3IEC_factory);
}

void WindTurbineType3IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindTurbineType3IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("WindTurbineType3IEC.WindAeroOneDimIEC", &assign_WindTurbineType3IEC_WindAeroOneDimIEC);
	assign_map.emplace("WindTurbineType3IEC.WindAeroTwoDimIEC", &assign_WindTurbineType3IEC_WindAeroTwoDimIEC);
	assign_map.emplace("WindTurbineType3IEC.WindContPType3IEC", &assign_WindTurbineType3IEC_WindContPType3IEC);
	assign_map.emplace("WindTurbineType3IEC.WindContPitchAngleIEC", &assign_WindTurbineType3IEC_WindContPitchAngleIEC);
	assign_map.emplace("WindTurbineType3IEC.WindGenType3IEC", &assign_WindTurbineType3IEC_WindGenType3IEC);
	assign_map.emplace("WindTurbineType3IEC.WindMechIEC", &assign_WindTurbineType3IEC_WindMechIEC);
}

void WindTurbineType3IEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType3or4IEC::addPrimitiveGetFnsToMap(get_map);
}

void WindTurbineType3IEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindTurbineType3or4IEC::addClassGetFnsToMap(get_map);
	get_map.emplace("WindTurbineType3IEC.WindAeroOneDimIEC", &get_WindTurbineType3IEC_WindAeroOneDimIEC);
	get_map.emplace("WindTurbineType3IEC.WindAeroTwoDimIEC", &get_WindTurbineType3IEC_WindAeroTwoDimIEC);
	get_map.emplace("WindTurbineType3IEC.WindContPType3IEC", &get_WindTurbineType3IEC_WindContPType3IEC);
	get_map.emplace("WindTurbineType3IEC.WindContPitchAngleIEC", &get_WindTurbineType3IEC_WindContPitchAngleIEC);
	get_map.emplace("WindTurbineType3IEC.WindGenType3IEC", &get_WindTurbineType3IEC_WindGenType3IEC);
	get_map.emplace("WindTurbineType3IEC.WindMechIEC", &get_WindTurbineType3IEC_WindMechIEC);
}

void WindTurbineType3IEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType3or4IEC::addEnumGetFnsToMap(get_map);
}

bool WindTurbineType3IEC::isAssignableFrom(BaseClass* otherObject) const
{
	return std::string(debugString()) == "WindTurbineType3IEC" &&
		dynamic_cast<WindTurbineType3IEC*>(otherObject) != nullptr;
}

const BaseClassDefiner WindTurbineType3IEC::declare()
{
	return BaseClassDefiner(WindTurbineType3IEC::addConstructToMap, WindTurbineType3IEC::addPrimitiveAssignFnsToMap, WindTurbineType3IEC::addClassAssignFnsToMap, WindTurbineType3IEC::debugName);
}

std::map<std::string, AttrDetails> WindTurbineType3IEC::allAttrDetailsMap() const
{
	auto map = getClassAttrDetailsMap();
	const auto& parent_map = WindTurbineType3or4IEC::allAttrDetailsMap();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

namespace CIMPP
{
	BaseClass* WindTurbineType3IEC_factory()
	{
		return new WindTurbineType3IEC;
	}
}
