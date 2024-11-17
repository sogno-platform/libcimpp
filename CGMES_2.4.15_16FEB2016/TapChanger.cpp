#include <sstream>
#include "PowerSystemResource.hpp"
#include "TapChanger.hpp"

#include "SvTapStep.hpp"
#include "TapChangerControl.hpp"
#include "TapSchedule.hpp"
#include "Boolean.hpp"
#include "Integer.hpp"
#include "Integer.hpp"
#include "Boolean.hpp"
#include "Integer.hpp"
#include "Voltage.hpp"
#include "Integer.hpp"
#include "Simple_Float.hpp"

using namespace CIMPP;

TapChanger::TapChanger(): SvTapStep(nullptr), TapChangerControl(nullptr) {};

TapChanger::~TapChanger() {};





bool assign_TapChanger_controlEnabled(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TapChanger* element = dynamic_cast<TapChanger*>(BaseClass_ptr1)) {
                buffer >> element->controlEnabled;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_TapChanger_highStep(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TapChanger* element = dynamic_cast<TapChanger*>(BaseClass_ptr1)) {
                buffer >> element->highStep;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_TapChanger_lowStep(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TapChanger* element = dynamic_cast<TapChanger*>(BaseClass_ptr1)) {
                buffer >> element->lowStep;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_TapChanger_ltcFlag(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TapChanger* element = dynamic_cast<TapChanger*>(BaseClass_ptr1)) {
                buffer >> element->ltcFlag;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_TapChanger_neutralStep(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TapChanger* element = dynamic_cast<TapChanger*>(BaseClass_ptr1)) {
                buffer >> element->neutralStep;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_TapChanger_neutralU(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TapChanger* element = dynamic_cast<TapChanger*>(BaseClass_ptr1)) {
                buffer >> element->neutralU;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_TapChanger_normalStep(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TapChanger* element = dynamic_cast<TapChanger*>(BaseClass_ptr1)) {
                buffer >> element->normalStep;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_TapChanger_step(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TapChanger* element = dynamic_cast<TapChanger*>(BaseClass_ptr1)) {
                buffer >> element->step;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_TapChanger_SvTapStep(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TapChanger* element = dynamic_cast<TapChanger*>(BaseClass_ptr1)) {
                element->SvTapStep = dynamic_cast<SvTapStep*>(BaseClass_ptr2);
                if(element->SvTapStep != nullptr)
                        return true;
        }
        return false;
}

bool assign_TapChangerControl_TapChanger(BaseClass*, BaseClass*);
bool assign_TapChanger_TapChangerControl(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TapChanger* element = dynamic_cast<TapChanger*>(BaseClass_ptr1)) {
                element->TapChangerControl = dynamic_cast<TapChangerControl*>(BaseClass_ptr2);
                if(element->TapChangerControl != nullptr)
                        return assign_TapChangerControl_TapChanger(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_TapChanger_TapSchedules(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TapChanger* element = dynamic_cast<TapChanger*>(BaseClass_ptr1)) {
		if(dynamic_cast<TapSchedule*>(BaseClass_ptr2) != nullptr) {
                        element->TapSchedules.push_back(dynamic_cast<TapSchedule*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}









namespace CIMPP {
	BaseClass* TapChanger_factory() {
		return new TapChanger;
	}
}

void TapChanger::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:TapChanger"), &TapChanger_factory));
}

void TapChanger::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
				assign_map.insert(std::make_pair(std::string("cim:TapChanger.controlEnabled"), &assign_TapChanger_controlEnabled));
	assign_map.insert(std::make_pair(std::string("cim:TapChanger.highStep"), &assign_TapChanger_highStep));
	assign_map.insert(std::make_pair(std::string("cim:TapChanger.lowStep"), &assign_TapChanger_lowStep));
	assign_map.insert(std::make_pair(std::string("cim:TapChanger.ltcFlag"), &assign_TapChanger_ltcFlag));
	assign_map.insert(std::make_pair(std::string("cim:TapChanger.neutralStep"), &assign_TapChanger_neutralStep));
	assign_map.insert(std::make_pair(std::string("cim:TapChanger.neutralU"), &assign_TapChanger_neutralU));
	assign_map.insert(std::make_pair(std::string("cim:TapChanger.normalStep"), &assign_TapChanger_normalStep));
	assign_map.insert(std::make_pair(std::string("cim:TapChanger.step"), &assign_TapChanger_step));
}

void TapChanger::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:TapChanger.SvTapStep"), &assign_TapChanger_SvTapStep));
	assign_map.insert(std::make_pair(std::string("cim:TapChanger.TapChangerControl"), &assign_TapChanger_TapChangerControl));
	assign_map.insert(std::make_pair(std::string("cim:TapChanger.TapSchedules"), &assign_TapChanger_TapSchedules));
								}

const char TapChanger::debugName[] = "TapChanger";
const char* TapChanger::debugString()
{
	return TapChanger::debugName;
}

const BaseClassDefiner TapChanger::declare()
{
	return BaseClassDefiner(TapChanger::addConstructToMap, TapChanger::addPrimitiveAssignFnsToMap, TapChanger::addClassAssignFnsToMap, TapChanger::debugName);
}
