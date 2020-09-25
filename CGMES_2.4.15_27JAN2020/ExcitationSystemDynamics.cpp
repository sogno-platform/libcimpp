#include <sstream>
#include "DynamicsFunctionBlock.hpp"
#include "ExcitationSystemDynamics.hpp"

#include "SynchronousMachineDynamics.hpp"
#include "PowerSystemStabilizerDynamics.hpp"
#include "PFVArControllerType1Dynamics.hpp"
#include "VoltageCompensatorDynamics.hpp"
#include "DiscontinuousExcitationControlDynamics.hpp"
#include "UnderexcitationLimiterDynamics.hpp"
#include "PFVArControllerType2Dynamics.hpp"
#include "OverexcitationLimiterDynamics.hpp"

using namespace CIMPP;

ExcitationSystemDynamics::ExcitationSystemDynamics() {};

ExcitationSystemDynamics::~ExcitationSystemDynamics() {};


bool assign_SynchronousMachineDynamics_ExcitationSystemDynamics(BaseClass*, BaseClass*);
bool assign_ExcitationSystemDynamics_SynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ExcitationSystemDynamics* element = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr1)) {
                element->SynchronousMachineDynamics = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr2);
                if(element->SynchronousMachineDynamics != nullptr)
                        return assign_SynchronousMachineDynamics_ExcitationSystemDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_ExcitationSystemDynamics_PowerSystemStabilizerDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ExcitationSystemDynamics* element = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr1)) {
                element->PowerSystemStabilizerDynamics = dynamic_cast<PowerSystemStabilizerDynamics*>(BaseClass_ptr2);
                if(element->PowerSystemStabilizerDynamics != nullptr)
                        return true;
        }
        return false;
}

bool assign_ExcitationSystemDynamics_PFVArControllerType1Dynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ExcitationSystemDynamics* element = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr1)) {
                element->PFVArControllerType1Dynamics = dynamic_cast<PFVArControllerType1Dynamics*>(BaseClass_ptr2);
                if(element->PFVArControllerType1Dynamics != nullptr)
                        return true;
        }
        return false;
}

bool assign_ExcitationSystemDynamics_VoltageCompensatorDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ExcitationSystemDynamics* element = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr1)) {
                element->VoltageCompensatorDynamics = dynamic_cast<VoltageCompensatorDynamics*>(BaseClass_ptr2);
                if(element->VoltageCompensatorDynamics != nullptr)
                        return true;
        }
        return false;
}

bool assign_ExcitationSystemDynamics_DiscontinuousExcitationControlDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ExcitationSystemDynamics* element = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr1)) {
                element->DiscontinuousExcitationControlDynamics = dynamic_cast<DiscontinuousExcitationControlDynamics*>(BaseClass_ptr2);
                if(element->DiscontinuousExcitationControlDynamics != nullptr)
                        return true;
        }
        return false;
}

bool assign_ExcitationSystemDynamics_UnderexcitationLimiterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ExcitationSystemDynamics* element = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr1)) {
                element->UnderexcitationLimiterDynamics = dynamic_cast<UnderexcitationLimiterDynamics*>(BaseClass_ptr2);
                if(element->UnderexcitationLimiterDynamics != nullptr)
                        return true;
        }
        return false;
}

bool assign_ExcitationSystemDynamics_PFVArControllerType2Dynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ExcitationSystemDynamics* element = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr1)) {
                element->PFVArControllerType2Dynamics = dynamic_cast<PFVArControllerType2Dynamics*>(BaseClass_ptr2);
                if(element->PFVArControllerType2Dynamics != nullptr)
                        return true;
        }
        return false;
}

bool assign_ExcitationSystemDynamics_OverexcitationLimiterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ExcitationSystemDynamics* element = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr1)) {
                element->OverexcitationLimiterDynamics = dynamic_cast<OverexcitationLimiterDynamics*>(BaseClass_ptr2);
                if(element->OverexcitationLimiterDynamics != nullptr)
                        return true;
        }
        return false;
}










namespace CIMPP {
	BaseClass* ExcitationSystemDynamics_factory() {
		return new ExcitationSystemDynamics;
	}
}

void ExcitationSystemDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ExcitationSystemDynamics"), &ExcitationSystemDynamics_factory));
}

void ExcitationSystemDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
								}

void ExcitationSystemDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ExcitationSystemDynamics.SynchronousMachineDynamics"), &assign_ExcitationSystemDynamics_SynchronousMachineDynamics));
	assign_map.insert(std::make_pair(std::string("cim:ExcitationSystemDynamics.PowerSystemStabilizerDynamics"), &assign_ExcitationSystemDynamics_PowerSystemStabilizerDynamics));
	assign_map.insert(std::make_pair(std::string("cim:ExcitationSystemDynamics.PFVArControllerType1Dynamics"), &assign_ExcitationSystemDynamics_PFVArControllerType1Dynamics));
	assign_map.insert(std::make_pair(std::string("cim:ExcitationSystemDynamics.VoltageCompensatorDynamics"), &assign_ExcitationSystemDynamics_VoltageCompensatorDynamics));
	assign_map.insert(std::make_pair(std::string("cim:ExcitationSystemDynamics.DiscontinuousExcitationControlDynamics"), &assign_ExcitationSystemDynamics_DiscontinuousExcitationControlDynamics));
	assign_map.insert(std::make_pair(std::string("cim:ExcitationSystemDynamics.UnderexcitationLimiterDynamics"), &assign_ExcitationSystemDynamics_UnderexcitationLimiterDynamics));
	assign_map.insert(std::make_pair(std::string("cim:ExcitationSystemDynamics.PFVArControllerType2Dynamics"), &assign_ExcitationSystemDynamics_PFVArControllerType2Dynamics));
	assign_map.insert(std::make_pair(std::string("cim:ExcitationSystemDynamics.OverexcitationLimiterDynamics"), &assign_ExcitationSystemDynamics_OverexcitationLimiterDynamics));
}

const char ExcitationSystemDynamics::debugName[] = "ExcitationSystemDynamics";
const char* ExcitationSystemDynamics::debugString()
{
	return ExcitationSystemDynamics::debugName;
}

const BaseClassDefiner ExcitationSystemDynamics::declare()
{
	return BaseClassDefiner(ExcitationSystemDynamics::addConstructToMap, ExcitationSystemDynamics::addPrimitiveAssignFnsToMap, ExcitationSystemDynamics::addClassAssignFnsToMap, ExcitationSystemDynamics::debugName);
}


