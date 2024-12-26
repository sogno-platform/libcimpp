#include <sstream>
#include "TurbineGovernorDynamics.hpp"
#include "GovSteamSGO.hpp"

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "ActivePower.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

GovSteamSGO::GovSteamSGO() {};

GovSteamSGO::~GovSteamSGO() {};


bool assign_GovSteamSGO_k1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1)) {
                buffer >> element->k1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamSGO_k2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1)) {
                buffer >> element->k2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamSGO_k3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1)) {
                buffer >> element->k3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamSGO_mwbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1)) {
                buffer >> element->mwbase;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamSGO_pmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1)) {
                buffer >> element->pmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamSGO_pmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1)) {
                buffer >> element->pmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamSGO_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1)) {
                buffer >> element->t1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamSGO_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1)) {
                buffer >> element->t2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamSGO_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1)) {
                buffer >> element->t3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamSGO_t4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1)) {
                buffer >> element->t4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamSGO_t5(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1)) {
                buffer >> element->t5;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamSGO_t6(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamSGO* element = dynamic_cast<GovSteamSGO*>(BaseClass_ptr1)) {
                buffer >> element->t6;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}














namespace CIMPP {
	BaseClass* GovSteamSGO_factory() {
		return new GovSteamSGO;
	}
}

void GovSteamSGO::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:GovSteamSGO"), &GovSteamSGO_factory));
}

void GovSteamSGO::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:GovSteamSGO.k1"), &assign_GovSteamSGO_k1));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamSGO.k2"), &assign_GovSteamSGO_k2));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamSGO.k3"), &assign_GovSteamSGO_k3));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamSGO.mwbase"), &assign_GovSteamSGO_mwbase));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamSGO.pmax"), &assign_GovSteamSGO_pmax));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamSGO.pmin"), &assign_GovSteamSGO_pmin));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamSGO.t1"), &assign_GovSteamSGO_t1));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamSGO.t2"), &assign_GovSteamSGO_t2));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamSGO.t3"), &assign_GovSteamSGO_t3));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamSGO.t4"), &assign_GovSteamSGO_t4));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamSGO.t5"), &assign_GovSteamSGO_t5));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamSGO.t6"), &assign_GovSteamSGO_t6));
}

void GovSteamSGO::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
												}

const char GovSteamSGO::debugName[] = "GovSteamSGO";
const char* GovSteamSGO::debugString()
{
	return GovSteamSGO::debugName;
}

const BaseClassDefiner GovSteamSGO::declare()
{
	return BaseClassDefiner(GovSteamSGO::addConstructToMap, GovSteamSGO::addPrimitiveAssignFnsToMap, GovSteamSGO::addClassAssignFnsToMap, GovSteamSGO::debugName);
}
