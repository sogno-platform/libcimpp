#include <sstream>
#include "TurbineGovernorDynamics.hpp"
#include "GovHydroR.hpp"

#include "ActivePower.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Boolean.hpp"
#include "Frequency.hpp"
#include "Frequency.hpp"
#include "ActivePower.hpp"
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
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

GovHydroR::GovHydroR() {};

GovHydroR::~GovHydroR() {};













































bool assign_GovHydroR_mwbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->mwbase;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_pmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->pmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_pmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->pmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->r;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_td(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->td;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->t1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->t2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->t3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_t4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->t4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_t5(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->t5;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_t6(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->t6;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_t7(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->t7;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_t8(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->t8;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_tp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->tp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_velop(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->velop;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_velcl(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->velcl;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->ki;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_kg(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->kg;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_gmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->gmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_gmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->gmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_tt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->tt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_inputSignal(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->inputSignal;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_db1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->db1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_eps(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->eps;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_db2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->db2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_tw(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->tw;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_at(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->at;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_dturb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->dturb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_qnl(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->qnl;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_h0(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->h0;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_gv1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->gv1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_pgv1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->pgv1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_gv2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->gv2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_pgv2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->pgv2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_gv3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->gv3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_pgv3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->pgv3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_gv4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->gv4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_pgv4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->pgv4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_gv5(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->gv5;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_pgv5(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->pgv5;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_gv6(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->gv6;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroR_pgv6(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroR* element = dynamic_cast<GovHydroR*>(BaseClass_ptr1)) {
                buffer >> element->pgv6;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* GovHydroR_factory() {
		return new GovHydroR;
	}
}

void GovHydroR::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:GovHydroR"), &GovHydroR_factory));
}

void GovHydroR::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.mwbase"), &assign_GovHydroR_mwbase));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.pmax"), &assign_GovHydroR_pmax));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.pmin"), &assign_GovHydroR_pmin));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.r"), &assign_GovHydroR_r));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.td"), &assign_GovHydroR_td));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.t1"), &assign_GovHydroR_t1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.t2"), &assign_GovHydroR_t2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.t3"), &assign_GovHydroR_t3));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.t4"), &assign_GovHydroR_t4));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.t5"), &assign_GovHydroR_t5));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.t6"), &assign_GovHydroR_t6));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.t7"), &assign_GovHydroR_t7));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.t8"), &assign_GovHydroR_t8));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.tp"), &assign_GovHydroR_tp));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.velop"), &assign_GovHydroR_velop));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.velcl"), &assign_GovHydroR_velcl));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.ki"), &assign_GovHydroR_ki));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.kg"), &assign_GovHydroR_kg));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.gmax"), &assign_GovHydroR_gmax));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.gmin"), &assign_GovHydroR_gmin));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.tt"), &assign_GovHydroR_tt));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.inputSignal"), &assign_GovHydroR_inputSignal));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.db1"), &assign_GovHydroR_db1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.eps"), &assign_GovHydroR_eps));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.db2"), &assign_GovHydroR_db2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.tw"), &assign_GovHydroR_tw));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.at"), &assign_GovHydroR_at));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.dturb"), &assign_GovHydroR_dturb));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.qnl"), &assign_GovHydroR_qnl));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.h0"), &assign_GovHydroR_h0));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.gv1"), &assign_GovHydroR_gv1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.pgv1"), &assign_GovHydroR_pgv1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.gv2"), &assign_GovHydroR_gv2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.pgv2"), &assign_GovHydroR_pgv2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.gv3"), &assign_GovHydroR_gv3));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.pgv3"), &assign_GovHydroR_pgv3));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.gv4"), &assign_GovHydroR_gv4));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.pgv4"), &assign_GovHydroR_pgv4));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.gv5"), &assign_GovHydroR_gv5));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.pgv5"), &assign_GovHydroR_pgv5));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.gv6"), &assign_GovHydroR_gv6));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroR.pgv6"), &assign_GovHydroR_pgv6));
}

void GovHydroR::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																																										}

const char GovHydroR::debugName[] = "GovHydroR";
const char* GovHydroR::debugString()
{
	return GovHydroR::debugName;
}

const BaseClassDefiner GovHydroR::declare()
{
	return BaseClassDefiner(GovHydroR::addConstructToMap, GovHydroR::addPrimitiveAssignFnsToMap, GovHydroR::addClassAssignFnsToMap, GovHydroR::debugName);
}


