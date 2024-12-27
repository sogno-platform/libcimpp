/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindTurbineType1or2IEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindMechIEC.hpp"
#include "WindProtectionIEC.hpp"

using namespace CIMPP;

WindTurbineType1or2IEC::WindTurbineType1or2IEC() : WindMechIEC(nullptr), WindProtectionIEC(nullptr) {};
WindTurbineType1or2IEC::~WindTurbineType1or2IEC() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindTurbineType1or2IEC.WindMechIEC", { CGMESProfile::DY, } },
	{ "cim:WindTurbineType1or2IEC.WindProtectionIEC", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindTurbineType1or2IEC::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindTurbineType1or2IEC::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = WindTurbineType1or2Dynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



bool assign_WindMechIEC_WindTurbineType1or2IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType1or2IEC_WindMechIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType1or2IEC* element = dynamic_cast<WindTurbineType1or2IEC*>(BaseClass_ptr1);
	WindMechIEC* element2 = dynamic_cast<WindMechIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindMechIEC != element2)
		{
			element->WindMechIEC = element2;
			return assign_WindMechIEC_WindTurbineType1or2IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_WindProtectionIEC_WindTurbineType1or2IEC(BaseClass*, BaseClass*);
bool assign_WindTurbineType1or2IEC_WindProtectionIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType1or2IEC* element = dynamic_cast<WindTurbineType1or2IEC*>(BaseClass_ptr1);
	WindProtectionIEC* element2 = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindProtectionIEC != element2)
		{
			element->WindProtectionIEC = element2;
			return assign_WindProtectionIEC_WindTurbineType1or2IEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


bool get_WindTurbineType1or2IEC_WindMechIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const WindTurbineType1or2IEC* element = dynamic_cast<const WindTurbineType1or2IEC*>(BaseClass_ptr1))
	{
		if (element->WindMechIEC != 0)
		{
			BaseClass_list.push_back(element->WindMechIEC);
			return true;
		}
	}
	return false;
}

bool get_WindTurbineType1or2IEC_WindProtectionIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const WindTurbineType1or2IEC* element = dynamic_cast<const WindTurbineType1or2IEC*>(BaseClass_ptr1))
	{
		if (element->WindProtectionIEC != 0)
		{
			BaseClass_list.push_back(element->WindProtectionIEC);
			return true;
		}
	}
	return false;
}


const char WindTurbineType1or2IEC::debugName[] = "WindTurbineType1or2IEC";
const char* WindTurbineType1or2IEC::debugString() const
{
	return WindTurbineType1or2IEC::debugName;
}

void WindTurbineType1or2IEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindTurbineType1or2IEC"), &WindTurbineType1or2IEC_factory));
}

void WindTurbineType1or2IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindTurbineType1or2IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType1or2IEC.WindMechIEC"), &assign_WindTurbineType1or2IEC_WindMechIEC));
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType1or2IEC.WindProtectionIEC"), &assign_WindTurbineType1or2IEC_WindProtectionIEC));
}

void WindTurbineType1or2IEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType1or2Dynamics::addPrimitiveGetFnsToMap(get_map);
}

void WindTurbineType1or2IEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindTurbineType1or2Dynamics::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:WindTurbineType1or2IEC.WindMechIEC", &get_WindTurbineType1or2IEC_WindMechIEC);
	get_map.emplace("cim:WindTurbineType1or2IEC.WindProtectionIEC", &get_WindTurbineType1or2IEC_WindProtectionIEC);
}

void WindTurbineType1or2IEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType1or2Dynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner WindTurbineType1or2IEC::declare()
{
	return BaseClassDefiner(WindTurbineType1or2IEC::addConstructToMap, WindTurbineType1or2IEC::addPrimitiveAssignFnsToMap, WindTurbineType1or2IEC::addClassAssignFnsToMap, WindTurbineType1or2IEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindTurbineType1or2IEC_factory()
	{
		return new WindTurbineType1or2IEC;
	}
}
