#include <sstream>
#include "TurbineGovernorDynamics.hpp"
#include "GovHydroIEEE0.hpp"

#include "ActivePower.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

GovHydroIEEE0::GovHydroIEEE0() {};

GovHydroIEEE0::~GovHydroIEEE0() {};











bool assign_GovHydroIEEE0_mwbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroIEEE0* element = dynamic_cast<GovHydroIEEE0*>(BaseClass_ptr1)) {
                buffer >> element->mwbase;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroIEEE0_k(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroIEEE0* element = dynamic_cast<GovHydroIEEE0*>(BaseClass_ptr1)) {
                buffer >> element->k;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroIEEE0_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroIEEE0* element = dynamic_cast<GovHydroIEEE0*>(BaseClass_ptr1)) {
                buffer >> element->t1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroIEEE0_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroIEEE0* element = dynamic_cast<GovHydroIEEE0*>(BaseClass_ptr1)) {
                buffer >> element->t2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroIEEE0_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroIEEE0* element = dynamic_cast<GovHydroIEEE0*>(BaseClass_ptr1)) {
                buffer >> element->t3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroIEEE0_t4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroIEEE0* element = dynamic_cast<GovHydroIEEE0*>(BaseClass_ptr1)) {
                buffer >> element->t4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroIEEE0_pmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroIEEE0* element = dynamic_cast<GovHydroIEEE0*>(BaseClass_ptr1)) {
                buffer >> element->pmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovHydroIEEE0_pmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovHydroIEEE0* element = dynamic_cast<GovHydroIEEE0*>(BaseClass_ptr1)) {
                buffer >> element->pmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* GovHydroIEEE0_factory() {
		return new GovHydroIEEE0;
	}
}

void GovHydroIEEE0::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:GovHydroIEEE0"), &GovHydroIEEE0_factory));
}

void GovHydroIEEE0::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE0.mwbase"), &assign_GovHydroIEEE0_mwbase));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE0.k"), &assign_GovHydroIEEE0_k));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE0.t1"), &assign_GovHydroIEEE0_t1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE0.t2"), &assign_GovHydroIEEE0_t2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE0.t3"), &assign_GovHydroIEEE0_t3));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE0.t4"), &assign_GovHydroIEEE0_t4));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE0.pmax"), &assign_GovHydroIEEE0_pmax));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroIEEE0.pmin"), &assign_GovHydroIEEE0_pmin));
}

void GovHydroIEEE0::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
								}

const char GovHydroIEEE0::debugName[] = "GovHydroIEEE0";
const char* GovHydroIEEE0::debugString()
{
	return GovHydroIEEE0::debugName;
}

const BaseClassDefiner GovHydroIEEE0::declare()
{
	return BaseClassDefiner(GovHydroIEEE0::addConstructToMap, GovHydroIEEE0::addPrimitiveAssignFnsToMap, GovHydroIEEE0::addClassAssignFnsToMap, GovHydroIEEE0::debugName);
}


