/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VoltageCompensatorUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

VoltageCompensatorUserDefined::VoltageCompensatorUserDefined() {}
VoltageCompensatorUserDefined::~VoltageCompensatorUserDefined() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:VoltageCompensatorUserDefined.ProprietaryParameterDynamics", { CGMESProfile::DY, } },
	{ "cim:VoltageCompensatorUserDefined.proprietary", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
VoltageCompensatorUserDefined::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
VoltageCompensatorUserDefined::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = VoltageCompensatorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ProprietaryParameterDynamics_VoltageCompensatorUserDefined(BaseClass*, BaseClass*);
bool assign_VoltageCompensatorUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VoltageCompensatorUserDefined* element = dynamic_cast<VoltageCompensatorUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_VoltageCompensatorUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_VoltageCompensatorUserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VoltageCompensatorUserDefined* element = dynamic_cast<VoltageCompensatorUserDefined*>(BaseClass_ptr1);
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


bool get_VoltageCompensatorUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VoltageCompensatorUserDefined* element = dynamic_cast<const VoltageCompensatorUserDefined*>(BaseClass_ptr1);
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

const char VoltageCompensatorUserDefined::debugName[] = "VoltageCompensatorUserDefined";
const char* VoltageCompensatorUserDefined::debugString() const
{
	return VoltageCompensatorUserDefined::debugName;
}

void VoltageCompensatorUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:VoltageCompensatorUserDefined", &VoltageCompensatorUserDefined_factory);
}

void VoltageCompensatorUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:VoltageCompensatorUserDefined.proprietary", &assign_VoltageCompensatorUserDefined_proprietary);
}

void VoltageCompensatorUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:VoltageCompensatorUserDefined.ProprietaryParameterDynamics", &assign_VoltageCompensatorUserDefined_ProprietaryParameterDynamics);
}

void VoltageCompensatorUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	VoltageCompensatorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:VoltageCompensatorUserDefined.proprietary", &get_VoltageCompensatorUserDefined_proprietary);
}

void VoltageCompensatorUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	VoltageCompensatorDynamics::addClassGetFnsToMap(get_map);
}

void VoltageCompensatorUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	VoltageCompensatorDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner VoltageCompensatorUserDefined::declare()
{
	return BaseClassDefiner(VoltageCompensatorUserDefined::addConstructToMap, VoltageCompensatorUserDefined::addPrimitiveAssignFnsToMap, VoltageCompensatorUserDefined::addClassAssignFnsToMap, VoltageCompensatorUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* VoltageCompensatorUserDefined_factory()
	{
		return new VoltageCompensatorUserDefined;
	}
}
