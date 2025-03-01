/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PowerSystemStabilizerUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

PowerSystemStabilizerUserDefined::PowerSystemStabilizerUserDefined() {}
PowerSystemStabilizerUserDefined::~PowerSystemStabilizerUserDefined() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PowerSystemStabilizerUserDefined.ProprietaryParameterDynamics", { CGMESProfile::DY, } },
	{ "cim:PowerSystemStabilizerUserDefined.proprietary", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
PowerSystemStabilizerUserDefined::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PowerSystemStabilizerUserDefined::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PowerSystemStabilizerDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ProprietaryParameterDynamics_PowerSystemStabilizerUserDefined(BaseClass*, BaseClass*);
bool assign_PowerSystemStabilizerUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PowerSystemStabilizerUserDefined* element = dynamic_cast<PowerSystemStabilizerUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_PowerSystemStabilizerUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_PowerSystemStabilizerUserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PowerSystemStabilizerUserDefined* element = dynamic_cast<PowerSystemStabilizerUserDefined*>(BaseClass_ptr1);
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


bool get_PowerSystemStabilizerUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PowerSystemStabilizerUserDefined* element = dynamic_cast<const PowerSystemStabilizerUserDefined*>(BaseClass_ptr1);
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

const char PowerSystemStabilizerUserDefined::debugName[] = "PowerSystemStabilizerUserDefined";
const char* PowerSystemStabilizerUserDefined::debugString() const
{
	return PowerSystemStabilizerUserDefined::debugName;
}

void PowerSystemStabilizerUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:PowerSystemStabilizerUserDefined", &PowerSystemStabilizerUserDefined_factory);
}

void PowerSystemStabilizerUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:PowerSystemStabilizerUserDefined.proprietary", &assign_PowerSystemStabilizerUserDefined_proprietary);
}

void PowerSystemStabilizerUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:PowerSystemStabilizerUserDefined.ProprietaryParameterDynamics", &assign_PowerSystemStabilizerUserDefined_ProprietaryParameterDynamics);
}

void PowerSystemStabilizerUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:PowerSystemStabilizerUserDefined.proprietary", &get_PowerSystemStabilizerUserDefined_proprietary);
}

void PowerSystemStabilizerUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addClassGetFnsToMap(get_map);
}

void PowerSystemStabilizerUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PowerSystemStabilizerUserDefined::declare()
{
	return BaseClassDefiner(PowerSystemStabilizerUserDefined::addConstructToMap, PowerSystemStabilizerUserDefined::addPrimitiveAssignFnsToMap, PowerSystemStabilizerUserDefined::addClassAssignFnsToMap, PowerSystemStabilizerUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* PowerSystemStabilizerUserDefined_factory()
	{
		return new PowerSystemStabilizerUserDefined;
	}
}
