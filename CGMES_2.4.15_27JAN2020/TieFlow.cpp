#include <sstream>
#include "BaseClass.hpp"
#include "TieFlow.hpp"

#include "Terminal.hpp"
#include "ControlArea.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

TieFlow::TieFlow() {};

TieFlow::~TieFlow() {};


bool assign_Terminal_TieFlow(BaseClass*, BaseClass*);
bool assign_TieFlow_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TieFlow* element = dynamic_cast<TieFlow*>(BaseClass_ptr1)) {
                element->Terminal = dynamic_cast<Terminal*>(BaseClass_ptr2);
                if(element->Terminal != nullptr)
                        return assign_Terminal_TieFlow(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_ControlArea_TieFlow(BaseClass*, BaseClass*);
bool assign_TieFlow_ControlArea(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TieFlow* element = dynamic_cast<TieFlow*>(BaseClass_ptr1)) {
                element->ControlArea = dynamic_cast<ControlArea*>(BaseClass_ptr2);
                if(element->ControlArea != nullptr)
                        return assign_ControlArea_TieFlow(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}





bool assign_TieFlow_positiveFlowIn(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(TieFlow* element = dynamic_cast<TieFlow*>(BaseClass_ptr1)) {
                buffer >> element->positiveFlowIn;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* TieFlow_factory() {
		return new TieFlow;
	}
}

void TieFlow::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:TieFlow"), &TieFlow_factory));
}

void TieFlow::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
			assign_map.insert(std::make_pair(std::string("cim:TieFlow.positiveFlowIn"), &assign_TieFlow_positiveFlowIn));
}

void TieFlow::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:TieFlow.Terminal"), &assign_TieFlow_Terminal));
	assign_map.insert(std::make_pair(std::string("cim:TieFlow.ControlArea"), &assign_TieFlow_ControlArea));
	}

const char TieFlow::debugName[] = "TieFlow";
const char* TieFlow::debugString()
{
	return TieFlow::debugName;
}

const BaseClassDefiner TieFlow::declare()
{
	return BaseClassDefiner(TieFlow::addConstructToMap, TieFlow::addPrimitiveAssignFnsToMap, TieFlow::addClassAssignFnsToMap, TieFlow::debugName);
}


