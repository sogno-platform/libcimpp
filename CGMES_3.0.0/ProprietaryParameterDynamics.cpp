/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ProprietaryParameterDynamics.hpp"

#include <algorithm>
#include <sstream>

#include "AsynchronousMachineUserDefined.hpp"
#include "CSCUserDefined.hpp"
#include "DiscontinuousExcitationControlUserDefined.hpp"
#include "ExcitationSystemUserDefined.hpp"
#include "LoadUserDefined.hpp"
#include "MechanicalLoadUserDefined.hpp"
#include "OverexcitationLimiterUserDefined.hpp"
#include "PFVArControllerType1UserDefined.hpp"
#include "PFVArControllerType2UserDefined.hpp"
#include "PowerSystemStabilizerUserDefined.hpp"
#include "SVCUserDefined.hpp"
#include "SynchronousMachineUserDefined.hpp"
#include "TurbineGovernorUserDefined.hpp"
#include "TurbineLoadControllerUserDefined.hpp"
#include "UnderexcitationLimiterUserDefined.hpp"
#include "VSCUserDefined.hpp"
#include "VoltageAdjusterUserDefined.hpp"
#include "VoltageCompensatorUserDefined.hpp"
#include "WindPlantUserDefined.hpp"
#include "WindType1or2UserDefined.hpp"
#include "WindType3or4UserDefined.hpp"
#include "Boolean.hpp"
#include "Float.hpp"
#include "Integer.hpp"
#include "Integer.hpp"

using namespace CIMPP;

ProprietaryParameterDynamics::ProprietaryParameterDynamics() : AsynchronousMachineUserDefined(nullptr), CSCUserDefined(nullptr), DiscontinuousExcitationControlUserDefined(nullptr), ExcitationSystemUserDefined(nullptr), LoadUserDefined(nullptr), MechanicalLoadUserDefined(nullptr), OverexcitationLimiterUserDefined(nullptr), PFVArControllerType1UserDefined(nullptr), PFVArControllerType2UserDefined(nullptr), PowerSystemStabilizerUserDefined(nullptr), SVCUserDefined(nullptr), SynchronousMachineUserDefined(nullptr), TurbineGovernorUserDefined(nullptr), TurbineLoadControllerUserDefined(nullptr), UnderexcitationLimiterUserDefined(nullptr), VSCUserDefined(nullptr), VoltageAdjusterUserDefined(nullptr), VoltageCompensatorUserDefined(nullptr), WindPlantUserDefined(nullptr), WindType1or2UserDefined(nullptr), WindType3or4UserDefined(nullptr) {};
ProprietaryParameterDynamics::~ProprietaryParameterDynamics() {};























bool assign_ProprietaryParameterDynamics_booleanParameterValue(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1))
	{
		buffer >> element->booleanParameterValue;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ProprietaryParameterDynamics_floatParameterValue(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1))
	{
		buffer >> element->floatParameterValue;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ProprietaryParameterDynamics_integerParameterValue(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1))
	{
		buffer >> element->integerParameterValue;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_ProprietaryParameterDynamics_parameterNumber(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1))
	{
		buffer >> element->parameterNumber;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_AsynchronousMachineUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_AsynchronousMachineUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1);
	AsynchronousMachineUserDefined* element2 = dynamic_cast<AsynchronousMachineUserDefined*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->AsynchronousMachineUserDefined != element2)
		{
			element->AsynchronousMachineUserDefined = element2;
			return assign_AsynchronousMachineUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_CSCUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_CSCUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1);
	CSCUserDefined* element2 = dynamic_cast<CSCUserDefined*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->CSCUserDefined != element2)
		{
			element->CSCUserDefined = element2;
			return assign_CSCUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_DiscontinuousExcitationControlUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_DiscontinuousExcitationControlUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1);
	DiscontinuousExcitationControlUserDefined* element2 = dynamic_cast<DiscontinuousExcitationControlUserDefined*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->DiscontinuousExcitationControlUserDefined != element2)
		{
			element->DiscontinuousExcitationControlUserDefined = element2;
			return assign_DiscontinuousExcitationControlUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_ExcitationSystemUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_ExcitationSystemUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1);
	ExcitationSystemUserDefined* element2 = dynamic_cast<ExcitationSystemUserDefined*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ExcitationSystemUserDefined != element2)
		{
			element->ExcitationSystemUserDefined = element2;
			return assign_ExcitationSystemUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_LoadUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_LoadUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1);
	LoadUserDefined* element2 = dynamic_cast<LoadUserDefined*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->LoadUserDefined != element2)
		{
			element->LoadUserDefined = element2;
			return assign_LoadUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_MechanicalLoadUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_MechanicalLoadUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1);
	MechanicalLoadUserDefined* element2 = dynamic_cast<MechanicalLoadUserDefined*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->MechanicalLoadUserDefined != element2)
		{
			element->MechanicalLoadUserDefined = element2;
			return assign_MechanicalLoadUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_OverexcitationLimiterUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_OverexcitationLimiterUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1);
	OverexcitationLimiterUserDefined* element2 = dynamic_cast<OverexcitationLimiterUserDefined*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->OverexcitationLimiterUserDefined != element2)
		{
			element->OverexcitationLimiterUserDefined = element2;
			return assign_OverexcitationLimiterUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_PFVArControllerType1UserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_PFVArControllerType1UserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1);
	PFVArControllerType1UserDefined* element2 = dynamic_cast<PFVArControllerType1UserDefined*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PFVArControllerType1UserDefined != element2)
		{
			element->PFVArControllerType1UserDefined = element2;
			return assign_PFVArControllerType1UserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_PFVArControllerType2UserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_PFVArControllerType2UserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1);
	PFVArControllerType2UserDefined* element2 = dynamic_cast<PFVArControllerType2UserDefined*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PFVArControllerType2UserDefined != element2)
		{
			element->PFVArControllerType2UserDefined = element2;
			return assign_PFVArControllerType2UserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_PowerSystemStabilizerUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_PowerSystemStabilizerUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1);
	PowerSystemStabilizerUserDefined* element2 = dynamic_cast<PowerSystemStabilizerUserDefined*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PowerSystemStabilizerUserDefined != element2)
		{
			element->PowerSystemStabilizerUserDefined = element2;
			return assign_PowerSystemStabilizerUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SVCUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_SVCUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1);
	SVCUserDefined* element2 = dynamic_cast<SVCUserDefined*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->SVCUserDefined != element2)
		{
			element->SVCUserDefined = element2;
			return assign_SVCUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SynchronousMachineUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_SynchronousMachineUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1);
	SynchronousMachineUserDefined* element2 = dynamic_cast<SynchronousMachineUserDefined*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->SynchronousMachineUserDefined != element2)
		{
			element->SynchronousMachineUserDefined = element2;
			return assign_SynchronousMachineUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_TurbineGovernorUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_TurbineGovernorUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1);
	TurbineGovernorUserDefined* element2 = dynamic_cast<TurbineGovernorUserDefined*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->TurbineGovernorUserDefined != element2)
		{
			element->TurbineGovernorUserDefined = element2;
			return assign_TurbineGovernorUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_TurbineLoadControllerUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_TurbineLoadControllerUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1);
	TurbineLoadControllerUserDefined* element2 = dynamic_cast<TurbineLoadControllerUserDefined*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->TurbineLoadControllerUserDefined != element2)
		{
			element->TurbineLoadControllerUserDefined = element2;
			return assign_TurbineLoadControllerUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_UnderexcitationLimiterUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_UnderexcitationLimiterUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1);
	UnderexcitationLimiterUserDefined* element2 = dynamic_cast<UnderexcitationLimiterUserDefined*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->UnderexcitationLimiterUserDefined != element2)
		{
			element->UnderexcitationLimiterUserDefined = element2;
			return assign_UnderexcitationLimiterUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_VSCUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_VSCUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1);
	VSCUserDefined* element2 = dynamic_cast<VSCUserDefined*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->VSCUserDefined != element2)
		{
			element->VSCUserDefined = element2;
			return assign_VSCUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_VoltageAdjusterUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_VoltageAdjusterUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1);
	VoltageAdjusterUserDefined* element2 = dynamic_cast<VoltageAdjusterUserDefined*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->VoltageAdjusterUserDefined != element2)
		{
			element->VoltageAdjusterUserDefined = element2;
			return assign_VoltageAdjusterUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_VoltageCompensatorUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_VoltageCompensatorUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1);
	VoltageCompensatorUserDefined* element2 = dynamic_cast<VoltageCompensatorUserDefined*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->VoltageCompensatorUserDefined != element2)
		{
			element->VoltageCompensatorUserDefined = element2;
			return assign_VoltageCompensatorUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindPlantUserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_WindPlantUserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1);
	WindPlantUserDefined* element2 = dynamic_cast<WindPlantUserDefined*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindPlantUserDefined != element2)
		{
			element->WindPlantUserDefined = element2;
			return assign_WindPlantUserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindType1or2UserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_WindType1or2UserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1);
	WindType1or2UserDefined* element2 = dynamic_cast<WindType1or2UserDefined*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindType1or2UserDefined != element2)
		{
			element->WindType1or2UserDefined = element2;
			return assign_WindType1or2UserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindType3or4UserDefined_ProprietaryParameterDynamics(BaseClass*, BaseClass*);
bool assign_ProprietaryParameterDynamics_WindType3or4UserDefined(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1);
	WindType3or4UserDefined* element2 = dynamic_cast<WindType3or4UserDefined*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindType3or4UserDefined != element2)
		{
			element->WindType3or4UserDefined = element2;
			return assign_WindType3or4UserDefined_ProprietaryParameterDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}





const char ProprietaryParameterDynamics::debugName[] = "ProprietaryParameterDynamics";
const char* ProprietaryParameterDynamics::debugString() const
{
	return ProprietaryParameterDynamics::debugName;
}

void ProprietaryParameterDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics"), &ProprietaryParameterDynamics_factory));
}

void ProprietaryParameterDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.booleanParameterValue"), &assign_ProprietaryParameterDynamics_booleanParameterValue));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.floatParameterValue"), &assign_ProprietaryParameterDynamics_floatParameterValue));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.integerParameterValue"), &assign_ProprietaryParameterDynamics_integerParameterValue));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.parameterNumber"), &assign_ProprietaryParameterDynamics_parameterNumber));
}

void ProprietaryParameterDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.AsynchronousMachineUserDefined"), &assign_ProprietaryParameterDynamics_AsynchronousMachineUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.CSCUserDefined"), &assign_ProprietaryParameterDynamics_CSCUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.DiscontinuousExcitationControlUserDefined"), &assign_ProprietaryParameterDynamics_DiscontinuousExcitationControlUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.ExcitationSystemUserDefined"), &assign_ProprietaryParameterDynamics_ExcitationSystemUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.LoadUserDefined"), &assign_ProprietaryParameterDynamics_LoadUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.MechanicalLoadUserDefined"), &assign_ProprietaryParameterDynamics_MechanicalLoadUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.OverexcitationLimiterUserDefined"), &assign_ProprietaryParameterDynamics_OverexcitationLimiterUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.PFVArControllerType1UserDefined"), &assign_ProprietaryParameterDynamics_PFVArControllerType1UserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.PFVArControllerType2UserDefined"), &assign_ProprietaryParameterDynamics_PFVArControllerType2UserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.PowerSystemStabilizerUserDefined"), &assign_ProprietaryParameterDynamics_PowerSystemStabilizerUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.SVCUserDefined"), &assign_ProprietaryParameterDynamics_SVCUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.SynchronousMachineUserDefined"), &assign_ProprietaryParameterDynamics_SynchronousMachineUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.TurbineGovernorUserDefined"), &assign_ProprietaryParameterDynamics_TurbineGovernorUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.TurbineLoadControllerUserDefined"), &assign_ProprietaryParameterDynamics_TurbineLoadControllerUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.UnderexcitationLimiterUserDefined"), &assign_ProprietaryParameterDynamics_UnderexcitationLimiterUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.VSCUserDefined"), &assign_ProprietaryParameterDynamics_VSCUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.VoltageAdjusterUserDefined"), &assign_ProprietaryParameterDynamics_VoltageAdjusterUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.VoltageCompensatorUserDefined"), &assign_ProprietaryParameterDynamics_VoltageCompensatorUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.WindPlantUserDefined"), &assign_ProprietaryParameterDynamics_WindPlantUserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.WindType1or2UserDefined"), &assign_ProprietaryParameterDynamics_WindType1or2UserDefined));
	assign_map.insert(std::make_pair(std::string("cim:ProprietaryParameterDynamics.WindType3or4UserDefined"), &assign_ProprietaryParameterDynamics_WindType3or4UserDefined));
}

const BaseClassDefiner ProprietaryParameterDynamics::declare()
{
	return BaseClassDefiner(ProprietaryParameterDynamics::addConstructToMap, ProprietaryParameterDynamics::addPrimitiveAssignFnsToMap, ProprietaryParameterDynamics::addClassAssignFnsToMap, ProprietaryParameterDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* ProprietaryParameterDynamics_factory()
	{
		return new ProprietaryParameterDynamics;
	}
}
