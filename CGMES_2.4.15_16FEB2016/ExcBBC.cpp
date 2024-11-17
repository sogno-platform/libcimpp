#include <sstream>
#include "ExcitationSystemDynamics.hpp"
#include "ExcBBC.hpp"

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Boolean.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

ExcBBC::ExcBBC() {};

ExcBBC::~ExcBBC() {};


bool assign_ExcBBC_efdmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1)) {
                buffer >> element->efdmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcBBC_efdmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1)) {
                buffer >> element->efdmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcBBC_k(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1)) {
                buffer >> element->k;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcBBC_switch(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1)) {
                buffer >> element->_switch;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcBBC_t1(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1)) {
                buffer >> element->t1;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcBBC_t2(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1)) {
                buffer >> element->t2;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcBBC_t3(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1)) {
                buffer >> element->t3;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcBBC_t4(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1)) {
                buffer >> element->t4;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcBBC_vrmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1)) {
                buffer >> element->vrmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcBBC_vrmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1)) {
                buffer >> element->vrmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ExcBBC_xe(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ExcBBC* element = dynamic_cast<ExcBBC*>(BaseClass_ptr1)) {
                buffer >> element->xe;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}













namespace CIMPP {
	BaseClass* ExcBBC_factory() {
		return new ExcBBC;
	}
}

void ExcBBC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcBBC"), &ExcBBC_factory));
}

void ExcBBC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcBBC.efdmax"), &assign_ExcBBC_efdmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcBBC.efdmin"), &assign_ExcBBC_efdmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcBBC.k"), &assign_ExcBBC_k));
	assign_map.insert(std::make_pair(std::string("cim:ExcBBC.switch"), &assign_ExcBBC_switch));
	assign_map.insert(std::make_pair(std::string("cim:ExcBBC.t1"), &assign_ExcBBC_t1));
	assign_map.insert(std::make_pair(std::string("cim:ExcBBC.t2"), &assign_ExcBBC_t2));
	assign_map.insert(std::make_pair(std::string("cim:ExcBBC.t3"), &assign_ExcBBC_t3));
	assign_map.insert(std::make_pair(std::string("cim:ExcBBC.t4"), &assign_ExcBBC_t4));
	assign_map.insert(std::make_pair(std::string("cim:ExcBBC.vrmax"), &assign_ExcBBC_vrmax));
	assign_map.insert(std::make_pair(std::string("cim:ExcBBC.vrmin"), &assign_ExcBBC_vrmin));
	assign_map.insert(std::make_pair(std::string("cim:ExcBBC.xe"), &assign_ExcBBC_xe));
}

void ExcBBC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
											}

const char ExcBBC::debugName[] = "ExcBBC";
const char* ExcBBC::debugString()
{
	return ExcBBC::debugName;
}

const BaseClassDefiner ExcBBC::declare()
{
	return BaseClassDefiner(ExcBBC::addConstructToMap, ExcBBC::addPrimitiveAssignFnsToMap, ExcBBC::addClassAssignFnsToMap, ExcBBC::debugName);
}
