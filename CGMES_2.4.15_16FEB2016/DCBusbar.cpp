#include <sstream>
#include "DCConductingEquipment.hpp"
#include "DCBusbar.hpp"


using namespace CIMPP;

DCBusbar::DCBusbar() {};

DCBusbar::~DCBusbar() {};



namespace CIMPP {
	BaseClass* DCBusbar_factory() {
		return new DCBusbar;
	}
}

void DCBusbar::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DCBusbar"), &DCBusbar_factory));
}

void DCBusbar::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
}

void DCBusbar::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
}

const char DCBusbar::debugName[] = "DCBusbar";
const char* DCBusbar::debugString()
{
	return DCBusbar::debugName;
}

const BaseClassDefiner DCBusbar::declare()
{
	return BaseClassDefiner(DCBusbar::addConstructToMap, DCBusbar::addPrimitiveAssignFnsToMap, DCBusbar::addClassAssignFnsToMap, DCBusbar::debugName);
}


