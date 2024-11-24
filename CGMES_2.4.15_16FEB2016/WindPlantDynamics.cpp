/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindPlantDynamics.hpp"

#include <algorithm>
#include <sstream>

#include "RemoteInputSignal.hpp"
#include "WindTurbineType3or4Dynamics.hpp"

using namespace CIMPP;

WindPlantDynamics::WindPlantDynamics() : RemoteInputSignal(nullptr) {};
WindPlantDynamics::~WindPlantDynamics() {};





bool assign_RemoteInputSignal_WindPlantDynamics(BaseClass*, BaseClass*);
bool assign_WindPlantDynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindPlantDynamics* element = dynamic_cast<WindPlantDynamics*>(BaseClass_ptr1);
	RemoteInputSignal* element2 = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->RemoteInputSignal != element2)
		{
			element->RemoteInputSignal = element2;
			return assign_RemoteInputSignal_WindPlantDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindTurbineType3or4Dynamics_WindPlantDynamics(BaseClass*, BaseClass*);
bool assign_WindPlantDynamics_WindTurbineType3or4Dynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindPlantDynamics* element = dynamic_cast<WindPlantDynamics*>(BaseClass_ptr1);
	WindTurbineType3or4Dynamics* element2 = dynamic_cast<WindTurbineType3or4Dynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->WindTurbineType3or4Dynamics.begin(), element->WindTurbineType3or4Dynamics.end(), element2) == element->WindTurbineType3or4Dynamics.end())
		{
			element->WindTurbineType3or4Dynamics.push_back(element2);
			return assign_WindTurbineType3or4Dynamics_WindPlantDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char WindPlantDynamics::debugName[] = "WindPlantDynamics";
const char* WindPlantDynamics::debugString() const
{
	return WindPlantDynamics::debugName;
}

void WindPlantDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindPlantDynamics"), &WindPlantDynamics_factory));
}

void WindPlantDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void WindPlantDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindPlantDynamics.RemoteInputSignal"), &assign_WindPlantDynamics_RemoteInputSignal));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantDynamics.WindTurbineType3or4Dynamics"), &assign_WindPlantDynamics_WindTurbineType3or4Dynamics));
}

const BaseClassDefiner WindPlantDynamics::declare()
{
	return BaseClassDefiner(WindPlantDynamics::addConstructToMap, WindPlantDynamics::addPrimitiveAssignFnsToMap, WindPlantDynamics::addClassAssignFnsToMap, WindPlantDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* WindPlantDynamics_factory()
	{
		return new WindPlantDynamics;
	}
}
