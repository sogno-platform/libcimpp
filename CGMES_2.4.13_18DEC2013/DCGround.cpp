#include <sstream>
#include "DCConductingEquipment.hpp"
#include "DCGround.hpp"


using namespace CIMPP;

DCGround::DCGround() {};

DCGround::~DCGround() {};



namespace CIMPP {
	BaseClass* DCGround_factory() {
		return new DCGround;
	}
}

void DCGround::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DCGround"), &DCGround_factory));
}

void DCGround::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
}

void DCGround::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
}

const char DCGround::debugName[] = "DCGround";
const char* DCGround::debugString()
{
	return DCGround::debugName;
}

const BaseClassDefiner DCGround::declare()
{
	return BaseClassDefiner(DCGround::addConstructToMap, DCGround::addPrimitiveAssignFnsToMap, DCGround::addClassAssignFnsToMap, DCGround::debugName);
}


