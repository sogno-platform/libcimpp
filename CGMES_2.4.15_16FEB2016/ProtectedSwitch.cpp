#include <sstream>
#include "Switch.hpp"
#include "ProtectedSwitch.hpp"


using namespace CIMPP;

ProtectedSwitch::ProtectedSwitch() {};

ProtectedSwitch::~ProtectedSwitch() {};



namespace CIMPP {
	BaseClass* ProtectedSwitch_factory() {
		return new ProtectedSwitch;
	}
}

void ProtectedSwitch::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ProtectedSwitch"), &ProtectedSwitch_factory));
}

void ProtectedSwitch::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
}

void ProtectedSwitch::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
}

const char ProtectedSwitch::debugName[] = "ProtectedSwitch";
const char* ProtectedSwitch::debugString()
{
	return ProtectedSwitch::debugName;
}

const BaseClassDefiner ProtectedSwitch::declare()
{
	return BaseClassDefiner(ProtectedSwitch::addConstructToMap, ProtectedSwitch::addPrimitiveAssignFnsToMap, ProtectedSwitch::addClassAssignFnsToMap, ProtectedSwitch::debugName);
}
