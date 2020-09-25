#include <sstream>
#include "PFVArControllerType2Dynamics.hpp"
#include "PFVArType2IEEEVArController.hpp"

#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

PFVArType2IEEEVArController::PFVArType2IEEEVArController() {};

PFVArType2IEEEVArController::~PFVArType2IEEEVArController() {};










bool assign_PFVArType2IEEEVArController_qref(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PFVArType2IEEEVArController* element = dynamic_cast<PFVArType2IEEEVArController*>(BaseClass_ptr1)) {
                buffer >> element->qref;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PFVArType2IEEEVArController_vref(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PFVArType2IEEEVArController* element = dynamic_cast<PFVArType2IEEEVArController*>(BaseClass_ptr1)) {
                buffer >> element->vref;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PFVArType2IEEEVArController_vclmt(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PFVArType2IEEEVArController* element = dynamic_cast<PFVArType2IEEEVArController*>(BaseClass_ptr1)) {
                buffer >> element->vclmt;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PFVArType2IEEEVArController_kp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PFVArType2IEEEVArController* element = dynamic_cast<PFVArType2IEEEVArController*>(BaseClass_ptr1)) {
                buffer >> element->kp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PFVArType2IEEEVArController_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PFVArType2IEEEVArController* element = dynamic_cast<PFVArType2IEEEVArController*>(BaseClass_ptr1)) {
                buffer >> element->ki;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PFVArType2IEEEVArController_vs(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PFVArType2IEEEVArController* element = dynamic_cast<PFVArType2IEEEVArController*>(BaseClass_ptr1)) {
                buffer >> element->vs;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_PFVArType2IEEEVArController_exlon(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(PFVArType2IEEEVArController* element = dynamic_cast<PFVArType2IEEEVArController*>(BaseClass_ptr1)) {
                buffer >> element->exlon;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* PFVArType2IEEEVArController_factory() {
		return new PFVArType2IEEEVArController;
	}
}

void PFVArType2IEEEVArController::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEVArController"), &PFVArType2IEEEVArController_factory));
}

void PFVArType2IEEEVArController::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEVArController.qref"), &assign_PFVArType2IEEEVArController_qref));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEVArController.vref"), &assign_PFVArType2IEEEVArController_vref));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEVArController.vclmt"), &assign_PFVArType2IEEEVArController_vclmt));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEVArController.kp"), &assign_PFVArType2IEEEVArController_kp));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEVArController.ki"), &assign_PFVArType2IEEEVArController_ki));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEVArController.vs"), &assign_PFVArType2IEEEVArController_vs));
	assign_map.insert(std::make_pair(std::string("cim:PFVArType2IEEEVArController.exlon"), &assign_PFVArType2IEEEVArController_exlon));
}

void PFVArType2IEEEVArController::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
							}

const char PFVArType2IEEEVArController::debugName[] = "PFVArType2IEEEVArController";
const char* PFVArType2IEEEVArController::debugString()
{
	return PFVArType2IEEEVArController::debugName;
}

const BaseClassDefiner PFVArType2IEEEVArController::declare()
{
	return BaseClassDefiner(PFVArType2IEEEVArController::addConstructToMap, PFVArType2IEEEVArController::addPrimitiveAssignFnsToMap, PFVArType2IEEEVArController::addClassAssignFnsToMap, PFVArType2IEEEVArController::debugName);
}


