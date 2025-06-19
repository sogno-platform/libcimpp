/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PowerSystemStabilizerDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "ExcitationSystemDynamics.hpp"
#include "RemoteInputSignal.hpp"

using namespace CIMPP;

PowerSystemStabilizerDynamics::PowerSystemStabilizerDynamics() : ExcitationSystemDynamics(nullptr) {}
PowerSystemStabilizerDynamics::~PowerSystemStabilizerDynamics() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PowerSystemStabilizerDynamics.ExcitationSystemDynamics", { CGMESProfile::DY, } },
	{ "cim:PowerSystemStabilizerDynamics.RemoteInputSignal", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
PowerSystemStabilizerDynamics::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PowerSystemStabilizerDynamics::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DynamicsFunctionBlock::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ExcitationSystemDynamics_PowerSystemStabilizerDynamics(BaseClass*, BaseClass*);
bool assign_PowerSystemStabilizerDynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PowerSystemStabilizerDynamics* element = dynamic_cast<PowerSystemStabilizerDynamics*>(BaseClass_ptr1);
	ExcitationSystemDynamics* element2 = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ExcitationSystemDynamics != element2)
		{
			element->ExcitationSystemDynamics = element2;
			return assign_ExcitationSystemDynamics_PowerSystemStabilizerDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_RemoteInputSignal_PowerSystemStabilizerDynamics(BaseClass*, BaseClass*);
bool assign_PowerSystemStabilizerDynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PowerSystemStabilizerDynamics* element = dynamic_cast<PowerSystemStabilizerDynamics*>(BaseClass_ptr1);
	RemoteInputSignal* element2 = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->RemoteInputSignal.begin(), element->RemoteInputSignal.end(), element2) == element->RemoteInputSignal.end())
		{
			element->RemoteInputSignal.push_back(element2);
			return assign_RemoteInputSignal_PowerSystemStabilizerDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_PowerSystemStabilizerDynamics_ExcitationSystemDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const PowerSystemStabilizerDynamics* element = dynamic_cast<const PowerSystemStabilizerDynamics*>(BaseClass_ptr1);
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


const char PowerSystemStabilizerDynamics::debugName[] = "PowerSystemStabilizerDynamics";
const char* PowerSystemStabilizerDynamics::debugString() const
{
	return PowerSystemStabilizerDynamics::debugName;
}

void PowerSystemStabilizerDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:PowerSystemStabilizerDynamics", &PowerSystemStabilizerDynamics_factory);
}

void PowerSystemStabilizerDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void PowerSystemStabilizerDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:PowerSystemStabilizerDynamics.ExcitationSystemDynamics", &assign_PowerSystemStabilizerDynamics_ExcitationSystemDynamics);
	assign_map.emplace("cim:PowerSystemStabilizerDynamics.RemoteInputSignal", &assign_PowerSystemStabilizerDynamics_RemoteInputSignal);
}

void PowerSystemStabilizerDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void PowerSystemStabilizerDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:PowerSystemStabilizerDynamics.ExcitationSystemDynamics", &get_PowerSystemStabilizerDynamics_ExcitationSystemDynamics);
}

void PowerSystemStabilizerDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PowerSystemStabilizerDynamics::declare()
{
	return BaseClassDefiner(PowerSystemStabilizerDynamics::addConstructToMap, PowerSystemStabilizerDynamics::addPrimitiveAssignFnsToMap, PowerSystemStabilizerDynamics::addClassAssignFnsToMap, PowerSystemStabilizerDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* PowerSystemStabilizerDynamics_factory()
	{
		return new PowerSystemStabilizerDynamics;
	}
}
