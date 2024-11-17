#include <sstream>
#include "PowerSystemResource.hpp"
#include "RegulatingControl.hpp"

#include "RegulatingCondEq.hpp"
#include "RegulationSchedule.hpp"
#include "Terminal.hpp"
#include "Boolean.hpp"
#include "Boolean.hpp"
#include "RegulatingControlModeKind.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "UnitMultiplier.hpp"

using namespace CIMPP;

RegulatingControl::RegulatingControl(): Terminal(nullptr) {};

RegulatingControl::~RegulatingControl() {};





bool assign_RegulatingControl_discrete(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(RegulatingControl* element = dynamic_cast<RegulatingControl*>(BaseClass_ptr1)) {
                buffer >> element->discrete;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_RegulatingControl_enabled(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(RegulatingControl* element = dynamic_cast<RegulatingControl*>(BaseClass_ptr1)) {
                buffer >> element->enabled;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_RegulatingControl_mode(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(RegulatingControl* element = dynamic_cast<RegulatingControl*>(BaseClass_ptr1)) {
                buffer >> element->mode;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_RegulatingControl_targetDeadband(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(RegulatingControl* element = dynamic_cast<RegulatingControl*>(BaseClass_ptr1)) {
                buffer >> element->targetDeadband;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_RegulatingControl_targetValue(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(RegulatingControl* element = dynamic_cast<RegulatingControl*>(BaseClass_ptr1)) {
                buffer >> element->targetValue;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_RegulatingControl_targetValueUnitMultiplier(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(RegulatingControl* element = dynamic_cast<RegulatingControl*>(BaseClass_ptr1)) {
                buffer >> element->targetValueUnitMultiplier;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_RegulatingControl_RegulatingCondEq(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(RegulatingControl* element = dynamic_cast<RegulatingControl*>(BaseClass_ptr1)) {
		if(dynamic_cast<RegulatingCondEq*>(BaseClass_ptr2) != nullptr) {
                        element->RegulatingCondEq.push_back(dynamic_cast<RegulatingCondEq*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_RegulatingControl_RegulationSchedule(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(RegulatingControl* element = dynamic_cast<RegulatingControl*>(BaseClass_ptr1)) {
		if(dynamic_cast<RegulationSchedule*>(BaseClass_ptr2) != nullptr) {
                        element->RegulationSchedule.push_back(dynamic_cast<RegulationSchedule*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Terminal_RegulatingControl(BaseClass*, BaseClass*);
bool assign_RegulatingControl_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(RegulatingControl* element = dynamic_cast<RegulatingControl*>(BaseClass_ptr1)) {
                element->Terminal = dynamic_cast<Terminal*>(BaseClass_ptr2);
                if(element->Terminal != nullptr)
                        return assign_Terminal_RegulatingControl(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}







namespace CIMPP {
	BaseClass* RegulatingControl_factory() {
		return new RegulatingControl;
	}
}

void RegulatingControl::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:RegulatingControl"), &RegulatingControl_factory));
}

void RegulatingControl::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
				assign_map.insert(std::make_pair(std::string("cim:RegulatingControl.discrete"), &assign_RegulatingControl_discrete));
	assign_map.insert(std::make_pair(std::string("cim:RegulatingControl.enabled"), &assign_RegulatingControl_enabled));
	assign_map.insert(std::make_pair(std::string("cim:RegulatingControl.mode"), &assign_RegulatingControl_mode));
	assign_map.insert(std::make_pair(std::string("cim:RegulatingControl.targetDeadband"), &assign_RegulatingControl_targetDeadband));
	assign_map.insert(std::make_pair(std::string("cim:RegulatingControl.targetValue"), &assign_RegulatingControl_targetValue));
	assign_map.insert(std::make_pair(std::string("cim:RegulatingControl.targetValueUnitMultiplier"), &assign_RegulatingControl_targetValueUnitMultiplier));
}

void RegulatingControl::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:RegulatingControl.RegulatingCondEq"), &assign_RegulatingControl_RegulatingCondEq));
	assign_map.insert(std::make_pair(std::string("cim:RegulatingControl.RegulationSchedule"), &assign_RegulatingControl_RegulationSchedule));
	assign_map.insert(std::make_pair(std::string("cim:RegulatingControl.Terminal"), &assign_RegulatingControl_Terminal));
						}

const char RegulatingControl::debugName[] = "RegulatingControl";
const char* RegulatingControl::debugString()
{
	return RegulatingControl::debugName;
}

const BaseClassDefiner RegulatingControl::declare()
{
	return BaseClassDefiner(RegulatingControl::addConstructToMap, RegulatingControl::addPrimitiveAssignFnsToMap, RegulatingControl::addClassAssignFnsToMap, RegulatingControl::debugName);
}
