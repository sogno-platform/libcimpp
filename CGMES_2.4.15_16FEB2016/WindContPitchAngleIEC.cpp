#include <sstream>
#include "IdentifiedObject.hpp"
#include "WindContPitchAngleIEC.hpp"

#include "WindGenTurbineType3IEC.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "AngleDegrees.hpp"
#include "AngleDegrees.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

WindContPitchAngleIEC::WindContPitchAngleIEC(): WindGenTurbineType3IEC(nullptr) {};

WindContPitchAngleIEC::~WindContPitchAngleIEC() {};



bool assign_WindContPitchAngleIEC_dthetamax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1)) {
                buffer >> element->dthetamax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPitchAngleIEC_dthetamin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1)) {
                buffer >> element->dthetamin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPitchAngleIEC_kic(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1)) {
                buffer >> element->kic;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPitchAngleIEC_kiomega(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1)) {
                buffer >> element->kiomega;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPitchAngleIEC_kpc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1)) {
                buffer >> element->kpc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPitchAngleIEC_kpomega(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1)) {
                buffer >> element->kpomega;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPitchAngleIEC_kpx(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1)) {
                buffer >> element->kpx;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPitchAngleIEC_thetamax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1)) {
                buffer >> element->thetamax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPitchAngleIEC_thetamin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1)) {
                buffer >> element->thetamin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_WindContPitchAngleIEC_ttheta(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1)) {
                buffer >> element->ttheta;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_WindContPitchAngleIEC_WindGenTurbineType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(WindContPitchAngleIEC* element = dynamic_cast<WindContPitchAngleIEC*>(BaseClass_ptr1)) {
                element->WindGenTurbineType3IEC = dynamic_cast<WindGenTurbineType3IEC*>(BaseClass_ptr2);
                if(element->WindGenTurbineType3IEC != nullptr)
                        return true;
        }
        return false;
}











namespace CIMPP {
	BaseClass* WindContPitchAngleIEC_factory() {
		return new WindContPitchAngleIEC;
	}
}

void WindContPitchAngleIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC"), &WindContPitchAngleIEC_factory));
}

void WindContPitchAngleIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.dthetamax"), &assign_WindContPitchAngleIEC_dthetamax));
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.dthetamin"), &assign_WindContPitchAngleIEC_dthetamin));
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.kic"), &assign_WindContPitchAngleIEC_kic));
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.kiomega"), &assign_WindContPitchAngleIEC_kiomega));
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.kpc"), &assign_WindContPitchAngleIEC_kpc));
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.kpomega"), &assign_WindContPitchAngleIEC_kpomega));
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.kpx"), &assign_WindContPitchAngleIEC_kpx));
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.thetamax"), &assign_WindContPitchAngleIEC_thetamax));
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.thetamin"), &assign_WindContPitchAngleIEC_thetamin));
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.ttheta"), &assign_WindContPitchAngleIEC_ttheta));
}

void WindContPitchAngleIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:WindContPitchAngleIEC.WindGenTurbineType3IEC"), &assign_WindContPitchAngleIEC_WindGenTurbineType3IEC));
										}

const char WindContPitchAngleIEC::debugName[] = "WindContPitchAngleIEC";
const char* WindContPitchAngleIEC::debugString()
{
	return WindContPitchAngleIEC::debugName;
}

const BaseClassDefiner WindContPitchAngleIEC::declare()
{
	return BaseClassDefiner(WindContPitchAngleIEC::addConstructToMap, WindContPitchAngleIEC::addPrimitiveAssignFnsToMap, WindContPitchAngleIEC::addClassAssignFnsToMap, WindContPitchAngleIEC::debugName);
}
