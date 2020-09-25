#include <sstream>
#include "DCSwitch.hpp"
#include "DCDisconnector.hpp"


using namespace CIMPP;

DCDisconnector::DCDisconnector() {};

DCDisconnector::~DCDisconnector() {};



namespace CIMPP {
	BaseClass* DCDisconnector_factory() {
		return new DCDisconnector;
	}
}

void DCDisconnector::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DCDisconnector"), &DCDisconnector_factory));
}

void DCDisconnector::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
}

void DCDisconnector::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
}

const char DCDisconnector::debugName[] = "DCDisconnector";
const char* DCDisconnector::debugString()
{
	return DCDisconnector::debugName;
}

const BaseClassDefiner DCDisconnector::declare()
{
	return BaseClassDefiner(DCDisconnector::addConstructToMap, DCDisconnector::addPrimitiveAssignFnsToMap, DCDisconnector::addClassAssignFnsToMap, DCDisconnector::debugName);
}


