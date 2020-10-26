#include <sstream>
#include "DynamicsFunctionBlock.hpp"
#include "OverexcitationLimiterDynamics.hpp"

#include "ExcitationSystemDynamics.hpp"

using namespace CIMPP;

OverexcitationLimiterDynamics::OverexcitationLimiterDynamics(): ExcitationSystemDynamics(nullptr) {};

OverexcitationLimiterDynamics::~OverexcitationLimiterDynamics() {};


bool assign_ExcitationSystemDynamics_OverexcitationLimiterDynamics(BaseClass*, BaseClass*);
bool assign_OverexcitationLimiterDynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(OverexcitationLimiterDynamics* element = dynamic_cast<OverexcitationLimiterDynamics*>(BaseClass_ptr1)) {
                element->ExcitationSystemDynamics = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr2);
                if(element->ExcitationSystemDynamics != nullptr)
                        return assign_ExcitationSystemDynamics_OverexcitationLimiterDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}



namespace CIMPP {
	BaseClass* OverexcitationLimiterDynamics_factory() {
		return new OverexcitationLimiterDynamics;
	}
}

void OverexcitationLimiterDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:OverexcitationLimiterDynamics"), &OverexcitationLimiterDynamics_factory));
}

void OverexcitationLimiterDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void OverexcitationLimiterDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:OverexcitationLimiterDynamics.ExcitationSystemDynamics"), &assign_OverexcitationLimiterDynamics_ExcitationSystemDynamics));
}

const char OverexcitationLimiterDynamics::debugName[] = "OverexcitationLimiterDynamics";
const char* OverexcitationLimiterDynamics::debugString()
{
	return OverexcitationLimiterDynamics::debugName;
}

const BaseClassDefiner OverexcitationLimiterDynamics::declare()
{
	return BaseClassDefiner(OverexcitationLimiterDynamics::addConstructToMap, OverexcitationLimiterDynamics::addPrimitiveAssignFnsToMap, OverexcitationLimiterDynamics::addClassAssignFnsToMap, OverexcitationLimiterDynamics::debugName);
}


