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
#include "WindProtectionIEC.hpp"

using namespace CIMPP;

WindTurbineType3or4IEC::WindTurbineType3or4IEC() : WIndContQIEC(nullptr), WindContCurrLimIEC(nullptr), WindProtectionIEC(nullptr) {}
WindTurbineType3or4IEC::~WindTurbineType3or4IEC() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindTurbineType3or4IEC.WIndContQIEC", { CGMESProfile::DY, } },
	{ "cim:WindTurbineType3or4IEC.WindContCurrLimIEC", { CGMESProfile::DY, } },
	{ "cim:WindTurbineType3or4IEC.WindProtectionIEC", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindTurbineType3or4IEC::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindTurbineType3or4IEC::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = WindTurbineType3or4Dynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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

const char WindTurbineType3or4IEC::debugName[] = "WindTurbineType3or4IEC";
const char* WindTurbineType3or4IEC::debugString() const
{
	return WindTurbineType3or4IEC::debugName;
}

void WindTurbineType3or4IEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:WindTurbineType3or4IEC", &WindTurbineType3or4IEC_factory);
}

void WindTurbineType3or4IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindTurbineType3or4IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:WindTurbineType3or4IEC.WIndContQIEC", &assign_WindTurbineType3or4IEC_WIndContQIEC);
	assign_map.emplace("cim:WindTurbineType3or4IEC.WindContCurrLimIEC", &assign_WindTurbineType3or4IEC_WindContCurrLimIEC);
	assign_map.emplace("cim:WindTurbineType3or4IEC.WindProtectionIEC", &assign_WindTurbineType3or4IEC_WindProtectionIEC);
}

void WindTurbineType3or4IEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType3or4Dynamics::addPrimitiveGetFnsToMap(get_map);
}

void WindTurbineType3or4IEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindTurbineType3or4Dynamics::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:WindTurbineType3or4IEC.WIndContQIEC", &get_WindTurbineType3or4IEC_WIndContQIEC);
	get_map.emplace("cim:WindTurbineType3or4IEC.WindContCurrLimIEC", &get_WindTurbineType3or4IEC_WindContCurrLimIEC);
	get_map.emplace("cim:WindTurbineType3or4IEC.WindProtectionIEC", &get_WindTurbineType3or4IEC_WindProtectionIEC);
}

void WindTurbineType3or4IEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType3or4Dynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner WindTurbineType3or4IEC::declare()
{
	return BaseClassDefiner(WindTurbineType3or4IEC::addConstructToMap, WindTurbineType3or4IEC::addPrimitiveAssignFnsToMap, WindTurbineType3or4IEC::addClassAssignFnsToMap, WindTurbineType3or4IEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindTurbineType3or4IEC_factory()
	{
		return new WindTurbineType3or4IEC;
	}
}
