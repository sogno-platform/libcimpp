#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcIEEEST5B.hpp"

#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
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

ExcIEEEST5B::ExcIEEEST5B() {};

ExcIEEEST5B::~ExcIEEEST5B() {};


bool assign_ExcIEEEST5B_kc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1)) {
                buffer >> element->kc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST5B_kr(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1)) {
                buffer >> element->kr;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST5B_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1)) {
                buffer >> element->t1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST5B_tb1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1)) {
                buffer >> element->tb1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST5B_tb2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1)) {
                buffer >> element->tb2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST5B_tc1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1)) {
                buffer >> element->tc1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST5B_tc2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1)) {
                buffer >> element->tc2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST5B_tob1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1)) {
                buffer >> element->tob1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST5B_tob2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1)) {
                buffer >> element->tob2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST5B_toc1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1)) {
                buffer >> element->toc1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST5B_toc2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1)) {
                buffer >> element->toc2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST5B_tub1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1)) {
                buffer >> element->tub1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST5B_tub2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1)) {
                buffer >> element->tub2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST5B_tuc1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1)) {
                buffer >> element->tuc1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST5B_tuc2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1)) {
                buffer >> element->tuc2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST5B_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1)) {
                buffer >> element->vrmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST5B_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1)) {
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
	BaseClass* ExcIEEEST5B_factory() {
		return new ExcIEEEST5B;
	}
}

void ExcIEEEST5B::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcIEEEST5B"), &ExcIEEEST5B_factory));
}

void ExcIEEEST5B::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST5B.kc"), &assign_ExcIEEEST5B_kc));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST5B.kr"), &assign_ExcIEEEST5B_kr));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST5B.t1"), &assign_ExcIEEEST5B_t1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST5B.tb1"), &assign_ExcIEEEST5B_tb1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST5B.tb2"), &assign_ExcIEEEST5B_tb2));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST5B.tc1"), &assign_ExcIEEEST5B_tc1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST5B.tc2"), &assign_ExcIEEEST5B_tc2));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST5B.tob1"), &assign_ExcIEEEST5B_tob1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST5B.tob2"), &assign_ExcIEEEST5B_tob2));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST5B.toc1"), &assign_ExcIEEEST5B_toc1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST5B.toc2"), &assign_ExcIEEEST5B_toc2));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST5B.tub1"), &assign_ExcIEEEST5B_tub1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST5B.tub2"), &assign_ExcIEEEST5B_tub2));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST5B.tuc1"), &assign_ExcIEEEST5B_tuc1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST5B.tuc2"), &assign_ExcIEEEST5B_tuc2));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST5B.vrmax"), &assign_ExcIEEEST5B_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST5B.vrmin"), &assign_ExcIEEEST5B_vrmin));
}

void ExcIEEEST5B::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																	}

const char ExcIEEEST5B::debugName[] = "ExcIEEEST5B";
const char* ExcIEEEST5B::debugString()
{
	return ExcIEEEST5B::debugName;
}

const BaseClassDefiner ExcIEEEST5B::declare()
{
	return BaseClassDefiner(ExcIEEEST5B::addConstructToMap, ExcIEEEST5B::addPrimitiveAssignFnsToMap, ExcIEEEST5B::addClassAssignFnsToMap, ExcIEEEST5B::debugName);
}
