#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcIEEEAC1A.hpp"

#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcIEEEAC1A::ExcIEEEAC1A() {};

ExcIEEEAC1A::~ExcIEEEAC1A() {};





















bool assign_ExcIEEEAC1A_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1)) {
                buffer >> element->tb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC1A_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1)) {
                buffer >> element->tc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC1A_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1)) {
                buffer >> element->ka;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC1A_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1)) {
                buffer >> element->ta;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC1A_vamax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1)) {
                buffer >> element->vamax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC1A_vamin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1)) {
                buffer >> element->vamin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC1A_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1)) {
                buffer >> element->te;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC1A_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1)) {
                buffer >> element->kf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC1A_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1)) {
                buffer >> element->tf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC1A_kc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1)) {
                buffer >> element->kc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC1A_kd(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1)) {
                buffer >> element->kd;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC1A_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1)) {
                buffer >> element->ke;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC1A_ve1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1)) {
                buffer >> element->ve1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC1A_seve1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1)) {
                buffer >> element->seve1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC1A_ve2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1)) {
                buffer >> element->ve2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC1A_seve2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1)) {
                buffer >> element->seve2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC1A_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1)) {
                buffer >> element->vrmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC1A_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC1A* element = dynamic_cast<ExcIEEEAC1A*>(BaseClass_ptr1)) {
                buffer >> element->vrmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* ExcIEEEAC1A_factory() {
		return new ExcIEEEAC1A;
	}
}

void ExcIEEEAC1A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A"), &ExcIEEEAC1A_factory));
}

void ExcIEEEAC1A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.tb"), &assign_ExcIEEEAC1A_tb));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.tc"), &assign_ExcIEEEAC1A_tc));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.ka"), &assign_ExcIEEEAC1A_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.ta"), &assign_ExcIEEEAC1A_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.vamax"), &assign_ExcIEEEAC1A_vamax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.vamin"), &assign_ExcIEEEAC1A_vamin));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.te"), &assign_ExcIEEEAC1A_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.kf"), &assign_ExcIEEEAC1A_kf));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.tf"), &assign_ExcIEEEAC1A_tf));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.kc"), &assign_ExcIEEEAC1A_kc));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.kd"), &assign_ExcIEEEAC1A_kd));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.ke"), &assign_ExcIEEEAC1A_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.ve1"), &assign_ExcIEEEAC1A_ve1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.seve1"), &assign_ExcIEEEAC1A_seve1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.ve2"), &assign_ExcIEEEAC1A_ve2));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.seve2"), &assign_ExcIEEEAC1A_seve2));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.vrmax"), &assign_ExcIEEEAC1A_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC1A.vrmin"), &assign_ExcIEEEAC1A_vrmin));
}

void ExcIEEEAC1A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																		}

const char ExcIEEEAC1A::debugName[] = "ExcIEEEAC1A";
const char* ExcIEEEAC1A::debugString()
{
	return ExcIEEEAC1A::debugName;
}

const BaseClassDefiner ExcIEEEAC1A::declare()
{
	return BaseClassDefiner(ExcIEEEAC1A::addConstructToMap, ExcIEEEAC1A::addPrimitiveAssignFnsToMap, ExcIEEEAC1A::addClassAssignFnsToMap, ExcIEEEAC1A::debugName);
}


