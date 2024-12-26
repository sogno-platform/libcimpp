#include <sstream>
#include "BaseClass.hpp"
#include "ProprietaryParameterDynamics.hpp"

#include "AsynchronousMachineUserDefined.hpp"
#include "DiscontinuousExcitationControlUserDefined.hpp"
#include "ExcitationSystemUserDefined.hpp"
#include "LoadUserDefined.hpp"
#include "MechanicalLoadUserDefined.hpp"
#include "OverexcitationLimiterUserDefined.hpp"
#include "PFVArControllerType1UserDefined.hpp"
#include "PFVArControllerType2UserDefined.hpp"
#include "PowerSystemStabilizerUserDefined.hpp"
#include "SynchronousMachineUserDefined.hpp"
#include "TurbineGovernorUserDefined.hpp"
#include "TurbineLoadControllerUserDefined.hpp"
#include "UnderexcitationLimiterUserDefined.hpp"
#include "VoltageAdjusterUserDefined.hpp"
#include "VoltageCompensatorUserDefined.hpp"
#include "WindPlantUserDefined.hpp"
#include "WindType1or2UserDefined.hpp"
#include "WindType3or4UserDefined.hpp"
#include "Boolean.hpp"
#include "Simple_Float.hpp"
#include "Integer.hpp"
#include "Integer.hpp"

using namespace CIMPP;

ProprietaryParameterDynamics::ProprietaryParameterDynamics(): AsynchronousMachineUserDefined(nullptr), DiscontinuousExcitationControlUserDefined(nullptr), ExcitationSystemUserDefined(nullptr), LoadUserDefined(nullptr), MechanicalLoadUserDefined(nullptr), OverexcitationLimiterUserDefined(nullptr), PFVArControllerType1UserDefined(nullptr), PFVArControllerType2UserDefined(nullptr), PowerSystemStabilizerUserDefined(nullptr), SynchronousMachineUserDefined(nullptr), TurbineGovernorUserDefined(nullptr), TurbineLoadControllerUserDefined(nullptr), UnderexcitationLimiterUserDefined(nullptr), VoltageAdjusterUserDefined(nullptr), VoltageCompensatorUserDefined(nullptr), WindPlantUserDefined(nullptr), WindType1or2UserDefined(nullptr), WindType3or4UserDefined(nullptr) {};

ProprietaryParameterDynamics::~ProprietaryParameterDynamics() {};




















bool assign_ProprietaryParameterDynamics_booleanParameterValue(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1)) {
                buffer >> element->booleanParameterValue;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ProprietaryParameterDynamics_floatParameterValue(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1)) {
                buffer >> element->floatParameterValue;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ProprietaryParameterDynamics_integerParameterValue(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1)) {
                buffer >> element->integerParameterValue;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_ProprietaryParameterDynamics_parameterNumber(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1)) {
                buffer >> element->parameterNumber;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_AsynchronousMachineUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_AsynchronousMachineUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1)) {
                element->AsynchronousMachineUserDefined = dynamic_cast<AsynchronousMachineUserDefined*>(BaseClass_ptr2);
                if(element->AsynchronousMachineUserDefined != nullptr)
                        return assign_AsynchronousMachineUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_DiscontinuousExcitationControlUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_DiscontinuousExcitationControlUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1)) {
                element->DiscontinuousExcitationControlUserDefined = dynamic_cast<DiscontinuousExcitationControlUserDefined*>(BaseClass_ptr2);
                if(element->DiscontinuousExcitationControlUserDefined != nullptr)
                        return assign_DiscontinuousExcitationControlUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_ExcitationSystemUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_ExcitationSystemUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1)) {
                element->ExcitationSystemUserDefined = dynamic_cast<ExcitationSystemUserDefined*>(BaseClass_ptr2);
                if(element->ExcitationSystemUserDefined != nullptr)
                        return assign_ExcitationSystemUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_LoadUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_LoadUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1)) {
                element->LoadUserDefined = dynamic_cast<LoadUserDefined*>(BaseClass_ptr2);
                if(element->LoadUserDefined != nullptr)
                        return assign_LoadUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_MechanicalLoadUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_MechanicalLoadUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1)) {
                element->MechanicalLoadUserDefined = dynamic_cast<MechanicalLoadUserDefined*>(BaseClass_ptr2);
                if(element->MechanicalLoadUserDefined != nullptr)
                        return assign_MechanicalLoadUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_OverexcitationLimiterUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_OverexcitationLimiterUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1)) {
                element->OverexcitationLimiterUserDefined = dynamic_cast<OverexcitationLimiterUserDefined*>(BaseClass_ptr2);
                if(element->OverexcitationLimiterUserDefined != nullptr)
                        return assign_OverexcitationLimiterUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_PFVArControllerType1UserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_PFVArControllerType1UserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1)) {
                element->PFVArControllerType1UserDefined = dynamic_cast<PFVArControllerType1UserDefined*>(BaseClass_ptr2);
                if(element->PFVArControllerType1UserDefined != nullptr)
                        return assign_PFVArControllerType1UserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_PFVArControllerType2UserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_PFVArControllerType2UserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1)) {
                element->PFVArControllerType2UserDefined = dynamic_cast<PFVArControllerType2UserDefined*>(BaseClass_ptr2);
                if(element->PFVArControllerType2UserDefined != nullptr)
                        return assign_PFVArControllerType2UserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_PowerSystemStabilizerUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_PowerSystemStabilizerUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1)) {
                element->PowerSystemStabilizerUserDefined = dynamic_cast<PowerSystemStabilizerUserDefined*>(BaseClass_ptr2);
                if(element->PowerSystemStabilizerUserDefined != nullptr)
                        return assign_PowerSystemStabilizerUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_SynchronousMachineUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_SynchronousMachineUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1)) {
                element->SynchronousMachineUserDefined = dynamic_cast<SynchronousMachineUserDefined*>(BaseClass_ptr2);
                if(element->SynchronousMachineUserDefined != nullptr)
                        return assign_SynchronousMachineUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_TurbineGovernorUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_TurbineGovernorUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1)) {
                element->TurbineGovernorUserDefined = dynamic_cast<TurbineGovernorUserDefined*>(BaseClass_ptr2);
                if(element->TurbineGovernorUserDefined != nullptr)
                        return assign_TurbineGovernorUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_TurbineLoadControllerUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_TurbineLoadControllerUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1)) {
                element->TurbineLoadControllerUserDefined = dynamic_cast<TurbineLoadControllerUserDefined*>(BaseClass_ptr2);
                if(element->TurbineLoadControllerUserDefined != nullptr)
                        return assign_TurbineLoadControllerUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_UnderexcitationLimiterUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_UnderexcitationLimiterUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1)) {
                element->UnderexcitationLimiterUserDefined = dynamic_cast<UnderexcitationLimiterUserDefined*>(BaseClass_ptr2);
                if(element->UnderexcitationLimiterUserDefined != nullptr)
                        return assign_UnderexcitationLimiterUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_VoltageAdjusterUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_VoltageAdjusterUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1)) {
                element->VoltageAdjusterUserDefined = dynamic_cast<VoltageAdjusterUserDefined*>(BaseClass_ptr2);
                if(element->VoltageAdjusterUserDefined != nullptr)
                        return assign_VoltageAdjusterUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_VoltageCompensatorUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_VoltageCompensatorUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1)) {
                element->VoltageCompensatorUserDefined = dynamic_cast<VoltageCompensatorUserDefined*>(BaseClass_ptr2);
                if(element->VoltageCompensatorUserDefined != nullptr)
                        return assign_VoltageCompensatorUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_WindPlantUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_WindPlantUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1)) {
                element->WindPlantUserDefined = dynamic_cast<WindPlantUserDefined*>(BaseClass_ptr2);
                if(element->WindPlantUserDefined != nullptr)
                        return assign_WindPlantUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_WindType1or2UserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_WindType1or2UserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1)) {
                element->WindType1or2UserDefined = dynamic_cast<WindType1or2UserDefined*>(BaseClass_ptr2);
                if(element->WindType1or2UserDefined != nullptr)
                        return assign_WindType1or2UserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_WindType3or4UserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_WindType3or4UserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1)) {
                element->WindType3or4UserDefined = dynamic_cast<WindType3or4UserDefined*>(BaseClass_ptr2);
                if(element->WindType3or4UserDefined != nullptr)
                        return assign_WindType3or4UserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}





namespace CIMPP {
	BaseClass* ProprietaryParameterDynamics_factory() {
		return new ProprietaryParameterDynamics;
	}
}

void ProprietaryParameterDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics"), &ProprietaryParameterDynamics_factory));
}

void ProprietaryParameterDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
																			assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.booleanParameterValue"), &assign_ProprietaryParameterDynamics_booleanParameterValue));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.floatParameterValue"), &assign_ProprietaryParameterDynamics_floatParameterValue));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.integerParameterValue"), &assign_ProprietaryParameterDynamics_integerParameterValue));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.parameterNumber"), &assign_ProprietaryParameterDynamics_parameterNumber));
}

void ProprietaryParameterDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.AsynchronousMachineUserDefined"), &assign_ProprietaryParameterDynamics_AsynchronousMachineUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.DiscontinuousExcitationControlUserDefined"), &assign_ProprietaryParameterDynamics_DiscontinuousExcitationControlUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.ExcitationSystemUserDefined"), &assign_ProprietaryParameterDynamics_ExcitationSystemUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.LoadUserDefined"), &assign_ProprietaryParameterDynamics_LoadUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.MechanicalLoadUserDefined"), &assign_ProprietaryParameterDynamics_MechanicalLoadUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.OverexcitationLimiterUserDefined"), &assign_ProprietaryParameterDynamics_OverexcitationLimiterUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.PFVArControllerType1UserDefined"), &assign_ProprietaryParameterDynamics_PFVArControllerType1UserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.PFVArControllerType2UserDefined"), &assign_ProprietaryParameterDynamics_PFVArControllerType2UserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.PowerSystemStabilizerUserDefined"), &assign_ProprietaryParameterDynamics_PowerSystemStabilizerUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.SynchronousMachineUserDefined"), &assign_ProprietaryParameterDynamics_SynchronousMachineUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.TurbineGovernorUserDefined"), &assign_ProprietaryParameterDynamics_TurbineGovernorUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.TurbineLoadControllerUserDefined"), &assign_ProprietaryParameterDynamics_TurbineLoadControllerUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.UnderexcitationLimiterUserDefined"), &assign_ProprietaryParameterDynamics_UnderexcitationLimiterUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.VoltageAdjusterUserDefined"), &assign_ProprietaryParameterDynamics_VoltageAdjusterUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.VoltageCompensatorUserDefined"), &assign_ProprietaryParameterDynamics_VoltageCompensatorUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.WindPlantUserDefined"), &assign_ProprietaryParameterDynamics_WindPlantUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.WindType1or2UserDefined"), &assign_ProprietaryParameterDynamics_WindType1or2UserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.WindType3or4UserDefined"), &assign_ProprietaryParameterDynamics_WindType3or4UserDefined));
				}

const char ProprietaryParameterDynamics::debugName[] = "ProprietaryParameterDynamics";
const char* ProprietaryParameterDynamics::debugString()
{
	return ProprietaryParameterDynamics::debugName;
}

const BaseClassDefiner ProprietaryParameterDynamics::declare()
{
	return BaseClassDefiner(ProprietaryParameterDynamics::addConstructToMap, ProprietaryParameterDynamics::addPrimitiveAssignFnsToMap, ProprietaryParameterDynamics::addClassAssignFnsToMap, ProprietaryParameterDynamics::debugName);
}
