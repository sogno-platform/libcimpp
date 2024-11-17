#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcIEEEDC2A.hpp"

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
#include "Boolean.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcIEEEDC2A::ExcIEEEDC2A() {};

ExcIEEEDC2A::~ExcIEEEDC2A() {};


bool assign_ExcIEEEDC2A_efd1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1)) {
                buffer >> element->efd1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC2A_efd2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1)) {
                buffer >> element->efd2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC2A_exclim(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1)) {
                buffer >> element->exclim;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC2A_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1)) {
                buffer >> element->ka;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC2A_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1)) {
                buffer >> element->ke;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC2A_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1)) {
                buffer >> element->kf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC2A_seefd1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1)) {
                buffer >> element->seefd1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC2A_seefd2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1)) {
                buffer >> element->seefd2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC2A_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1)) {
                buffer >> element->ta;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC2A_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1)) {
                buffer >> element->tb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC2A_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1)) {
                buffer >> element->tc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC2A_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1)) {
                buffer >> element->te;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC2A_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1)) {
                buffer >> element->tf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC2A_uelin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1)) {
                buffer >> element->uelin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC2A_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1)) {
                buffer >> element->vrmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC2A_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC2A* element = dynamic_cast<ExcIEEEDC2A*>(BaseClass_ptr1)) {
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
	BaseClass* ExcIEEEDC2A_factory() {
		return new ExcIEEEDC2A;
	}
}

void ExcIEEEDC2A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A"), &ExcIEEEDC2A_factory));
}

void ExcIEEEDC2A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.efd1"), &assign_ExcIEEEDC2A_efd1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.efd2"), &assign_ExcIEEEDC2A_efd2));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.exclim"), &assign_ExcIEEEDC2A_exclim));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.ka"), &assign_ExcIEEEDC2A_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.ke"), &assign_ExcIEEEDC2A_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.kf"), &assign_ExcIEEEDC2A_kf));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.seefd1"), &assign_ExcIEEEDC2A_seefd1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.seefd2"), &assign_ExcIEEEDC2A_seefd2));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.ta"), &assign_ExcIEEEDC2A_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.tb"), &assign_ExcIEEEDC2A_tb));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.tc"), &assign_ExcIEEEDC2A_tc));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.te"), &assign_ExcIEEEDC2A_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.tf"), &assign_ExcIEEEDC2A_tf));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.uelin"), &assign_ExcIEEEDC2A_uelin));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.vrmax"), &assign_ExcIEEEDC2A_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC2A.vrmin"), &assign_ExcIEEEDC2A_vrmin));
}

void ExcIEEEDC2A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																}

const char ExcIEEEDC2A::debugName[] = "ExcIEEEDC2A";
const char* ExcIEEEDC2A::debugString()
{
	return ExcIEEEDC2A::debugName;
}

const BaseClassDefiner ExcIEEEDC2A::declare()
{
	return BaseClassDefiner(ExcIEEEDC2A::addConstructToMap, ExcIEEEDC2A::addPrimitiveAssignFnsToMap, ExcIEEEDC2A::addClassAssignFnsToMap, ExcIEEEDC2A::debugName);
}
