/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindType1or2UserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

WindType1or2UserDefined::WindType1or2UserDefined() {}
WindType1or2UserDefined::~WindType1or2UserDefined() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindType1or2UserDefined.ProprietaryParameterDynamics", { CGMESProfile::DY, } },
	{ "cim:WindType1or2UserDefined.proprietary", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindType1or2UserDefined::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindType1or2UserDefined::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = WindTurbineType1or2Dynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ProprietaryParameterDynamics_WindType1or2UserDefined(BaseClass*, BaseClass*);
bool assign_WindType1or2UserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindType1or2UserDefined* element = dynamic_cast<WindType1or2UserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_WindType1or2UserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindType1or2UserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindType1or2UserDefined* element = dynamic_cast<WindType1or2UserDefined*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->proprietary;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_WindType1or2UserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindType1or2UserDefined* element = dynamic_cast<const WindType1or2UserDefined*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->proprietary;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char WindType1or2UserDefined::debugName[] = "WindType1or2UserDefined";
const char* WindType1or2UserDefined::debugString() const
{
	return WindType1or2UserDefined::debugName;
}

void WindType1or2UserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:WindType1or2UserDefined", &WindType1or2UserDefined_factory);
}

void WindType1or2UserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:WindType1or2UserDefined.proprietary", &assign_WindType1or2UserDefined_proprietary);
}

void WindType1or2UserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:WindType1or2UserDefined.ProprietaryParameterDynamics", &assign_WindType1or2UserDefined_ProprietaryParameterDynamics);
}

void WindType1or2UserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType1or2Dynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:WindType1or2UserDefined.proprietary", &get_WindType1or2UserDefined_proprietary);
}

void WindType1or2UserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindTurbineType1or2Dynamics::addClassGetFnsToMap(get_map);
}

void WindType1or2UserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType1or2Dynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner WindType1or2UserDefined::declare()
{
	return BaseClassDefiner(WindType1or2UserDefined::addConstructToMap, WindType1or2UserDefined::addPrimitiveAssignFnsToMap, WindType1or2UserDefined::addClassAssignFnsToMap, WindType1or2UserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* WindType1or2UserDefined_factory()
	{
		return new WindType1or2UserDefined;
	}
}
