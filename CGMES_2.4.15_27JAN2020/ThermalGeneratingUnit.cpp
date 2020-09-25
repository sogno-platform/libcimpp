#include <sstream>
#include "GeneratingUnit.hpp"
#include "ThermalGeneratingUnit.hpp"

#include "FossilFuel.hpp"

using namespace CIMPP;

ThermalGeneratingUnit::ThermalGeneratingUnit() {};

ThermalGeneratingUnit::~ThermalGeneratingUnit() {};


bool assign_ThermalGeneratingUnit_FossilFuels(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ThermalGeneratingUnit* element = dynamic_cast<ThermalGeneratingUnit*>(BaseClass_ptr1)) {
		if(dynamic_cast<FossilFuel*>(BaseClass_ptr2) != nullptr) {
                        element->FossilFuels.push_back(dynamic_cast<FossilFuel*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}



namespace CIMPP {
	BaseClass* ThermalGeneratingUnit_factory() {
		return new ThermalGeneratingUnit;
	}
}

void ThermalGeneratingUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ThermalGeneratingUnit"), &ThermalGeneratingUnit_factory));
}

void ThermalGeneratingUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void ThermalGeneratingUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ThermalGeneratingUnit.FossilFuels"), &assign_ThermalGeneratingUnit_FossilFuels));
}

const char ThermalGeneratingUnit::debugName[] = "ThermalGeneratingUnit";
const char* ThermalGeneratingUnit::debugString()
{
	return ThermalGeneratingUnit::debugName;
}

const BaseClassDefiner ThermalGeneratingUnit::declare()
{
	return BaseClassDefiner(ThermalGeneratingUnit::addConstructToMap, ThermalGeneratingUnit::addPrimitiveAssignFnsToMap, ThermalGeneratingUnit::addClassAssignFnsToMap, ThermalGeneratingUnit::debugName);
}


