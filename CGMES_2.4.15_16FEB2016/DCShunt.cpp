#include <sstream>
#include "DCConductingEquipment.hpp"
#include "DCShunt.hpp"

#include "Capacitance.hpp"
#include "Resistance.hpp"
#include "Voltage.hpp"

using namespace CIMPP;

DCShunt::DCShunt() {};

DCShunt::~DCShunt() {};






bool assign_DCShunt_capacitance(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DCShunt* element = dynamic_cast<DCShunt*>(BaseClass_ptr1)) {
                buffer >> element->capacitance;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_DCShunt_resistance(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DCShunt* element = dynamic_cast<DCShunt*>(BaseClass_ptr1)) {
                buffer >> element->resistance;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_DCShunt_ratedUdc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DCShunt* element = dynamic_cast<DCShunt*>(BaseClass_ptr1)) {
                buffer >> element->ratedUdc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* DCShunt_factory() {
		return new DCShunt;
	}
}

void DCShunt::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DCShunt"), &DCShunt_factory));
}

void DCShunt::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:DCShunt.capacitance"), &assign_DCShunt_capacitance));
	assign_map.insert(std::make_pair(std::string("cim:DCShunt.resistance"), &assign_DCShunt_resistance));
	assign_map.insert(std::make_pair(std::string("cim:DCShunt.ratedUdc"), &assign_DCShunt_ratedUdc));
}

void DCShunt::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
			}

const char DCShunt::debugName[] = "DCShunt";
const char* DCShunt::debugString()
{
	return DCShunt::debugName;
}

const BaseClassDefiner DCShunt::declare()
{
	return BaseClassDefiner(DCShunt::addConstructToMap, DCShunt::addPrimitiveAssignFnsToMap, DCShunt::addClassAssignFnsToMap, DCShunt::debugName);
}


