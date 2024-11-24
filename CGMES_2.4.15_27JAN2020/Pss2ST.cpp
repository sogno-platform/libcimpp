#include <sstream>
#include "PowerSystemStabilizerDynamics.hpp"
#include "Pss2ST.hpp"

#include "InputSignalKind.hpp"
#include "InputSignalKind.hpp"
#include "PU.hpp"
#include "PU.hpp"
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
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

Pss2ST::Pss2ST() {};

Pss2ST::~Pss2ST() {};


bool assign_Pss2ST_inputSignal1Type(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1)) {
                buffer >> element->inputSignal1Type;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss2ST_inputSignal2Type(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1)) {
                buffer >> element->inputSignal2Type;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss2ST_k1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1)) {
                buffer >> element->k1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss2ST_k2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1)) {
                buffer >> element->k2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss2ST_lsmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1)) {
                buffer >> element->lsmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss2ST_lsmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1)) {
                buffer >> element->lsmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss2ST_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1)) {
                buffer >> element->t1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss2ST_t10(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1)) {
                buffer >> element->t10;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss2ST_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1)) {
                buffer >> element->t2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss2ST_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1)) {
                buffer >> element->t3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss2ST_t4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1)) {
                buffer >> element->t4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss2ST_t5(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1)) {
                buffer >> element->t5;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss2ST_t6(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1)) {
                buffer >> element->t6;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss2ST_t7(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1)) {
                buffer >> element->t7;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss2ST_t8(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1)) {
                buffer >> element->t8;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss2ST_t9(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1)) {
                buffer >> element->t9;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss2ST_vcl(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1)) {
                buffer >> element->vcl;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Pss2ST_vcu(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Pss2ST* element = dynamic_cast<Pss2ST*>(BaseClass_ptr1)) {
                buffer >> element->vcu;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}




















namespace CIMPP {
	BaseClass* Pss2ST_factory() {
		return new Pss2ST;
	}
}

void Pss2ST::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:Pss2ST"), &Pss2ST_factory));
}

void Pss2ST::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:Pss2ST.inputSignal1Type"), &assign_Pss2ST_inputSignal1Type));
	assign_map.insert(std::make_pair(std::string("cim:Pss2ST.inputSignal2Type"), &assign_Pss2ST_inputSignal2Type));
	assign_map.insert(std::make_pair(std::string("cim:Pss2ST.k1"), &assign_Pss2ST_k1));
	assign_map.insert(std::make_pair(std::string("cim:Pss2ST.k2"), &assign_Pss2ST_k2));
	assign_map.insert(std::make_pair(std::string("cim:Pss2ST.lsmax"), &assign_Pss2ST_lsmax));
	assign_map.insert(std::make_pair(std::string("cim:Pss2ST.lsmin"), &assign_Pss2ST_lsmin));
	assign_map.insert(std::make_pair(std::string("cim:Pss2ST.t1"), &assign_Pss2ST_t1));
	assign_map.insert(std::make_pair(std::string("cim:Pss2ST.t10"), &assign_Pss2ST_t10));
	assign_map.insert(std::make_pair(std::string("cim:Pss2ST.t2"), &assign_Pss2ST_t2));
	assign_map.insert(std::make_pair(std::string("cim:Pss2ST.t3"), &assign_Pss2ST_t3));
	assign_map.insert(std::make_pair(std::string("cim:Pss2ST.t4"), &assign_Pss2ST_t4));
	assign_map.insert(std::make_pair(std::string("cim:Pss2ST.t5"), &assign_Pss2ST_t5));
	assign_map.insert(std::make_pair(std::string("cim:Pss2ST.t6"), &assign_Pss2ST_t6));
	assign_map.insert(std::make_pair(std::string("cim:Pss2ST.t7"), &assign_Pss2ST_t7));
	assign_map.insert(std::make_pair(std::string("cim:Pss2ST.t8"), &assign_Pss2ST_t8));
	assign_map.insert(std::make_pair(std::string("cim:Pss2ST.t9"), &assign_Pss2ST_t9));
	assign_map.insert(std::make_pair(std::string("cim:Pss2ST.vcl"), &assign_Pss2ST_vcl));
	assign_map.insert(std::make_pair(std::string("cim:Pss2ST.vcu"), &assign_Pss2ST_vcu));
}

void Pss2ST::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																		}

const char Pss2ST::debugName[] = "Pss2ST";
const char* Pss2ST::debugString()
{
	return Pss2ST::debugName;
}

const BaseClassDefiner Pss2ST::declare()
{
	return BaseClassDefiner(Pss2ST::addConstructToMap, Pss2ST::addPrimitiveAssignFnsToMap, Pss2ST::addClassAssignFnsToMap, Pss2ST::debugName);
}
