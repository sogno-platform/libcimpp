#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcAC5A.hpp"

#include "Simple_Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcAC5A::ExcAC5A() {};

ExcAC5A::~ExcAC5A() {};


bool assign_ExcAC5A_a(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1)) {
                buffer >> element->a;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC5A_efd1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1)) {
                buffer >> element->efd1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC5A_efd2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1)) {
                buffer >> element->efd2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC5A_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1)) {
                buffer >> element->ka;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC5A_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1)) {
                buffer >> element->ke;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC5A_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1)) {
                buffer >> element->kf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC5A_ks(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1)) {
                buffer >> element->ks;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC5A_seefd1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1)) {
                buffer >> element->seefd1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC5A_seefd2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1)) {
                buffer >> element->seefd2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC5A_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1)) {
                buffer >> element->ta;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC5A_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1)) {
                buffer >> element->tb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC5A_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1)) {
                buffer >> element->tc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC5A_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1)) {
                buffer >> element->te;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC5A_tf1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1)) {
                buffer >> element->tf1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC5A_tf2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1)) {
                buffer >> element->tf2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC5A_tf3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1)) {
                buffer >> element->tf3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC5A_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1)) {
                buffer >> element->vrmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC5A_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC5A* element = dynamic_cast<ExcAC5A*>(BaseClass_ptr1)) {
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
	BaseClass* ExcAC5A_factory() {
		return new ExcAC5A;
	}
}

void ExcAC5A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcAC5A"), &ExcAC5A_factory));
}

void ExcAC5A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcAC5A.a"), &assign_ExcAC5A_a));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC5A.efd1"), &assign_ExcAC5A_efd1));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC5A.efd2"), &assign_ExcAC5A_efd2));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC5A.ka"), &assign_ExcAC5A_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC5A.ke"), &assign_ExcAC5A_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC5A.kf"), &assign_ExcAC5A_kf));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC5A.ks"), &assign_ExcAC5A_ks));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC5A.seefd1"), &assign_ExcAC5A_seefd1));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC5A.seefd2"), &assign_ExcAC5A_seefd2));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC5A.ta"), &assign_ExcAC5A_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC5A.tb"), &assign_ExcAC5A_tb));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC5A.tc"), &assign_ExcAC5A_tc));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC5A.te"), &assign_ExcAC5A_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC5A.tf1"), &assign_ExcAC5A_tf1));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC5A.tf2"), &assign_ExcAC5A_tf2));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC5A.tf3"), &assign_ExcAC5A_tf3));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC5A.vrmax"), &assign_ExcAC5A_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC5A.vrmin"), &assign_ExcAC5A_vrmin));
}

void ExcAC5A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																		}

const char ExcAC5A::debugName[] = "ExcAC5A";
const char* ExcAC5A::debugString()
{
	return ExcAC5A::debugName;
}

const BaseClassDefiner ExcAC5A::declare()
{
	return BaseClassDefiner(ExcAC5A::addConstructToMap, ExcAC5A::addPrimitiveAssignFnsToMap, ExcAC5A::addClassAssignFnsToMap, ExcAC5A::debugName);
}
