#include <sstream>
#include "DynamicsFunctionBlock.hpp"
#include "UnderexcitationLimiterDynamics.hpp"

#include "RemoteInputSignal.hpp"
#include "ExcitationSystemDynamics.hpp"

using namespace CIMPP;

UnderexcitationLimiterDynamics::UnderexcitationLimiterDynamics(): RemoteInputSignal(nullptr), ExcitationSystemDynamics(nullptr) {};

UnderexcitationLimiterDynamics::~UnderexcitationLimiterDynamics() {};


bool assign_UnderexcitationLimiterDynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(UnderexcitationLimiterDynamics* element = dynamic_cast<UnderexcitationLimiterDynamics*>(BaseClass_ptr1)) {
                element->RemoteInputSignal = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr2);
                if(element->RemoteInputSignal != nullptr)
                        return true;
        }
        return false;
}

bool assign_ExcitationSystemDynamics_UnderexcitationLimiterDynamics(BaseClass*, BaseClass*);
bool assign_UnderexcitationLimiterDynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(UnderexcitationLimiterDynamics* element = dynamic_cast<UnderexcitationLimiterDynamics*>(BaseClass_ptr1)) {
                element->ExcitationSystemDynamics = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr2);
                if(element->ExcitationSystemDynamics != nullptr)
                        return assign_ExcitationSystemDynamics_UnderexcitationLimiterDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}




namespace CIMPP {
	BaseClass* UnderexcitationLimiterDynamics_factory() {
		return new UnderexcitationLimiterDynamics;
	}
}

void UnderexcitationLimiterDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:UnderexcitationLimiterDynamics"), &UnderexcitationLimiterDynamics_factory));
}

void UnderexcitationLimiterDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void UnderexcitationLimiterDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:UnderexcitationLimiterDynamics.RemoteInputSignal"), &assign_UnderexcitationLimiterDynamics_RemoteInputSignal));
	assign_map.insert(std::make_pair(std::string("cim:UnderexcitationLimiterDynamics.ExcitationSystemDynamics"), &assign_UnderexcitationLimiterDynamics_ExcitationSystemDynamics));
}

const char UnderexcitationLimiterDynamics::debugName[] = "UnderexcitationLimiterDynamics";
const char* UnderexcitationLimiterDynamics::debugString()
{
	return UnderexcitationLimiterDynamics::debugName;
}

const BaseClassDefiner UnderexcitationLimiterDynamics::declare()
{
	return BaseClassDefiner(UnderexcitationLimiterDynamics::addConstructToMap, UnderexcitationLimiterDynamics::addPrimitiveAssignFnsToMap, UnderexcitationLimiterDynamics::addClassAssignFnsToMap, UnderexcitationLimiterDynamics::debugName);
}


