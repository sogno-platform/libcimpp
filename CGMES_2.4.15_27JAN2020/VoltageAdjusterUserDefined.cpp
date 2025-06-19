/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VoltageAdjusterUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

VoltageAdjusterUserDefined::VoltageAdjusterUserDefined() {}
VoltageAdjusterUserDefined::~VoltageAdjusterUserDefined() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:VoltageAdjusterUserDefined.ProprietaryParameterDynamics", { CGMESProfile::DY, } },
	{ "cim:VoltageAdjusterUserDefined.proprietary", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
VoltageAdjusterUserDefined::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
VoltageAdjusterUserDefined::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = VoltageAdjusterDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ProprietaryParameterDynamics_VoltageAdjusterUserDefined(BaseClass*, BaseClass*);
bool assign_VoltageAdjusterUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VoltageAdjusterUserDefined* element = dynamic_cast<VoltageAdjusterUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_VoltageAdjusterUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_VoltageAdjusterUserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	VoltageAdjusterUserDefined* element = dynamic_cast<VoltageAdjusterUserDefined*>(BaseClass_ptr1);
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


bool get_VoltageAdjusterUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const VoltageAdjusterUserDefined* element = dynamic_cast<const VoltageAdjusterUserDefined*>(BaseClass_ptr1);
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

const char VoltageAdjusterUserDefined::debugName[] = "VoltageAdjusterUserDefined";
const char* VoltageAdjusterUserDefined::debugString() const
{
	return VoltageAdjusterUserDefined::debugName;
}

void VoltageAdjusterUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:VoltageAdjusterUserDefined", &VoltageAdjusterUserDefined_factory);
}

void VoltageAdjusterUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:VoltageAdjusterUserDefined.proprietary", &assign_VoltageAdjusterUserDefined_proprietary);
}

void VoltageAdjusterUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:VoltageAdjusterUserDefined.ProprietaryParameterDynamics", &assign_VoltageAdjusterUserDefined_ProprietaryParameterDynamics);
}

void VoltageAdjusterUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	VoltageAdjusterDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:VoltageAdjusterUserDefined.proprietary", &get_VoltageAdjusterUserDefined_proprietary);
}

void VoltageAdjusterUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	VoltageAdjusterDynamics::addClassGetFnsToMap(get_map);
}

void VoltageAdjusterUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	VoltageAdjusterDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner VoltageAdjusterUserDefined::declare()
{
	return BaseClassDefiner(VoltageAdjusterUserDefined::addConstructToMap, VoltageAdjusterUserDefined::addPrimitiveAssignFnsToMap, VoltageAdjusterUserDefined::addClassAssignFnsToMap, VoltageAdjusterUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* VoltageAdjusterUserDefined_factory()
	{
		return new VoltageAdjusterUserDefined;
	}
}
