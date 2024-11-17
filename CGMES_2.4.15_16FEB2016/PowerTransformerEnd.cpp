#include <sstream>
#include "TransformerEnd.hpp"
#include "PowerTransformerEnd.hpp"

#include "PowerTransformer.hpp"
#include "Susceptance.hpp"
#include "Susceptance.hpp"
#include "WindingConnection.hpp"
#include "Conductance.hpp"
#include "Conductance.hpp"
#include "Integer.hpp"
#include "Resistance.hpp"
#include "Resistance.hpp"
#include "ApparentPower.hpp"
#include "Voltage.hpp"
#include "Reactance.hpp"
#include "Reactance.hpp"

using namespace CIMPP;

PowerTransformerEnd::PowerTransformerEnd(): PowerTransformer(nullptr) {};

PowerTransformerEnd::~PowerTransformerEnd() {};



bool assign_PowerTransformerEnd_b(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PowerTransformerEnd* element = dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr1)) {
                buffer >> element->b;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PowerTransformerEnd_b0(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PowerTransformerEnd* element = dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr1)) {
                buffer >> element->b0;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PowerTransformerEnd_connectionKind(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PowerTransformerEnd* element = dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr1)) {
                buffer >> element->connectionKind;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PowerTransformerEnd_g(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PowerTransformerEnd* element = dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr1)) {
                buffer >> element->g;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PowerTransformerEnd_g0(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PowerTransformerEnd* element = dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr1)) {
                buffer >> element->g0;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PowerTransformerEnd_phaseAngleClock(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PowerTransformerEnd* element = dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr1)) {
                buffer >> element->phaseAngleClock;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PowerTransformerEnd_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PowerTransformerEnd* element = dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr1)) {
                buffer >> element->r;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PowerTransformerEnd_r0(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PowerTransformerEnd* element = dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr1)) {
                buffer >> element->r0;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PowerTransformerEnd_ratedS(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PowerTransformerEnd* element = dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr1)) {
                buffer >> element->ratedS;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PowerTransformerEnd_ratedU(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PowerTransformerEnd* element = dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr1)) {
                buffer >> element->ratedU;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PowerTransformerEnd_x(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PowerTransformerEnd* element = dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr1)) {
                buffer >> element->x;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PowerTransformerEnd_x0(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PowerTransformerEnd* element = dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr1)) {
                buffer >> element->x0;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_PowerTransformer_PowerTransformerEnd(BaseClass*, BaseClass*);
bool assign_PowerTransformerEnd_PowerTransformer(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(PowerTransformerEnd* element = dynamic_cast<PowerTransformerEnd*>(BaseClass_ptr1)) {
                element->PowerTransformer = dynamic_cast<PowerTransformer*>(BaseClass_ptr2);
                if(element->PowerTransformer != nullptr)
                        return assign_PowerTransformer_PowerTransformerEnd(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}













namespace CIMPP {
	BaseClass* PowerTransformerEnd_factory() {
		return new PowerTransformerEnd;
	}
}

void PowerTransformerEnd::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:PowerTransformerEnd"), &PowerTransformerEnd_factory));
}

void PowerTransformerEnd::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:PowerTransformerEnd.b"), &assign_PowerTransformerEnd_b));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformerEnd.b0"), &assign_PowerTransformerEnd_b0));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformerEnd.connectionKind"), &assign_PowerTransformerEnd_connectionKind));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformerEnd.g"), &assign_PowerTransformerEnd_g));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformerEnd.g0"), &assign_PowerTransformerEnd_g0));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformerEnd.phaseAngleClock"), &assign_PowerTransformerEnd_phaseAngleClock));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformerEnd.r"), &assign_PowerTransformerEnd_r));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformerEnd.r0"), &assign_PowerTransformerEnd_r0));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformerEnd.ratedS"), &assign_PowerTransformerEnd_ratedS));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformerEnd.ratedU"), &assign_PowerTransformerEnd_ratedU));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformerEnd.x"), &assign_PowerTransformerEnd_x));
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformerEnd.x0"), &assign_PowerTransformerEnd_x0));
}

void PowerTransformerEnd::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:PowerTransformerEnd.PowerTransformer"), &assign_PowerTransformerEnd_PowerTransformer));
												}

const char PowerTransformerEnd::debugName[] = "PowerTransformerEnd";
const char* PowerTransformerEnd::debugString()
{
	return PowerTransformerEnd::debugName;
}

const BaseClassDefiner PowerTransformerEnd::declare()
{
	return BaseClassDefiner(PowerTransformerEnd::addConstructToMap, PowerTransformerEnd::addPrimitiveAssignFnsToMap, PowerTransformerEnd::addClassAssignFnsToMap, PowerTransformerEnd::debugName);
}
