#include <sstream>
#include "PFVArControllerType2Dynamics.hpp"
#include "PFVArType2Common1.hpp"

#include "Boolean.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

PFVArType2Common1::PFVArType2Common1() {};

PFVArType2Common1::~PFVArType2Common1() {};








bool assign_PFVArType2Common1_j(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PFVArType2Common1* element = dynamic_cast<PFVArType2Common1*>(BaseClass_ptr1)) {
                buffer >> element->j;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PFVArType2Common1_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PFVArType2Common1* element = dynamic_cast<PFVArType2Common1*>(BaseClass_ptr1)) {
                buffer >> element->kp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PFVArType2Common1_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PFVArType2Common1* element = dynamic_cast<PFVArType2Common1*>(BaseClass_ptr1)) {
                buffer >> element->ki;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PFVArType2Common1_max(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PFVArType2Common1* element = dynamic_cast<PFVArType2Common1*>(BaseClass_ptr1)) {
                buffer >> element->max;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PFVArType2Common1_ref(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PFVArType2Common1* element = dynamic_cast<PFVArType2Common1*>(BaseClass_ptr1)) {
                buffer >> element->ref;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* PFVArType2Common1_factory() {
		return new PFVArType2Common1;
	}
}

void PFVArType2Common1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:PFVArType2Common1"), &PFVArType2Common1_factory));
}

void PFVArType2Common1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2Common1.j"), &assign_PFVArType2Common1_j));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2Common1.kp"), &assign_PFVArType2Common1_kp));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2Common1.ki"), &assign_PFVArType2Common1_ki));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2Common1.max"), &assign_PFVArType2Common1_max));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2Common1.ref"), &assign_PFVArType2Common1_ref));
}

void PFVArType2Common1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
					}

const char PFVArType2Common1::debugName[] = "PFVArType2Common1";
const char* PFVArType2Common1::debugString()
{
	return PFVArType2Common1::debugName;
}

const BaseClassDefiner PFVArType2Common1::declare()
{
	return BaseClassDefiner(PFVArType2Common1::addConstructToMap, PFVArType2Common1::addPrimitiveAssignFnsToMap, PFVArType2Common1::addClassAssignFnsToMap, PFVArType2Common1::debugName);
}


