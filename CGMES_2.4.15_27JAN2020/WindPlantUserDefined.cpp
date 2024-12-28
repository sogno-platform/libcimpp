/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindPlantUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

WindPlantUserDefined::WindPlantUserDefined() {};
WindPlantUserDefined::~WindPlantUserDefined() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindPlantUserDefined.ProprietaryParameterDynamics", { CGMESProfile::DY, } },
	{ "cim:WindPlantUserDefined.proprietary", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindPlantUserDefined::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindPlantUserDefined::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = WindPlantDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_WindPlantUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantUserDefined* element = dynamic_cast<WindPlantUserDefined*>(BaseClass_ptr1))
	{
		buffer >> element->proprietary;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ProprietaryParameterDynamics_WindPlantUserDefined(BaseClass*, BaseClass*);
bool assign_WindPlantUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindPlantUserDefined* element = dynamic_cast<WindPlantUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_WindPlantUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_WindPlantUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindPlantUserDefined* element = dynamic_cast<const WindPlantUserDefined*>(BaseClass_ptr1))
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



const char WindPlantUserDefined::debugName[] = "WindPlantUserDefined";
const char* WindPlantUserDefined::debugString() const
{
	return WindPlantUserDefined::debugName;
}

void WindPlantUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindPlantUserDefined"), &WindPlantUserDefined_factory));
}

void WindPlantUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindPlantUserDefined.proprietary"), &assign_WindPlantUserDefined_proprietary));
}

void WindPlantUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindPlantUserDefined.ProprietaryParameterDynamics"), &assign_WindPlantUserDefined_ProprietaryParameterDynamics));
}

void WindPlantUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindPlantDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:WindPlantUserDefined.proprietary", &get_WindPlantUserDefined_proprietary);
}

void WindPlantUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	WindPlantDynamics::addClassGetFnsToMap(get_map);
}

void WindPlantUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	WindPlantDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner WindPlantUserDefined::declare()
{
	return BaseClassDefiner(WindPlantUserDefined::addConstructToMap, WindPlantUserDefined::addPrimitiveAssignFnsToMap, WindPlantUserDefined::addClassAssignFnsToMap, WindPlantUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* WindPlantUserDefined_factory()
	{
		return new WindPlantUserDefined;
	}
}
