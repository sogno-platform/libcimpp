/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AsynchronousMachineDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "AsynchronousMachine.hpp"
#include "MechanicalLoadDynamics.hpp"
#include "TurbineGovernorDynamics.hpp"
#include "WindTurbineType1or2Dynamics.hpp"

using namespace CIMPP;

AsynchronousMachineDynamics::AsynchronousMachineDynamics() : AsynchronousMachine(nullptr), MechanicalLoadDynamics(nullptr), TurbineGovernorDynamics(nullptr), WindTurbineType1or2Dynamics(nullptr) {}
AsynchronousMachineDynamics::~AsynchronousMachineDynamics() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:AsynchronousMachineDynamics.AsynchronousMachine", { CGMESProfile::DY, } },
	{ "cim:AsynchronousMachineDynamics.MechanicalLoadDynamics", { CGMESProfile::DY, } },
	{ "cim:AsynchronousMachineDynamics.TurbineGovernorDynamics", { CGMESProfile::DY, } },
	{ "cim:AsynchronousMachineDynamics.WindTurbineType1or2Dynamics", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
AsynchronousMachineDynamics::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
AsynchronousMachineDynamics::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = RotatingMachineDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_AsynchronousMachine_AsynchronousMachineDynamics(BaseClass*, BaseClass*);
bool assign_AsynchronousMachineDynamics_AsynchronousMachine(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AsynchronousMachineDynamics* element = dynamic_cast<AsynchronousMachineDynamics*>(BaseClass_ptr1);
	AsynchronousMachine* element2 = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->AsynchronousMachine != element2)
		{
			element->AsynchronousMachine = element2;
			return assign_AsynchronousMachine_AsynchronousMachineDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_MechanicalLoadDynamics_AsynchronousMachineDynamics(BaseClass*, BaseClass*);
bool assign_AsynchronousMachineDynamics_MechanicalLoadDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AsynchronousMachineDynamics* element = dynamic_cast<AsynchronousMachineDynamics*>(BaseClass_ptr1);
	MechanicalLoadDynamics* element2 = dynamic_cast<MechanicalLoadDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->MechanicalLoadDynamics != element2)
		{
			element->MechanicalLoadDynamics = element2;
			return assign_MechanicalLoadDynamics_AsynchronousMachineDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_TurbineGovernorDynamics_AsynchronousMachineDynamics(BaseClass*, BaseClass*);
bool assign_AsynchronousMachineDynamics_TurbineGovernorDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AsynchronousMachineDynamics* element = dynamic_cast<AsynchronousMachineDynamics*>(BaseClass_ptr1);
	TurbineGovernorDynamics* element2 = dynamic_cast<TurbineGovernorDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->TurbineGovernorDynamics != element2)
		{
			element->TurbineGovernorDynamics = element2;
			return assign_TurbineGovernorDynamics_AsynchronousMachineDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindTurbineType1or2Dynamics_AsynchronousMachineDynamics(BaseClass*, BaseClass*);
bool assign_AsynchronousMachineDynamics_WindTurbineType1or2Dynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AsynchronousMachineDynamics* element = dynamic_cast<AsynchronousMachineDynamics*>(BaseClass_ptr1);
	WindTurbineType1or2Dynamics* element2 = dynamic_cast<WindTurbineType1or2Dynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType1or2Dynamics != element2)
		{
			element->WindTurbineType1or2Dynamics = element2;
			return assign_WindTurbineType1or2Dynamics_AsynchronousMachineDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_AsynchronousMachineDynamics_AsynchronousMachine(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const AsynchronousMachineDynamics* element = dynamic_cast<const AsynchronousMachineDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->AsynchronousMachine != 0)
		{
			BaseClass_list.push_back(element->AsynchronousMachine);
			return true;
		}
	}
	return false;
}




const char AsynchronousMachineDynamics::debugName[] = "AsynchronousMachineDynamics";
const char* AsynchronousMachineDynamics::debugString() const
{
	return AsynchronousMachineDynamics::debugName;
}

void AsynchronousMachineDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:AsynchronousMachineDynamics", &AsynchronousMachineDynamics_factory);
}

void AsynchronousMachineDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void AsynchronousMachineDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:AsynchronousMachineDynamics.AsynchronousMachine", &assign_AsynchronousMachineDynamics_AsynchronousMachine);
	assign_map.emplace("cim:AsynchronousMachineDynamics.MechanicalLoadDynamics", &assign_AsynchronousMachineDynamics_MechanicalLoadDynamics);
	assign_map.emplace("cim:AsynchronousMachineDynamics.TurbineGovernorDynamics", &assign_AsynchronousMachineDynamics_TurbineGovernorDynamics);
	assign_map.emplace("cim:AsynchronousMachineDynamics.WindTurbineType1or2Dynamics", &assign_AsynchronousMachineDynamics_WindTurbineType1or2Dynamics);
}

void AsynchronousMachineDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RotatingMachineDynamics::addPrimitiveGetFnsToMap(get_map);
}

void AsynchronousMachineDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	RotatingMachineDynamics::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:AsynchronousMachineDynamics.AsynchronousMachine", &get_AsynchronousMachineDynamics_AsynchronousMachine);
}

void AsynchronousMachineDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RotatingMachineDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner AsynchronousMachineDynamics::declare()
{
	return BaseClassDefiner(AsynchronousMachineDynamics::addConstructToMap, AsynchronousMachineDynamics::addPrimitiveAssignFnsToMap, AsynchronousMachineDynamics::addClassAssignFnsToMap, AsynchronousMachineDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* AsynchronousMachineDynamics_factory()
	{
		return new AsynchronousMachineDynamics;
	}
}
