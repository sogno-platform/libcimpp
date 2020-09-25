#include <sstream>
#include "GeneratingUnit.hpp"
#include "NuclearGeneratingUnit.hpp"


using namespace CIMPP;

NuclearGeneratingUnit::NuclearGeneratingUnit() {};

NuclearGeneratingUnit::~NuclearGeneratingUnit() {};



namespace CIMPP {
	BaseClass* NuclearGeneratingUnit_factory() {
		return new NuclearGeneratingUnit;
	}
}

void NuclearGeneratingUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:NuclearGeneratingUnit"), &NuclearGeneratingUnit_factory));
}

void NuclearGeneratingUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
}

void NuclearGeneratingUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
}

const char NuclearGeneratingUnit::debugName[] = "NuclearGeneratingUnit";
const char* NuclearGeneratingUnit::debugString()
{
	return NuclearGeneratingUnit::debugName;
}

const BaseClassDefiner NuclearGeneratingUnit::declare()
{
	return BaseClassDefiner(NuclearGeneratingUnit::addConstructToMap, NuclearGeneratingUnit::addPrimitiveAssignFnsToMap, NuclearGeneratingUnit::addClassAssignFnsToMap, NuclearGeneratingUnit::debugName);
}


