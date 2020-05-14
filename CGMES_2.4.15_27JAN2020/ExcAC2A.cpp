#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcAC2A.hpp"

#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Boolean.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

ExcAC2A::ExcAC2A() {};

ExcAC2A::~ExcAC2A() {};































bool assign_ExcAC2A_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1)) {
                buffer >> element->tb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC2A_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1)) {
                buffer >> element->tc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC2A_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1)) {
                buffer >> element->ka;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC2A_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1)) {
                buffer >> element->ta;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC2A_vamax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1)) {
                buffer >> element->vamax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC2A_vamin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1)) {
                buffer >> element->vamin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC2A_kb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1)) {
                buffer >> element->kb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC2A_kb1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1)) {
                buffer >> element->kb1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC2A_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1)) {
                buffer >> element->vrmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC2A_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1)) {
                buffer >> element->vrmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC2A_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1)) {
                buffer >> element->te;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC2A_vfemax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1)) {
                buffer >> element->vfemax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC2A_kh(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1)) {
                buffer >> element->kh;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC2A_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1)) {
                buffer >> element->kf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC2A_kl(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1)) {
                buffer >> element->kl;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC2A_vlr(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1)) {
                buffer >> element->vlr;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC2A_kl1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1)) {
                buffer >> element->kl1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC2A_ks(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1)) {
                buffer >> element->ks;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC2A_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1)) {
                buffer >> element->tf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC2A_kc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1)) {
                buffer >> element->kc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC2A_kd(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1)) {
                buffer >> element->kd;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC2A_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1)) {
                buffer >> element->ke;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC2A_ve1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1)) {
                buffer >> element->ve1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC2A_seve1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1)) {
                buffer >> element->seve1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC2A_ve2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1)) {
                buffer >> element->ve2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC2A_seve2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1)) {
                buffer >> element->seve2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC2A_hvgate(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1)) {
                buffer >> element->hvgate;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC2A_lvgate(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC2A* element = dynamic_cast<ExcAC2A*>(BaseClass_ptr1)) {
                buffer >> element->lvgate;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* ExcAC2A_factory() {
		return new ExcAC2A;
	}
}

void ExcAC2A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcAC2A"), &ExcAC2A_factory));
}

void ExcAC2A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcAC2A.tb"), &assign_ExcAC2A_tb));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC2A.tc"), &assign_ExcAC2A_tc));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC2A.ka"), &assign_ExcAC2A_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC2A.ta"), &assign_ExcAC2A_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC2A.vamax"), &assign_ExcAC2A_vamax));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC2A.vamin"), &assign_ExcAC2A_vamin));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC2A.kb"), &assign_ExcAC2A_kb));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC2A.kb1"), &assign_ExcAC2A_kb1));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC2A.vrmax"), &assign_ExcAC2A_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC2A.vrmin"), &assign_ExcAC2A_vrmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC2A.te"), &assign_ExcAC2A_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC2A.vfemax"), &assign_ExcAC2A_vfemax));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC2A.kh"), &assign_ExcAC2A_kh));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC2A.kf"), &assign_ExcAC2A_kf));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC2A.kl"), &assign_ExcAC2A_kl));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC2A.vlr"), &assign_ExcAC2A_vlr));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC2A.kl1"), &assign_ExcAC2A_kl1));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC2A.ks"), &assign_ExcAC2A_ks));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC2A.tf"), &assign_ExcAC2A_tf));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC2A.kc"), &assign_ExcAC2A_kc));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC2A.kd"), &assign_ExcAC2A_kd));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC2A.ke"), &assign_ExcAC2A_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC2A.ve1"), &assign_ExcAC2A_ve1));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC2A.seve1"), &assign_ExcAC2A_seve1));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC2A.ve2"), &assign_ExcAC2A_ve2));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC2A.seve2"), &assign_ExcAC2A_seve2));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC2A.hvgate"), &assign_ExcAC2A_hvgate));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC2A.lvgate"), &assign_ExcAC2A_lvgate));
}

void ExcAC2A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																												}

const char ExcAC2A::debugName[] = "ExcAC2A";
const char* ExcAC2A::debugString()
{
	return ExcAC2A::debugName;
}

const BaseClassDefiner ExcAC2A::declare()
{
	return BaseClassDefiner(ExcAC2A::addConstructToMap, ExcAC2A::addPrimitiveAssignFnsToMap, ExcAC2A::addClassAssignFnsToMap, ExcAC2A::debugName);
}


