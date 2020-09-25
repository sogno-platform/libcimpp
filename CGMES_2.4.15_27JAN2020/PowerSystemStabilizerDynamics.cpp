#include <sstream>
#include "DynamicsFunctionBlock.hpp"
#include "PowerSystemStabilizerDynamics.hpp"

#include "RemoteInputSignal.hpp"
#include "ExcitationSystemDynamics.hpp"

using namespace CIMPP;

PowerSystemStabilizerDynamics::PowerSystemStabilizerDynamics() {};

PowerSystemStabilizerDynamics::~PowerSystemStabilizerDynamics() {};


bool assign_PowerSystemStabilizerDynamics_RemoteInputSignal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(PowerSystemStabilizerDynamics* element = dynamic_cast<PowerSystemStabilizerDynamics*>(BaseClass_ptr1)) {
		if(dynamic_cast<RemoteInputSignal*>(BaseClass_ptr2) != nullptr) {
                        element->RemoteInputSignal.push_back(dynamic_cast<RemoteInputSignal*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_ExcitationSystemDynamics_PowerSystemStabilizerDynamics(BaseClass*, BaseClass*);
bool assign_PowerSystemStabilizerDynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(PowerSystemStabilizerDynamics* element = dynamic_cast<PowerSystemStabilizerDynamics*>(BaseClass_ptr1)) {
                element->ExcitationSystemDynamics = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr2);
                if(element->ExcitationSystemDynamics != nullptr)
                        return assign_ExcitationSystemDynamics_PowerSystemStabilizerDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}




namespace CIMPP {
	BaseClass* PowerSystemStabilizerDynamics_factory() {
		return new PowerSystemStabilizerDynamics;
	}
}

void PowerSystemStabilizerDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:PowerSystemStabilizerDynamics"), &PowerSystemStabilizerDynamics_factory));
}

void PowerSystemStabilizerDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void PowerSystemStabilizerDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:PowerSystemStabilizerDynamics.RemoteInputSignal"), &assign_PowerSystemStabilizerDynamics_RemoteInputSignal));
	assign_map.insert(std::make_pair(std::string("cim:PowerSystemStabilizerDynamics.ExcitationSystemDynamics"), &assign_PowerSystemStabilizerDynamics_ExcitationSystemDynamics));
}

const char PowerSystemStabilizerDynamics::debugName[] = "PowerSystemStabilizerDynamics";
const char* PowerSystemStabilizerDynamics::debugString()
{
	return PowerSystemStabilizerDynamics::debugName;
}

const BaseClassDefiner PowerSystemStabilizerDynamics::declare()
{
	return BaseClassDefiner(PowerSystemStabilizerDynamics::addConstructToMap, PowerSystemStabilizerDynamics::addPrimitiveAssignFnsToMap, PowerSystemStabilizerDynamics::addClassAssignFnsToMap, PowerSystemStabilizerDynamics::debugName);
}


