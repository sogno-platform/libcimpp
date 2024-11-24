#include <sstream>
#include "PowerSystemStabilizerDynamics.hpp"
#include "PssSH.hpp"

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

PssSH::PssSH() {};

PssSH::~PssSH() {};


bool assign_PssSH_k(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1)) {
                buffer >> element->k;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssSH_k0(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1)) {
                buffer >> element->k0;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssSH_k1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1)) {
                buffer >> element->k1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssSH_k2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1)) {
                buffer >> element->k2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssSH_k3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1)) {
                buffer >> element->k3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssSH_k4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1)) {
                buffer >> element->k4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssSH_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1)) {
                buffer >> element->t1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssSH_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1)) {
                buffer >> element->t2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssSH_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1)) {
                buffer >> element->t3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssSH_t4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1)) {
                buffer >> element->t4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssSH_td(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1)) {
                buffer >> element->td;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssSH_vsmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1)) {
                buffer >> element->vsmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PssSH_vsmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PssSH* element = dynamic_cast<PssSH*>(BaseClass_ptr1)) {
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
	BaseClass* PssSH_factory() {
		return new PssSH;
	}
}

void PssSH::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:PssSH"), &PssSH_factory));
}

void PssSH::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:PssSH.k"), &assign_PssSH_k));
	assign_map.insert(std::make_pair(std::string("cim:PssSH.k0"), &assign_PssSH_k0));
	assign_map.insert(std::make_pair(std::string("cim:PssSH.k1"), &assign_PssSH_k1));
	assign_map.insert(std::make_pair(std::string("cim:PssSH.k2"), &assign_PssSH_k2));
	assign_map.insert(std::make_pair(std::string("cim:PssSH.k3"), &assign_PssSH_k3));
	assign_map.insert(std::make_pair(std::string("cim:PssSH.k4"), &assign_PssSH_k4));
	assign_map.insert(std::make_pair(std::string("cim:PssSH.t1"), &assign_PssSH_t1));
	assign_map.insert(std::make_pair(std::string("cim:PssSH.t2"), &assign_PssSH_t2));
	assign_map.insert(std::make_pair(std::string("cim:PssSH.t3"), &assign_PssSH_t3));
	assign_map.insert(std::make_pair(std::string("cim:PssSH.t4"), &assign_PssSH_t4));
	assign_map.insert(std::make_pair(std::string("cim:PssSH.td"), &assign_PssSH_td));
	assign_map.insert(std::make_pair(std::string("cim:PssSH.vsmax"), &assign_PssSH_vsmax));
	assign_map.insert(std::make_pair(std::string("cim:PssSH.vsmin"), &assign_PssSH_vsmin));
}

void PssSH::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
													}

const char PssSH::debugName[] = "PssSH";
const char* PssSH::debugString()
{
	return PssSH::debugName;
}

const BaseClassDefiner PssSH::declare()
{
	return BaseClassDefiner(PssSH::addConstructToMap, PssSH::addPrimitiveAssignFnsToMap, PssSH::addClassAssignFnsToMap, PssSH::debugName);
}
