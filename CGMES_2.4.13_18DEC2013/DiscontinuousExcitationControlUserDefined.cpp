/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DiscontinuousExcitationControlUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

DiscontinuousExcitationControlUserDefined::DiscontinuousExcitationControlUserDefined() {}
DiscontinuousExcitationControlUserDefined::~DiscontinuousExcitationControlUserDefined() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:DiscontinuousExcitationControlUserDefined.ProprietaryParameterDynamics", { CGMESProfile::DY, } },
	{ "cim:DiscontinuousExcitationControlUserDefined.proprietary", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
DiscontinuousExcitationControlUserDefined::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
DiscontinuousExcitationControlUserDefined::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DiscontinuousExcitationControlDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ProprietaryParameterDynamics_DiscontinuousExcitationControlUserDefined(BaseClass*, BaseClass*);
bool assign_DiscontinuousExcitationControlUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DiscontinuousExcitationControlUserDefined* element = dynamic_cast<DiscontinuousExcitationControlUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_DiscontinuousExcitationControlUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_DiscontinuousExcitationControlUserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	DiscontinuousExcitationControlUserDefined* element = dynamic_cast<DiscontinuousExcitationControlUserDefined*>(BaseClass_ptr1);
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


bool get_DiscontinuousExcitationControlUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const DiscontinuousExcitationControlUserDefined* element = dynamic_cast<const DiscontinuousExcitationControlUserDefined*>(BaseClass_ptr1);
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

const char DiscontinuousExcitationControlUserDefined::debugName[] = "DiscontinuousExcitationControlUserDefined";
const char* DiscontinuousExcitationControlUserDefined::debugString() const
{
	return DiscontinuousExcitationControlUserDefined::debugName;
}

void DiscontinuousExcitationControlUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:DiscontinuousExcitationControlUserDefined", &DiscontinuousExcitationControlUserDefined_factory);
}

void DiscontinuousExcitationControlUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:DiscontinuousExcitationControlUserDefined.proprietary", &assign_DiscontinuousExcitationControlUserDefined_proprietary);
}

void DiscontinuousExcitationControlUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:DiscontinuousExcitationControlUserDefined.ProprietaryParameterDynamics", &assign_DiscontinuousExcitationControlUserDefined_ProprietaryParameterDynamics);
}

void DiscontinuousExcitationControlUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DiscontinuousExcitationControlDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:DiscontinuousExcitationControlUserDefined.proprietary", &get_DiscontinuousExcitationControlUserDefined_proprietary);
}

void DiscontinuousExcitationControlUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DiscontinuousExcitationControlDynamics::addClassGetFnsToMap(get_map);
}

void DiscontinuousExcitationControlUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DiscontinuousExcitationControlDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner DiscontinuousExcitationControlUserDefined::declare()
{
	return BaseClassDefiner(DiscontinuousExcitationControlUserDefined::addConstructToMap, DiscontinuousExcitationControlUserDefined::addPrimitiveAssignFnsToMap, DiscontinuousExcitationControlUserDefined::addClassAssignFnsToMap, DiscontinuousExcitationControlUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* DiscontinuousExcitationControlUserDefined_factory()
	{
		return new DiscontinuousExcitationControlUserDefined;
	}
}
