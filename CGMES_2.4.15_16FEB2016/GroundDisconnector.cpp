#include <sstream>
#include "Switch.hpp"
#include "GroundDisconnector.hpp"


using namespace CIMPP;

GroundDisconnector::GroundDisconnector() {};

GroundDisconnector::~GroundDisconnector() {};



namespace CIMPP {
	BaseClass* GroundDisconnector_factory() {
		return new GroundDisconnector;
	}
}

void GroundDisconnector::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:GroundDisconnector"), &GroundDisconnector_factory));
}

void GroundDisconnector::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
}

void GroundDisconnector::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
}

const char GroundDisconnector::debugName[] = "GroundDisconnector";
const char* GroundDisconnector::debugString()
{
	return GroundDisconnector::debugName;
}

const BaseClassDefiner GroundDisconnector::declare()
{
	return BaseClassDefiner(GroundDisconnector::addConstructToMap, GroundDisconnector::addPrimitiveAssignFnsToMap, GroundDisconnector::addClassAssignFnsToMap, GroundDisconnector::debugName);
}
