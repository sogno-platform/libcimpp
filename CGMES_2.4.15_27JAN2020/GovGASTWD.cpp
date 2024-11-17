#include <sstream>
#include "TurbineGovernorDynamics.hpp"
#include "GovGASTWD.hpp"

#include "Simple_Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
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
#include "ActivePower.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Temperature.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Temperature.hpp"
#include "ActivePower.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

GovGASTWD::GovGASTWD() {};

GovGASTWD::~GovGASTWD() {};


bool assign_GovGASTWD_a(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->a;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_af1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->af1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_af2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->af2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_b(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->b;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_bf1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->bf1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_bf2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->bf2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_c(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->c;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_cf2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->cf2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_ecr(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->ecr;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_etd(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->etd;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_k3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->k3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_k4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->k4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_k5(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->k5;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_k6(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->k6;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_kd(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->kd;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_kdroop(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->kdroop;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->kf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->ki;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->kp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_mwbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->mwbase;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_t(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->t;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->t3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_t4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->t4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_t5(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->t5;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->tc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_tcd(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->tcd;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_td(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->td;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->tf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_tmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->tmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_tmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->tmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_tr(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->tr;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_trate(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->trate;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGASTWD_tt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGASTWD* element = dynamic_cast<GovGASTWD*>(BaseClass_ptr1)) {
                buffer >> element->tt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}



































namespace CIMPP {
	BaseClass* GovGASTWD_factory() {
		return new GovGASTWD;
	}
}

void GovGASTWD::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:GovGASTWD"), &GovGASTWD_factory));
}

void GovGASTWD::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.a"), &assign_GovGASTWD_a));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.af1"), &assign_GovGASTWD_af1));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.af2"), &assign_GovGASTWD_af2));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.b"), &assign_GovGASTWD_b));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.bf1"), &assign_GovGASTWD_bf1));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.bf2"), &assign_GovGASTWD_bf2));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.c"), &assign_GovGASTWD_c));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.cf2"), &assign_GovGASTWD_cf2));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.ecr"), &assign_GovGASTWD_ecr));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.etd"), &assign_GovGASTWD_etd));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.k3"), &assign_GovGASTWD_k3));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.k4"), &assign_GovGASTWD_k4));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.k5"), &assign_GovGASTWD_k5));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.k6"), &assign_GovGASTWD_k6));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.kd"), &assign_GovGASTWD_kd));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.kdroop"), &assign_GovGASTWD_kdroop));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.kf"), &assign_GovGASTWD_kf));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.ki"), &assign_GovGASTWD_ki));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.kp"), &assign_GovGASTWD_kp));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.mwbase"), &assign_GovGASTWD_mwbase));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.t"), &assign_GovGASTWD_t));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.t3"), &assign_GovGASTWD_t3));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.t4"), &assign_GovGASTWD_t4));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.t5"), &assign_GovGASTWD_t5));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.tc"), &assign_GovGASTWD_tc));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.tcd"), &assign_GovGASTWD_tcd));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.td"), &assign_GovGASTWD_td));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.tf"), &assign_GovGASTWD_tf));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.tmax"), &assign_GovGASTWD_tmax));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.tmin"), &assign_GovGASTWD_tmin));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.tr"), &assign_GovGASTWD_tr));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.trate"), &assign_GovGASTWD_trate));
	assign_map.insert(std::make_pair(std::string("cim:GovGASTWD.tt"), &assign_GovGASTWD_tt));
}

void GovGASTWD::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																																	}

const char GovGASTWD::debugName[] = "GovGASTWD";
const char* GovGASTWD::debugString()
{
	return GovGASTWD::debugName;
}

const BaseClassDefiner GovGASTWD::declare()
{
	return BaseClassDefiner(GovGASTWD::addConstructToMap, GovGASTWD::addPrimitiveAssignFnsToMap, GovGASTWD::addClassAssignFnsToMap, GovGASTWD::debugName);
}
