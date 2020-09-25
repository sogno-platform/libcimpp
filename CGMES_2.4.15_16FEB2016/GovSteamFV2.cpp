#include <sstream>
#include "TurbineGovernorDynamics.hpp"
#include "GovSteamFV2.hpp"

#include "ActivePower.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

GovSteamFV2::GovSteamFV2() {};

GovSteamFV2::~GovSteamFV2() {};
















bool assign_GovSteamFV2_mwbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1)) {
                buffer >> element->mwbase;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV2_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1)) {
                buffer >> element->r;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV2_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1)) {
                buffer >> element->t1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV2_vmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1)) {
                buffer >> element->vmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV2_vmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1)) {
                buffer >> element->vmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV2_k(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1)) {
                buffer >> element->k;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV2_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1)) {
                buffer >> element->t3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV2_dt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1)) {
                buffer >> element->dt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV2_tt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1)) {
                buffer >> element->tt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV2_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1)) {
                buffer >> element->ta;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV2_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1)) {
                buffer >> element->tb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV2_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1)) {
                buffer >> element->tc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV2_ti(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV2* element = dynamic_cast<GovSteamFV2*>(BaseClass_ptr1)) {
                buffer >> element->ti;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* GovSteamFV2_factory() {
		return new GovSteamFV2;
	}
}

void GovSteamFV2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:GovSteamFV2"), &GovSteamFV2_factory));
}

void GovSteamFV2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV2.mwbase"), &assign_GovSteamFV2_mwbase));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV2.r"), &assign_GovSteamFV2_r));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV2.t1"), &assign_GovSteamFV2_t1));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV2.vmax"), &assign_GovSteamFV2_vmax));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV2.vmin"), &assign_GovSteamFV2_vmin));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV2.k"), &assign_GovSteamFV2_k));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV2.t3"), &assign_GovSteamFV2_t3));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV2.dt"), &assign_GovSteamFV2_dt));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV2.tt"), &assign_GovSteamFV2_tt));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV2.ta"), &assign_GovSteamFV2_ta));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV2.tb"), &assign_GovSteamFV2_tb));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV2.tc"), &assign_GovSteamFV2_tc));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV2.ti"), &assign_GovSteamFV2_ti));
}

void GovSteamFV2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
													}

const char GovSteamFV2::debugName[] = "GovSteamFV2";
const char* GovSteamFV2::debugString()
{
	return GovSteamFV2::debugName;
}

const BaseClassDefiner GovSteamFV2::declare()
{
	return BaseClassDefiner(GovSteamFV2::addConstructToMap, GovSteamFV2::addPrimitiveAssignFnsToMap, GovSteamFV2::addClassAssignFnsToMap, GovSteamFV2::debugName);
}


