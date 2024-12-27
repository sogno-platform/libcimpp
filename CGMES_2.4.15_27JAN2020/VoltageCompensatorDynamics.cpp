/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VoltageCompensatorDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ExcitationSystemDynamics.hpp"
#include "RemoteInputSignal.hpp"

using namespace CIMPP;

VoltageCompensatorDynamics::VoltageCompensatorDynamics() : ExcitationSystemDynamics(nullptr), RemoteInputSignal(nullptr) {};
VoltageCompensatorDynamics::~VoltageCompensatorDynamics() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:VoltageCompensatorDynamics.ExcitationSystemDynamics", { CGMESProfile::DY, } },
	{ "cim:VoltageCompensatorDynamics.RemoteInputSignal", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
VoltageCompensatorDynamics::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
VoltageCompensatorDynamics::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DynamicsFunctionBlock::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



bool assign_ExcitationSystemDynamics_VoltageCompensatorDynamics(BaseClass*, BaseClass*);
bool assign_VoltageCompensatorDynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VoltageCompensatorDynamics* element = dynamic_cast<VoltageCompensatorDynamics*>(BaseClass_ptr1);
	ExcitationSystemDynamics* element2 = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ExcitationSystemDynamics != element2)
		{
			element->ExcitationSystemDynamics = element2;
			return assign_ExcitationSystemDynamics_VoltageCompensatorDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_RemoteInputSignal_VoltageCompensatorDynamics(BaseClass*, BaseClass*);
bool assign_VoltageCompensatorDynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VoltageCompensatorDynamics* element = dynamic_cast<VoltageCompensatorDynamics*>(BaseClass_ptr1);
	RemoteInputSignal* element2 = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->RemoteInputSignal != element2)
		{
			element->RemoteInputSignal = element2;
			return assign_RemoteInputSignal_VoltageCompensatorDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


bool get_VoltageCompensatorDynamics_ExcitationSystemDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const VoltageCompensatorDynamics* element = dynamic_cast<const VoltageCompensatorDynamics*>(BaseClass_ptr1))
	{
		if (element->ExcitationSystemDynamics != 0)
		{
			BaseClass_list.push_back(element->ExcitationSystemDynamics);
			return true;
		}
	}
	return false;
}


const char VoltageCompensatorDynamics::debugName[] = "VoltageCompensatorDynamics";
const char* VoltageCompensatorDynamics::debugString() const
{
	return VoltageCompensatorDynamics::debugName;
}

void VoltageCompensatorDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:VoltageCompensatorDynamics"), &VoltageCompensatorDynamics_factory));
}

void VoltageCompensatorDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void VoltageCompensatorDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:VoltageCompensatorDynamics.ExcitationSystemDynamics"), &assign_VoltageCompensatorDynamics_ExcitationSystemDynamics));
	assign_map.insert(std::make_pair(std::string("cim:VoltageCompensatorDynamics.RemoteInputSignal"), &assign_VoltageCompensatorDynamics_RemoteInputSignal));
}

void VoltageCompensatorDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void VoltageCompensatorDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:VoltageCompensatorDynamics.ExcitationSystemDynamics", &get_VoltageCompensatorDynamics_ExcitationSystemDynamics);
}

void VoltageCompensatorDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner VoltageCompensatorDynamics::declare()
{
	return BaseClassDefiner(VoltageCompensatorDynamics::addConstructToMap, VoltageCompensatorDynamics::addPrimitiveAssignFnsToMap, VoltageCompensatorDynamics::addClassAssignFnsToMap, VoltageCompensatorDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* VoltageCompensatorDynamics_factory()
	{
		return new VoltageCompensatorDynamics;
	}
}
