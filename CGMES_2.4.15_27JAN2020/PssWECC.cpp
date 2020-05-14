#include <sstream>
#include "PowerSystemStabilizerDynamics.hpp"
#include "PssWECC.hpp"

#include "InputSignalKind.hpp"
#include "InputSignalKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
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
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

PssWECC::PssWECC() {};

PssWECC::~PssWECC() {};





















bool assign_PssWECC_inputSignal1Type(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1)) {
                buffer >> element->inputSignal1Type;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssWECC_inputSignal2Type(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1)) {
                buffer >> element->inputSignal2Type;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssWECC_k1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1)) {
                buffer >> element->k1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssWECC_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1)) {
                buffer >> element->t1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssWECC_k2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1)) {
                buffer >> element->k2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssWECC_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1)) {
                buffer >> element->t2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssWECC_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1)) {
                buffer >> element->t3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssWECC_t4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1)) {
                buffer >> element->t4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssWECC_t5(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1)) {
                buffer >> element->t5;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssWECC_t6(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1)) {
                buffer >> element->t6;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssWECC_t7(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1)) {
                buffer >> element->t7;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssWECC_t8(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1)) {
                buffer >> element->t8;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssWECC_t10(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1)) {
                buffer >> element->t10;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssWECC_t9(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1)) {
                buffer >> element->t9;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssWECC_vsmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1)) {
                buffer >> element->vsmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssWECC_vsmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1)) {
                buffer >> element->vsmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssWECC_vcu(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1)) {
                buffer >> element->vcu;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssWECC_vcl(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssWECC* element = dynamic_cast<PssWECC*>(BaseClass_ptr1)) {
                buffer >> element->vcl;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* PssWECC_factory() {
		return new PssWECC;
	}
}

void PssWECC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:PssWECC"), &PssWECC_factory));
}

void PssWECC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:PssWECC.inputSignal1Type"), &assign_PssWECC_inputSignal1Type));
	assign_map.insert(std::make_pair(std::string("cim:PssWECC.inputSignal2Type"), &assign_PssWECC_inputSignal2Type));
	assign_map.insert(std::make_pair(std::string("cim:PssWECC.k1"), &assign_PssWECC_k1));
	assign_map.insert(std::make_pair(std::string("cim:PssWECC.t1"), &assign_PssWECC_t1));
	assign_map.insert(std::make_pair(std::string("cim:PssWECC.k2"), &assign_PssWECC_k2));
	assign_map.insert(std::make_pair(std::string("cim:PssWECC.t2"), &assign_PssWECC_t2));
	assign_map.insert(std::make_pair(std::string("cim:PssWECC.t3"), &assign_PssWECC_t3));
	assign_map.insert(std::make_pair(std::string("cim:PssWECC.t4"), &assign_PssWECC_t4));
	assign_map.insert(std::make_pair(std::string("cim:PssWECC.t5"), &assign_PssWECC_t5));
	assign_map.insert(std::make_pair(std::string("cim:PssWECC.t6"), &assign_PssWECC_t6));
	assign_map.insert(std::make_pair(std::string("cim:PssWECC.t7"), &assign_PssWECC_t7));
	assign_map.insert(std::make_pair(std::string("cim:PssWECC.t8"), &assign_PssWECC_t8));
	assign_map.insert(std::make_pair(std::string("cim:PssWECC.t10"), &assign_PssWECC_t10));
	assign_map.insert(std::make_pair(std::string("cim:PssWECC.t9"), &assign_PssWECC_t9));
	assign_map.insert(std::make_pair(std::string("cim:PssWECC.vsmax"), &assign_PssWECC_vsmax));
	assign_map.insert(std::make_pair(std::string("cim:PssWECC.vsmin"), &assign_PssWECC_vsmin));
	assign_map.insert(std::make_pair(std::string("cim:PssWECC.vcu"), &assign_PssWECC_vcu));
	assign_map.insert(std::make_pair(std::string("cim:PssWECC.vcl"), &assign_PssWECC_vcl));
}

void PssWECC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																		}

const char PssWECC::debugName[] = "PssWECC";
const char* PssWECC::debugString()
{
	return PssWECC::debugName;
}

const BaseClassDefiner PssWECC::declare()
{
	return BaseClassDefiner(PssWECC::addConstructToMap, PssWECC::addPrimitiveAssignFnsToMap, PssWECC::addClassAssignFnsToMap, PssWECC::debugName);
}


