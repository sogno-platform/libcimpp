#include <sstream>
#include "ConductingEquipment.hpp"
#include "Switch.hpp"

#include "Boolean.hpp"
#include "CurrentFlow.hpp"
#include "Boolean.hpp"
#include "SwitchSchedule.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

Switch::Switch() {};

Switch::~Switch() {};





bool assign_Switch_SwitchSchedules(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Switch* element = dynamic_cast<Switch*>(BaseClass_ptr1)) {
		if(dynamic_cast<SwitchSchedule*>(BaseClass_ptr2) != nullptr) {
                        element->SwitchSchedules.push_back(dynamic_cast<SwitchSchedule*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}



bool assign_Switch_normalOpen(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Switch* element = dynamic_cast<Switch*>(BaseClass_ptr1)) {
                buffer >> element->normalOpen;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Switch_ratedCurrent(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Switch* element = dynamic_cast<Switch*>(BaseClass_ptr1)) {
                buffer >> element->ratedCurrent;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Switch_retained(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Switch* element = dynamic_cast<Switch*>(BaseClass_ptr1)) {
                buffer >> element->retained;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_Switch_open(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Switch* element = dynamic_cast<Switch*>(BaseClass_ptr1)) {
                buffer >> element->open;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* Switch_factory() {
		return new Switch;
	}
}

void Switch::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:Switch"), &Switch_factory));
}

void Switch::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:Switch.normalOpen"), &assign_Switch_normalOpen));
	assign_map.insert(std::make_pair(std::string("cim:Switch.ratedCurrent"), &assign_Switch_ratedCurrent));
	assign_map.insert(std::make_pair(std::string("cim:Switch.retained"), &assign_Switch_retained));
		assign_map.insert(std::make_pair(std::string("cim:Switch.open"), &assign_Switch_open));
}

void Switch::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
				assign_map.insert(std::make_pair(std::string("cim:Switch.SwitchSchedules"), &assign_Switch_SwitchSchedules));
	}

const char Switch::debugName[] = "Switch";
const char* Switch::debugString()
{
	return Switch::debugName;
}

const BaseClassDefiner Switch::declare()
{
	return BaseClassDefiner(Switch::addConstructToMap, Switch::addPrimitiveAssignFnsToMap, Switch::addClassAssignFnsToMap, Switch::debugName);
}


