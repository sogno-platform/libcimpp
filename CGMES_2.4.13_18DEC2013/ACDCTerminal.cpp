#include <sstream>
#include "IdentifiedObject.hpp"
#include "ACDCTerminal.hpp"

#include "Boolean.hpp"
#include "BusNameMarker.hpp"
#include "Measurement.hpp"
#include "Integer.hpp"
#include "OperationalLimitSet.hpp"

using namespace CIMPP;

ACDCTerminal::ACDCTerminal(): BusNameMarker(nullptr) {};

ACDCTerminal::~ACDCTerminal() {};



bool assign_BusNameMarker_Terminal(BaseClass*, BaseClass*);
bool assign_ACDCTerminal_BusNameMarker(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ACDCTerminal* element = dynamic_cast<ACDCTerminal*>(BaseClass_ptr1)) {
                element->BusNameMarker = dynamic_cast<BusNameMarker*>(BaseClass_ptr2);
                if(element->BusNameMarker != nullptr)
                        return assign_BusNameMarker_Terminal(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_ACDCTerminal_Measurements(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ACDCTerminal* element = dynamic_cast<ACDCTerminal*>(BaseClass_ptr1)) {
		if(dynamic_cast<Measurement*>(BaseClass_ptr2) != nullptr) {
                        element->Measurements.push_back(dynamic_cast<Measurement*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


bool assign_ACDCTerminal_OperationalLimitSet(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ACDCTerminal* element = dynamic_cast<ACDCTerminal*>(BaseClass_ptr1)) {
		if(dynamic_cast<OperationalLimitSet*>(BaseClass_ptr2) != nullptr) {
                        element->OperationalLimitSet.push_back(dynamic_cast<OperationalLimitSet*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}


bool assign_ACDCTerminal_connected(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ACDCTerminal* element = dynamic_cast<ACDCTerminal*>(BaseClass_ptr1)) {
                buffer >> element->connected;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}



bool assign_ACDCTerminal_sequenceNumber(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ACDCTerminal* element = dynamic_cast<ACDCTerminal*>(BaseClass_ptr1)) {
                buffer >> element->sequenceNumber;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


namespace CIMPP {
	BaseClass* ACDCTerminal_factory() {
		return new ACDCTerminal;
	}
}

void ACDCTerminal::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ACDCTerminal"), &ACDCTerminal_factory));
}

void ACDCTerminal::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ACDCTerminal.connected"), &assign_ACDCTerminal_connected));
			assign_map.insert(std::make_pair(std::string("cim:ACDCTerminal.sequenceNumber"), &assign_ACDCTerminal_sequenceNumber));
	}

void ACDCTerminal::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:ACDCTerminal.BusNameMarker"), &assign_ACDCTerminal_BusNameMarker));
	assign_map.insert(std::make_pair(std::string("cim:ACDCTerminal.Measurements"), &assign_ACDCTerminal_Measurements));
		assign_map.insert(std::make_pair(std::string("cim:ACDCTerminal.OperationalLimitSet"), &assign_ACDCTerminal_OperationalLimitSet));
}

const char ACDCTerminal::debugName[] = "ACDCTerminal";
const char* ACDCTerminal::debugString()
{
	return ACDCTerminal::debugName;
}

const BaseClassDefiner ACDCTerminal::declare()
{
	return BaseClassDefiner(ACDCTerminal::addConstructToMap, ACDCTerminal::addPrimitiveAssignFnsToMap, ACDCTerminal::addClassAssignFnsToMap, ACDCTerminal::debugName);
}


