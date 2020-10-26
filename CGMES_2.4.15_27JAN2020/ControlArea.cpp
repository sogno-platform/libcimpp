#include <sstream>
#include "PowerSystemResource.hpp"
#include "ControlArea.hpp"

#include "ControlAreaTypeKind.hpp"
#include "TieFlow.hpp"
#include "ControlAreaGeneratingUnit.hpp"
#include "EnergyArea.hpp"
#include "ActivePower.hpp"
#include "ActivePower.hpp"

using namespace CIMPP;

ControlArea::ControlArea(): EnergyArea(nullptr) {};

ControlArea::~ControlArea() {};



bool assign_ControlArea_TieFlow(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ControlArea* element = dynamic_cast<ControlArea*>(BaseClass_ptr1)) {
		if(dynamic_cast<TieFlow*>(BaseClass_ptr2) != nullptr) {
                        element->TieFlow.push_back(dynamic_cast<TieFlow*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ControlArea_ControlAreaGeneratingUnit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ControlArea* element = dynamic_cast<ControlArea*>(BaseClass_ptr1)) {
		if(dynamic_cast<ControlAreaGeneratingUnit*>(BaseClass_ptr2) != nullptr) {
                        element->ControlAreaGeneratingUnit.push_back(dynamic_cast<ControlAreaGeneratingUnit*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_EnergyArea_ControlArea(BaseClass*, BaseClass*);
bool assign_ControlArea_EnergyArea(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ControlArea* element = dynamic_cast<ControlArea*>(BaseClass_ptr1)) {
                element->EnergyArea = dynamic_cast<EnergyArea*>(BaseClass_ptr2);
                if(element->EnergyArea != nullptr)
                        return assign_EnergyArea_ControlArea(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}




bool assign_ControlArea_type(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ControlArea* element = dynamic_cast<ControlArea*>(BaseClass_ptr1)) {
                buffer >> element->type;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}




bool assign_ControlArea_netInterchange(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ControlArea* element = dynamic_cast<ControlArea*>(BaseClass_ptr1)) {
                buffer >> element->netInterchange;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ControlArea_pTolerance(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ControlArea* element = dynamic_cast<ControlArea*>(BaseClass_ptr1)) {
                buffer >> element->pTolerance;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* ControlArea_factory() {
		return new ControlArea;
	}
}

void ControlArea::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ControlArea"), &ControlArea_factory));
}

void ControlArea::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ControlArea.type"), &assign_ControlArea_type));
				assign_map.insert(std::make_pair(std::string("cim:ControlArea.netInterchange"), &assign_ControlArea_netInterchange));
	assign_map.insert(std::make_pair(std::string("cim:ControlArea.pTolerance"), &assign_ControlArea_pTolerance));
}

void ControlArea::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:ControlArea.TieFlow"), &assign_ControlArea_TieFlow));
	assign_map.insert(std::make_pair(std::string("cim:ControlArea.ControlAreaGeneratingUnit"), &assign_ControlArea_ControlAreaGeneratingUnit));
	assign_map.insert(std::make_pair(std::string("cim:ControlArea.EnergyArea"), &assign_ControlArea_EnergyArea));
		}

const char ControlArea::debugName[] = "ControlArea";
const char* ControlArea::debugString()
{
	return ControlArea::debugName;
}

const BaseClassDefiner ControlArea::declare()
{
	return BaseClassDefiner(ControlArea::addConstructToMap, ControlArea::addPrimitiveAssignFnsToMap, ControlArea::addClassAssignFnsToMap, ControlArea::debugName);
}


