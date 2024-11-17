#include <sstream>
#include "PowerSystemStabilizerDynamics.hpp"
#include "PssPTIST1.hpp"

#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

PssPTIST1::PssPTIST1() {};

PssPTIST1::~PssPTIST1() {};


bool assign_PssPTIST1_dtc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssPTIST1* element = dynamic_cast<PssPTIST1*>(BaseClass_ptr1)) {
                buffer >> element->dtc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssPTIST1_dtf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssPTIST1* element = dynamic_cast<PssPTIST1*>(BaseClass_ptr1)) {
                buffer >> element->dtf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssPTIST1_dtp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssPTIST1* element = dynamic_cast<PssPTIST1*>(BaseClass_ptr1)) {
                buffer >> element->dtp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssPTIST1_k(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssPTIST1* element = dynamic_cast<PssPTIST1*>(BaseClass_ptr1)) {
                buffer >> element->k;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssPTIST1_m(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssPTIST1* element = dynamic_cast<PssPTIST1*>(BaseClass_ptr1)) {
                buffer >> element->m;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssPTIST1_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssPTIST1* element = dynamic_cast<PssPTIST1*>(BaseClass_ptr1)) {
                buffer >> element->t1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssPTIST1_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssPTIST1* element = dynamic_cast<PssPTIST1*>(BaseClass_ptr1)) {
                buffer >> element->t2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssPTIST1_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssPTIST1* element = dynamic_cast<PssPTIST1*>(BaseClass_ptr1)) {
                buffer >> element->t3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssPTIST1_t4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssPTIST1* element = dynamic_cast<PssPTIST1*>(BaseClass_ptr1)) {
                buffer >> element->t4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssPTIST1_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssPTIST1* element = dynamic_cast<PssPTIST1*>(BaseClass_ptr1)) {
                buffer >> element->tf;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssPTIST1_tp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssPTIST1* element = dynamic_cast<PssPTIST1*>(BaseClass_ptr1)) {
                buffer >> element->tp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}













namespace CIMPP {
	BaseClass* PssPTIST1_factory() {
		return new PssPTIST1;
	}
}

void PssPTIST1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:PssPTIST1"), &PssPTIST1_factory));
}

void PssPTIST1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:PssPTIST1.dtc"), &assign_PssPTIST1_dtc));
	assign_map.insert(std::make_pair(std::string("cim:PssPTIST1.dtf"), &assign_PssPTIST1_dtf));
	assign_map.insert(std::make_pair(std::string("cim:PssPTIST1.dtp"), &assign_PssPTIST1_dtp));
	assign_map.insert(std::make_pair(std::string("cim:PssPTIST1.k"), &assign_PssPTIST1_k));
	assign_map.insert(std::make_pair(std::string("cim:PssPTIST1.m"), &assign_PssPTIST1_m));
	assign_map.insert(std::make_pair(std::string("cim:PssPTIST1.t1"), &assign_PssPTIST1_t1));
	assign_map.insert(std::make_pair(std::string("cim:PssPTIST1.t2"), &assign_PssPTIST1_t2));
	assign_map.insert(std::make_pair(std::string("cim:PssPTIST1.t3"), &assign_PssPTIST1_t3));
	assign_map.insert(std::make_pair(std::string("cim:PssPTIST1.t4"), &assign_PssPTIST1_t4));
	assign_map.insert(std::make_pair(std::string("cim:PssPTIST1.tf"), &assign_PssPTIST1_tf));
	assign_map.insert(std::make_pair(std::string("cim:PssPTIST1.tp"), &assign_PssPTIST1_tp));
}

void PssPTIST1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
											}

const char PssPTIST1::debugName[] = "PssPTIST1";
const char* PssPTIST1::debugString()
{
	return PssPTIST1::debugName;
}

const BaseClassDefiner PssPTIST1::declare()
{
	return BaseClassDefiner(PssPTIST1::addConstructToMap, PssPTIST1::addPrimitiveAssignFnsToMap, PssPTIST1::addClassAssignFnsToMap, PssPTIST1::debugName);
}
