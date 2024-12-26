#include <sstream>
#include "IdentifiedObject.hpp"
#include "ControlAreaGeneratingUnit.hpp"

#include "ControlArea.hpp"
#include "GeneratingUnit.hpp"

using namespace CIMPP;

ControlAreaGeneratingUnit::ControlAreaGeneratingUnit(): ControlArea(nullptr), GeneratingUnit(nullptr) {};

ControlAreaGeneratingUnit::~ControlAreaGeneratingUnit() {};





bool assign_ControlArea_ControlAreaGeneratingUnit(BaseClass*, BaseClass*);
bool assign_ControlAreaGeneratingUnit_ControlArea(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ControlAreaGeneratingUnit* element = dynamic_cast<ControlAreaGeneratingUnit*>(BaseClass_ptr1)) {
                element->ControlArea = dynamic_cast<ControlArea*>(BaseClass_ptr2);
                if(element->ControlArea != nullptr)
                        return assign_ControlArea_ControlAreaGeneratingUnit(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_GeneratingUnit_ControlAreaGeneratingUnit(BaseClass*, BaseClass*);
bool assign_ControlAreaGeneratingUnit_GeneratingUnit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ControlAreaGeneratingUnit* element = dynamic_cast<ControlAreaGeneratingUnit*>(BaseClass_ptr1)) {
                element->GeneratingUnit = dynamic_cast<GeneratingUnit*>(BaseClass_ptr2);
                if(element->GeneratingUnit != nullptr)
                        return assign_GeneratingUnit_ControlAreaGeneratingUnit(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

namespace CIMPP {
	BaseClass* ControlAreaGeneratingUnit_factory() {
		return new ControlAreaGeneratingUnit;
	}
}

void ControlAreaGeneratingUnit::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ControlAreaGeneratingUnit"), &ControlAreaGeneratingUnit_factory));
}

void ControlAreaGeneratingUnit::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void ControlAreaGeneratingUnit::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ControlAreaGeneratingUnit.ControlArea"), &assign_ControlAreaGeneratingUnit_ControlArea));
	assign_map.insert(std::make_pair(std::string("cim:ControlAreaGeneratingUnit.GeneratingUnit"), &assign_ControlAreaGeneratingUnit_GeneratingUnit));
}

const char ControlAreaGeneratingUnit::debugName[] = "ControlAreaGeneratingUnit";
const char* ControlAreaGeneratingUnit::debugString()
{
	return ControlAreaGeneratingUnit::debugName;
}

const BaseClassDefiner ControlAreaGeneratingUnit::declare()
{
	return BaseClassDefiner(ControlAreaGeneratingUnit::addConstructToMap, ControlAreaGeneratingUnit::addPrimitiveAssignFnsToMap, ControlAreaGeneratingUnit::addClassAssignFnsToMap, ControlAreaGeneratingUnit::debugName);
}
