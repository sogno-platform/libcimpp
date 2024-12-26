#include <sstream>
#include "RegulatingControl.hpp"
#include "TapChangerControl.hpp"

#include "TapChanger.hpp"

using namespace CIMPP;

TapChangerControl::TapChangerControl() {};

TapChangerControl::~TapChangerControl() {};




bool assign_TapChangerControl_TapChanger(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TapChangerControl* element = dynamic_cast<TapChangerControl*>(BaseClass_ptr1)) {
		if(dynamic_cast<TapChanger*>(BaseClass_ptr2) != nullptr) {
                        element->TapChanger.push_back(dynamic_cast<TapChanger*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

namespace CIMPP {
	BaseClass* TapChangerControl_factory() {
		return new TapChangerControl;
	}
}

void TapChangerControl::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:TapChangerControl"), &TapChangerControl_factory));
}

void TapChangerControl::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void TapChangerControl::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:TapChangerControl.TapChanger"), &assign_TapChangerControl_TapChanger));
}

const char TapChangerControl::debugName[] = "TapChangerControl";
const char* TapChangerControl::debugString()
{
	return TapChangerControl::debugName;
}

const BaseClassDefiner TapChangerControl::declare()
{
	return BaseClassDefiner(TapChangerControl::addConstructToMap, TapChangerControl::addPrimitiveAssignFnsToMap, TapChangerControl::addClassAssignFnsToMap, TapChangerControl::debugName);
}
