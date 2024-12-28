/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VoltageAdjusterDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PFVArControllerType1Dynamics.hpp"

using namespace CIMPP;

VoltageAdjusterDynamics::VoltageAdjusterDynamics() : PFVArControllerType1Dynamics(nullptr) {};
VoltageAdjusterDynamics::~VoltageAdjusterDynamics() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:VoltageAdjusterDynamics.PFVArControllerType1Dynamics", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
VoltageAdjusterDynamics::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
VoltageAdjusterDynamics::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DynamicsFunctionBlock::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



bool assign_PFVArControllerType1Dynamics_VoltageAdjusterDynamics(BaseClass*, BaseClass*);
bool assign_VoltageAdjusterDynamics_PFVArControllerType1Dynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VoltageAdjusterDynamics* element = dynamic_cast<VoltageAdjusterDynamics*>(BaseClass_ptr1);
	PFVArControllerType1Dynamics* element2 = dynamic_cast<PFVArControllerType1Dynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PFVArControllerType1Dynamics != element2)
		{
			element->PFVArControllerType1Dynamics = element2;
			return assign_PFVArControllerType1Dynamics_VoltageAdjusterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


bool get_VoltageAdjusterDynamics_PFVArControllerType1Dynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const VoltageAdjusterDynamics* element = dynamic_cast<const VoltageAdjusterDynamics*>(BaseClass_ptr1))
	{
		if (element->PFVArControllerType1Dynamics != 0)
		{
			BaseClass_list.push_back(element->PFVArControllerType1Dynamics);
			return true;
		}
	}
	return false;
}


const char VoltageAdjusterDynamics::debugName[] = "VoltageAdjusterDynamics";
const char* VoltageAdjusterDynamics::debugString() const
{
	return VoltageAdjusterDynamics::debugName;
}

void VoltageAdjusterDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:VoltageAdjusterDynamics"), &VoltageAdjusterDynamics_factory));
}

void VoltageAdjusterDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void VoltageAdjusterDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:VoltageAdjusterDynamics.PFVArControllerType1Dynamics"), &assign_VoltageAdjusterDynamics_PFVArControllerType1Dynamics));
}

void VoltageAdjusterDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void VoltageAdjusterDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:VoltageAdjusterDynamics.PFVArControllerType1Dynamics", &get_VoltageAdjusterDynamics_PFVArControllerType1Dynamics);
}

void VoltageAdjusterDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner VoltageAdjusterDynamics::declare()
{
	return BaseClassDefiner(VoltageAdjusterDynamics::addConstructToMap, VoltageAdjusterDynamics::addPrimitiveAssignFnsToMap, VoltageAdjusterDynamics::addClassAssignFnsToMap, VoltageAdjusterDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* VoltageAdjusterDynamics_factory()
	{
		return new VoltageAdjusterDynamics;
	}
}
