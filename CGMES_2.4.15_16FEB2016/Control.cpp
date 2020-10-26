#include <sstream>
#include "IdentifiedObject.hpp"
#include "Control.hpp"

#include "String.hpp"
#include "Boolean.hpp"
#include "DateTime.hpp"
#include "UnitMultiplier.hpp"
#include "UnitSymbol.hpp"
#include "PowerSystemResource.hpp"

using namespace CIMPP;

Control::Control(): timeStamp(nullptr), PowerSystemResource(nullptr) {};

Control::~Control() {};




bool assign_Control_timeStamp(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Control* element = dynamic_cast<Control*>(BaseClass_ptr1)) {
                element->timeStamp = dynamic_cast<DateTime*>(BaseClass_ptr2);
                if(element->timeStamp != nullptr)
                        return true;
        }
        return false;
}



bool assign_PowerSystemResource_Controls(BaseClass*, BaseClass*);
bool assign_Control_PowerSystemResource(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Control* element = dynamic_cast<Control*>(BaseClass_ptr1)) {
                element->PowerSystemResource = dynamic_cast<PowerSystemResource*>(BaseClass_ptr2);
                if(element->PowerSystemResource != nullptr)
                        return assign_PowerSystemResource_Controls(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}


bool assign_Control_controlType(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Control* element = dynamic_cast<Control*>(BaseClass_ptr1)) {
		element->controlType = buffer.str();
		if(buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_Control_operationInProgress(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Control* element = dynamic_cast<Control*>(BaseClass_ptr1)) {
                buffer >> element->operationInProgress;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_Control_unitMultiplier(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Control* element = dynamic_cast<Control*>(BaseClass_ptr1)) {
                buffer >> element->unitMultiplier;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_Control_unitSymbol(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(Control* element = dynamic_cast<Control*>(BaseClass_ptr1)) {
                buffer >> element->unitSymbol;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


namespace CIMPP {
	BaseClass* Control_factory() {
		return new Control;
	}
}

void Control::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:Control"), &Control_factory));
}

void Control::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:Control.controlType"), &assign_Control_controlType));
	assign_map.insert(std::make_pair(std::string("cim:Control.operationInProgress"), &assign_Control_operationInProgress));
		assign_map.insert(std::make_pair(std::string("cim:Control.unitMultiplier"), &assign_Control_unitMultiplier));
	assign_map.insert(std::make_pair(std::string("cim:Control.unitSymbol"), &assign_Control_unitSymbol));
	}

void Control::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
			assign_map.insert(std::make_pair(std::string("cim:Control.timeStamp"), &assign_Control_timeStamp));
			assign_map.insert(std::make_pair(std::string("cim:Control.PowerSystemResource"), &assign_Control_PowerSystemResource));
}

const char Control::debugName[] = "Control";
const char* Control::debugString()
{
	return Control::debugName;
}

const BaseClassDefiner Control::declare()
{
	return BaseClassDefiner(Control::addConstructToMap, Control::addPrimitiveAssignFnsToMap, Control::addClassAssignFnsToMap, Control::debugName);
}


