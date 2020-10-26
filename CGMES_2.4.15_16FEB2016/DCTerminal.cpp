#include <sstream>
#include "DCBaseTerminal.hpp"
#include "DCTerminal.hpp"

#include "DCConductingEquipment.hpp"

using namespace CIMPP;

DCTerminal::DCTerminal(): DCConductingEquipment(nullptr) {};

DCTerminal::~DCTerminal() {};


bool assign_DCConductingEquipment_DCTerminals(BaseClass*, BaseClass*);
bool assign_DCTerminal_DCConductingEquipment(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DCTerminal* element = dynamic_cast<DCTerminal*>(BaseClass_ptr1)) {
                element->DCConductingEquipment = dynamic_cast<DCConductingEquipment*>(BaseClass_ptr2);
                if(element->DCConductingEquipment != nullptr)
                        return assign_DCConductingEquipment_DCTerminals(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}



namespace CIMPP {
	BaseClass* DCTerminal_factory() {
		return new DCTerminal;
	}
}

void DCTerminal::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DCTerminal"), &DCTerminal_factory));
}

void DCTerminal::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void DCTerminal::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:DCTerminal.DCConductingEquipment"), &assign_DCTerminal_DCConductingEquipment));
}

const char DCTerminal::debugName[] = "DCTerminal";
const char* DCTerminal::debugString()
{
	return DCTerminal::debugName;
}

const BaseClassDefiner DCTerminal::declare()
{
	return BaseClassDefiner(DCTerminal::addConstructToMap, DCTerminal::addPrimitiveAssignFnsToMap, DCTerminal::addClassAssignFnsToMap, DCTerminal::debugName);
}


