#include <sstream>
#include "PowerSystemStabilizerDynamics.hpp"
#include "Pss1A.hpp"

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "InputSignalKind.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

Pss1A::Pss1A() {};

Pss1A::~Pss1A() {};


bool assign_Pss1A_a1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1)) {
                buffer >> element->a1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1A_a2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1)) {
                buffer >> element->a2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1A_a3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1)) {
                buffer >> element->a3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1A_a4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1)) {
                buffer >> element->a4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1A_a5(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1)) {
                buffer >> element->a5;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1A_a6(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1)) {
                buffer >> element->a6;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1A_a7(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1)) {
                buffer >> element->a7;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1A_a8(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1)) {
                buffer >> element->a8;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1A_inputSignalType(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1)) {
                buffer >> element->inputSignalType;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1A_kd(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1)) {
                buffer >> element->kd;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1A_ks(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1)) {
                buffer >> element->ks;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1A_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1)) {
                buffer >> element->t1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1A_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1)) {
                buffer >> element->t2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1A_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1)) {
                buffer >> element->t3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1A_t4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1)) {
                buffer >> element->t4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1A_t5(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1)) {
                buffer >> element->t5;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1A_t6(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1)) {
                buffer >> element->t6;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1A_tdelay(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1)) {
                buffer >> element->tdelay;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1A_vcl(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1)) {
                buffer >> element->vcl;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1A_vcu(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1)) {
                buffer >> element->vcu;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1A_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1)) {
                buffer >> element->vrmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss1A_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss1A* element = dynamic_cast<Pss1A*>(BaseClass_ptr1)) {
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
	BaseClass* Pss1A_factory() {
		return new Pss1A;
	}
}

void Pss1A::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:Pss1A"), &Pss1A_factory));
}

void Pss1A::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:Pss1A.a1"), &assign_Pss1A_a1));
	assign_map.insert(std::make_pair(std::string("cim:Pss1A.a2"), &assign_Pss1A_a2));
	assign_map.insert(std::make_pair(std::string("cim:Pss1A.a3"), &assign_Pss1A_a3));
	assign_map.insert(std::make_pair(std::string("cim:Pss1A.a4"), &assign_Pss1A_a4));
	assign_map.insert(std::make_pair(std::string("cim:Pss1A.a5"), &assign_Pss1A_a5));
	assign_map.insert(std::make_pair(std::string("cim:Pss1A.a6"), &assign_Pss1A_a6));
	assign_map.insert(std::make_pair(std::string("cim:Pss1A.a7"), &assign_Pss1A_a7));
	assign_map.insert(std::make_pair(std::string("cim:Pss1A.a8"), &assign_Pss1A_a8));
	assign_map.insert(std::make_pair(std::string("cim:Pss1A.inputSignalType"), &assign_Pss1A_inputSignalType));
	assign_map.insert(std::make_pair(std::string("cim:Pss1A.kd"), &assign_Pss1A_kd));
	assign_map.insert(std::make_pair(std::string("cim:Pss1A.ks"), &assign_Pss1A_ks));
	assign_map.insert(std::make_pair(std::string("cim:Pss1A.t1"), &assign_Pss1A_t1));
	assign_map.insert(std::make_pair(std::string("cim:Pss1A.t2"), &assign_Pss1A_t2));
	assign_map.insert(std::make_pair(std::string("cim:Pss1A.t3"), &assign_Pss1A_t3));
	assign_map.insert(std::make_pair(std::string("cim:Pss1A.t4"), &assign_Pss1A_t4));
	assign_map.insert(std::make_pair(std::string("cim:Pss1A.t5"), &assign_Pss1A_t5));
	assign_map.insert(std::make_pair(std::string("cim:Pss1A.t6"), &assign_Pss1A_t6));
	assign_map.insert(std::make_pair(std::string("cim:Pss1A.tdelay"), &assign_Pss1A_tdelay));
	assign_map.insert(std::make_pair(std::string("cim:Pss1A.vcl"), &assign_Pss1A_vcl));
	assign_map.insert(std::make_pair(std::string("cim:Pss1A.vcu"), &assign_Pss1A_vcu));
	assign_map.insert(std::make_pair(std::string("cim:Pss1A.vrmax"), &assign_Pss1A_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:Pss1A.vrmin"), &assign_Pss1A_vrmin));
}

void Pss1A::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																						}

const char Pss1A::debugName[] = "Pss1A";
const char* Pss1A::debugString()
{
	return Pss1A::debugName;
}

const BaseClassDefiner Pss1A::declare()
{
	return BaseClassDefiner(Pss1A::addConstructToMap, Pss1A::addPrimitiveAssignFnsToMap, Pss1A::addClassAssignFnsToMap, Pss1A::debugName);
}
