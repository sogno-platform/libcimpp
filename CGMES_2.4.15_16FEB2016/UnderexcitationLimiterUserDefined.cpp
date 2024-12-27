/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "UnderexcitationLimiterUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

UnderexcitationLimiterUserDefined::UnderexcitationLimiterUserDefined() {};
UnderexcitationLimiterUserDefined::~UnderexcitationLimiterUserDefined() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:UnderexcitationLimiterUserDefined.ProprietaryParameterDynamics", { CGMESProfile::DY, } },
	{ "cim:UnderexcitationLimiterUserDefined.proprietary", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
UnderexcitationLimiterUserDefined::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
UnderexcitationLimiterUserDefined::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = UnderexcitationLimiterDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_UnderexcitationLimiterUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (UnderexcitationLimiterUserDefined* element = dynamic_cast<UnderexcitationLimiterUserDefined*>(BaseClass_ptr1))
	{
		buffer >> element->proprietary;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ProprietaryParameterDynamics_UnderexcitationLimiterUserDefined(BaseClass*, BaseClass*);
bool assign_UnderexcitationLimiterUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	UnderexcitationLimiterUserDefined* element = dynamic_cast<UnderexcitationLimiterUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_UnderexcitationLimiterUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_UnderexcitationLimiterUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const UnderexcitationLimiterUserDefined* element = dynamic_cast<const UnderexcitationLimiterUserDefined*>(BaseClass_ptr1))
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



const char UnderexcitationLimiterUserDefined::debugName[] = "UnderexcitationLimiterUserDefined";
const char* UnderexcitationLimiterUserDefined::debugString() const
{
	return UnderexcitationLimiterUserDefined::debugName;
}

void UnderexcitationLimiterUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:UnderexcitationLimiterUserDefined"), &UnderexcitationLimiterUserDefined_factory));
}

void UnderexcitationLimiterUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:UnderexcitationLimiterUserDefined.proprietary"), &assign_UnderexcitationLimiterUserDefined_proprietary));
}

void UnderexcitationLimiterUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:UnderexcitationLimiterUserDefined.ProprietaryParameterDynamics"), &assign_UnderexcitationLimiterUserDefined_ProprietaryParameterDynamics));
}

void UnderexcitationLimiterUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:UnderexcitationLimiterUserDefined.proprietary", &get_UnderexcitationLimiterUserDefined_proprietary);
}

void UnderexcitationLimiterUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addClassGetFnsToMap(get_map);
}

void UnderexcitationLimiterUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	UnderexcitationLimiterDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner UnderexcitationLimiterUserDefined::declare()
{
	return BaseClassDefiner(UnderexcitationLimiterUserDefined::addConstructToMap, UnderexcitationLimiterUserDefined::addPrimitiveAssignFnsToMap, UnderexcitationLimiterUserDefined::addClassAssignFnsToMap, UnderexcitationLimiterUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* UnderexcitationLimiterUserDefined_factory()
	{
		return new UnderexcitationLimiterUserDefined;
	}
}
