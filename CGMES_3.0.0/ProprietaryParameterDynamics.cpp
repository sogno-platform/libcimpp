/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ProprietaryParameterDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
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

using namespace CIMPP;

ProprietaryParameterDynamics::ProprietaryParameterDynamics() : AsynchronousMachineUserDefined(nullptr), CSCUserDefined(nullptr), DiscontinuousExcitationControlUserDefined(nullptr), ExcitationSystemUserDefined(nullptr), LoadUserDefined(nullptr), MechanicalLoadUserDefined(nullptr), OverexcitationLimiterUserDefined(nullptr), PFVArControllerType1UserDefined(nullptr), PFVArControllerType2UserDefined(nullptr), PowerSystemStabilizerUserDefined(nullptr), SVCUserDefined(nullptr), SynchronousMachineUserDefined(nullptr), TurbineGovernorUserDefined(nullptr), TurbineLoadControllerUserDefined(nullptr), UnderexcitationLimiterUserDefined(nullptr), VSCUserDefined(nullptr), VoltageAdjusterUserDefined(nullptr), VoltageCompensatorUserDefined(nullptr), WindPlantUserDefined(nullptr), WindType1or2UserDefined(nullptr), WindType3or4UserDefined(nullptr) {}
ProprietaryParameterDynamics::~ProprietaryParameterDynamics() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ProprietaryParameterDynamics.AsynchronousMachineUserDefined", { CGMESProfile::DY, } },
	{ "cim:ProprietaryParameterDynamics.CSCUserDefined", { CGMESProfile::DY, } },
	{ "cim:ProprietaryParameterDynamics.DiscontinuousExcitationControlUserDefined", { CGMESProfile::DY, } },
	{ "cim:ProprietaryParameterDynamics.ExcitationSystemUserDefined", { CGMESProfile::DY, } },
	{ "cim:ProprietaryParameterDynamics.LoadUserDefined", { CGMESProfile::DY, } },
	{ "cim:ProprietaryParameterDynamics.MechanicalLoadUserDefined", { CGMESProfile::DY, } },
	{ "cim:ProprietaryParameterDynamics.OverexcitationLimiterUserDefined", { CGMESProfile::DY, } },
	{ "cim:ProprietaryParameterDynamics.PFVArControllerType1UserDefined", { CGMESProfile::DY, } },
	{ "cim:ProprietaryParameterDynamics.PFVArControllerType2UserDefined", { CGMESProfile::DY, } },
	{ "cim:ProprietaryParameterDynamics.PowerSystemStabilizerUserDefined", { CGMESProfile::DY, } },
	{ "cim:ProprietaryParameterDynamics.SVCUserDefined", { CGMESProfile::DY, } },
	{ "cim:ProprietaryParameterDynamics.SynchronousMachineUserDefined", { CGMESProfile::DY, } },
	{ "cim:ProprietaryParameterDynamics.TurbineGovernorUserDefined", { CGMESProfile::DY, } },
	{ "cim:ProprietaryParameterDynamics.TurbineLoadControllerUserDefined", { CGMESProfile::DY, } },
	{ "cim:ProprietaryParameterDynamics.UnderexcitationLimiterUserDefined", { CGMESProfile::DY, } },
	{ "cim:ProprietaryParameterDynamics.VSCUserDefined", { CGMESProfile::DY, } },
	{ "cim:ProprietaryParameterDynamics.VoltageAdjusterUserDefined", { CGMESProfile::DY, } },
	{ "cim:ProprietaryParameterDynamics.VoltageCompensatorUserDefined", { CGMESProfile::DY, } },
	{ "cim:ProprietaryParameterDynamics.WindPlantUserDefined", { CGMESProfile::DY, } },
	{ "cim:ProprietaryParameterDynamics.WindType1or2UserDefined", { CGMESProfile::DY, } },
	{ "cim:ProprietaryParameterDynamics.WindType3or4UserDefined", { CGMESProfile::DY, } },
	{ "cim:ProprietaryParameterDynamics.booleanParameterValue", { CGMESProfile::DY, } },
	{ "cim:ProprietaryParameterDynamics.floatParameterValue", { CGMESProfile::DY, } },
	{ "cim:ProprietaryParameterDynamics.integerParameterValue", { CGMESProfile::DY, } },
	{ "cim:ProprietaryParameterDynamics.parameterNumber", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ProprietaryParameterDynamics::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ProprietaryParameterDynamics::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = BaseClass::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
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

bool assign_ProprietaryParameterDynamics_booleanParameterValue(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->booleanParameterValue;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ProprietaryParameterDynamics_floatParameterValue(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->floatParameterValue;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ProprietaryParameterDynamics_integerParameterValue(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->integerParameterValue;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ProprietaryParameterDynamics_parameterNumber(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ProprietaryParameterDynamics* element = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->parameterNumber;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ProprietaryParameterDynamics_AsynchronousMachineUserDefined(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ProprietaryParameterDynamics* element = dynamic_cast<const ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->AsynchronousMachineUserDefined != 0)
		{
			BaseClass_list.push_back(element->AsynchronousMachineUserDefined);
			return true;
		}
	}
	return false;
}

bool get_ProprietaryParameterDynamics_CSCUserDefined(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ProprietaryParameterDynamics* element = dynamic_cast<const ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->CSCUserDefined != 0)
		{
			BaseClass_list.push_back(element->CSCUserDefined);
			return true;
		}
	}
	return false;
}

bool get_ProprietaryParameterDynamics_DiscontinuousExcitationControlUserDefined(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ProprietaryParameterDynamics* element = dynamic_cast<const ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->DiscontinuousExcitationControlUserDefined != 0)
		{
			BaseClass_list.push_back(element->DiscontinuousExcitationControlUserDefined);
			return true;
		}
	}
	return false;
}

bool get_ProprietaryParameterDynamics_ExcitationSystemUserDefined(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ProprietaryParameterDynamics* element = dynamic_cast<const ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->ExcitationSystemUserDefined != 0)
		{
			BaseClass_list.push_back(element->ExcitationSystemUserDefined);
			return true;
		}
	}
	return false;
}

bool get_ProprietaryParameterDynamics_LoadUserDefined(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ProprietaryParameterDynamics* element = dynamic_cast<const ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->LoadUserDefined != 0)
		{
			BaseClass_list.push_back(element->LoadUserDefined);
			return true;
		}
	}
	return false;
}

bool get_ProprietaryParameterDynamics_MechanicalLoadUserDefined(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ProprietaryParameterDynamics* element = dynamic_cast<const ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->MechanicalLoadUserDefined != 0)
		{
			BaseClass_list.push_back(element->MechanicalLoadUserDefined);
			return true;
		}
	}
	return false;
}

bool get_ProprietaryParameterDynamics_OverexcitationLimiterUserDefined(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ProprietaryParameterDynamics* element = dynamic_cast<const ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->OverexcitationLimiterUserDefined != 0)
		{
			BaseClass_list.push_back(element->OverexcitationLimiterUserDefined);
			return true;
		}
	}
	return false;
}

bool get_ProprietaryParameterDynamics_PFVArControllerType1UserDefined(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ProprietaryParameterDynamics* element = dynamic_cast<const ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->PFVArControllerType1UserDefined != 0)
		{
			BaseClass_list.push_back(element->PFVArControllerType1UserDefined);
			return true;
		}
	}
	return false;
}

bool get_ProprietaryParameterDynamics_PFVArControllerType2UserDefined(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ProprietaryParameterDynamics* element = dynamic_cast<const ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->PFVArControllerType2UserDefined != 0)
		{
			BaseClass_list.push_back(element->PFVArControllerType2UserDefined);
			return true;
		}
	}
	return false;
}

bool get_ProprietaryParameterDynamics_PowerSystemStabilizerUserDefined(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ProprietaryParameterDynamics* element = dynamic_cast<const ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->PowerSystemStabilizerUserDefined != 0)
		{
			BaseClass_list.push_back(element->PowerSystemStabilizerUserDefined);
			return true;
		}
	}
	return false;
}

bool get_ProprietaryParameterDynamics_SVCUserDefined(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ProprietaryParameterDynamics* element = dynamic_cast<const ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->SVCUserDefined != 0)
		{
			BaseClass_list.push_back(element->SVCUserDefined);
			return true;
		}
	}
	return false;
}

bool get_ProprietaryParameterDynamics_SynchronousMachineUserDefined(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ProprietaryParameterDynamics* element = dynamic_cast<const ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->SynchronousMachineUserDefined != 0)
		{
			BaseClass_list.push_back(element->SynchronousMachineUserDefined);
			return true;
		}
	}
	return false;
}

bool get_ProprietaryParameterDynamics_TurbineGovernorUserDefined(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ProprietaryParameterDynamics* element = dynamic_cast<const ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->TurbineGovernorUserDefined != 0)
		{
			BaseClass_list.push_back(element->TurbineGovernorUserDefined);
			return true;
		}
	}
	return false;
}

bool get_ProprietaryParameterDynamics_TurbineLoadControllerUserDefined(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ProprietaryParameterDynamics* element = dynamic_cast<const ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->TurbineLoadControllerUserDefined != 0)
		{
			BaseClass_list.push_back(element->TurbineLoadControllerUserDefined);
			return true;
		}
	}
	return false;
}

bool get_ProprietaryParameterDynamics_UnderexcitationLimiterUserDefined(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ProprietaryParameterDynamics* element = dynamic_cast<const ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->UnderexcitationLimiterUserDefined != 0)
		{
			BaseClass_list.push_back(element->UnderexcitationLimiterUserDefined);
			return true;
		}
	}
	return false;
}

bool get_ProprietaryParameterDynamics_VSCUserDefined(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ProprietaryParameterDynamics* element = dynamic_cast<const ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->VSCUserDefined != 0)
		{
			BaseClass_list.push_back(element->VSCUserDefined);
			return true;
		}
	}
	return false;
}

bool get_ProprietaryParameterDynamics_VoltageAdjusterUserDefined(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ProprietaryParameterDynamics* element = dynamic_cast<const ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->VoltageAdjusterUserDefined != 0)
		{
			BaseClass_list.push_back(element->VoltageAdjusterUserDefined);
			return true;
		}
	}
	return false;
}

bool get_ProprietaryParameterDynamics_VoltageCompensatorUserDefined(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ProprietaryParameterDynamics* element = dynamic_cast<const ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->VoltageCompensatorUserDefined != 0)
		{
			BaseClass_list.push_back(element->VoltageCompensatorUserDefined);
			return true;
		}
	}
	return false;
}

bool get_ProprietaryParameterDynamics_WindPlantUserDefined(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ProprietaryParameterDynamics* element = dynamic_cast<const ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindPlantUserDefined != 0)
		{
			BaseClass_list.push_back(element->WindPlantUserDefined);
			return true;
		}
	}
	return false;
}

bool get_ProprietaryParameterDynamics_WindType1or2UserDefined(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ProprietaryParameterDynamics* element = dynamic_cast<const ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindType1or2UserDefined != 0)
		{
			BaseClass_list.push_back(element->WindType1or2UserDefined);
			return true;
		}
	}
	return false;
}

bool get_ProprietaryParameterDynamics_WindType3or4UserDefined(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const ProprietaryParameterDynamics* element = dynamic_cast<const ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindType3or4UserDefined != 0)
		{
			BaseClass_list.push_back(element->WindType3or4UserDefined);
			return true;
		}
	}
	return false;
}

bool get_ProprietaryParameterDynamics_booleanParameterValue(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ProprietaryParameterDynamics* element = dynamic_cast<const ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->booleanParameterValue;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ProprietaryParameterDynamics_floatParameterValue(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ProprietaryParameterDynamics* element = dynamic_cast<const ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->floatParameterValue;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ProprietaryParameterDynamics_integerParameterValue(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ProprietaryParameterDynamics* element = dynamic_cast<const ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->integerParameterValue;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ProprietaryParameterDynamics_parameterNumber(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ProprietaryParameterDynamics* element = dynamic_cast<const ProprietaryParameterDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->parameterNumber;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ProprietaryParameterDynamics::debugName[] = "ProprietaryParameterDynamics";
const char* ProprietaryParameterDynamics::debugString() const
{
	return ProprietaryParameterDynamics::debugName;
}

void ProprietaryParameterDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:ProprietaryParameterDynamics", &ProprietaryParameterDynamics_factory);
}

void ProprietaryParameterDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:ProprietaryParameterDynamics.booleanParameterValue", &assign_ProprietaryParameterDynamics_booleanParameterValue);
	assign_map.emplace("cim:ProprietaryParameterDynamics.floatParameterValue", &assign_ProprietaryParameterDynamics_floatParameterValue);
	assign_map.emplace("cim:ProprietaryParameterDynamics.integerParameterValue", &assign_ProprietaryParameterDynamics_integerParameterValue);
	assign_map.emplace("cim:ProprietaryParameterDynamics.parameterNumber", &assign_ProprietaryParameterDynamics_parameterNumber);
}

void ProprietaryParameterDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:ProprietaryParameterDynamics.AsynchronousMachineUserDefined", &assign_ProprietaryParameterDynamics_AsynchronousMachineUserDefined);
	assign_map.emplace("cim:ProprietaryParameterDynamics.CSCUserDefined", &assign_ProprietaryParameterDynamics_CSCUserDefined);
	assign_map.emplace("cim:ProprietaryParameterDynamics.DiscontinuousExcitationControlUserDefined", &assign_ProprietaryParameterDynamics_DiscontinuousExcitationControlUserDefined);
	assign_map.emplace("cim:ProprietaryParameterDynamics.ExcitationSystemUserDefined", &assign_ProprietaryParameterDynamics_ExcitationSystemUserDefined);
	assign_map.emplace("cim:ProprietaryParameterDynamics.LoadUserDefined", &assign_ProprietaryParameterDynamics_LoadUserDefined);
	assign_map.emplace("cim:ProprietaryParameterDynamics.MechanicalLoadUserDefined", &assign_ProprietaryParameterDynamics_MechanicalLoadUserDefined);
	assign_map.emplace("cim:ProprietaryParameterDynamics.OverexcitationLimiterUserDefined", &assign_ProprietaryParameterDynamics_OverexcitationLimiterUserDefined);
	assign_map.emplace("cim:ProprietaryParameterDynamics.PFVArControllerType1UserDefined", &assign_ProprietaryParameterDynamics_PFVArControllerType1UserDefined);
	assign_map.emplace("cim:ProprietaryParameterDynamics.PFVArControllerType2UserDefined", &assign_ProprietaryParameterDynamics_PFVArControllerType2UserDefined);
	assign_map.emplace("cim:ProprietaryParameterDynamics.PowerSystemStabilizerUserDefined", &assign_ProprietaryParameterDynamics_PowerSystemStabilizerUserDefined);
	assign_map.emplace("cim:ProprietaryParameterDynamics.SVCUserDefined", &assign_ProprietaryParameterDynamics_SVCUserDefined);
	assign_map.emplace("cim:ProprietaryParameterDynamics.SynchronousMachineUserDefined", &assign_ProprietaryParameterDynamics_SynchronousMachineUserDefined);
	assign_map.emplace("cim:ProprietaryParameterDynamics.TurbineGovernorUserDefined", &assign_ProprietaryParameterDynamics_TurbineGovernorUserDefined);
	assign_map.emplace("cim:ProprietaryParameterDynamics.TurbineLoadControllerUserDefined", &assign_ProprietaryParameterDynamics_TurbineLoadControllerUserDefined);
	assign_map.emplace("cim:ProprietaryParameterDynamics.UnderexcitationLimiterUserDefined", &assign_ProprietaryParameterDynamics_UnderexcitationLimiterUserDefined);
	assign_map.emplace("cim:ProprietaryParameterDynamics.VSCUserDefined", &assign_ProprietaryParameterDynamics_VSCUserDefined);
	assign_map.emplace("cim:ProprietaryParameterDynamics.VoltageAdjusterUserDefined", &assign_ProprietaryParameterDynamics_VoltageAdjusterUserDefined);
	assign_map.emplace("cim:ProprietaryParameterDynamics.VoltageCompensatorUserDefined", &assign_ProprietaryParameterDynamics_VoltageCompensatorUserDefined);
	assign_map.emplace("cim:ProprietaryParameterDynamics.WindPlantUserDefined", &assign_ProprietaryParameterDynamics_WindPlantUserDefined);
	assign_map.emplace("cim:ProprietaryParameterDynamics.WindType1or2UserDefined", &assign_ProprietaryParameterDynamics_WindType1or2UserDefined);
	assign_map.emplace("cim:ProprietaryParameterDynamics.WindType3or4UserDefined", &assign_ProprietaryParameterDynamics_WindType3or4UserDefined);
}

void ProprietaryParameterDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ProprietaryParameterDynamics.booleanParameterValue", &get_ProprietaryParameterDynamics_booleanParameterValue);
	get_map.emplace("cim:ProprietaryParameterDynamics.floatParameterValue", &get_ProprietaryParameterDynamics_floatParameterValue);
	get_map.emplace("cim:ProprietaryParameterDynamics.integerParameterValue", &get_ProprietaryParameterDynamics_integerParameterValue);
	get_map.emplace("cim:ProprietaryParameterDynamics.parameterNumber", &get_ProprietaryParameterDynamics_parameterNumber);
}

void ProprietaryParameterDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	BaseClass::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:ProprietaryParameterDynamics.AsynchronousMachineUserDefined", &get_ProprietaryParameterDynamics_AsynchronousMachineUserDefined);
	get_map.emplace("cim:ProprietaryParameterDynamics.CSCUserDefined", &get_ProprietaryParameterDynamics_CSCUserDefined);
	get_map.emplace("cim:ProprietaryParameterDynamics.DiscontinuousExcitationControlUserDefined", &get_ProprietaryParameterDynamics_DiscontinuousExcitationControlUserDefined);
	get_map.emplace("cim:ProprietaryParameterDynamics.ExcitationSystemUserDefined", &get_ProprietaryParameterDynamics_ExcitationSystemUserDefined);
	get_map.emplace("cim:ProprietaryParameterDynamics.LoadUserDefined", &get_ProprietaryParameterDynamics_LoadUserDefined);
	get_map.emplace("cim:ProprietaryParameterDynamics.MechanicalLoadUserDefined", &get_ProprietaryParameterDynamics_MechanicalLoadUserDefined);
	get_map.emplace("cim:ProprietaryParameterDynamics.OverexcitationLimiterUserDefined", &get_ProprietaryParameterDynamics_OverexcitationLimiterUserDefined);
	get_map.emplace("cim:ProprietaryParameterDynamics.PFVArControllerType1UserDefined", &get_ProprietaryParameterDynamics_PFVArControllerType1UserDefined);
	get_map.emplace("cim:ProprietaryParameterDynamics.PFVArControllerType2UserDefined", &get_ProprietaryParameterDynamics_PFVArControllerType2UserDefined);
	get_map.emplace("cim:ProprietaryParameterDynamics.PowerSystemStabilizerUserDefined", &get_ProprietaryParameterDynamics_PowerSystemStabilizerUserDefined);
	get_map.emplace("cim:ProprietaryParameterDynamics.SVCUserDefined", &get_ProprietaryParameterDynamics_SVCUserDefined);
	get_map.emplace("cim:ProprietaryParameterDynamics.SynchronousMachineUserDefined", &get_ProprietaryParameterDynamics_SynchronousMachineUserDefined);
	get_map.emplace("cim:ProprietaryParameterDynamics.TurbineGovernorUserDefined", &get_ProprietaryParameterDynamics_TurbineGovernorUserDefined);
	get_map.emplace("cim:ProprietaryParameterDynamics.TurbineLoadControllerUserDefined", &get_ProprietaryParameterDynamics_TurbineLoadControllerUserDefined);
	get_map.emplace("cim:ProprietaryParameterDynamics.UnderexcitationLimiterUserDefined", &get_ProprietaryParameterDynamics_UnderexcitationLimiterUserDefined);
	get_map.emplace("cim:ProprietaryParameterDynamics.VSCUserDefined", &get_ProprietaryParameterDynamics_VSCUserDefined);
	get_map.emplace("cim:ProprietaryParameterDynamics.VoltageAdjusterUserDefined", &get_ProprietaryParameterDynamics_VoltageAdjusterUserDefined);
	get_map.emplace("cim:ProprietaryParameterDynamics.VoltageCompensatorUserDefined", &get_ProprietaryParameterDynamics_VoltageCompensatorUserDefined);
	get_map.emplace("cim:ProprietaryParameterDynamics.WindPlantUserDefined", &get_ProprietaryParameterDynamics_WindPlantUserDefined);
	get_map.emplace("cim:ProprietaryParameterDynamics.WindType1or2UserDefined", &get_ProprietaryParameterDynamics_WindType1or2UserDefined);
	get_map.emplace("cim:ProprietaryParameterDynamics.WindType3or4UserDefined", &get_ProprietaryParameterDynamics_WindType3or4UserDefined);
}

void ProprietaryParameterDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	BaseClass::addEnumGetFnsToMap(get_map);
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
