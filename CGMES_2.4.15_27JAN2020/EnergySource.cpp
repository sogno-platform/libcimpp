#include <sstream>
#include "ConductingEquipment.hpp"
#include "EnergySource.hpp"

#include "EnergySchedulingType.hpp"
#include "Voltage.hpp"
#include "Resistance.hpp"
#include "Resistance.hpp"
#include "Resistance.hpp"
#include "AngleRadians.hpp"
#include "Voltage.hpp"
#include "Reactance.hpp"
#include "Reactance.hpp"
#include "Reactance.hpp"
#include "ActivePower.hpp"
#include "ReactivePower.hpp"
#include "WindTurbineType3or4Dynamics.hpp"

using namespace CIMPP;

EnergySource::EnergySource() {};

EnergySource::~EnergySource() {};


bool assign_EnergySchedulingType_EnergySource(BaseClass*, BaseClass*);
bool assign_EnergySource_EnergySchedulingType(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1)) {
                element->EnergySchedulingType = dynamic_cast<EnergySchedulingType*>(BaseClass_ptr2);
                if(element->EnergySchedulingType != nullptr)
                        return assign_EnergySchedulingType_EnergySource(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}












bool assign_EnergySource_WindTurbineType3or4Dynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1)) {
                element->WindTurbineType3or4Dynamics = dynamic_cast<WindTurbineType3or4Dynamics*>(BaseClass_ptr2);
                if(element->WindTurbineType3or4Dynamics != nullptr)
                        return true;
        }
        return false;
}



bool assign_EnergySource_nominalVoltage(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1)) {
                buffer >> element->nominalVoltage;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EnergySource_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1)) {
                buffer >> element->r;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EnergySource_r0(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1)) {
                buffer >> element->r0;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EnergySource_rn(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1)) {
                buffer >> element->rn;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EnergySource_voltageAngle(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1)) {
                buffer >> element->voltageAngle;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EnergySource_voltageMagnitude(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1)) {
                buffer >> element->voltageMagnitude;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EnergySource_x(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1)) {
                buffer >> element->x;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EnergySource_x0(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1)) {
                buffer >> element->x0;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EnergySource_xn(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1)) {
                buffer >> element->xn;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EnergySource_activePower(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1)) {
                buffer >> element->activePower;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_EnergySource_reactivePower(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(EnergySource* element = dynamic_cast<EnergySource*>(BaseClass_ptr1)) {
                buffer >> element->reactivePower;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


namespace CIMPP {
	BaseClass* EnergySource_factory() {
		return new EnergySource;
	}
}

void EnergySource::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:EnergySource"), &EnergySource_factory));
}

void EnergySource::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:EnergySource.nominalVoltage"), &assign_EnergySource_nominalVoltage));
	assign_map.insert(std::make_pair(std::string("cim:EnergySource.r"), &assign_EnergySource_r));
	assign_map.insert(std::make_pair(std::string("cim:EnergySource.r0"), &assign_EnergySource_r0));
	assign_map.insert(std::make_pair(std::string("cim:EnergySource.rn"), &assign_EnergySource_rn));
	assign_map.insert(std::make_pair(std::string("cim:EnergySource.voltageAngle"), &assign_EnergySource_voltageAngle));
	assign_map.insert(std::make_pair(std::string("cim:EnergySource.voltageMagnitude"), &assign_EnergySource_voltageMagnitude));
	assign_map.insert(std::make_pair(std::string("cim:EnergySource.x"), &assign_EnergySource_x));
	assign_map.insert(std::make_pair(std::string("cim:EnergySource.x0"), &assign_EnergySource_x0));
	assign_map.insert(std::make_pair(std::string("cim:EnergySource.xn"), &assign_EnergySource_xn));
	assign_map.insert(std::make_pair(std::string("cim:EnergySource.activePower"), &assign_EnergySource_activePower));
	assign_map.insert(std::make_pair(std::string("cim:EnergySource.reactivePower"), &assign_EnergySource_reactivePower));
	}

void EnergySource::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:EnergySource.EnergySchedulingType"), &assign_EnergySource_EnergySchedulingType));
												assign_map.insert(std::make_pair(std::string("cim:EnergySource.WindTurbineType3or4Dynamics"), &assign_EnergySource_WindTurbineType3or4Dynamics));
}

const char EnergySource::debugName[] = "EnergySource";
const char* EnergySource::debugString()
{
	return EnergySource::debugName;
}

const BaseClassDefiner EnergySource::declare()
{
	return BaseClassDefiner(EnergySource::addConstructToMap, EnergySource::addPrimitiveAssignFnsToMap, EnergySource::addClassAssignFnsToMap, EnergySource::debugName);
}


