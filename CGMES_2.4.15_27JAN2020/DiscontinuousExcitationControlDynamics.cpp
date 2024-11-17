#include <sstream>
#include "DynamicsFunctionBlock.hpp"
#include "DiscontinuousExcitationControlDynamics.hpp"

#include "ExcitationSystemDynamics.hpp"
#include "RemoteInputSignal.hpp"

using namespace CIMPP;

DiscontinuousExcitationControlDynamics::DiscontinuousExcitationControlDynamics(): ExcitationSystemDynamics(nullptr), RemoteInputSignal(nullptr) {};

DiscontinuousExcitationControlDynamics::~DiscontinuousExcitationControlDynamics() {};





bool assign_ExcitationSystemDynamics_DiscontinuousExcitationControlDynamics(BaseClass*, BaseClass*);
bool assign_DiscontinuousExcitationControlDynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DiscontinuousExcitationControlDynamics* element = dynamic_cast<DiscontinuousExcitationControlDynamics*>(BaseClass_ptr1)) {
                element->ExcitationSystemDynamics = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr2);
                if(element->ExcitationSystemDynamics != nullptr)
                        return assign_ExcitationSystemDynamics_DiscontinuousExcitationControlDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_DiscontinuousExcitationControlDynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(DiscontinuousExcitationControlDynamics* element = dynamic_cast<DiscontinuousExcitationControlDynamics*>(BaseClass_ptr1)) {
                element->RemoteInputSignal = dynamic_cast<RemoteInputSignal*>(BaseClass_ptr2);
                if(element->RemoteInputSignal != nullptr)
                        return true;
        }
        return false;
}

namespace CIMPP {
	BaseClass* DiscontinuousExcitationControlDynamics_factory() {
		return new DiscontinuousExcitationControlDynamics;
	}
}

void DiscontinuousExcitationControlDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:DiscontinuousExcitationControlDynamics"), &DiscontinuousExcitationControlDynamics_factory));
}

void DiscontinuousExcitationControlDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void DiscontinuousExcitationControlDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:DiscontinuousExcitationControlDynamics.ExcitationSystemDynamics"), &assign_DiscontinuousExcitationControlDynamics_ExcitationSystemDynamics));
	assign_map.insert(std::make_pair(std::string("cim:DiscontinuousExcitationControlDynamics.RemoteInputSignal"), &assign_DiscontinuousExcitationControlDynamics_RemoteInputSignal));
}

const char DiscontinuousExcitationControlDynamics::debugName[] = "DiscontinuousExcitationControlDynamics";
const char* DiscontinuousExcitationControlDynamics::debugString()
{
	return DiscontinuousExcitationControlDynamics::debugName;
}

const BaseClassDefiner DiscontinuousExcitationControlDynamics::declare()
{
	return BaseClassDefiner(DiscontinuousExcitationControlDynamics::addConstructToMap, DiscontinuousExcitationControlDynamics::addPrimitiveAssignFnsToMap, DiscontinuousExcitationControlDynamics::addClassAssignFnsToMap, DiscontinuousExcitationControlDynamics::debugName);
}
