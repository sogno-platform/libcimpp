/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PFVArControllerType1UserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

PFVArControllerType1UserDefined::PFVArControllerType1UserDefined() {}
PFVArControllerType1UserDefined::~PFVArControllerType1UserDefined() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PFVArControllerType1UserDefined.ProprietaryParameterDynamics", { CGMESProfile::DY, } },
	{ "cim:PFVArControllerType1UserDefined.proprietary", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
PFVArControllerType1UserDefined::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PFVArControllerType1UserDefined::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PFVArControllerType1Dynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ProprietaryParameterDynamics_PFVArControllerType1UserDefined(BaseClass*, BaseClass*);
bool assign_PFVArControllerType1UserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PFVArControllerType1UserDefined* element = dynamic_cast<PFVArControllerType1UserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_PFVArControllerType1UserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_PFVArControllerType1UserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PFVArControllerType1UserDefined* element = dynamic_cast<PFVArControllerType1UserDefined*>(BaseClass_ptr1);
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


bool get_PFVArControllerType1UserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PFVArControllerType1UserDefined* element = dynamic_cast<const PFVArControllerType1UserDefined*>(BaseClass_ptr1);
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

const char PFVArControllerType1UserDefined::debugName[] = "PFVArControllerType1UserDefined";
const char* PFVArControllerType1UserDefined::debugString() const
{
	return PFVArControllerType1UserDefined::debugName;
}

void PFVArControllerType1UserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:PFVArControllerType1UserDefined", &PFVArControllerType1UserDefined_factory);
}

void PFVArControllerType1UserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:PFVArControllerType1UserDefined.proprietary", &assign_PFVArControllerType1UserDefined_proprietary);
}

void PFVArControllerType1UserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:PFVArControllerType1UserDefined.ProprietaryParameterDynamics", &assign_PFVArControllerType1UserDefined_ProprietaryParameterDynamics);
}

void PFVArControllerType1UserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PFVArControllerType1Dynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:PFVArControllerType1UserDefined.proprietary", &get_PFVArControllerType1UserDefined_proprietary);
}

void PFVArControllerType1UserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PFVArControllerType1Dynamics::addClassGetFnsToMap(get_map);
}

void PFVArControllerType1UserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PFVArControllerType1Dynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PFVArControllerType1UserDefined::declare()
{
	return BaseClassDefiner(PFVArControllerType1UserDefined::addConstructToMap, PFVArControllerType1UserDefined::addPrimitiveAssignFnsToMap, PFVArControllerType1UserDefined::addClassAssignFnsToMap, PFVArControllerType1UserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* PFVArControllerType1UserDefined_factory()
	{
		return new PFVArControllerType1UserDefined;
	}
}
