#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcST2A.hpp"

#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Boolean.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

ExcST2A::ExcST2A() {};

ExcST2A::~ExcST2A() {};


















bool assign_ExcST2A_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1)) {
                buffer >> element->ka;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST2A_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1)) {
                buffer >> element->ta;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST2A_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1)) {
                buffer >> element->vrmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST2A_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1)) {
                buffer >> element->vrmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST2A_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1)) {
                buffer >> element->ke;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST2A_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1)) {
                buffer >> element->te;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST2A_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1)) {
                buffer >> element->kf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST2A_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1)) {
                buffer >> element->tf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST2A_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1)) {
                buffer >> element->kp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST2A_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1)) {
                buffer >> element->ki;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST2A_kc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1)) {
                buffer >> element->kc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST2A_efdmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1)) {
                buffer >> element->efdmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST2A_uelin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1)) {
                buffer >> element->uelin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST2A_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1)) {
                buffer >> element->tb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcST2A_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcST2A* element = dynamic_cast<ExcST2A*>(BaseClass_ptr1)) {
                buffer >> element->tc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* ExcST2A_factory() {
		return new ExcST2A;
	}
}

void ExcST2A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcST2A"), &ExcST2A_factory));
}

void ExcST2A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.ka"), &assign_ExcST2A_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.ta"), &assign_ExcST2A_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.vrmax"), &assign_ExcST2A_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.vrmin"), &assign_ExcST2A_vrmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.ke"), &assign_ExcST2A_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.te"), &assign_ExcST2A_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.kf"), &assign_ExcST2A_kf));
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.tf"), &assign_ExcST2A_tf));
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.kp"), &assign_ExcST2A_kp));
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.ki"), &assign_ExcST2A_ki));
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.kc"), &assign_ExcST2A_kc));
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.efdmax"), &assign_ExcST2A_efdmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.uelin"), &assign_ExcST2A_uelin));
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.tb"), &assign_ExcST2A_tb));
	assign_map.insert(std::make_pair(std::string("cim:ExcST2A.tc"), &assign_ExcST2A_tc));
}

void ExcST2A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
															}

const char ExcST2A::debugName[] = "ExcST2A";
const char* ExcST2A::debugString()
{
	return ExcST2A::debugName;
}

const BaseClassDefiner ExcST2A::declare()
{
	return BaseClassDefiner(ExcST2A::addConstructToMap, ExcST2A::addPrimitiveAssignFnsToMap, ExcST2A::addClassAssignFnsToMap, ExcST2A::debugName);
}


