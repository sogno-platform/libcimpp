#include <sstream>
#include "TurbineGovernorDynamics.hpp"
#include "GovSteamCC.hpp"

#include "ActivePower.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

GovSteamCC::GovSteamCC() {};

GovSteamCC::~GovSteamCC() {};




















bool assign_GovSteamCC_mwbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1)) {
                buffer >> element->mwbase;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamCC_pmaxhp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1)) {
                buffer >> element->pmaxhp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamCC_rhp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1)) {
                buffer >> element->rhp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamCC_t1hp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1)) {
                buffer >> element->t1hp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamCC_t3hp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1)) {
                buffer >> element->t3hp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamCC_t4hp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1)) {
                buffer >> element->t4hp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamCC_t5hp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1)) {
                buffer >> element->t5hp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamCC_fhp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1)) {
                buffer >> element->fhp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamCC_dhp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1)) {
                buffer >> element->dhp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamCC_pmaxlp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1)) {
                buffer >> element->pmaxlp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamCC_rlp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1)) {
                buffer >> element->rlp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamCC_t1lp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1)) {
                buffer >> element->t1lp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamCC_t3lp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1)) {
                buffer >> element->t3lp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamCC_t4lp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1)) {
                buffer >> element->t4lp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamCC_t5lp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1)) {
                buffer >> element->t5lp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamCC_flp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1)) {
                buffer >> element->flp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteamCC_dlp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteamCC* element = dynamic_cast<GovSteamCC*>(BaseClass_ptr1)) {
                buffer >> element->dlp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* GovSteamCC_factory() {
		return new GovSteamCC;
	}
}

void GovSteamCC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:GovSteamCC"), &GovSteamCC_factory));
}

void GovSteamCC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:GovSteamCC.mwbase"), &assign_GovSteamCC_mwbase));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamCC.pmaxhp"), &assign_GovSteamCC_pmaxhp));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamCC.rhp"), &assign_GovSteamCC_rhp));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamCC.t1hp"), &assign_GovSteamCC_t1hp));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamCC.t3hp"), &assign_GovSteamCC_t3hp));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamCC.t4hp"), &assign_GovSteamCC_t4hp));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamCC.t5hp"), &assign_GovSteamCC_t5hp));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamCC.fhp"), &assign_GovSteamCC_fhp));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamCC.dhp"), &assign_GovSteamCC_dhp));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamCC.pmaxlp"), &assign_GovSteamCC_pmaxlp));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamCC.rlp"), &assign_GovSteamCC_rlp));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamCC.t1lp"), &assign_GovSteamCC_t1lp));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamCC.t3lp"), &assign_GovSteamCC_t3lp));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamCC.t4lp"), &assign_GovSteamCC_t4lp));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamCC.t5lp"), &assign_GovSteamCC_t5lp));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamCC.flp"), &assign_GovSteamCC_flp));
	assign_map.insert(std::make_pair(std::string("cim:GovSteamCC.dlp"), &assign_GovSteamCC_dlp));
}

void GovSteamCC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																	}

const char GovSteamCC::debugName[] = "GovSteamCC";
const char* GovSteamCC::debugString()
{
	return GovSteamCC::debugName;
}

const BaseClassDefiner GovSteamCC::declare()
{
	return BaseClassDefiner(GovSteamCC::addConstructToMap, GovSteamCC::addPrimitiveAssignFnsToMap, GovSteamCC::addClassAssignFnsToMap, GovSteamCC::debugName);
}


