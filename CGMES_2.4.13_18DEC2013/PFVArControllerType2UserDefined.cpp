/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PFVArControllerType2UserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

PFVArControllerType2UserDefined::PFVArControllerType2UserDefined() {}
PFVArControllerType2UserDefined::~PFVArControllerType2UserDefined() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PFVArControllerType2UserDefined.ProprietaryParameterDynamics", { CGMESProfile::DY, } },
	{ "cim:PFVArControllerType2UserDefined.proprietary", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
PFVArControllerType2UserDefined::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PFVArControllerType2UserDefined::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PFVArControllerType2Dynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ProprietaryParameterDynamics_PFVArControllerType2UserDefined(BaseClass*, BaseClass*);
bool assign_PFVArControllerType2UserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PFVArControllerType2UserDefined* element = dynamic_cast<PFVArControllerType2UserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_PFVArControllerType2UserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_PFVArControllerType2UserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	PFVArControllerType2UserDefined* element = dynamic_cast<PFVArControllerType2UserDefined*>(BaseClass_ptr1);
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


bool get_PFVArControllerType2UserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const PFVArControllerType2UserDefined* element = dynamic_cast<const PFVArControllerType2UserDefined*>(BaseClass_ptr1);
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

const char PFVArControllerType2UserDefined::debugName[] = "PFVArControllerType2UserDefined";
const char* PFVArControllerType2UserDefined::debugString() const
{
	return PFVArControllerType2UserDefined::debugName;
}

void PFVArControllerType2UserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:PFVArControllerType2UserDefined", &PFVArControllerType2UserDefined_factory);
}

void PFVArControllerType2UserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:PFVArControllerType2UserDefined.proprietary", &assign_PFVArControllerType2UserDefined_proprietary);
}

void PFVArControllerType2UserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:PFVArControllerType2UserDefined.ProprietaryParameterDynamics", &assign_PFVArControllerType2UserDefined_ProprietaryParameterDynamics);
}

void PFVArControllerType2UserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PFVArControllerType2Dynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:PFVArControllerType2UserDefined.proprietary", &get_PFVArControllerType2UserDefined_proprietary);
}

void PFVArControllerType2UserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PFVArControllerType2Dynamics::addClassGetFnsToMap(get_map);
}

void PFVArControllerType2UserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PFVArControllerType2Dynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PFVArControllerType2UserDefined::declare()
{
	return BaseClassDefiner(PFVArControllerType2UserDefined::addConstructToMap, PFVArControllerType2UserDefined::addPrimitiveAssignFnsToMap, PFVArControllerType2UserDefined::addClassAssignFnsToMap, PFVArControllerType2UserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* PFVArControllerType2UserDefined_factory()
	{
		return new PFVArControllerType2UserDefined;
	}
}
