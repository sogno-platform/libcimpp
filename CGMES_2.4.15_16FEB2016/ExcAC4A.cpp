#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcAC4A.hpp"

#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcAC4A::ExcAC4A() {};

ExcAC4A::~ExcAC4A() {};












bool assign_ExcAC4A_vimax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC4A* element = dynamic_cast<ExcAC4A*>(BaseClass_ptr1)) {
                buffer >> element->vimax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC4A_vimin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC4A* element = dynamic_cast<ExcAC4A*>(BaseClass_ptr1)) {
                buffer >> element->vimin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC4A_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC4A* element = dynamic_cast<ExcAC4A*>(BaseClass_ptr1)) {
                buffer >> element->tc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC4A_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC4A* element = dynamic_cast<ExcAC4A*>(BaseClass_ptr1)) {
                buffer >> element->tb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC4A_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC4A* element = dynamic_cast<ExcAC4A*>(BaseClass_ptr1)) {
                buffer >> element->ka;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC4A_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC4A* element = dynamic_cast<ExcAC4A*>(BaseClass_ptr1)) {
                buffer >> element->ta;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC4A_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC4A* element = dynamic_cast<ExcAC4A*>(BaseClass_ptr1)) {
                buffer >> element->vrmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC4A_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC4A* element = dynamic_cast<ExcAC4A*>(BaseClass_ptr1)) {
                buffer >> element->vrmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcAC4A_kc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcAC4A* element = dynamic_cast<ExcAC4A*>(BaseClass_ptr1)) {
                buffer >> element->kc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* ExcAC4A_factory() {
		return new ExcAC4A;
	}
}

void ExcAC4A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcAC4A"), &ExcAC4A_factory));
}

void ExcAC4A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcAC4A.vimax"), &assign_ExcAC4A_vimax));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC4A.vimin"), &assign_ExcAC4A_vimin));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC4A.tc"), &assign_ExcAC4A_tc));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC4A.tb"), &assign_ExcAC4A_tb));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC4A.ka"), &assign_ExcAC4A_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC4A.ta"), &assign_ExcAC4A_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC4A.vrmax"), &assign_ExcAC4A_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC4A.vrmin"), &assign_ExcAC4A_vrmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcAC4A.kc"), &assign_ExcAC4A_kc));
}

void ExcAC4A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
									}

const char ExcAC4A::debugName[] = "ExcAC4A";
const char* ExcAC4A::debugString()
{
	return ExcAC4A::debugName;
}

const BaseClassDefiner ExcAC4A::declare()
{
	return BaseClassDefiner(ExcAC4A::addConstructToMap, ExcAC4A::addPrimitiveAssignFnsToMap, ExcAC4A::addClassAssignFnsToMap, ExcAC4A::debugName);
}


