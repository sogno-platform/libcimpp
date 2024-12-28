/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindType3or4UserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

WindType3or4UserDefined::WindType3or4UserDefined() {};
WindType3or4UserDefined::~WindType3or4UserDefined() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindType3or4UserDefined.ProprietaryParameterDynamics", { CGMESProfile::DY, } },
	{ "cim:WindType3or4UserDefined.proprietary", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindType3or4UserDefined::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindType3or4UserDefined::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = WindTurbineType3or4Dynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_WindType3or4UserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindType3or4UserDefined* element = dynamic_cast<WindType3or4UserDefined*>(BaseClass_ptr1))
	{
		buffer >> element->proprietary;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ProprietaryParameterDynamics_WindType3or4UserDefined(BaseClass*, BaseClass*);
bool assign_WindType3or4UserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindType3or4UserDefined* element = dynamic_cast<WindType3or4UserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_WindType3or4UserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_WindType3or4UserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindType3or4UserDefined* element = dynamic_cast<const WindType3or4UserDefined*>(BaseClass_ptr1))
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



const char WindType3or4UserDefined::debugName[] = "WindType3or4UserDefined";
const char* WindType3or4UserDefined::debugString() const
{
	return WindType3or4UserDefined::debugName;
}

void WindType3or4UserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindType3or4UserDefined"), &WindType3or4UserDefined_factory));
}

void WindType3or4UserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindType3or4UserDefined.proprietary"), &assign_WindType3or4UserDefined_proprietary));
}

void WindType3or4UserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindType3or4UserDefined.ProprietaryParameterDynamics"), &assign_WindType3or4UserDefined_ProprietaryParameterDynamics));
}

void WindType3or4UserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType3or4Dynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:WindType3or4UserDefined.proprietary", &get_WindType3or4UserDefined_proprietary);
}

void WindType3or4UserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindTurbineType3or4Dynamics::addClassGetFnsToMap(get_map);
}

void WindType3or4UserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindTurbineType3or4Dynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner WindType3or4UserDefined::declare()
{
	return BaseClassDefiner(WindType3or4UserDefined::addConstructToMap, WindType3or4UserDefined::addPrimitiveAssignFnsToMap, WindType3or4UserDefined::addClassAssignFnsToMap, WindType3or4UserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* WindType3or4UserDefined_factory()
	{
		return new WindType3or4UserDefined;
	}
}
