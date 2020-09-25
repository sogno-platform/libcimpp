#include <sstream>
#include "TurbineGovernorDynamics.hpp"
#include "GovHydroWPID.hpp"

#include "ActivePower.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

GovHydroWPID::GovHydroWPID() {};

GovHydroWPID::~GovHydroWPID() {};

























bool assign_GovHydroWPID_mwbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1)) {
                buffer >> element->mwbase;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroWPID_treg(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1)) {
                buffer >> element->treg;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroWPID_reg(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1)) {
                buffer >> element->reg;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroWPID_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1)) {
                buffer >> element->kp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroWPID_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1)) {
                buffer >> element->ki;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroWPID_kd(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1)) {
                buffer >> element->kd;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroWPID_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1)) {
                buffer >> element->ta;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroWPID_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1)) {
                buffer >> element->tb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroWPID_velmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1)) {
                buffer >> element->velmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroWPID_velmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1)) {
                buffer >> element->velmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroWPID_gatmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1)) {
                buffer >> element->gatmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroWPID_gatmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1)) {
                buffer >> element->gatmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroWPID_tw(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1)) {
                buffer >> element->tw;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroWPID_pmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1)) {
                buffer >> element->pmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroWPID_pmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1)) {
                buffer >> element->pmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroWPID_d(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1)) {
                buffer >> element->d;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroWPID_gv3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1)) {
                buffer >> element->gv3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroWPID_gv1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1)) {
                buffer >> element->gv1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroWPID_pgv1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1)) {
                buffer >> element->pgv1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroWPID_gv2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1)) {
                buffer >> element->gv2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroWPID_pgv2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1)) {
                buffer >> element->pgv2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroWPID_pgv3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroWPID* element = dynamic_cast<GovHydroWPID*>(BaseClass_ptr1)) {
                buffer >> element->pgv3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* GovHydroWPID_factory() {
		return new GovHydroWPID;
	}
}

void GovHydroWPID::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:GovHydroWPID"), &GovHydroWPID_factory));
}

void GovHydroWPID::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.mwbase"), &assign_GovHydroWPID_mwbase));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.treg"), &assign_GovHydroWPID_treg));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.reg"), &assign_GovHydroWPID_reg));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.kp"), &assign_GovHydroWPID_kp));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.ki"), &assign_GovHydroWPID_ki));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.kd"), &assign_GovHydroWPID_kd));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.ta"), &assign_GovHydroWPID_ta));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.tb"), &assign_GovHydroWPID_tb));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.velmax"), &assign_GovHydroWPID_velmax));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.velmin"), &assign_GovHydroWPID_velmin));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.gatmax"), &assign_GovHydroWPID_gatmax));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.gatmin"), &assign_GovHydroWPID_gatmin));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.tw"), &assign_GovHydroWPID_tw));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.pmax"), &assign_GovHydroWPID_pmax));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.pmin"), &assign_GovHydroWPID_pmin));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.d"), &assign_GovHydroWPID_d));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.gv3"), &assign_GovHydroWPID_gv3));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.gv1"), &assign_GovHydroWPID_gv1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.pgv1"), &assign_GovHydroWPID_pgv1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.gv2"), &assign_GovHydroWPID_gv2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.pgv2"), &assign_GovHydroWPID_pgv2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroWPID.pgv3"), &assign_GovHydroWPID_pgv3));
}

void GovHydroWPID::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																						}

const char GovHydroWPID::debugName[] = "GovHydroWPID";
const char* GovHydroWPID::debugString()
{
	return GovHydroWPID::debugName;
}

const BaseClassDefiner GovHydroWPID::declare()
{
	return BaseClassDefiner(GovHydroWPID::addConstructToMap, GovHydroWPID::addPrimitiveAssignFnsToMap, GovHydroWPID::addClassAssignFnsToMap, GovHydroWPID::debugName);
}


