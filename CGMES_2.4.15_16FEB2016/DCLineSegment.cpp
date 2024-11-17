#include <sstream>
#include "DCConductingEquipment.hpp"
#include "DCLineSegment.hpp"

#include "PerLengthDCLineParameter.hpp"
#include "Capacitance.hpp"
#include "Inductance.hpp"
#include "Length.hpp"
#include "Resistance.hpp"

using namespace CIMPP;

DCLineSegment::DCLineSegment(): PerLengthParameter(nullptr) {};

DCLineSegment::~DCLineSegment() {};



bool assign_DCLineSegment_capacitance(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DCLineSegment* element = dynamic_cast<DCLineSegment*>(BaseClass_ptr1)) {
                buffer >> element->capacitance;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_DCLineSegment_inductance(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DCLineSegment* element = dynamic_cast<DCLineSegment*>(BaseClass_ptr1)) {
                buffer >> element->inductance;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_DCLineSegment_length(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DCLineSegment* element = dynamic_cast<DCLineSegment*>(BaseClass_ptr1)) {
                buffer >> element->length;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_DCLineSegment_resistance(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(DCLineSegment* element = dynamic_cast<DCLineSegment*>(BaseClass_ptr1)) {
                buffer >> element->resistance;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_PerLengthDCLineParameter_DCLineSegments(BaseClass*, BaseClass*);
bool assign_DCLineSegment_PerLengthParameter(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DCLineSegment* element = dynamic_cast<DCLineSegment*>(BaseClass_ptr1)) {
                element->PerLengthParameter = dynamic_cast<PerLengthDCLineParameter*>(BaseClass_ptr2);
                if(element->PerLengthParameter != nullptr)
                        return assign_PerLengthDCLineParameter_DCLineSegments(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}





namespace CIMPP {
	BaseClass* DCLineSegment_factory() {
		return new DCLineSegment;
	}
}

void DCLineSegment::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DCLineSegment"), &DCLineSegment_factory));
}

void DCLineSegment::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:DCLineSegment.capacitance"), &assign_DCLineSegment_capacitance));
	assign_map.insert(std::make_pair(std::string("cim:DCLineSegment.inductance"), &assign_DCLineSegment_inductance));
	assign_map.insert(std::make_pair(std::string("cim:DCLineSegment.length"), &assign_DCLineSegment_length));
	assign_map.insert(std::make_pair(std::string("cim:DCLineSegment.resistance"), &assign_DCLineSegment_resistance));
}

void DCLineSegment::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:DCLineSegment.PerLengthParameter"), &assign_DCLineSegment_PerLengthParameter));
				}

const char DCLineSegment::debugName[] = "DCLineSegment";
const char* DCLineSegment::debugString()
{
	return DCLineSegment::debugName;
}

const BaseClassDefiner DCLineSegment::declare()
{
	return BaseClassDefiner(DCLineSegment::addConstructToMap, DCLineSegment::addPrimitiveAssignFnsToMap, DCLineSegment::addClassAssignFnsToMap, DCLineSegment::debugName);
}
