#include <sstream>
#include "DynamicsFunctionBlock.hpp"
#include "WindTurbineType1or2Dynamics.hpp"

#include "RemoteInputSignal.hpp"
#include "AsynchronousMachineDynamics.hpp"

using namespace CIMPP;

WindTurbineType1or2Dynamics::WindTurbineType1or2Dynamics() {};

WindTurbineType1or2Dynamics::~WindTurbineType1or2Dynamics() {};


bool assign_RemoteInputSignal_WindTurbineType1or2Dynamics(BaseClass*, BaseClass*);
bool assign_WindTurbineType1or2Dynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindTurbineType1or2Dynamics* element = dynamic_cast<WindTurbineType1or2Dynamics*>(BaseClass_ptr1)) {
                element->RemoteInputSignal = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr2);
                if(element->RemoteInputSignal != nullptr)
                        return assign_RemoteInputSignal_WindTurbineType1or2Dynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_AsynchronousMachineDynamics_WindTurbineType1or2Dynamics(BaseClass*, BaseClass*);
bool assign_WindTurbineType1or2Dynamics_AsynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindTurbineType1or2Dynamics* element = dynamic_cast<WindTurbineType1or2Dynamics*>(BaseClass_ptr1)) {
                element->AsynchronousMachineDynamics = dynamic_cast<AsynchronousMachineDynamics*>(BaseClass_ptr2);
                if(element->AsynchronousMachineDynamics != nullptr)
                        return assign_AsynchronousMachineDynamics_WindTurbineType1or2Dynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}




namespace CIMPP {
	BaseClass* WindTurbineType1or2Dynamics_factory() {
		return new WindTurbineType1or2Dynamics;
	}
}

void WindTurbineType1or2Dynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:WindTurbineType1or2Dynamics"), &WindTurbineType1or2Dynamics_factory));
}

void WindTurbineType1or2Dynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void WindTurbineType1or2Dynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType1or2Dynamics.RemoteInputSignal"), &assign_WindTurbineType1or2Dynamics_RemoteInputSignal));
	assign_map.insert(std::make_pair(std::string("cim:WindTurbineType1or2Dynamics.AsynchronousMachineDynamics"), &assign_WindTurbineType1or2Dynamics_AsynchronousMachineDynamics));
}

const char WindTurbineType1or2Dynamics::debugName[] = "WindTurbineType1or2Dynamics";
const char* WindTurbineType1or2Dynamics::debugString()
{
	return WindTurbineType1or2Dynamics::debugName;
}

const BaseClassDefiner WindTurbineType1or2Dynamics::declare()
{
	return BaseClassDefiner(WindTurbineType1or2Dynamics::addConstructToMap, WindTurbineType1or2Dynamics::addPrimitiveAssignFnsToMap, WindTurbineType1or2Dynamics::addClassAssignFnsToMap, WindTurbineType1or2Dynamics::debugName);
}


