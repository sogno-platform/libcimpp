#include <sstream>
#include "TurbineGovernorDynamics.hpp"
#include "GovGAST.hpp"

#include "ActivePower.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

GovGAST::GovGAST() {};

GovGAST::~GovGAST() {};













bool assign_GovGAST_mwbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1)) {
                buffer >> element->mwbase;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1)) {
                buffer >> element->r;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1)) {
                buffer >> element->t1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1)) {
                buffer >> element->t2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1)) {
                buffer >> element->t3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST_at(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1)) {
                buffer >> element->at;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST_kt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1)) {
                buffer >> element->kt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST_vmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1)) {
                buffer >> element->vmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST_vmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1)) {
                buffer >> element->vmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_GovGAST_dturb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(GovGAST* element = dynamic_cast<GovGAST*>(BaseClass_ptr1)) {
                buffer >> element->dturb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* GovGAST_factory() {
		return new GovGAST;
	}
}

void GovGAST::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:GovGAST"), &GovGAST_factory));
}

void GovGAST::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:GovGAST.mwbase"), &assign_GovGAST_mwbase));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST.r"), &assign_GovGAST_r));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST.t1"), &assign_GovGAST_t1));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST.t2"), &assign_GovGAST_t2));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST.t3"), &assign_GovGAST_t3));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST.at"), &assign_GovGAST_at));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST.kt"), &assign_GovGAST_kt));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST.vmax"), &assign_GovGAST_vmax));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST.vmin"), &assign_GovGAST_vmin));
	assign_map.insert(std::make_pair(std::string("cim:GovGAST.dturb"), &assign_GovGAST_dturb));
}

void GovGAST::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
										}

const char GovGAST::debugName[] = "GovGAST";
const char* GovGAST::debugString()
{
	return GovGAST::debugName;
}

const BaseClassDefiner GovGAST::declare()
{
	return BaseClassDefiner(GovGAST::addConstructToMap, GovGAST::addPrimitiveAssignFnsToMap, GovGAST::addClassAssignFnsToMap, GovGAST::debugName);
}


