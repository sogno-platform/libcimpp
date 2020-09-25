#include <sstream>
#include "DCConductingEquipment.hpp"
#include "DCChopper.hpp"


using namespace CIMPP;

DCChopper::DCChopper() {};

DCChopper::~DCChopper() {};



namespace CIMPP {
	BaseClass* DCChopper_factory() {
		return new DCChopper;
	}
}

void DCChopper::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DCChopper"), &DCChopper_factory));
}

void DCChopper::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
}

void DCChopper::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
}

const char DCChopper::debugName[] = "DCChopper";
const char* DCChopper::debugString()
{
	return DCChopper::debugName;
}

const BaseClassDefiner DCChopper::declare()
{
	return BaseClassDefiner(DCChopper::addConstructToMap, DCChopper::addPrimitiveAssignFnsToMap, DCChopper::addClassAssignFnsToMap, DCChopper::debugName);
}


