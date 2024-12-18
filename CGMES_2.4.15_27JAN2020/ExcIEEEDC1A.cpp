#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcIEEEDC1A.hpp"

#include "PU.hpp"
#include "PU.hpp"
#include "Boolean.hpp"
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

ExcIEEEDC1A::ExcIEEEDC1A() {};

ExcIEEEDC1A::~ExcIEEEDC1A() {};


bool assign_ExcIEEEDC1A_efd1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1)) {
                buffer >> element->efd1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC1A_efd2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1)) {
                buffer >> element->efd2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC1A_exclim(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1)) {
                buffer >> element->exclim;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC1A_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1)) {
                buffer >> element->ka;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC1A_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1)) {
                buffer >> element->ke;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC1A_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1)) {
                buffer >> element->kf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC1A_seefd1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1)) {
                buffer >> element->seefd1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC1A_seefd2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1)) {
                buffer >> element->seefd2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC1A_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1)) {
                buffer >> element->ta;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC1A_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1)) {
                buffer >> element->tb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC1A_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1)) {
                buffer >> element->tc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC1A_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1)) {
                buffer >> element->te;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC1A_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1)) {
                buffer >> element->tf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC1A_uelin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1)) {
                buffer >> element->uelin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC1A_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1)) {
                buffer >> element->vrmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC1A_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC1A* element = dynamic_cast<ExcIEEEDC1A*>(BaseClass_ptr1)) {
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
	BaseClass* ExcIEEEDC1A_factory() {
		return new ExcIEEEDC1A;
	}
}

void ExcIEEEDC1A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcIEEEDC1A"), &ExcIEEEDC1A_factory));
}

void ExcIEEEDC1A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC1A.efd1"), &assign_ExcIEEEDC1A_efd1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC1A.efd2"), &assign_ExcIEEEDC1A_efd2));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC1A.exclim"), &assign_ExcIEEEDC1A_exclim));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC1A.ka"), &assign_ExcIEEEDC1A_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC1A.ke"), &assign_ExcIEEEDC1A_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC1A.kf"), &assign_ExcIEEEDC1A_kf));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC1A.seefd1"), &assign_ExcIEEEDC1A_seefd1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC1A.seefd2"), &assign_ExcIEEEDC1A_seefd2));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC1A.ta"), &assign_ExcIEEEDC1A_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC1A.tb"), &assign_ExcIEEEDC1A_tb));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC1A.tc"), &assign_ExcIEEEDC1A_tc));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC1A.te"), &assign_ExcIEEEDC1A_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC1A.tf"), &assign_ExcIEEEDC1A_tf));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC1A.uelin"), &assign_ExcIEEEDC1A_uelin));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC1A.vrmax"), &assign_ExcIEEEDC1A_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC1A.vrmin"), &assign_ExcIEEEDC1A_vrmin));
}

void ExcIEEEDC1A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																}

const char ExcIEEEDC1A::debugName[] = "ExcIEEEDC1A";
const char* ExcIEEEDC1A::debugString()
{
	return ExcIEEEDC1A::debugName;
}

const BaseClassDefiner ExcIEEEDC1A::declare()
{
	return BaseClassDefiner(ExcIEEEDC1A::addConstructToMap, ExcIEEEDC1A::addPrimitiveAssignFnsToMap, ExcIEEEDC1A::addClassAssignFnsToMap, ExcIEEEDC1A::debugName);
}
