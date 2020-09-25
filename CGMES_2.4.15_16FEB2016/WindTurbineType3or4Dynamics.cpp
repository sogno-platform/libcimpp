#include <sstream>
#include "DynamicsFunctionBlock.hpp"
#include "WindTurbineType3or4Dynamics.hpp"

#include "EnergySource.hpp"
#include "RemoteInputSignal.hpp"
#include "WindPlantDynamics.hpp"

using namespace CIMPP;

WindTurbineType3or4Dynamics::WindTurbineType3or4Dynamics() {};

WindTurbineType3or4Dynamics::~WindTurbineType3or4Dynamics() {};


bool assign_EnergySource_WindTurbineType3or4Dynamics(BaseClass*, BaseClass*);
bool assign_WindTurbineType3or4Dynamics_EnergySource(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindTurbineType3or4Dynamics* element = dynamic_cast<WindTurbineType3or4Dynamics*>(BaseClass_ptr1)) {
                element->EnergySource = dynamic_cast<EnergySource*>(BaseClass_ptr2);
                if(element->EnergySource != nullptr)
                        return assign_EnergySource_WindTurbineType3or4Dynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_RemoteInputSignal_WindTurbineType3or4Dynamics(BaseClass*, BaseClass*);
bool assign_WindTurbineType3or4Dynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindTurbineType3or4Dynamics* element = dynamic_cast<WindTurbineType3or4Dynamics*>(BaseClass_ptr1)) {
                element->RemoteInputSignal = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr2);
                if(element->RemoteInputSignal != nullptr)
                        return assign_RemoteInputSignal_WindTurbineType3or4Dynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_WindPlantDynamics_WindTurbineType3or4Dynamics(BaseClass*, BaseClass*);
bool assign_WindTurbineType3or4Dynamics_WindPlantDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindTurbineType3or4Dynamics* element = dynamic_cast<WindTurbineType3or4Dynamics*>(BaseClass_ptr1)) {
                element->WindPlantDynamics = dynamic_cast<WindPlantDynamics*>(BaseClass_ptr2);
                if(element->WindPlantDynamics != nullptr)
                        return assign_WindPlantDynamics_WindTurbineType3or4Dynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}





namespace CIMPP {
	BaseClass* WindTurbineType3or4Dynamics_factory() {
		return new WindTurbineType3or4Dynamics;
	}
}

void WindTurbineType3or4Dynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:WindTurbineType3or4Dynamics"), &WindTurbineType3or4Dynamics_factory));
}

void WindTurbineType3or4Dynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
			}

void WindTurbineType3or4Dynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType3or4Dynamics.EnergySource"), &assign_WindTurbineType3or4Dynamics_EnergySource));
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType3or4Dynamics.RemoteInputSignal"), &assign_WindTurbineType3or4Dynamics_RemoteInputSignal));
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType3or4Dynamics.WindPlantDynamics"), &assign_WindTurbineType3or4Dynamics_WindPlantDynamics));
}

const char WindTurbineType3or4Dynamics::debugName[] = "WindTurbineType3or4Dynamics";
const char* WindTurbineType3or4Dynamics::debugString()
{
	return WindTurbineType3or4Dynamics::debugName;
}

const BaseClassDefiner WindTurbineType3or4Dynamics::declare()
{
	return BaseClassDefiner(WindTurbineType3or4Dynamics::addConstructToMap, WindTurbineType3or4Dynamics::addPrimitiveAssignFnsToMap, WindTurbineType3or4Dynamics::addClassAssignFnsToMap, WindTurbineType3or4Dynamics::debugName);
}


