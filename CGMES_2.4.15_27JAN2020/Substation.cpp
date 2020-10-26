#include <sstream>
#include "EquipmentContainer.hpp"
#include "Substation.hpp"

#include "DCConverterUnit.hpp"
#include "SubGeographicalRegion.hpp"
#include "VoltageLevel.hpp"

using namespace CIMPP;

Substation::Substation(): Region(nullptr) {};

Substation::~Substation() {};


bool assign_Substation_DCConverterUnit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Substation* element = dynamic_cast<Substation*>(BaseClass_ptr1)) {
		if(dynamic_cast<DCConverterUnit*>(BaseClass_ptr2) != nullptr) {
                        element->DCConverterUnit.push_back(dynamic_cast<DCConverterUnit*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_SubGeographicalRegion_Substations(BaseClass*, BaseClass*);
bool assign_Substation_Region(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Substation* element = dynamic_cast<Substation*>(BaseClass_ptr1)) {
                element->Region = dynamic_cast<SubGeographicalRegion*>(BaseClass_ptr2);
                if(element->Region != nullptr)
                        return assign_SubGeographicalRegion_Substations(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_Substation_VoltageLevels(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Substation* element = dynamic_cast<Substation*>(BaseClass_ptr1)) {
		if(dynamic_cast<VoltageLevel*>(BaseClass_ptr2) != nullptr) {
                        element->VoltageLevels.push_back(dynamic_cast<VoltageLevel*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}





namespace CIMPP {
	BaseClass* Substation_factory() {
		return new Substation;
	}
}

void Substation::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:Substation"), &Substation_factory));
}

void Substation::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
			}

void Substation::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:Substation.DCConverterUnit"), &assign_Substation_DCConverterUnit));
	assign_map.insert(std::make_pair(std::string("cim:Substation.Region"), &assign_Substation_Region));
	assign_map.insert(std::make_pair(std::string("cim:Substation.VoltageLevels"), &assign_Substation_VoltageLevels));
}

const char Substation::debugName[] = "Substation";
const char* Substation::debugString()
{
	return Substation::debugName;
}

const BaseClassDefiner Substation::declare()
{
	return BaseClassDefiner(Substation::addConstructToMap, Substation::addPrimitiveAssignFnsToMap, Substation::addClassAssignFnsToMap, Substation::debugName);
}


