#include <sstream>
#include "IdentifiedObject.hpp"
#include "FossilFuel.hpp"

#include "ThermalGeneratingUnit.hpp"
#include "FuelType.hpp"

using namespace CIMPP;

FossilFuel::FossilFuel(): ThermalGeneratingUnit(nullptr) {};

FossilFuel::~FossilFuel() {};



bool assign_FossilFuel_fossilFuelType(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(FossilFuel* element = dynamic_cast<FossilFuel*>(BaseClass_ptr1)) {
                buffer >> element->fossilFuelType;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_ThermalGeneratingUnit_FossilFuels(BaseClass*, BaseClass*);
bool assign_FossilFuel_ThermalGeneratingUnit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(FossilFuel* element = dynamic_cast<FossilFuel*>(BaseClass_ptr1)) {
                element->ThermalGeneratingUnit = dynamic_cast<ThermalGeneratingUnit*>(BaseClass_ptr2);
                if(element->ThermalGeneratingUnit != nullptr)
                        return assign_ThermalGeneratingUnit_FossilFuels(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}


namespace CIMPP {
	BaseClass* FossilFuel_factory() {
		return new FossilFuel;
	}
}

void FossilFuel::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:FossilFuel"), &FossilFuel_factory));
}

void FossilFuel::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:FossilFuel.fossilFuelType"), &assign_FossilFuel_fossilFuelType));
}

void FossilFuel::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:FossilFuel.ThermalGeneratingUnit"), &assign_FossilFuel_ThermalGeneratingUnit));
	}

const char FossilFuel::debugName[] = "FossilFuel";
const char* FossilFuel::debugString()
{
	return FossilFuel::debugName;
}

const BaseClassDefiner FossilFuel::declare()
{
	return BaseClassDefiner(FossilFuel::addConstructToMap, FossilFuel::addPrimitiveAssignFnsToMap, FossilFuel::addClassAssignFnsToMap, FossilFuel::debugName);
}
