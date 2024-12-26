#include <sstream>
#include "Measurement.hpp"
#include "Analog.hpp"

#include "AnalogValue.hpp"
#include "AnalogLimitSet.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

Analog::Analog() {};

Analog::~Analog() {};




bool assign_Analog_positiveFlowIn(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Analog* element = dynamic_cast<Analog*>(BaseClass_ptr1)) {
                buffer >> element->positiveFlowIn;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_Analog_AnalogValues(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Analog* element = dynamic_cast<Analog*>(BaseClass_ptr1)) {
		if(dynamic_cast<AnalogValue*>(BaseClass_ptr2) != nullptr) {
                        element->AnalogValues.push_back(dynamic_cast<AnalogValue*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Analog_LimitSets(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Analog* element = dynamic_cast<Analog*>(BaseClass_ptr1)) {
		if(dynamic_cast<AnalogLimitSet*>(BaseClass_ptr2) != nullptr) {
                        element->LimitSets.push_back(dynamic_cast<AnalogLimitSet*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


namespace CIMPP {
	BaseClass* Analog_factory() {
		return new Analog;
	}
}

void Analog::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:Analog"), &Analog_factory));
}

void Analog::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
			assign_map.insert(std::make_pair(std::string("cim:Analog.positiveFlowIn"), &assign_Analog_positiveFlowIn));
}

void Analog::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:Analog.AnalogValues"), &assign_Analog_AnalogValues));
	assign_map.insert(std::make_pair(std::string("cim:Analog.LimitSets"), &assign_Analog_LimitSets));
	}

const char Analog::debugName[] = "Analog";
const char* Analog::debugString()
{
	return Analog::debugName;
}

const BaseClassDefiner Analog::declare()
{
	return BaseClassDefiner(Analog::addConstructToMap, Analog::addPrimitiveAssignFnsToMap, Analog::addClassAssignFnsToMap, Analog::debugName);
}
