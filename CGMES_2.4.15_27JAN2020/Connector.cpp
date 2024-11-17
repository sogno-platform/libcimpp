#include <sstream>
#include "ConductingEquipment.hpp"
#include "Connector.hpp"


using namespace CIMPP;

Connector::Connector() {};

Connector::~Connector() {};



namespace CIMPP {
	BaseClass* Connector_factory() {
		return new Connector;
	}
}

void Connector::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:Connector"), &Connector_factory));
}

void Connector::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
}

void Connector::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
}

const char Connector::debugName[] = "Connector";
const char* Connector::debugString()
{
	return Connector::debugName;
}

const BaseClassDefiner Connector::declare()
{
	return BaseClassDefiner(Connector::addConstructToMap, Connector::addPrimitiveAssignFnsToMap, Connector::addClassAssignFnsToMap, Connector::debugName);
}
