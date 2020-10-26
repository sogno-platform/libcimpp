#include <sstream>
#include "BaseClass.hpp"
#include "SvTapStep.hpp"

#include "Simple_Float.hpp"
#include "TapChanger.hpp"

using namespace CIMPP;

SvTapStep::SvTapStep(): TapChanger(nullptr) {};

SvTapStep::~SvTapStep() {};



bool assign_TapChanger_SvTapStep(BaseClass*, BaseClass*);
bool assign_SvTapStep_TapChanger(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(SvTapStep* element = dynamic_cast<SvTapStep*>(BaseClass_ptr1)) {
                element->TapChanger = dynamic_cast<TapChanger*>(BaseClass_ptr2);
                if(element->TapChanger != nullptr)
                        return assign_TapChanger_SvTapStep(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}


bool assign_SvTapStep_position(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(SvTapStep* element = dynamic_cast<SvTapStep*>(BaseClass_ptr1)) {
                buffer >> element->position;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


namespace CIMPP {
	BaseClass* SvTapStep_factory() {
		return new SvTapStep;
	}
}

void SvTapStep::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:SvTapStep"), &SvTapStep_factory));
}

void SvTapStep::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:SvTapStep.position"), &assign_SvTapStep_position));
	}

void SvTapStep::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
		assign_map.insert(std::make_pair(std::string("cim:SvTapStep.TapChanger"), &assign_SvTapStep_TapChanger));
}

const char SvTapStep::debugName[] = "SvTapStep";
const char* SvTapStep::debugString()
{
	return SvTapStep::debugName;
}

const BaseClassDefiner SvTapStep::declare()
{
	return BaseClassDefiner(SvTapStep::addConstructToMap, SvTapStep::addPrimitiveAssignFnsToMap, SvTapStep::addClassAssignFnsToMap, SvTapStep::debugName);
}


