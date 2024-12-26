#include <sstream>
#include "GeneratingUnit.hpp"
#include "SolarGeneratingUnit.hpp"


using namespace CIMPP;

SolarGeneratingUnit::SolarGeneratingUnit() {};

SolarGeneratingUnit::~SolarGeneratingUnit() {};



namespace CIMPP {
	BaseClass* SolarGeneratingUnit_factory() {
		return new SolarGeneratingUnit;
	}
}

void SolarGeneratingUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:SolarGeneratingUnit"), &SolarGeneratingUnit_factory));
}

void SolarGeneratingUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
}

void SolarGeneratingUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
}

const char SolarGeneratingUnit::debugName[] = "SolarGeneratingUnit";
const char* SolarGeneratingUnit::debugString()
{
	return SolarGeneratingUnit::debugName;
}

const BaseClassDefiner SolarGeneratingUnit::declare()
{
	return BaseClassDefiner(SolarGeneratingUnit::addConstructToMap, SolarGeneratingUnit::addPrimitiveAssignFnsToMap, SolarGeneratingUnit::addClassAssignFnsToMap, SolarGeneratingUnit::debugName);
}
