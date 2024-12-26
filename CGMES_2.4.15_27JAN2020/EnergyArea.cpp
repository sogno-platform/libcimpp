#include <sstream>
#include "IdentifiedObject.hpp"
#include "EnergyArea.hpp"

#include "ControlArea.hpp"

using namespace CIMPP;

EnergyArea::EnergyArea(): ControlArea(nullptr) {};

EnergyArea::~EnergyArea() {};




bool assign_EnergyArea_ControlArea(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(EnergyArea* element = dynamic_cast<EnergyArea*>(BaseClass_ptr1)) {
                element->ControlArea = dynamic_cast<ControlArea*>(BaseClass_ptr2);
                if(element->ControlArea != nullptr)
                        return true;
        }
        return false;
}

namespace CIMPP {
	BaseClass* EnergyArea_factory() {
		return new EnergyArea;
	}
}

void EnergyArea::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:EnergyArea"), &EnergyArea_factory));
}

void EnergyArea::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void EnergyArea::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:EnergyArea.ControlArea"), &assign_EnergyArea_ControlArea));
}

const char EnergyArea::debugName[] = "EnergyArea";
const char* EnergyArea::debugString()
{
	return EnergyArea::debugName;
}

const BaseClassDefiner EnergyArea::declare()
{
	return BaseClassDefiner(EnergyArea::addConstructToMap, EnergyArea::addPrimitiveAssignFnsToMap, EnergyArea::addClassAssignFnsToMap, EnergyArea::debugName);
}
