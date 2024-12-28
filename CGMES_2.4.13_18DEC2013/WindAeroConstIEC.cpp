/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindAeroConstIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindGenTurbineType1IEC.hpp"

using namespace CIMPP;

WindAeroConstIEC::WindAeroConstIEC() : WindGenTurbineType1IEC(nullptr) {};
WindAeroConstIEC::~WindAeroConstIEC() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindAeroConstIEC.WindGenTurbineType1IEC", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindAeroConstIEC::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindAeroConstIEC::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



bool assign_WindGenTurbineType1IEC_WindAeroConstIEC(BaseClass*, BaseClass*);
bool assign_WindAeroConstIEC_WindGenTurbineType1IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindAeroConstIEC* element = dynamic_cast<WindAeroConstIEC*>(BaseClass_ptr1);
	WindGenTurbineType1IEC* element2 = dynamic_cast<WindGenTurbineType1IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindGenTurbineType1IEC != element2)
		{
			element->WindGenTurbineType1IEC = element2;
			return assign_WindGenTurbineType1IEC_WindAeroConstIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



const char WindAeroConstIEC::debugName[] = "WindAeroConstIEC";
const char* WindAeroConstIEC::debugString() const
{
	return WindAeroConstIEC::debugName;
}

void WindAeroConstIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindAeroConstIEC"), &WindAeroConstIEC_factory));
}

void WindAeroConstIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindAeroConstIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindAeroConstIEC.WindGenTurbineType1IEC"), &assign_WindAeroConstIEC_WindGenTurbineType1IEC));
}

void WindAeroConstIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
}

void WindAeroConstIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindAeroConstIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner WindAeroConstIEC::declare()
{
	return BaseClassDefiner(WindAeroConstIEC::addConstructToMap, WindAeroConstIEC::addPrimitiveAssignFnsToMap, WindAeroConstIEC::addClassAssignFnsToMap, WindAeroConstIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindAeroConstIEC_factory()
	{
		return new WindAeroConstIEC;
	}
}
