#include <sstream>
#include "PFVArControllerType1Dynamics.hpp"
#include "PFVArType1IEEEVArController.hpp"

#include "Seconds.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"

using namespace CIMPP;

PFVArType1IEEEVArController::PFVArType1IEEEVArController() {};

PFVArType1IEEEVArController::~PFVArType1IEEEVArController() {};









bool assign_PFVArType1IEEEVArController_tvarc(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PFVArType1IEEEVArController* element = dynamic_cast<PFVArType1IEEEVArController*>(BaseClass_ptr1)) {
                buffer >> element->tvarc;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PFVArType1IEEEVArController_vvar(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PFVArType1IEEEVArController* element = dynamic_cast<PFVArType1IEEEVArController*>(BaseClass_ptr1)) {
                buffer >> element->vvar;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PFVArType1IEEEVArController_vvarcbw(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PFVArType1IEEEVArController* element = dynamic_cast<PFVArType1IEEEVArController*>(BaseClass_ptr1)) {
                buffer >> element->vvarcbw;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PFVArType1IEEEVArController_vvarref(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PFVArType1IEEEVArController* element = dynamic_cast<PFVArType1IEEEVArController*>(BaseClass_ptr1)) {
                buffer >> element->vvarref;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PFVArType1IEEEVArController_vvtmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PFVArType1IEEEVArController* element = dynamic_cast<PFVArType1IEEEVArController*>(BaseClass_ptr1)) {
                buffer >> element->vvtmax;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PFVArType1IEEEVArController_vvtmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PFVArType1IEEEVArController* element = dynamic_cast<PFVArType1IEEEVArController*>(BaseClass_ptr1)) {
                buffer >> element->vvtmin;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* PFVArType1IEEEVArController_factory() {
		return new PFVArType1IEEEVArController;
	}
}

void PFVArType1IEEEVArController::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEVArController"), &PFVArType1IEEEVArController_factory));
}

void PFVArType1IEEEVArController::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEVArController.tvarc"), &assign_PFVArType1IEEEVArController_tvarc));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEVArController.vvar"), &assign_PFVArType1IEEEVArController_vvar));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEVArController.vvarcbw"), &assign_PFVArType1IEEEVArController_vvarcbw));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEVArController.vvarref"), &assign_PFVArType1IEEEVArController_vvarref));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEVArController.vvtmax"), &assign_PFVArType1IEEEVArController_vvtmax));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType1IEEEVArController.vvtmin"), &assign_PFVArType1IEEEVArController_vvtmin));
}

void PFVArType1IEEEVArController::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
						}

const char PFVArType1IEEEVArController::debugName[] = "PFVArType1IEEEVArController";
const char* PFVArType1IEEEVArController::debugString()
{
	return PFVArType1IEEEVArController::debugName;
}

const BaseClassDefiner PFVArType1IEEEVArController::declare()
{
	return BaseClassDefiner(PFVArType1IEEEVArController::addConstructToMap, PFVArType1IEEEVArController::addPrimitiveAssignFnsToMap, PFVArType1IEEEVArController::addClassAssignFnsToMap, PFVArType1IEEEVArController::debugName);
}


