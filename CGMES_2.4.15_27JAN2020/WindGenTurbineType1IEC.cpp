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

WindGenTurbineType1IEC::WindGenTurbineType1IEC() : WindAeroConstIEC(nullptr) {};
WindGenTurbineType1IEC::~WindGenTurbineType1IEC() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindGenTurbineType1IEC.WindAeroConstIEC", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindGenTurbineType1IEC::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindGenTurbineType1IEC::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = WindTurbineType1or2IEC::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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
	if (const WindGenTurbineType1IEC* element = dynamic_cast<const WindGenTurbineType1IEC*>(BaseClass_ptr1))
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
	factory_map.insert(std::make_pair(std::string("cim:WindGenTurbineType1IEC"), &WindGenTurbineType1IEC_factory));
}

void WindGenTurbineType1IEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindGenTurbineType1IEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindGenTurbineType1IEC.WindAeroConstIEC"), &assign_WindGenTurbineType1IEC_WindAeroConstIEC));
}

void WindGenTurbineType1IEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType1or2IEC::addPrimitiveGetFnsToMap(get_map);
}

void WindGenTurbineType1IEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindTurbineType1or2IEC::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:WindGenTurbineType1IEC.WindAeroConstIEC", &get_WindGenTurbineType1IEC_WindAeroConstIEC);
}

void WindGenTurbineType1IEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType1or2IEC::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner WindGenTurbineType1IEC::declare()
{
	return BaseClassDefiner(WindGenTurbineType1IEC::addConstructToMap, WindGenTurbineType1IEC::addPrimitiveAssignFnsToMap, WindGenTurbineType1IEC::addClassAssignFnsToMap, WindGenTurbineType1IEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindGenTurbineType1IEC_factory()
	{
		return new WindGenTurbineType1IEC;
	}
}
