/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindTurbineType1or2Dynamics.hpp"

#include <algorithm>
#include <sstream>

#include "AsynchronousMachineDynamics.hpp"
#include "RemoteInputSignal.hpp"

using namespace CIMPP;

WindTurbineType1or2Dynamics::WindTurbineType1or2Dynamics() : AsynchronousMachineDynamics(nullptr), RemoteInputSignal(nullptr) {};
WindTurbineType1or2Dynamics::~WindTurbineType1or2Dynamics() {};





bool assign_AsynchronousMachineDynamics_WindTurbineType1or2Dynamics(BaseClass*, BaseClass*);
bool assign_WindTurbineType1or2Dynamics_AsynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType1or2Dynamics* element = dynamic_cast<WindTurbineType1or2Dynamics*>(BaseClass_ptr1);
	AsynchronousMachineDynamics* element2 = dynamic_cast<AsynchronousMachineDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->AsynchronousMachineDynamics != element2)
		{
			element->AsynchronousMachineDynamics = element2;
			return assign_AsynchronousMachineDynamics_WindTurbineType1or2Dynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_RemoteInputSignal_WindTurbineType1or2Dynamics(BaseClass*, BaseClass*);
bool assign_WindTurbineType1or2Dynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindTurbineType1or2Dynamics* element = dynamic_cast<WindTurbineType1or2Dynamics*>(BaseClass_ptr1);
	RemoteInputSignal* element2 = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->RemoteInputSignal != element2)
		{
			element->RemoteInputSignal = element2;
			return assign_RemoteInputSignal_WindTurbineType1or2Dynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char WindTurbineType1or2Dynamics::debugName[] = "WindTurbineType1or2Dynamics";
const char* WindTurbineType1or2Dynamics::debugString() const
{
	return WindTurbineType1or2Dynamics::debugName;
}

void WindTurbineType1or2Dynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindTurbineType1or2Dynamics"), &WindTurbineType1or2Dynamics_factory));
}

void WindTurbineType1or2Dynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindTurbineType1or2Dynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType1or2Dynamics.AsynchronousMachineDynamics"), &assign_WindTurbineType1or2Dynamics_AsynchronousMachineDynamics));
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType1or2Dynamics.RemoteInputSignal"), &assign_WindTurbineType1or2Dynamics_RemoteInputSignal));
}

const BaseClassDefiner WindTurbineType1or2Dynamics::declare()
{
	return BaseClassDefiner(WindTurbineType1or2Dynamics::addConstructToMap, WindTurbineType1or2Dynamics::addPrimitiveAssignFnsToMap, WindTurbineType1or2Dynamics::addClassAssignFnsToMap, WindTurbineType1or2Dynamics::debugName);
}

namespace CIMPP
{
	BaseClass* WindTurbineType1or2Dynamics_factory()
	{
		return new WindTurbineType1or2Dynamics;
	}
}
