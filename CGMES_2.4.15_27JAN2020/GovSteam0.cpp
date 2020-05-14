#include <sstream>
#include "TurbineGovernorDynamics.hpp"
#include "GovSteam0.hpp"

#include "ActivePower.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"

using namespace CIMPP;

GovSteam0::GovSteam0() {};

GovSteam0::~GovSteam0() {};











bool assign_GovSteam0_mwbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam0* element = dynamic_cast<GovSteam0*>(BaseClass_ptr1)) {
                buffer >> element->mwbase;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam0_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam0* element = dynamic_cast<GovSteam0*>(BaseClass_ptr1)) {
                buffer >> element->r;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam0_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam0* element = dynamic_cast<GovSteam0*>(BaseClass_ptr1)) {
                buffer >> element->t1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam0_vmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam0* element = dynamic_cast<GovSteam0*>(BaseClass_ptr1)) {
                buffer >> element->vmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam0_vmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam0* element = dynamic_cast<GovSteam0*>(BaseClass_ptr1)) {
                buffer >> element->vmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam0_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam0* element = dynamic_cast<GovSteam0*>(BaseClass_ptr1)) {
                buffer >> element->t2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam0_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam0* element = dynamic_cast<GovSteam0*>(BaseClass_ptr1)) {
                buffer >> element->t3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam0_dt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam0* element = dynamic_cast<GovSteam0*>(BaseClass_ptr1)) {
                buffer >> element->dt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* GovSteam0_factory() {
		return new GovSteam0;
	}
}

void GovSteam0::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:GovSteam0"), &GovSteam0_factory));
}

void GovSteam0::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:GovSteam0.mwbase"), &assign_GovSteam0_mwbase));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam0.r"), &assign_GovSteam0_r));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam0.t1"), &assign_GovSteam0_t1));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam0.vmax"), &assign_GovSteam0_vmax));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam0.vmin"), &assign_GovSteam0_vmin));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam0.t2"), &assign_GovSteam0_t2));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam0.t3"), &assign_GovSteam0_t3));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam0.dt"), &assign_GovSteam0_dt));
}

void GovSteam0::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
								}

const char GovSteam0::debugName[] = "GovSteam0";
const char* GovSteam0::debugString()
{
	return GovSteam0::debugName;
}

const BaseClassDefiner GovSteam0::declare()
{
	return BaseClassDefiner(GovSteam0::addConstructToMap, GovSteam0::addPrimitiveAssignFnsToMap, GovSteam0::addClassAssignFnsToMap, GovSteam0::debugName);
}


