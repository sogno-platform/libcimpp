#include <sstream>
#include "RegulatingCondEq.hpp"
#include "RotatingMachine.hpp"

#include "GeneratingUnit.hpp"
#include "HydroPump.hpp"
#include "ActivePower.hpp"
#include "ReactivePower.hpp"
#include "Simple_Float.hpp"
#include "ApparentPower.hpp"
#include "Voltage.hpp"

using namespace CIMPP;

RotatingMachine::RotatingMachine(): GeneratingUnit(nullptr), HydroPump(nullptr) {};

RotatingMachine::~RotatingMachine() {};




bool assign_RotatingMachine_p(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(RotatingMachine* element = dynamic_cast<RotatingMachine*>(BaseClass_ptr1)) {
                buffer >> element->p;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_RotatingMachine_q(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(RotatingMachine* element = dynamic_cast<RotatingMachine*>(BaseClass_ptr1)) {
                buffer >> element->q;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_RotatingMachine_ratedPowerFactor(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(RotatingMachine* element = dynamic_cast<RotatingMachine*>(BaseClass_ptr1)) {
                buffer >> element->ratedPowerFactor;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_RotatingMachine_ratedS(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(RotatingMachine* element = dynamic_cast<RotatingMachine*>(BaseClass_ptr1)) {
                buffer >> element->ratedS;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_RotatingMachine_ratedU(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(RotatingMachine* element = dynamic_cast<RotatingMachine*>(BaseClass_ptr1)) {
                buffer >> element->ratedU;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_GeneratingUnit_RotatingMachine(BaseClass*, BaseClass*);
bool assign_RotatingMachine_GeneratingUnit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(RotatingMachine* element = dynamic_cast<RotatingMachine*>(BaseClass_ptr1)) {
                element->GeneratingUnit = dynamic_cast<GeneratingUnit*>(BaseClass_ptr2);
                if(element->GeneratingUnit != nullptr)
                        return assign_GeneratingUnit_RotatingMachine(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_RotatingMachine_HydroPump(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(RotatingMachine* element = dynamic_cast<RotatingMachine*>(BaseClass_ptr1)) {
                element->HydroPump = dynamic_cast<HydroPump*>(BaseClass_ptr2);
                if(element->HydroPump != nullptr)
                        return true;
        }
        return false;
}






namespace CIMPP {
	BaseClass* RotatingMachine_factory() {
		return new RotatingMachine;
	}
}

void RotatingMachine::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:RotatingMachine"), &RotatingMachine_factory));
}

void RotatingMachine::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
			assign_map.insert(std::make_pair(std::string("cim:RotatingMachine.p"), &assign_RotatingMachine_p));
	assign_map.insert(std::make_pair(std::string("cim:RotatingMachine.q"), &assign_RotatingMachine_q));
	assign_map.insert(std::make_pair(std::string("cim:RotatingMachine.ratedPowerFactor"), &assign_RotatingMachine_ratedPowerFactor));
	assign_map.insert(std::make_pair(std::string("cim:RotatingMachine.ratedS"), &assign_RotatingMachine_ratedS));
	assign_map.insert(std::make_pair(std::string("cim:RotatingMachine.ratedU"), &assign_RotatingMachine_ratedU));
}

void RotatingMachine::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:RotatingMachine.GeneratingUnit"), &assign_RotatingMachine_GeneratingUnit));
	assign_map.insert(std::make_pair(std::string("cim:RotatingMachine.HydroPump"), &assign_RotatingMachine_HydroPump));
					}

const char RotatingMachine::debugName[] = "RotatingMachine";
const char* RotatingMachine::debugString()
{
	return RotatingMachine::debugName;
}

const BaseClassDefiner RotatingMachine::declare()
{
	return BaseClassDefiner(RotatingMachine::addConstructToMap, RotatingMachine::addPrimitiveAssignFnsToMap, RotatingMachine::addClassAssignFnsToMap, RotatingMachine::debugName);
}
