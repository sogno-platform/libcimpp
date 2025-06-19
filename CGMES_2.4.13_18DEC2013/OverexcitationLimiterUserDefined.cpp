/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "OverexcitationLimiterUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

OverexcitationLimiterUserDefined::OverexcitationLimiterUserDefined() {}
OverexcitationLimiterUserDefined::~OverexcitationLimiterUserDefined() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:OverexcitationLimiterUserDefined.ProprietaryParameterDynamics", { CGMESProfile::DY, } },
	{ "cim:OverexcitationLimiterUserDefined.proprietary", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
OverexcitationLimiterUserDefined::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
OverexcitationLimiterUserDefined::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = OverexcitationLimiterDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ProprietaryParameterDynamics_OverexcitationLimiterUserDefined(BaseClass*, BaseClass*);
bool assign_OverexcitationLimiterUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	OverexcitationLimiterUserDefined* element = dynamic_cast<OverexcitationLimiterUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_OverexcitationLimiterUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_OverexcitationLimiterUserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	OverexcitationLimiterUserDefined* element = dynamic_cast<OverexcitationLimiterUserDefined*>(BaseClass_ptr1);
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


bool get_OverexcitationLimiterUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const OverexcitationLimiterUserDefined* element = dynamic_cast<const OverexcitationLimiterUserDefined*>(BaseClass_ptr1);
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

const char OverexcitationLimiterUserDefined::debugName[] = "OverexcitationLimiterUserDefined";
const char* OverexcitationLimiterUserDefined::debugString() const
{
	return OverexcitationLimiterUserDefined::debugName;
}

void OverexcitationLimiterUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:OverexcitationLimiterUserDefined", &OverexcitationLimiterUserDefined_factory);
}

void OverexcitationLimiterUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:OverexcitationLimiterUserDefined.proprietary", &assign_OverexcitationLimiterUserDefined_proprietary);
}

void OverexcitationLimiterUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:OverexcitationLimiterUserDefined.ProprietaryParameterDynamics", &assign_OverexcitationLimiterUserDefined_ProprietaryParameterDynamics);
}

void OverexcitationLimiterUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OverexcitationLimiterDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:OverexcitationLimiterUserDefined.proprietary", &get_OverexcitationLimiterUserDefined_proprietary);
}

void OverexcitationLimiterUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	OverexcitationLimiterDynamics::addClassGetFnsToMap(get_map);
}

void OverexcitationLimiterUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	OverexcitationLimiterDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner OverexcitationLimiterUserDefined::declare()
{
	return BaseClassDefiner(OverexcitationLimiterUserDefined::addConstructToMap, OverexcitationLimiterUserDefined::addPrimitiveAssignFnsToMap, OverexcitationLimiterUserDefined::addClassAssignFnsToMap, OverexcitationLimiterUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* OverexcitationLimiterUserDefined_factory()
	{
		return new OverexcitationLimiterUserDefined;
	}
}
