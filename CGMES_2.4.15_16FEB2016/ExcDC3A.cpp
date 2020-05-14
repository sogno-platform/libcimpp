#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcDC3A.hpp"

#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

ExcDC3A::ExcDC3A() {};

ExcDC3A::~ExcDC3A() {};



















bool assign_ExcDC3A_trh(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1)) {
                buffer >> element->trh;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC3A_ks(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1)) {
                buffer >> element->ks;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC3A_kr(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1)) {
                buffer >> element->kr;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC3A_kv(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1)) {
                buffer >> element->kv;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC3A_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1)) {
                buffer >> element->vrmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC3A_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1)) {
                buffer >> element->vrmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC3A_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1)) {
                buffer >> element->te;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC3A_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1)) {
                buffer >> element->ke;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC3A_efd1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1)) {
                buffer >> element->efd1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC3A_seefd1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1)) {
                buffer >> element->seefd1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC3A_efd2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1)) {
                buffer >> element->efd2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC3A_seefd2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1)) {
                buffer >> element->seefd2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC3A_exclim(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1)) {
                buffer >> element->exclim;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC3A_edfmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1)) {
                buffer >> element->edfmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC3A_efdmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1)) {
                buffer >> element->efdmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC3A_efdlim(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC3A* element = dynamic_cast<ExcDC3A*>(BaseClass_ptr1)) {
                buffer >> element->efdlim;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* ExcDC3A_factory() {
		return new ExcDC3A;
	}
}

void ExcDC3A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcDC3A"), &ExcDC3A_factory));
}

void ExcDC3A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A.trh"), &assign_ExcDC3A_trh));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A.ks"), &assign_ExcDC3A_ks));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A.kr"), &assign_ExcDC3A_kr));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A.kv"), &assign_ExcDC3A_kv));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A.vrmax"), &assign_ExcDC3A_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A.vrmin"), &assign_ExcDC3A_vrmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A.te"), &assign_ExcDC3A_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A.ke"), &assign_ExcDC3A_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A.efd1"), &assign_ExcDC3A_efd1));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A.seefd1"), &assign_ExcDC3A_seefd1));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A.efd2"), &assign_ExcDC3A_efd2));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A.seefd2"), &assign_ExcDC3A_seefd2));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A.exclim"), &assign_ExcDC3A_exclim));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A.edfmax"), &assign_ExcDC3A_edfmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A.efdmin"), &assign_ExcDC3A_efdmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC3A.efdlim"), &assign_ExcDC3A_efdlim));
}

void ExcDC3A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																}

const char ExcDC3A::debugName[] = "ExcDC3A";
const char* ExcDC3A::debugString()
{
	return ExcDC3A::debugName;
}

const BaseClassDefiner ExcDC3A::declare()
{
	return BaseClassDefiner(ExcDC3A::addConstructToMap, ExcDC3A::addPrimitiveAssignFnsToMap, ExcDC3A::addClassAssignFnsToMap, ExcDC3A::debugName);
}


