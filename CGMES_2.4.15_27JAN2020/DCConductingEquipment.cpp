#include <sstream>
#include "Equipment.hpp"
#include "DCConductingEquipment.hpp"

#include "DCTerminal.hpp"

using namespace CIMPP;

DCConductingEquipment::DCConductingEquipment() {};

DCConductingEquipment::~DCConductingEquipment() {};




bool assign_DCConductingEquipment_DCTerminals(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DCConductingEquipment* element = dynamic_cast<DCConductingEquipment*>(BaseClass_ptr1)) {
		if(dynamic_cast<DCTerminal*>(BaseClass_ptr2) != nullptr) {
                        element->DCTerminals.push_back(dynamic_cast<DCTerminal*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

namespace CIMPP {
	BaseClass* DCConductingEquipment_factory() {
		return new DCConductingEquipment;
	}
}

void DCConductingEquipment::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DCConductingEquipment"), &DCConductingEquipment_factory));
}

void DCConductingEquipment::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void DCConductingEquipment::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:DCConductingEquipment.DCTerminals"), &assign_DCConductingEquipment_DCTerminals));
}

const char DCConductingEquipment::debugName[] = "DCConductingEquipment";
const char* DCConductingEquipment::debugString()
{
	return DCConductingEquipment::debugName;
}

const BaseClassDefiner DCConductingEquipment::declare()
{
	return BaseClassDefiner(DCConductingEquipment::addConstructToMap, DCConductingEquipment::addPrimitiveAssignFnsToMap, DCConductingEquipment::addClassAssignFnsToMap, DCConductingEquipment::debugName);
}
