#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcIEEEDC3A.hpp"

#include "PU.hpp"
#include "PU.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcIEEEDC3A::ExcIEEEDC3A() {};

ExcIEEEDC3A::~ExcIEEEDC3A() {};


bool assign_ExcIEEEDC3A_efd1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC3A* element = dynamic_cast<ExcIEEEDC3A*>(BaseClass_ptr1)) {
                buffer >> element->efd1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC3A_efd2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC3A* element = dynamic_cast<ExcIEEEDC3A*>(BaseClass_ptr1)) {
                buffer >> element->efd2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC3A_exclim(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC3A* element = dynamic_cast<ExcIEEEDC3A*>(BaseClass_ptr1)) {
                buffer >> element->exclim;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC3A_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC3A* element = dynamic_cast<ExcIEEEDC3A*>(BaseClass_ptr1)) {
                buffer >> element->ke;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC3A_kv(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC3A* element = dynamic_cast<ExcIEEEDC3A*>(BaseClass_ptr1)) {
                buffer >> element->kv;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC3A_seefd1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC3A* element = dynamic_cast<ExcIEEEDC3A*>(BaseClass_ptr1)) {
                buffer >> element->seefd1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC3A_seefd2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC3A* element = dynamic_cast<ExcIEEEDC3A*>(BaseClass_ptr1)) {
                buffer >> element->seefd2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC3A_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC3A* element = dynamic_cast<ExcIEEEDC3A*>(BaseClass_ptr1)) {
                buffer >> element->te;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC3A_trh(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC3A* element = dynamic_cast<ExcIEEEDC3A*>(BaseClass_ptr1)) {
                buffer >> element->trh;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC3A_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC3A* element = dynamic_cast<ExcIEEEDC3A*>(BaseClass_ptr1)) {
                buffer >> element->vrmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEDC3A_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEDC3A* element = dynamic_cast<ExcIEEEDC3A*>(BaseClass_ptr1)) {
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
	BaseClass* ExcIEEEDC3A_factory() {
		return new ExcIEEEDC3A;
	}
}

void ExcIEEEDC3A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcIEEEDC3A"), &ExcIEEEDC3A_factory));
}

void ExcIEEEDC3A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC3A.efd1"), &assign_ExcIEEEDC3A_efd1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC3A.efd2"), &assign_ExcIEEEDC3A_efd2));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC3A.exclim"), &assign_ExcIEEEDC3A_exclim));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC3A.ke"), &assign_ExcIEEEDC3A_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC3A.kv"), &assign_ExcIEEEDC3A_kv));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC3A.seefd1"), &assign_ExcIEEEDC3A_seefd1));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC3A.seefd2"), &assign_ExcIEEEDC3A_seefd2));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC3A.te"), &assign_ExcIEEEDC3A_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC3A.trh"), &assign_ExcIEEEDC3A_trh));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC3A.vrmax"), &assign_ExcIEEEDC3A_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEDC3A.vrmin"), &assign_ExcIEEEDC3A_vrmin));
}

void ExcIEEEDC3A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
											}

const char ExcIEEEDC3A::debugName[] = "ExcIEEEDC3A";
const char* ExcIEEEDC3A::debugString()
{
	return ExcIEEEDC3A::debugName;
}

const BaseClassDefiner ExcIEEEDC3A::declare()
{
	return BaseClassDefiner(ExcIEEEDC3A::addConstructToMap, ExcIEEEDC3A::addPrimitiveAssignFnsToMap, ExcIEEEDC3A::addClassAssignFnsToMap, ExcIEEEDC3A::debugName);
}
