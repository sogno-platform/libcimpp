#include <sstream>
#include "Conductor.hpp"
#include "ACLineSegment.hpp"

#include "Susceptance.hpp"
#include "Susceptance.hpp"
#include "Conductance.hpp"
#include "Conductance.hpp"
#include "Resistance.hpp"
#include "Resistance.hpp"
#include "Temperature.hpp"
#include "Reactance.hpp"
#include "Reactance.hpp"

using namespace CIMPP;

ACLineSegment::ACLineSegment() {};

ACLineSegment::~ACLineSegment() {};












bool assign_ACLineSegment_b0ch(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1)) {
                buffer >> element->b0ch;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ACLineSegment_bch(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1)) {
                buffer >> element->bch;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ACLineSegment_g0ch(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1)) {
                buffer >> element->g0ch;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ACLineSegment_gch(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1)) {
                buffer >> element->gch;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ACLineSegment_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1)) {
                buffer >> element->r;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ACLineSegment_r0(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1)) {
                buffer >> element->r0;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ACLineSegment_shortCircuitEndTemperature(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1)) {
                buffer >> element->shortCircuitEndTemperature;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ACLineSegment_x(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1)) {
                buffer >> element->x;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ACLineSegment_x0(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ACLineSegment* element = dynamic_cast<ACLineSegment*>(BaseClass_ptr1)) {
                buffer >> element->x0;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* ACLineSegment_factory() {
		return new ACLineSegment;
	}
}

void ACLineSegment::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ACLineSegment"), &ACLineSegment_factory));
}

void ACLineSegment::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ACLineSegment.b0ch"), &assign_ACLineSegment_b0ch));
	assign_map.insert(std::make_pair(std::string("cim:ACLineSegment.bch"), &assign_ACLineSegment_bch));
	assign_map.insert(std::make_pair(std::string("cim:ACLineSegment.g0ch"), &assign_ACLineSegment_g0ch));
	assign_map.insert(std::make_pair(std::string("cim:ACLineSegment.gch"), &assign_ACLineSegment_gch));
	assign_map.insert(std::make_pair(std::string("cim:ACLineSegment.r"), &assign_ACLineSegment_r));
	assign_map.insert(std::make_pair(std::string("cim:ACLineSegment.r0"), &assign_ACLineSegment_r0));
	assign_map.insert(std::make_pair(std::string("cim:ACLineSegment.shortCircuitEndTemperature"), &assign_ACLineSegment_shortCircuitEndTemperature));
	assign_map.insert(std::make_pair(std::string("cim:ACLineSegment.x"), &assign_ACLineSegment_x));
	assign_map.insert(std::make_pair(std::string("cim:ACLineSegment.x0"), &assign_ACLineSegment_x0));
}

void ACLineSegment::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
									}

const char ACLineSegment::debugName[] = "ACLineSegment";
const char* ACLineSegment::debugString()
{
	return ACLineSegment::debugName;
}

const BaseClassDefiner ACLineSegment::declare()
{
	return BaseClassDefiner(ACLineSegment::addConstructToMap, ACLineSegment::addPrimitiveAssignFnsToMap, ACLineSegment::addClassAssignFnsToMap, ACLineSegment::debugName);
}


