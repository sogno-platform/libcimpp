#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcIEEEAC4A.hpp"

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

ExcIEEEAC4A::ExcIEEEAC4A() {};

ExcIEEEAC4A::~ExcIEEEAC4A() {};












bool assign_ExcIEEEAC4A_vimax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC4A* element = dynamic_cast<ExcIEEEAC4A*>(BaseClass_ptr1)) {
                buffer >> element->vimax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC4A_vimin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC4A* element = dynamic_cast<ExcIEEEAC4A*>(BaseClass_ptr1)) {
                buffer >> element->vimin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC4A_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC4A* element = dynamic_cast<ExcIEEEAC4A*>(BaseClass_ptr1)) {
                buffer >> element->tc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC4A_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC4A* element = dynamic_cast<ExcIEEEAC4A*>(BaseClass_ptr1)) {
                buffer >> element->tb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC4A_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC4A* element = dynamic_cast<ExcIEEEAC4A*>(BaseClass_ptr1)) {
                buffer >> element->ka;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC4A_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC4A* element = dynamic_cast<ExcIEEEAC4A*>(BaseClass_ptr1)) {
                buffer >> element->ta;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC4A_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC4A* element = dynamic_cast<ExcIEEEAC4A*>(BaseClass_ptr1)) {
                buffer >> element->vrmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC4A_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC4A* element = dynamic_cast<ExcIEEEAC4A*>(BaseClass_ptr1)) {
                buffer >> element->vrmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEAC4A_kc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEAC4A* element = dynamic_cast<ExcIEEEAC4A*>(BaseClass_ptr1)) {
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
	BaseClass* ExcIEEEAC4A_factory() {
		return new ExcIEEEAC4A;
	}
}

void ExcIEEEAC4A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcIEEEAC4A"), &ExcIEEEAC4A_factory));
}

void ExcIEEEAC4A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC4A.vimax"), &assign_ExcIEEEAC4A_vimax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC4A.vimin"), &assign_ExcIEEEAC4A_vimin));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC4A.tc"), &assign_ExcIEEEAC4A_tc));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC4A.tb"), &assign_ExcIEEEAC4A_tb));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC4A.ka"), &assign_ExcIEEEAC4A_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC4A.ta"), &assign_ExcIEEEAC4A_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC4A.vrmax"), &assign_ExcIEEEAC4A_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC4A.vrmin"), &assign_ExcIEEEAC4A_vrmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEAC4A.kc"), &assign_ExcIEEEAC4A_kc));
}

void ExcIEEEAC4A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
									}

const char ExcIEEEAC4A::debugName[] = "ExcIEEEAC4A";
const char* ExcIEEEAC4A::debugString()
{
	return ExcIEEEAC4A::debugName;
}

const BaseClassDefiner ExcIEEEAC4A::declare()
{
	return BaseClassDefiner(ExcIEEEAC4A::addConstructToMap, ExcIEEEAC4A::addPrimitiveAssignFnsToMap, ExcIEEEAC4A::addClassAssignFnsToMap, ExcIEEEAC4A::debugName);
}


