#include <sstream>
#include "MechanicalLoadDynamics.hpp"
#include "MechLoad1.hpp"

#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"

using namespace CIMPP;

MechLoad1::MechLoad1() {};

MechLoad1::~MechLoad1() {};







bool assign_MechLoad1_a(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(MechLoad1* element = dynamic_cast<MechLoad1*>(BaseClass_ptr1)) {
                buffer >> element->a;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_MechLoad1_b(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(MechLoad1* element = dynamic_cast<MechLoad1*>(BaseClass_ptr1)) {
                buffer >> element->b;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_MechLoad1_d(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(MechLoad1* element = dynamic_cast<MechLoad1*>(BaseClass_ptr1)) {
                buffer >> element->d;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_MechLoad1_e(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(MechLoad1* element = dynamic_cast<MechLoad1*>(BaseClass_ptr1)) {
                buffer >> element->e;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* MechLoad1_factory() {
		return new MechLoad1;
	}
}

void MechLoad1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:MechLoad1"), &MechLoad1_factory));
}

void MechLoad1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:MechLoad1.a"), &assign_MechLoad1_a));
	assign_map.insert(std::make_pair(std::string("cim:MechLoad1.b"), &assign_MechLoad1_b));
	assign_map.insert(std::make_pair(std::string("cim:MechLoad1.d"), &assign_MechLoad1_d));
	assign_map.insert(std::make_pair(std::string("cim:MechLoad1.e"), &assign_MechLoad1_e));
}

void MechLoad1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
				}

const char MechLoad1::debugName[] = "MechLoad1";
const char* MechLoad1::debugString()
{
	return MechLoad1::debugName;
}

const BaseClassDefiner MechLoad1::declare()
{
	return BaseClassDefiner(MechLoad1::addConstructToMap, MechLoad1::addPrimitiveAssignFnsToMap, MechLoad1::addClassAssignFnsToMap, MechLoad1::debugName);
}


