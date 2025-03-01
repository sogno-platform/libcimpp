/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PFVArControllerType2Dynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ExcitationSystemDynamics.hpp"

using namespace CIMPP;

PFVArControllerType2Dynamics::PFVArControllerType2Dynamics() : ExcitationSystemDynamics(nullptr) {}
PFVArControllerType2Dynamics::~PFVArControllerType2Dynamics() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PFVArControllerType2Dynamics.ExcitationSystemDynamics", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
PFVArControllerType2Dynamics::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PFVArControllerType2Dynamics::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DynamicsFunctionBlock::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ExcitationSystemDynamics_PFVArControllerType2Dynamics(BaseClass*, BaseClass*);
bool assign_PFVArControllerType2Dynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PFVArControllerType2Dynamics* element = dynamic_cast<PFVArControllerType2Dynamics*>(BaseClass_ptr1);
	ExcitationSystemDynamics* element2 = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ExcitationSystemDynamics != element2)
		{
			element->ExcitationSystemDynamics = element2;
			return assign_ExcitationSystemDynamics_PFVArControllerType2Dynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_PFVArControllerType2Dynamics_ExcitationSystemDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const PFVArControllerType2Dynamics* element = dynamic_cast<const PFVArControllerType2Dynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->ExcitationSystemDynamics != 0)
		{
			BaseClass_list.push_back(element->ExcitationSystemDynamics);
			return true;
		}
	}
	return false;
}

const char PFVArControllerType2Dynamics::debugName[] = "PFVArControllerType2Dynamics";
const char* PFVArControllerType2Dynamics::debugString() const
{
	return PFVArControllerType2Dynamics::debugName;
}

void PFVArControllerType2Dynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:PFVArControllerType2Dynamics", &PFVArControllerType2Dynamics_factory);
}

void PFVArControllerType2Dynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void PFVArControllerType2Dynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:PFVArControllerType2Dynamics.ExcitationSystemDynamics", &assign_PFVArControllerType2Dynamics_ExcitationSystemDynamics);
}

void PFVArControllerType2Dynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void PFVArControllerType2Dynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:PFVArControllerType2Dynamics.ExcitationSystemDynamics", &get_PFVArControllerType2Dynamics_ExcitationSystemDynamics);
}

void PFVArControllerType2Dynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PFVArControllerType2Dynamics::declare()
{
	return BaseClassDefiner(PFVArControllerType2Dynamics::addConstructToMap, PFVArControllerType2Dynamics::addPrimitiveAssignFnsToMap, PFVArControllerType2Dynamics::addClassAssignFnsToMap, PFVArControllerType2Dynamics::debugName);
}

namespace CIMPP
{
	BaseClass* PFVArControllerType2Dynamics_factory()
	{
		return new PFVArControllerType2Dynamics;
	}
}
