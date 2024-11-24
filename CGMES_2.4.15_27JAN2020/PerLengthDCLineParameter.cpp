#include <sstream>
#include "BaseClass.hpp"
#include "PerLengthDCLineParameter.hpp"

#include "DCLineSegment.hpp"
#include "CapacitancePerLength.hpp"
#include "InductancePerLength.hpp"
#include "ResistancePerLength.hpp"

using namespace CIMPP;

PerLengthDCLineParameter::PerLengthDCLineParameter() {};

PerLengthDCLineParameter::~PerLengthDCLineParameter() {};



bool assign_PerLengthDCLineParameter_capacitance(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PerLengthDCLineParameter* element = dynamic_cast<PerLengthDCLineParameter*>(BaseClass_ptr1)) {
                buffer >> element->capacitance;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PerLengthDCLineParameter_inductance(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PerLengthDCLineParameter* element = dynamic_cast<PerLengthDCLineParameter*>(BaseClass_ptr1)) {
                buffer >> element->inductance;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PerLengthDCLineParameter_resistance(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PerLengthDCLineParameter* element = dynamic_cast<PerLengthDCLineParameter*>(BaseClass_ptr1)) {
                buffer >> element->resistance;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_PerLengthDCLineParameter_DCLineSegments(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(PerLengthDCLineParameter* element = dynamic_cast<PerLengthDCLineParameter*>(BaseClass_ptr1)) {
		if(dynamic_cast<DCLineSegment*>(BaseClass_ptr2) != nullptr) {
                        element->DCLineSegments.push_back(dynamic_cast<DCLineSegment*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}




namespace CIMPP {
	BaseClass* PerLengthDCLineParameter_factory() {
		return new PerLengthDCLineParameter;
	}
}

void PerLengthDCLineParameter::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:PerLengthDCLineParameter"), &PerLengthDCLineParameter_factory));
}

void PerLengthDCLineParameter::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:PerLengthDCLineParameter.capacitance"), &assign_PerLengthDCLineParameter_capacitance));
	assign_map.insert(std::make_pair(std::string("cim:PerLengthDCLineParameter.inductance"), &assign_PerLengthDCLineParameter_inductance));
	assign_map.insert(std::make_pair(std::string("cim:PerLengthDCLineParameter.resistance"), &assign_PerLengthDCLineParameter_resistance));
}

void PerLengthDCLineParameter::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:PerLengthDCLineParameter.DCLineSegments"), &assign_PerLengthDCLineParameter_DCLineSegments));
			}

const char PerLengthDCLineParameter::debugName[] = "PerLengthDCLineParameter";
const char* PerLengthDCLineParameter::debugString()
{
	return PerLengthDCLineParameter::debugName;
}

const BaseClassDefiner PerLengthDCLineParameter::declare()
{
	return BaseClassDefiner(PerLengthDCLineParameter::addConstructToMap, PerLengthDCLineParameter::addPrimitiveAssignFnsToMap, PerLengthDCLineParameter::addClassAssignFnsToMap, PerLengthDCLineParameter::debugName);
}
