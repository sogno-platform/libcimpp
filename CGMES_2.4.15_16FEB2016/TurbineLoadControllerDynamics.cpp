#include <sstream>
#include "DynamicsFunctionBlock.hpp"
#include "TurbineLoadControllerDynamics.hpp"

#include "TurbineGovernorDynamics.hpp"

using namespace CIMPP;

TurbineLoadControllerDynamics::TurbineLoadControllerDynamics(): TurbineGovernorDynamics(nullptr) {};

TurbineLoadControllerDynamics::~TurbineLoadControllerDynamics() {};




bool assign_TurbineGovernorDynamics_TurbineLoadControllerDynamics(BaseClass*, BaseClass*);
bool assign_TurbineLoadControllerDynamics_TurbineGovernorDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(TurbineLoadControllerDynamics* element = dynamic_cast<TurbineLoadControllerDynamics*>(BaseClass_ptr1)) {
                element->TurbineGovernorDynamics = dynamic_cast<TurbineGovernorDynamics*>(BaseClass_ptr2);
                if(element->TurbineGovernorDynamics != nullptr)
                        return assign_TurbineGovernorDynamics_TurbineLoadControllerDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

namespace CIMPP {
	BaseClass* TurbineLoadControllerDynamics_factory() {
		return new TurbineLoadControllerDynamics;
	}
}

void TurbineLoadControllerDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:TurbineLoadControllerDynamics"), &TurbineLoadControllerDynamics_factory));
}

void TurbineLoadControllerDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void TurbineLoadControllerDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:TurbineLoadControllerDynamics.TurbineGovernorDynamics"), &assign_TurbineLoadControllerDynamics_TurbineGovernorDynamics));
}

const char TurbineLoadControllerDynamics::debugName[] = "TurbineLoadControllerDynamics";
const char* TurbineLoadControllerDynamics::debugString()
{
	return TurbineLoadControllerDynamics::debugName;
}

const BaseClassDefiner TurbineLoadControllerDynamics::declare()
{
	return BaseClassDefiner(TurbineLoadControllerDynamics::addConstructToMap, TurbineLoadControllerDynamics::addPrimitiveAssignFnsToMap, TurbineLoadControllerDynamics::addClassAssignFnsToMap, TurbineLoadControllerDynamics::debugName);
}
