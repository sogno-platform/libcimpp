/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SynchronousMachineUserDefined.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"

using namespace CIMPP;

SynchronousMachineUserDefined::SynchronousMachineUserDefined() {}
SynchronousMachineUserDefined::~SynchronousMachineUserDefined() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:SynchronousMachineUserDefined.ProprietaryParameterDynamics", { CGMESProfile::DY, } },
	{ "cim:SynchronousMachineUserDefined.proprietary", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
SynchronousMachineUserDefined::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
SynchronousMachineUserDefined::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = SynchronousMachineDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ProprietaryParameterDynamics_SynchronousMachineUserDefined(BaseClass*, BaseClass*);
bool assign_SynchronousMachineUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SynchronousMachineUserDefined* element = dynamic_cast<SynchronousMachineUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_SynchronousMachineUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SynchronousMachineUserDefined_proprietary(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	SynchronousMachineUserDefined* element = dynamic_cast<SynchronousMachineUserDefined*>(BaseClass_ptr1);
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


bool get_SynchronousMachineUserDefined_proprietary(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const SynchronousMachineUserDefined* element = dynamic_cast<const SynchronousMachineUserDefined*>(BaseClass_ptr1);
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

const char SynchronousMachineUserDefined::debugName[] = "SynchronousMachineUserDefined";
const char* SynchronousMachineUserDefined::debugString() const
{
	return SynchronousMachineUserDefined::debugName;
}

void SynchronousMachineUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:SynchronousMachineUserDefined", &SynchronousMachineUserDefined_factory);
}

void SynchronousMachineUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:SynchronousMachineUserDefined.proprietary", &assign_SynchronousMachineUserDefined_proprietary);
}

void SynchronousMachineUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:SynchronousMachineUserDefined.ProprietaryParameterDynamics", &assign_SynchronousMachineUserDefined_ProprietaryParameterDynamics);
}

void SynchronousMachineUserDefined::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SynchronousMachineDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:SynchronousMachineUserDefined.proprietary", &get_SynchronousMachineUserDefined_proprietary);
}

void SynchronousMachineUserDefined::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	SynchronousMachineDynamics::addClassGetFnsToMap(get_map);
}

void SynchronousMachineUserDefined::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	SynchronousMachineDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner SynchronousMachineUserDefined::declare()
{
	return BaseClassDefiner(SynchronousMachineUserDefined::addConstructToMap, SynchronousMachineUserDefined::addPrimitiveAssignFnsToMap, SynchronousMachineUserDefined::addClassAssignFnsToMap, SynchronousMachineUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* SynchronousMachineUserDefined_factory()
	{
		return new SynchronousMachineUserDefined;
	}
}
