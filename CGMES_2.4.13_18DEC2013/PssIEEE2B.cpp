#include <sstream>
#include "PowerSystemStabilizerDynamics.hpp"
#include "PssIEEE2B.hpp"

#include "InputSignalKind.hpp"
#include "InputSignalKind.hpp"
#include "PU.hpp"
#include "PU.hpp"
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
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Integer.hpp"
#include "Integer.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

PssIEEE2B::PssIEEE2B() {};

PssIEEE2B::~PssIEEE2B() {};






























bool assign_PssIEEE2B_inputSignal1Type(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssIEEE2B* element = dynamic_cast<PssIEEE2B*>(BaseClass_ptr1)) {
                buffer >> element->inputSignal1Type;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssIEEE2B_inputSignal2Type(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssIEEE2B* element = dynamic_cast<PssIEEE2B*>(BaseClass_ptr1)) {
                buffer >> element->inputSignal2Type;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssIEEE2B_vsi1max(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssIEEE2B* element = dynamic_cast<PssIEEE2B*>(BaseClass_ptr1)) {
                buffer >> element->vsi1max;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssIEEE2B_vsi1min(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssIEEE2B* element = dynamic_cast<PssIEEE2B*>(BaseClass_ptr1)) {
                buffer >> element->vsi1min;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssIEEE2B_tw1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssIEEE2B* element = dynamic_cast<PssIEEE2B*>(BaseClass_ptr1)) {
                buffer >> element->tw1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssIEEE2B_tw2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssIEEE2B* element = dynamic_cast<PssIEEE2B*>(BaseClass_ptr1)) {
                buffer >> element->tw2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssIEEE2B_vsi2max(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssIEEE2B* element = dynamic_cast<PssIEEE2B*>(BaseClass_ptr1)) {
                buffer >> element->vsi2max;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssIEEE2B_vsi2min(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssIEEE2B* element = dynamic_cast<PssIEEE2B*>(BaseClass_ptr1)) {
                buffer >> element->vsi2min;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssIEEE2B_tw3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssIEEE2B* element = dynamic_cast<PssIEEE2B*>(BaseClass_ptr1)) {
                buffer >> element->tw3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssIEEE2B_tw4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssIEEE2B* element = dynamic_cast<PssIEEE2B*>(BaseClass_ptr1)) {
                buffer >> element->tw4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssIEEE2B_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssIEEE2B* element = dynamic_cast<PssIEEE2B*>(BaseClass_ptr1)) {
                buffer >> element->t1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssIEEE2B_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssIEEE2B* element = dynamic_cast<PssIEEE2B*>(BaseClass_ptr1)) {
                buffer >> element->t2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssIEEE2B_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssIEEE2B* element = dynamic_cast<PssIEEE2B*>(BaseClass_ptr1)) {
                buffer >> element->t3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssIEEE2B_t4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssIEEE2B* element = dynamic_cast<PssIEEE2B*>(BaseClass_ptr1)) {
                buffer >> element->t4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssIEEE2B_t6(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssIEEE2B* element = dynamic_cast<PssIEEE2B*>(BaseClass_ptr1)) {
                buffer >> element->t6;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssIEEE2B_t7(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssIEEE2B* element = dynamic_cast<PssIEEE2B*>(BaseClass_ptr1)) {
                buffer >> element->t7;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssIEEE2B_t8(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssIEEE2B* element = dynamic_cast<PssIEEE2B*>(BaseClass_ptr1)) {
                buffer >> element->t8;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssIEEE2B_t9(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssIEEE2B* element = dynamic_cast<PssIEEE2B*>(BaseClass_ptr1)) {
                buffer >> element->t9;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssIEEE2B_t10(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssIEEE2B* element = dynamic_cast<PssIEEE2B*>(BaseClass_ptr1)) {
                buffer >> element->t10;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssIEEE2B_t11(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssIEEE2B* element = dynamic_cast<PssIEEE2B*>(BaseClass_ptr1)) {
                buffer >> element->t11;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssIEEE2B_ks1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssIEEE2B* element = dynamic_cast<PssIEEE2B*>(BaseClass_ptr1)) {
                buffer >> element->ks1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssIEEE2B_ks2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssIEEE2B* element = dynamic_cast<PssIEEE2B*>(BaseClass_ptr1)) {
                buffer >> element->ks2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssIEEE2B_ks3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssIEEE2B* element = dynamic_cast<PssIEEE2B*>(BaseClass_ptr1)) {
                buffer >> element->ks3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssIEEE2B_n(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssIEEE2B* element = dynamic_cast<PssIEEE2B*>(BaseClass_ptr1)) {
                buffer >> element->n;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssIEEE2B_m(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssIEEE2B* element = dynamic_cast<PssIEEE2B*>(BaseClass_ptr1)) {
                buffer >> element->m;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssIEEE2B_vstmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssIEEE2B* element = dynamic_cast<PssIEEE2B*>(BaseClass_ptr1)) {
                buffer >> element->vstmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssIEEE2B_vstmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssIEEE2B* element = dynamic_cast<PssIEEE2B*>(BaseClass_ptr1)) {
                buffer >> element->vstmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* PssIEEE2B_factory() {
		return new PssIEEE2B;
	}
}

void PssIEEE2B::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:PssIEEE2B"), &PssIEEE2B_factory));
}

void PssIEEE2B::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE2B.inputSignal1Type"), &assign_PssIEEE2B_inputSignal1Type));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE2B.inputSignal2Type"), &assign_PssIEEE2B_inputSignal2Type));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE2B.vsi1max"), &assign_PssIEEE2B_vsi1max));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE2B.vsi1min"), &assign_PssIEEE2B_vsi1min));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE2B.tw1"), &assign_PssIEEE2B_tw1));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE2B.tw2"), &assign_PssIEEE2B_tw2));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE2B.vsi2max"), &assign_PssIEEE2B_vsi2max));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE2B.vsi2min"), &assign_PssIEEE2B_vsi2min));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE2B.tw3"), &assign_PssIEEE2B_tw3));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE2B.tw4"), &assign_PssIEEE2B_tw4));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE2B.t1"), &assign_PssIEEE2B_t1));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE2B.t2"), &assign_PssIEEE2B_t2));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE2B.t3"), &assign_PssIEEE2B_t3));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE2B.t4"), &assign_PssIEEE2B_t4));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE2B.t6"), &assign_PssIEEE2B_t6));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE2B.t7"), &assign_PssIEEE2B_t7));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE2B.t8"), &assign_PssIEEE2B_t8));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE2B.t9"), &assign_PssIEEE2B_t9));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE2B.t10"), &assign_PssIEEE2B_t10));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE2B.t11"), &assign_PssIEEE2B_t11));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE2B.ks1"), &assign_PssIEEE2B_ks1));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE2B.ks2"), &assign_PssIEEE2B_ks2));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE2B.ks3"), &assign_PssIEEE2B_ks3));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE2B.n"), &assign_PssIEEE2B_n));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE2B.m"), &assign_PssIEEE2B_m));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE2B.vstmax"), &assign_PssIEEE2B_vstmax));
	assign_map.insert(std::make_pair(std::string("cim:PssIEEE2B.vstmin"), &assign_PssIEEE2B_vstmin));
}

void PssIEEE2B::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
																											}

const char PssIEEE2B::debugName[] = "PssIEEE2B";
const char* PssIEEE2B::debugString()
{
	return PssIEEE2B::debugName;
}

const BaseClassDefiner PssIEEE2B::declare()
{
	return BaseClassDefiner(PssIEEE2B::addConstructToMap, PssIEEE2B::addPrimitiveAssignFnsToMap, PssIEEE2B::addClassAssignFnsToMap, PssIEEE2B::debugName);
}


