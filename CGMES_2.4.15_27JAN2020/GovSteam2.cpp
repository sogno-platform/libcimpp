#include <sstream>
#include "TurbineGovernorDynamics.hpp"
#include "GovSteam2.hpp"

#include "PU.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

GovSteam2::GovSteam2() {};

GovSteam2::~GovSteam2() {};


bool assign_GovSteam2_dbf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam2* element = dynamic_cast<GovSteam2*>(BaseClass_ptr1)) {
                buffer >> element->dbf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam2_k(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam2* element = dynamic_cast<GovSteam2*>(BaseClass_ptr1)) {
                buffer >> element->k;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam2_mnef(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam2* element = dynamic_cast<GovSteam2*>(BaseClass_ptr1)) {
                buffer >> element->mnef;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam2_mxef(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam2* element = dynamic_cast<GovSteam2*>(BaseClass_ptr1)) {
                buffer >> element->mxef;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam2_pmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam2* element = dynamic_cast<GovSteam2*>(BaseClass_ptr1)) {
                buffer >> element->pmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam2_pmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam2* element = dynamic_cast<GovSteam2*>(BaseClass_ptr1)) {
                buffer >> element->pmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam2_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam2* element = dynamic_cast<GovSteam2*>(BaseClass_ptr1)) {
                buffer >> element->t1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovSteam2_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovSteam2* element = dynamic_cast<GovSteam2*>(BaseClass_ptr1)) {
                buffer >> element->t2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}










namespace CIMPP {
	BaseClass* GovSteam2_factory() {
		return new GovSteam2;
	}
}

void GovSteam2::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:GovSteam2"), &GovSteam2_factory));
}

void GovSteam2::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:GovSteam2.dbf"), &assign_GovSteam2_dbf));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam2.k"), &assign_GovSteam2_k));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam2.mnef"), &assign_GovSteam2_mnef));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam2.mxef"), &assign_GovSteam2_mxef));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam2.pmax"), &assign_GovSteam2_pmax));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam2.pmin"), &assign_GovSteam2_pmin));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam2.t1"), &assign_GovSteam2_t1));
	assign_map.insert(std::make_pair(std::string("cim:GovSteam2.t2"), &assign_GovSteam2_t2));
}

void GovSteam2::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
								}

const char GovSteam2::debugName[] = "GovSteam2";
const char* GovSteam2::debugString()
{
	return GovSteam2::debugName;
}

const BaseClassDefiner GovSteam2::declare()
{
	return BaseClassDefiner(GovSteam2::addConstructToMap, GovSteam2::addPrimitiveAssignFnsToMap, GovSteam2::addClassAssignFnsToMap, GovSteam2::debugName);
}
