#include <sstream>
#include "PowerSystemStabilizerDynamics.hpp"
#include "PssSB4.hpp"

#include "Seconds.hpp"
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

using namespace CIMPP;

PssSB4::PssSB4() {};

PssSB4::~PssSB4() {};














bool assign_PssSB4_tt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssSB4* element = dynamic_cast<PssSB4*>(BaseClass_ptr1)) {
                buffer >> element->tt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssSB4_kx(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssSB4* element = dynamic_cast<PssSB4*>(BaseClass_ptr1)) {
                buffer >> element->kx;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssSB4_tx2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssSB4* element = dynamic_cast<PssSB4*>(BaseClass_ptr1)) {
                buffer >> element->tx2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssSB4_ta(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssSB4* element = dynamic_cast<PssSB4*>(BaseClass_ptr1)) {
                buffer >> element->ta;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssSB4_tx1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssSB4* element = dynamic_cast<PssSB4*>(BaseClass_ptr1)) {
                buffer >> element->tx1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssSB4_tb(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssSB4* element = dynamic_cast<PssSB4*>(BaseClass_ptr1)) {
                buffer >> element->tb;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssSB4_tc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssSB4* element = dynamic_cast<PssSB4*>(BaseClass_ptr1)) {
                buffer >> element->tc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssSB4_td(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssSB4* element = dynamic_cast<PssSB4*>(BaseClass_ptr1)) {
                buffer >> element->td;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssSB4_te(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssSB4* element = dynamic_cast<PssSB4*>(BaseClass_ptr1)) {
                buffer >> element->te;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssSB4_vsmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssSB4* element = dynamic_cast<PssSB4*>(BaseClass_ptr1)) {
                buffer >> element->vsmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssSB4_vsmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssSB4* element = dynamic_cast<PssSB4*>(BaseClass_ptr1)) {
                buffer >> element->vsmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* PssSB4_factory() {
		return new PssSB4;
	}
}

void PssSB4::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:PssSB4"), &PssSB4_factory));
}

void PssSB4::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:PssSB4.tt"), &assign_PssSB4_tt));
	assign_map.insert(std::make_pair(std::string("cim:PssSB4.kx"), &assign_PssSB4_kx));
	assign_map.insert(std::make_pair(std::string("cim:PssSB4.tx2"), &assign_PssSB4_tx2));
	assign_map.insert(std::make_pair(std::string("cim:PssSB4.ta"), &assign_PssSB4_ta));
	assign_map.insert(std::make_pair(std::string("cim:PssSB4.tx1"), &assign_PssSB4_tx1));
	assign_map.insert(std::make_pair(std::string("cim:PssSB4.tb"), &assign_PssSB4_tb));
	assign_map.insert(std::make_pair(std::string("cim:PssSB4.tc"), &assign_PssSB4_tc));
	assign_map.insert(std::make_pair(std::string("cim:PssSB4.td"), &assign_PssSB4_td));
	assign_map.insert(std::make_pair(std::string("cim:PssSB4.te"), &assign_PssSB4_te));
	assign_map.insert(std::make_pair(std::string("cim:PssSB4.vsmax"), &assign_PssSB4_vsmax));
	assign_map.insert(std::make_pair(std::string("cim:PssSB4.vsmin"), &assign_PssSB4_vsmin));
}

void PssSB4::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
											}

const char PssSB4::debugName[] = "PssSB4";
const char* PssSB4::debugString()
{
	return PssSB4::debugName;
}

const BaseClassDefiner PssSB4::declare()
{
	return BaseClassDefiner(PssSB4::addConstructToMap, PssSB4::addPrimitiveAssignFnsToMap, PssSB4::addClassAssignFnsToMap, PssSB4::debugName);
}


