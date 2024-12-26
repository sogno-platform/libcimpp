#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcIEEEST2A.hpp"

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcIEEEST2A::ExcIEEEST2A() {};

ExcIEEEST2A::~ExcIEEEST2A() {};


bool assign_ExcIEEEST2A_efdmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1)) {
                buffer >> element->efdmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST2A_ka(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1)) {
                buffer >> element->ka;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST2A_kc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1)) {
                buffer >> element->kc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST2A_ke(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1)) {
                buffer >> element->ke;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST2A_kf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1)) {
                buffer >> element->kf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST2A_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1)) {
                buffer >> element->ki;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST2A_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1)) {
                buffer >> element->kp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST2A_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1)) {
                buffer >> element->ta;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST2A_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1)) {
                buffer >> element->te;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST2A_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1)) {
                buffer >> element->tf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST2A_uelin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1)) {
                buffer >> element->uelin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST2A_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1)) {
                buffer >> element->vrmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcIEEEST2A_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcIEEEST2A* element = dynamic_cast<ExcIEEEST2A*>(BaseClass_ptr1)) {
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
	BaseClass* ExcIEEEST2A_factory() {
		return new ExcIEEEST2A;
	}
}

void ExcIEEEST2A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcIEEEST2A"), &ExcIEEEST2A_factory));
}

void ExcIEEEST2A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST2A.efdmax"), &assign_ExcIEEEST2A_efdmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST2A.ka"), &assign_ExcIEEEST2A_ka));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST2A.kc"), &assign_ExcIEEEST2A_kc));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST2A.ke"), &assign_ExcIEEEST2A_ke));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST2A.kf"), &assign_ExcIEEEST2A_kf));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST2A.ki"), &assign_ExcIEEEST2A_ki));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST2A.kp"), &assign_ExcIEEEST2A_kp));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST2A.ta"), &assign_ExcIEEEST2A_ta));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST2A.te"), &assign_ExcIEEEST2A_te));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST2A.tf"), &assign_ExcIEEEST2A_tf));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST2A.uelin"), &assign_ExcIEEEST2A_uelin));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST2A.vrmax"), &assign_ExcIEEEST2A_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcIEEEST2A.vrmin"), &assign_ExcIEEEST2A_vrmin));
}

void ExcIEEEST2A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
													}

const char ExcIEEEST2A::debugName[] = "ExcIEEEST2A";
const char* ExcIEEEST2A::debugString()
{
	return ExcIEEEST2A::debugName;
}

const BaseClassDefiner ExcIEEEST2A::declare()
{
	return BaseClassDefiner(ExcIEEEST2A::addConstructToMap, ExcIEEEST2A::addPrimitiveAssignFnsToMap, ExcIEEEST2A::addClassAssignFnsToMap, ExcIEEEST2A::debugName);
}
