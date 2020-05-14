#include <sstream>
#include "Curve.hpp"
#include "ReactiveCapabilityCurve.hpp"

#include "EquivalentInjection.hpp"
#include "SynchronousMachine.hpp"

using namespace CIMPP;

ReactiveCapabilityCurve::ReactiveCapabilityCurve() {};

ReactiveCapabilityCurve::~ReactiveCapabilityCurve() {};


bool assign_ReactiveCapabilityCurve_EquivalentInjection(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ReactiveCapabilityCurve* element = dynamic_cast<ReactiveCapabilityCurve*>(BaseClass_ptr1)) {
		if(dynamic_cast<EquivalentInjection*>(BaseClass_ptr2) != nullptr) {
                        element->EquivalentInjection.push_back(dynamic_cast<EquivalentInjection*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ReactiveCapabilityCurve_InitiallyUsedBySynchronousMachines(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ReactiveCapabilityCurve* element = dynamic_cast<ReactiveCapabilityCurve*>(BaseClass_ptr1)) {
		if(dynamic_cast<SynchronousMachine*>(BaseClass_ptr2) != nullptr) {
                        element->InitiallyUsedBySynchronousMachines.push_back(dynamic_cast<SynchronousMachine*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}




namespace CIMPP {
	BaseClass* ReactiveCapabilityCurve_factory() {
		return new ReactiveCapabilityCurve;
	}
}

void ReactiveCapabilityCurve::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ReactiveCapabilityCurve"), &ReactiveCapabilityCurve_factory));
}

void ReactiveCapabilityCurve::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void ReactiveCapabilityCurve::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ReactiveCapabilityCurve.EquivalentInjection"), &assign_ReactiveCapabilityCurve_EquivalentInjection));
	assign_map.insert(std::make_pair(std::string("cim:ReactiveCapabilityCurve.InitiallyUsedBySynchronousMachines"), &assign_ReactiveCapabilityCurve_InitiallyUsedBySynchronousMachines));
}

const char ReactiveCapabilityCurve::debugName[] = "ReactiveCapabilityCurve";
const char* ReactiveCapabilityCurve::debugString()
{
	return ReactiveCapabilityCurve::debugName;
}

const BaseClassDefiner ReactiveCapabilityCurve::declare()
{
	return BaseClassDefiner(ReactiveCapabilityCurve::addConstructToMap, ReactiveCapabilityCurve::addPrimitiveAssignFnsToMap, ReactiveCapabilityCurve::addClassAssignFnsToMap, ReactiveCapabilityCurve::debugName);
}


