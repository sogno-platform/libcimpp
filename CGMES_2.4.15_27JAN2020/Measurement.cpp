#include <sstream>
#include "IdentifiedObject.hpp"
#include "Measurement.hpp"

#include "PowerSystemResource.hpp"
#include "ACDCTerminal.hpp"
#include "String.hpp"
#include "PhaseCode.hpp"
#include "UnitMultiplier.hpp"
#include "UnitSymbol.hpp"

using namespace CIMPP;

Measurement::Measurement(): PowerSystemResource(nullptr), Terminal(nullptr) {};

Measurement::~Measurement() {};




bool assign_Measurement_measurementType(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Measurement* element = dynamic_cast<Measurement*>(BaseClass_ptr1)) {
		element->measurementType = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_Measurement_phases(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Measurement* element = dynamic_cast<Measurement*>(BaseClass_ptr1)) {
                buffer >> element->phases;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Measurement_unitMultiplier(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Measurement* element = dynamic_cast<Measurement*>(BaseClass_ptr1)) {
                buffer >> element->unitMultiplier;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Measurement_unitSymbol(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Measurement* element = dynamic_cast<Measurement*>(BaseClass_ptr1)) {
                buffer >> element->unitSymbol;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_PowerSystemResource_Measurements(BaseClass*, BaseClass*);
bool assign_Measurement_PowerSystemResource(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Measurement* element = dynamic_cast<Measurement*>(BaseClass_ptr1)) {
                element->PowerSystemResource = dynamic_cast<PowerSystemResource*>(BaseClass_ptr2);
                if(element->PowerSystemResource != nullptr)
                        return assign_PowerSystemResource_Measurements(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_ACDCTerminal_Measurements(BaseClass*, BaseClass*);
bool assign_Measurement_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Measurement* element = dynamic_cast<Measurement*>(BaseClass_ptr1)) {
                element->Terminal = dynamic_cast<ACDCTerminal*>(BaseClass_ptr2);
                if(element->Terminal != nullptr)
                        return assign_ACDCTerminal_Measurements(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}





namespace CIMPP {
	BaseClass* Measurement_factory() {
		return new Measurement;
	}
}

void Measurement::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:Measurement"), &Measurement_factory));
}

void Measurement::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
			assign_map.insert(std::make_pair(std::string("cim:Measurement.measurementType"), &assign_Measurement_measurementType));
	assign_map.insert(std::make_pair(std::string("cim:Measurement.phases"), &assign_Measurement_phases));
	assign_map.insert(std::make_pair(std::string("cim:Measurement.unitMultiplier"), &assign_Measurement_unitMultiplier));
	assign_map.insert(std::make_pair(std::string("cim:Measurement.unitSymbol"), &assign_Measurement_unitSymbol));
}

void Measurement::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:Measurement.PowerSystemResource"), &assign_Measurement_PowerSystemResource));
	assign_map.insert(std::make_pair(std::string("cim:Measurement.Terminal"), &assign_Measurement_Terminal));
				}

const char Measurement::debugName[] = "Measurement";
const char* Measurement::debugString()
{
	return Measurement::debugName;
}

const BaseClassDefiner Measurement::declare()
{
	return BaseClassDefiner(Measurement::addConstructToMap, Measurement::addPrimitiveAssignFnsToMap, Measurement::addClassAssignFnsToMap, Measurement::debugName);
}
