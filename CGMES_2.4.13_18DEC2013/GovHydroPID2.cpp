#include <sstream>
#include "TurbineGovernorDynamics.hpp"
#include "GovHydroPID2.hpp"

#include "ActivePower.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
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
#include "Boolean.hpp"

using namespace CIMPP;

GovHydroPID2::GovHydroPID2() {};

GovHydroPID2::~GovHydroPID2() {};

























bool assign_GovHydroPID2_mwbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1)) {
                buffer >> element->mwbase;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroPID2_treg(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1)) {
                buffer >> element->treg;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroPID2_rperm(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1)) {
                buffer >> element->rperm;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroPID2_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1)) {
                buffer >> element->kp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroPID2_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1)) {
                buffer >> element->ki;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroPID2_kd(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1)) {
                buffer >> element->kd;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroPID2_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1)) {
                buffer >> element->ta;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroPID2_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1)) {
                buffer >> element->tb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroPID2_velmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1)) {
                buffer >> element->velmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroPID2_velmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1)) {
                buffer >> element->velmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroPID2_gmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1)) {
                buffer >> element->gmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroPID2_gmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1)) {
                buffer >> element->gmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroPID2_tw(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1)) {
                buffer >> element->tw;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroPID2_d(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1)) {
                buffer >> element->d;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroPID2_g0(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1)) {
                buffer >> element->g0;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroPID2_g1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1)) {
                buffer >> element->g1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroPID2_p1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1)) {
                buffer >> element->p1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroPID2_g2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1)) {
                buffer >> element->g2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroPID2_p2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1)) {
                buffer >> element->p2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroPID2_p3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1)) {
                buffer >> element->p3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroPID2_atw(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1)) {
                buffer >> element->atw;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroPID2_feedbackSignal(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroPID2* element = dynamic_cast<GovHydroPID2*>(BaseClass_ptr1)) {
                buffer >> element->feedbackSignal;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* GovHydroPID2_factory() {
		return new GovHydroPID2;
	}
}

void GovHydroPID2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:GovHydroPID2"), &GovHydroPID2_factory));
}

void GovHydroPID2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.mwbase"), &assign_GovHydroPID2_mwbase));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.treg"), &assign_GovHydroPID2_treg));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.rperm"), &assign_GovHydroPID2_rperm));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.kp"), &assign_GovHydroPID2_kp));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.ki"), &assign_GovHydroPID2_ki));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.kd"), &assign_GovHydroPID2_kd));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.ta"), &assign_GovHydroPID2_ta));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.tb"), &assign_GovHydroPID2_tb));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.velmax"), &assign_GovHydroPID2_velmax));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.velmin"), &assign_GovHydroPID2_velmin));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.gmax"), &assign_GovHydroPID2_gmax));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.gmin"), &assign_GovHydroPID2_gmin));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.tw"), &assign_GovHydroPID2_tw));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.d"), &assign_GovHydroPID2_d));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.g0"), &assign_GovHydroPID2_g0));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.g1"), &assign_GovHydroPID2_g1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.p1"), &assign_GovHydroPID2_p1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.g2"), &assign_GovHydroPID2_g2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.p2"), &assign_GovHydroPID2_p2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.p3"), &assign_GovHydroPID2_p3));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.atw"), &assign_GovHydroPID2_atw));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroPID2.feedbackSignal"), &assign_GovHydroPID2_feedbackSignal));
}

void GovHydroPID2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																						}

const char GovHydroPID2::debugName[] = "GovHydroPID2";
const char* GovHydroPID2::debugString()
{
	return GovHydroPID2::debugName;
}

const BaseClassDefiner GovHydroPID2::declare()
{
	return BaseClassDefiner(GovHydroPID2::addConstructToMap, GovHydroPID2::addPrimitiveAssignFnsToMap, GovHydroPID2::addClassAssignFnsToMap, GovHydroPID2::debugName);
}


