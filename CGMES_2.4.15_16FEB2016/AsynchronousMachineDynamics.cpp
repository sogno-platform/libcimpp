/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AsynchronousMachineDynamics.hpp"

#include <algorithm>
#include <sstream>

#include "AsynchronousMachine.hpp"
#include "MechanicalLoadDynamics.hpp"
#include "TurbineGovernorDynamics.hpp"
#include "WindTurbineType1or2Dynamics.hpp"

using namespace CIMPP;

AsynchronousMachineDynamics::AsynchronousMachineDynamics() : AsynchronousMachine(nullptr), MechanicalLoadDynamics(nullptr), TurbineGovernorDynamics(nullptr), WindTurbineType1or2Dynamics(nullptr) {};
AsynchronousMachineDynamics::~AsynchronousMachineDynamics() {};







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

const char AsynchronousMachineDynamics::debugName[] = "AsynchronousMachineDynamics";
const char* AsynchronousMachineDynamics::debugString() const
{
	return AsynchronousMachineDynamics::debugName;
}

void AsynchronousMachineDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:AsynchronousMachineDynamics"), &AsynchronousMachineDynamics_factory));
}

void AsynchronousMachineDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void AsynchronousMachineDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachineDynamics.AsynchronousMachine"), &assign_AsynchronousMachineDynamics_AsynchronousMachine));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachineDynamics.MechanicalLoadDynamics"), &assign_AsynchronousMachineDynamics_MechanicalLoadDynamics));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachineDynamics.TurbineGovernorDynamics"), &assign_AsynchronousMachineDynamics_TurbineGovernorDynamics));
	assign_map.insert(std::make_pair(std::string("cim:AsynchronousMachineDynamics.WindTurbineType1or2Dynamics"), &assign_AsynchronousMachineDynamics_WindTurbineType1or2Dynamics));
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
