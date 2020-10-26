#include <sstream>
#include "IdentifiedObject.hpp"
#include "RemoteInputSignal.hpp"

#include "Terminal.hpp"
#include "RemoteSignalKind.hpp"
#include "PFVArControllerType1Dynamics.hpp"
#include "UnderexcitationLimiterDynamics.hpp"
#include "WindTurbineType1or2Dynamics.hpp"
#include "VoltageCompensatorDynamics.hpp"
#include "PowerSystemStabilizerDynamics.hpp"
#include "DiscontinuousExcitationControlDynamics.hpp"
#include "WindTurbineType3or4Dynamics.hpp"
#include "WindPlantDynamics.hpp"

using namespace CIMPP;

RemoteInputSignal::RemoteInputSignal(): Terminal(nullptr), PFVArControllerType1Dynamics(nullptr), UnderexcitationLimiterDynamics(nullptr), WindTurbineType1or2Dynamics(nullptr), VoltageCompensatorDynamics(nullptr), PowerSystemStabilizerDynamics(nullptr), DiscontinuousExcitationControlDynamics(nullptr), WindTurbineType3or4Dynamics(nullptr), WindPlantDynamics(nullptr) {};

RemoteInputSignal::~RemoteInputSignal() {};


bool assign_Terminal_RemoteInputSignal(BaseClass*, BaseClass*);
bool assign_RemoteInputSignal_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(RemoteInputSignal* element = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr1)) {
                element->Terminal = dynamic_cast<Terminal*>(BaseClass_ptr2);
                if(element->Terminal != nullptr)
                        return assign_Terminal_RemoteInputSignal(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}


bool assign_PFVArControllerType1Dynamics_RemoteInputSignal(BaseClass*, BaseClass*);
bool assign_RemoteInputSignal_PFVArControllerType1Dynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(RemoteInputSignal* element = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr1)) {
                element->PFVArControllerType1Dynamics = dynamic_cast<PFVArControllerType1Dynamics*>(BaseClass_ptr2);
                if(element->PFVArControllerType1Dynamics != nullptr)
                        return assign_PFVArControllerType1Dynamics_RemoteInputSignal(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_UnderexcitationLimiterDynamics_RemoteInputSignal(BaseClass*, BaseClass*);
bool assign_RemoteInputSignal_UnderexcitationLimiterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(RemoteInputSignal* element = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr1)) {
                element->UnderexcitationLimiterDynamics = dynamic_cast<UnderexcitationLimiterDynamics*>(BaseClass_ptr2);
                if(element->UnderexcitationLimiterDynamics != nullptr)
                        return assign_UnderexcitationLimiterDynamics_RemoteInputSignal(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_RemoteInputSignal_WindTurbineType1or2Dynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(RemoteInputSignal* element = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr1)) {
                element->WindTurbineType1or2Dynamics = dynamic_cast<WindTurbineType1or2Dynamics*>(BaseClass_ptr2);
                if(element->WindTurbineType1or2Dynamics != nullptr)
                        return true;
        }
        return false;
}

bool assign_VoltageCompensatorDynamics_RemoteInputSignal(BaseClass*, BaseClass*);
bool assign_RemoteInputSignal_VoltageCompensatorDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(RemoteInputSignal* element = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr1)) {
                element->VoltageCompensatorDynamics = dynamic_cast<VoltageCompensatorDynamics*>(BaseClass_ptr2);
                if(element->VoltageCompensatorDynamics != nullptr)
                        return assign_VoltageCompensatorDynamics_RemoteInputSignal(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_PowerSystemStabilizerDynamics_RemoteInputSignal(BaseClass*, BaseClass*);
bool assign_RemoteInputSignal_PowerSystemStabilizerDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(RemoteInputSignal* element = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr1)) {
                element->PowerSystemStabilizerDynamics = dynamic_cast<PowerSystemStabilizerDynamics*>(BaseClass_ptr2);
                if(element->PowerSystemStabilizerDynamics != nullptr)
                        return assign_PowerSystemStabilizerDynamics_RemoteInputSignal(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_DiscontinuousExcitationControlDynamics_RemoteInputSignal(BaseClass*, BaseClass*);
bool assign_RemoteInputSignal_DiscontinuousExcitationControlDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(RemoteInputSignal* element = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr1)) {
                element->DiscontinuousExcitationControlDynamics = dynamic_cast<DiscontinuousExcitationControlDynamics*>(BaseClass_ptr2);
                if(element->DiscontinuousExcitationControlDynamics != nullptr)
                        return assign_DiscontinuousExcitationControlDynamics_RemoteInputSignal(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_RemoteInputSignal_WindTurbineType3or4Dynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(RemoteInputSignal* element = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr1)) {
                element->WindTurbineType3or4Dynamics = dynamic_cast<WindTurbineType3or4Dynamics*>(BaseClass_ptr2);
                if(element->WindTurbineType3or4Dynamics != nullptr)
                        return true;
        }
        return false;
}

bool assign_RemoteInputSignal_WindPlantDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(RemoteInputSignal* element = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr1)) {
                element->WindPlantDynamics = dynamic_cast<WindPlantDynamics*>(BaseClass_ptr2);
                if(element->WindPlantDynamics != nullptr)
                        return true;
        }
        return false;
}



bool assign_RemoteInputSignal_remoteSignalType(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(RemoteInputSignal* element = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr1)) {
                buffer >> element->remoteSignalType;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}









namespace CIMPP {
	BaseClass* RemoteInputSignal_factory() {
		return new RemoteInputSignal;
	}
}

void RemoteInputSignal::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:RemoteInputSignal"), &RemoteInputSignal_factory));
}

void RemoteInputSignal::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:RemoteInputSignal.remoteSignalType"), &assign_RemoteInputSignal_remoteSignalType));
								}

void RemoteInputSignal::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:RemoteInputSignal.Terminal"), &assign_RemoteInputSignal_Terminal));
		assign_map.insert(std::make_pair(std::string("cim:RemoteInputSignal.PFVArControllerType1Dynamics"), &assign_RemoteInputSignal_PFVArControllerType1Dynamics));
	assign_map.insert(std::make_pair(std::string("cim:RemoteInputSignal.UnderexcitationLimiterDynamics"), &assign_RemoteInputSignal_UnderexcitationLimiterDynamics));
	assign_map.insert(std::make_pair(std::string("cim:RemoteInputSignal.WindTurbineType1or2Dynamics"), &assign_RemoteInputSignal_WindTurbineType1or2Dynamics));
	assign_map.insert(std::make_pair(std::string("cim:RemoteInputSignal.VoltageCompensatorDynamics"), &assign_RemoteInputSignal_VoltageCompensatorDynamics));
	assign_map.insert(std::make_pair(std::string("cim:RemoteInputSignal.PowerSystemStabilizerDynamics"), &assign_RemoteInputSignal_PowerSystemStabilizerDynamics));
	assign_map.insert(std::make_pair(std::string("cim:RemoteInputSignal.DiscontinuousExcitationControlDynamics"), &assign_RemoteInputSignal_DiscontinuousExcitationControlDynamics));
	assign_map.insert(std::make_pair(std::string("cim:RemoteInputSignal.WindTurbineType3or4Dynamics"), &assign_RemoteInputSignal_WindTurbineType3or4Dynamics));
	assign_map.insert(std::make_pair(std::string("cim:RemoteInputSignal.WindPlantDynamics"), &assign_RemoteInputSignal_WindPlantDynamics));
}

const char RemoteInputSignal::debugName[] = "RemoteInputSignal";
const char* RemoteInputSignal::debugString()
{
	return RemoteInputSignal::debugName;
}

const BaseClassDefiner RemoteInputSignal::declare()
{
	return BaseClassDefiner(RemoteInputSignal::addConstructToMap, RemoteInputSignal::addPrimitiveAssignFnsToMap, RemoteInputSignal::addClassAssignFnsToMap, RemoteInputSignal::debugName);
}


