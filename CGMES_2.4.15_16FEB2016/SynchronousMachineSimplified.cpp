#include <sstream>
#include "SynchronousMachineDynamics.hpp"
#include "SynchronousMachineSimplified.hpp"


using namespace CIMPP;

SynchronousMachineSimplified::SynchronousMachineSimplified() {};

SynchronousMachineSimplified::~SynchronousMachineSimplified() {};



namespace CIMPP {
	BaseClass* SynchronousMachineSimplified_factory() {
		return new SynchronousMachineSimplified;
	}
}

void SynchronousMachineSimplified::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:SynchronousMachineSimplified"), &SynchronousMachineSimplified_factory));
}

void SynchronousMachineSimplified::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
}

void SynchronousMachineSimplified::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
}

const char SynchronousMachineSimplified::debugName[] = "SynchronousMachineSimplified";
const char* SynchronousMachineSimplified::debugString()
{
	return SynchronousMachineSimplified::debugName;
}

const BaseClassDefiner SynchronousMachineSimplified::declare()
{
	return BaseClassDefiner(SynchronousMachineSimplified::addConstructToMap, SynchronousMachineSimplified::addPrimitiveAssignFnsToMap, SynchronousMachineSimplified::addClassAssignFnsToMap, SynchronousMachineSimplified::debugName);
}


