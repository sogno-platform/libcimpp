#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcIEEEAC2A.hpp"

#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
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

using namespace CIMPP;

ExcIEEEAC2A::ExcIEEEAC2A() {};

ExcIEEEAC2A::~ExcIEEEAC2A() {};
























bool assign_ExcIEEEAC2A_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1)) {
                buffer >> element->tb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC2A_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1)) {
                buffer >> element->tc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC2A_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1)) {
                buffer >> element->ka;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC2A_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1)) {
                buffer >> element->ta;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC2A_vamax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1)) {
                buffer >> element->vamax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC2A_vamin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1)) {
                buffer >> element->vamin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC2A_kb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1)) {
                buffer >> element->kb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC2A_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1)) {
                buffer >> element->vrmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC2A_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1)) {
                buffer >> element->vrmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC2A_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1)) {
                buffer >> element->te;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC2A_vfemax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1)) {
                buffer >> element->vfemax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC2A_kh(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1)) {
                buffer >> element->kh;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC2A_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1)) {
                buffer >> element->kf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC2A_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1)) {
                buffer >> element->tf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC2A_kc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1)) {
                buffer >> element->kc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC2A_kd(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1)) {
                buffer >> element->kd;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC2A_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1)) {
                buffer >> element->ke;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC2A_ve1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1)) {
                buffer >> element->ve1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC2A_seve1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1)) {
                buffer >> element->seve1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC2A_ve2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1)) {
                buffer >> element->ve2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC2A_seve2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC2A* element = dynamic_cast<ExcIEEEAC2A*>(BaseClass_ptr1)) {
                buffer >> element->seve2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* ExcIEEEAC2A_factory() {
		return new ExcIEEEAC2A;
	}
}

void ExcIEEEAC2A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A"), &ExcIEEEAC2A_factory));
}

void ExcIEEEAC2A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.tb"), &assign_ExcIEEEAC2A_tb));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.tc"), &assign_ExcIEEEAC2A_tc));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.ka"), &assign_ExcIEEEAC2A_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.ta"), &assign_ExcIEEEAC2A_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.vamax"), &assign_ExcIEEEAC2A_vamax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.vamin"), &assign_ExcIEEEAC2A_vamin));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.kb"), &assign_ExcIEEEAC2A_kb));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.vrmax"), &assign_ExcIEEEAC2A_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.vrmin"), &assign_ExcIEEEAC2A_vrmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.te"), &assign_ExcIEEEAC2A_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.vfemax"), &assign_ExcIEEEAC2A_vfemax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.kh"), &assign_ExcIEEEAC2A_kh));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.kf"), &assign_ExcIEEEAC2A_kf));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.tf"), &assign_ExcIEEEAC2A_tf));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.kc"), &assign_ExcIEEEAC2A_kc));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.kd"), &assign_ExcIEEEAC2A_kd));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.ke"), &assign_ExcIEEEAC2A_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.ve1"), &assign_ExcIEEEAC2A_ve1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.seve1"), &assign_ExcIEEEAC2A_seve1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.ve2"), &assign_ExcIEEEAC2A_ve2));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC2A.seve2"), &assign_ExcIEEEAC2A_seve2));
}

void ExcIEEEAC2A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																					}

const char ExcIEEEAC2A::debugName[] = "ExcIEEEAC2A";
const char* ExcIEEEAC2A::debugString()
{
	return ExcIEEEAC2A::debugName;
}

const BaseClassDefiner ExcIEEEAC2A::declare()
{
	return BaseClassDefiner(ExcIEEEAC2A::addConstructToMap, ExcIEEEAC2A::addPrimitiveAssignFnsToMap, ExcIEEEAC2A::addClassAssignFnsToMap, ExcIEEEAC2A::debugName);
}


