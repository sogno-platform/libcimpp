#include <sstream>
#include "DynamicsFunctionBlock.hpp"
#include "WindPlantDynamics.hpp"

#include "RemoteInputSignal.hpp"
#include "WindTurbineType3or4Dynamics.hpp"

using namespace CIMPP;

WindPlantDynamics::WindPlantDynamics() {};

WindPlantDynamics::~WindPlantDynamics() {};


bool assign_RemoteInputSignal_WindPlantDynamics(BaseClass*, BaseClass*);
bool assign_WindPlantDynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindPlantDynamics* element = dynamic_cast<WindPlantDynamics*>(BaseClass_ptr1)) {
                element->RemoteInputSignal = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr2);
                if(element->RemoteInputSignal != nullptr)
                        return assign_RemoteInputSignal_WindPlantDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_WindPlantDynamics_WindTurbineType3or4Dynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindPlantDynamics* element = dynamic_cast<WindPlantDynamics*>(BaseClass_ptr1)) {
		if(dynamic_cast<WindTurbineType3or4Dynamics*>(BaseClass_ptr2) != nullptr) {
                        element->WindTurbineType3or4Dynamics.push_back(dynamic_cast<WindTurbineType3or4Dynamics*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}




namespace CIMPP {
	BaseClass* WindPlantDynamics_factory() {
		return new WindPlantDynamics;
	}
}

void WindPlantDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:WindPlantDynamics"), &WindPlantDynamics_factory));
}

void WindPlantDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void WindPlantDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:WindPlantDynamics.RemoteInputSignal"), &assign_WindPlantDynamics_RemoteInputSignal));
	assign_map.insert(std::make_pair(std::string("cim:WindPlantDynamics.WindTurbineType3or4Dynamics"), &assign_WindPlantDynamics_WindTurbineType3or4Dynamics));
}

const char WindPlantDynamics::debugName[] = "WindPlantDynamics";
const char* WindPlantDynamics::debugString()
{
	return WindPlantDynamics::debugName;
}

const BaseClassDefiner WindPlantDynamics::declare()
{
	return BaseClassDefiner(WindPlantDynamics::addConstructToMap, WindPlantDynamics::addPrimitiveAssignFnsToMap, WindPlantDynamics::addClassAssignFnsToMap, WindPlantDynamics::debugName);
}


