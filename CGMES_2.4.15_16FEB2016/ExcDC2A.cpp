#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcDC2A.hpp"

#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Boolean.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

ExcDC2A::ExcDC2A() {};

ExcDC2A::~ExcDC2A() {};





















bool assign_ExcDC2A_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1)) {
                buffer >> element->ka;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC2A_ks(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1)) {
                buffer >> element->ks;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC2A_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1)) {
                buffer >> element->ta;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC2A_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1)) {
                buffer >> element->tb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC2A_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1)) {
                buffer >> element->tc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC2A_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1)) {
                buffer >> element->vrmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC2A_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1)) {
                buffer >> element->vrmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC2A_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1)) {
                buffer >> element->ke;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC2A_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1)) {
                buffer >> element->te;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC2A_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1)) {
                buffer >> element->kf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC2A_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1)) {
                buffer >> element->tf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC2A_tf1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1)) {
                buffer >> element->tf1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC2A_efd1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1)) {
                buffer >> element->efd1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC2A_seefd1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1)) {
                buffer >> element->seefd1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC2A_efd2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1)) {
                buffer >> element->efd2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC2A_seefd2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1)) {
                buffer >> element->seefd2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC2A_exclim(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1)) {
                buffer >> element->exclim;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcDC2A_vtlim(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcDC2A* element = dynamic_cast<ExcDC2A*>(BaseClass_ptr1)) {
                buffer >> element->vtlim;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* ExcDC2A_factory() {
		return new ExcDC2A;
	}
}

void ExcDC2A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcDC2A"), &ExcDC2A_factory));
}

void ExcDC2A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.ka"), &assign_ExcDC2A_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.ks"), &assign_ExcDC2A_ks));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.ta"), &assign_ExcDC2A_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.tb"), &assign_ExcDC2A_tb));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.tc"), &assign_ExcDC2A_tc));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.vrmax"), &assign_ExcDC2A_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.vrmin"), &assign_ExcDC2A_vrmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.ke"), &assign_ExcDC2A_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.te"), &assign_ExcDC2A_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.kf"), &assign_ExcDC2A_kf));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.tf"), &assign_ExcDC2A_tf));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.tf1"), &assign_ExcDC2A_tf1));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.efd1"), &assign_ExcDC2A_efd1));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.seefd1"), &assign_ExcDC2A_seefd1));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.efd2"), &assign_ExcDC2A_efd2));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.seefd2"), &assign_ExcDC2A_seefd2));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.exclim"), &assign_ExcDC2A_exclim));
	assign_map.insert(std::make_pair(std::string("cim:ExcDC2A.vtlim"), &assign_ExcDC2A_vtlim));
}

void ExcDC2A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																		}

const char ExcDC2A::debugName[] = "ExcDC2A";
const char* ExcDC2A::debugString()
{
	return ExcDC2A::debugName;
}

const BaseClassDefiner ExcDC2A::declare()
{
	return BaseClassDefiner(ExcDC2A::addConstructToMap, ExcDC2A::addPrimitiveAssignFnsToMap, ExcDC2A::addClassAssignFnsToMap, ExcDC2A::debugName);
}


