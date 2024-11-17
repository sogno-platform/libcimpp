#include <sstream>
#include "TurbineGovernorDynamics.hpp"
#include "GovSteamFV3.hpp"

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
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
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"

using namespace CIMPP;

GovSteamFV3::GovSteamFV3() {};

GovSteamFV3::~GovSteamFV3() {};


bool assign_GovSteamFV3_k(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1)) {
                buffer >> element->k;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV3_k1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1)) {
                buffer >> element->k1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV3_k2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1)) {
                buffer >> element->k2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV3_k3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1)) {
                buffer >> element->k3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV3_mwbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1)) {
                buffer >> element->mwbase;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV3_pmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1)) {
                buffer >> element->pmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV3_pmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1)) {
                buffer >> element->pmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV3_prmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1)) {
                buffer >> element->prmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV3_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1)) {
                buffer >> element->t1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV3_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1)) {
                buffer >> element->t2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV3_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1)) {
                buffer >> element->t3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV3_t4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1)) {
                buffer >> element->t4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV3_t5(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1)) {
                buffer >> element->t5;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV3_t6(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1)) {
                buffer >> element->t6;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV3_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1)) {
                buffer >> element->ta;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV3_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1)) {
                buffer >> element->tb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV3_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1)) {
                buffer >> element->tc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV3_uc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1)) {
                buffer >> element->uc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamFV3_uo(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamFV3* element = dynamic_cast<GovSteamFV3*>(BaseClass_ptr1)) {
                buffer >> element->uo;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}





















namespace CIMPP {
	BaseClass* GovSteamFV3_factory() {
		return new GovSteamFV3;
	}
}

void GovSteamFV3::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:GovSteamFV3"), &GovSteamFV3_factory));
}

void GovSteamFV3::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.k"), &assign_GovSteamFV3_k));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.k1"), &assign_GovSteamFV3_k1));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.k2"), &assign_GovSteamFV3_k2));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.k3"), &assign_GovSteamFV3_k3));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.mwbase"), &assign_GovSteamFV3_mwbase));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.pmax"), &assign_GovSteamFV3_pmax));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.pmin"), &assign_GovSteamFV3_pmin));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.prmax"), &assign_GovSteamFV3_prmax));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.t1"), &assign_GovSteamFV3_t1));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.t2"), &assign_GovSteamFV3_t2));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.t3"), &assign_GovSteamFV3_t3));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.t4"), &assign_GovSteamFV3_t4));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.t5"), &assign_GovSteamFV3_t5));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.t6"), &assign_GovSteamFV3_t6));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.ta"), &assign_GovSteamFV3_ta));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.tb"), &assign_GovSteamFV3_tb));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.tc"), &assign_GovSteamFV3_tc));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.uc"), &assign_GovSteamFV3_uc));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamFV3.uo"), &assign_GovSteamFV3_uo));
}

void GovSteamFV3::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																			}

const char GovSteamFV3::debugName[] = "GovSteamFV3";
const char* GovSteamFV3::debugString()
{
	return GovSteamFV3::debugName;
}

const BaseClassDefiner GovSteamFV3::declare()
{
	return BaseClassDefiner(GovSteamFV3::addConstructToMap, GovSteamFV3::addPrimitiveAssignFnsToMap, GovSteamFV3::addClassAssignFnsToMap, GovSteamFV3::debugName);
}
