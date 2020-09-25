#include <sstream>
#include "EnergyConsumer.hpp"
#include "StationSupply.hpp"


using namespace CIMPP;

StationSupply::StationSupply() {};

StationSupply::~StationSupply() {};



namespace CIMPP {
	BaseClass* StationSupply_factory() {
		return new StationSupply;
	}
}

void StationSupply::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:StationSupply"), &StationSupply_factory));
}

void StationSupply::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
}

void StationSupply::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
}

const char StationSupply::debugName[] = "StationSupply";
const char* StationSupply::debugString()
{
	return StationSupply::debugName;
}

const BaseClassDefiner StationSupply::declare()
{
	return BaseClassDefiner(StationSupply::addConstructToMap, StationSupply::addPrimitiveAssignFnsToMap, StationSupply::addClassAssignFnsToMap, StationSupply::debugName);
}


