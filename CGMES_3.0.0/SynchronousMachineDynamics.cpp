/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SynchronousMachineDynamics.hpp"

#include <algorithm>
#include <sstream>

#include "CrossCompoundTurbineGovernorDynamics.hpp"
#include "CrossCompoundTurbineGovernorDynamics.hpp"
#include "ExcitationSystemDynamics.hpp"
#include "GenICompensationForGenJ.hpp"
#include "MechanicalLoadDynamics.hpp"
#include "SynchronousMachine.hpp"
#include "TurbineGovernorDynamics.hpp"

using namespace CIMPP;

SynchronousMachineDynamics::SynchronousMachineDynamics() : CrossCompoundTurbineGovernorDyanmics(nullptr), CrossCompoundTurbineGovernorDynamics(nullptr), ExcitationSystemDynamics(nullptr), MechanicalLoadDynamics(nullptr), SynchronousMachine(nullptr) {};
SynchronousMachineDynamics::~SynchronousMachineDynamics() {};










bool assign_CrossCompoundTurbineGovernorDynamics_HighPressureSynchronousMachineDynamics(BaseClass*, BaseClass*);
bool assign_SynchronousMachineDynamics_CrossCompoundTurbineGovernorDyanmics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SynchronousMachineDynamics* element = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr1);
	CrossCompoundTurbineGovernorDynamics* element2 = dynamic_cast<CrossCompoundTurbineGovernorDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->CrossCompoundTurbineGovernorDyanmics != element2)
		{
			element->CrossCompoundTurbineGovernorDyanmics = element2;
			return assign_CrossCompoundTurbineGovernorDynamics_HighPressureSynchronousMachineDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_CrossCompoundTurbineGovernorDynamics_LowPressureSynchronousMachineDynamics(BaseClass*, BaseClass*);
bool assign_SynchronousMachineDynamics_CrossCompoundTurbineGovernorDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SynchronousMachineDynamics* element = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr1);
	CrossCompoundTurbineGovernorDynamics* element2 = dynamic_cast<CrossCompoundTurbineGovernorDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->CrossCompoundTurbineGovernorDynamics != element2)
		{
			element->CrossCompoundTurbineGovernorDynamics = element2;
			return assign_CrossCompoundTurbineGovernorDynamics_LowPressureSynchronousMachineDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_ExcitationSystemDynamics_SynchronousMachineDynamics(BaseClass*, BaseClass*);
bool assign_SynchronousMachineDynamics_ExcitationSystemDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SynchronousMachineDynamics* element = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr1);
	ExcitationSystemDynamics* element2 = dynamic_cast<ExcitationSystemDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->ExcitationSystemDynamics != element2)
		{
			element->ExcitationSystemDynamics = element2;
			return assign_ExcitationSystemDynamics_SynchronousMachineDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_GenICompensationForGenJ_SynchronousMachineDynamics(BaseClass*, BaseClass*);
bool assign_SynchronousMachineDynamics_GenICompensationForGenJ(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SynchronousMachineDynamics* element = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr1);
	GenICompensationForGenJ* element2 = dynamic_cast<GenICompensationForGenJ*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->GenICompensationForGenJ.begin(), element->GenICompensationForGenJ.end(), element2) == element->GenICompensationForGenJ.end())
		{
			element->GenICompensationForGenJ.push_back(element2);
			return assign_GenICompensationForGenJ_SynchronousMachineDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_MechanicalLoadDynamics_SynchronousMachineDynamics(BaseClass*, BaseClass*);
bool assign_SynchronousMachineDynamics_MechanicalLoadDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SynchronousMachineDynamics* element = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr1);
	MechanicalLoadDynamics* element2 = dynamic_cast<MechanicalLoadDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->MechanicalLoadDynamics != element2)
		{
			element->MechanicalLoadDynamics = element2;
			return assign_MechanicalLoadDynamics_SynchronousMachineDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SynchronousMachine_SynchronousMachineDynamics(BaseClass*, BaseClass*);
bool assign_SynchronousMachineDynamics_SynchronousMachine(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SynchronousMachineDynamics* element = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr1);
	SynchronousMachine* element2 = dynamic_cast<SynchronousMachine*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->SynchronousMachine != element2)
		{
			element->SynchronousMachine = element2;
			return assign_SynchronousMachine_SynchronousMachineDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_TurbineGovernorDynamics_SynchronousMachineDynamics(BaseClass*, BaseClass*);
bool assign_SynchronousMachineDynamics_TurbineGovernorDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SynchronousMachineDynamics* element = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr1);
	TurbineGovernorDynamics* element2 = dynamic_cast<TurbineGovernorDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->TurbineGovernorDynamics.begin(), element->TurbineGovernorDynamics.end(), element2) == element->TurbineGovernorDynamics.end())
		{
			element->TurbineGovernorDynamics.push_back(element2);
			return assign_TurbineGovernorDynamics_SynchronousMachineDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char SynchronousMachineDynamics::debugName[] = "SynchronousMachineDynamics";
const char* SynchronousMachineDynamics::debugString() const
{
	return SynchronousMachineDynamics::debugName;
}

void SynchronousMachineDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:SynchronousMachineDynamics"), &SynchronousMachineDynamics_factory));
}

void SynchronousMachineDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void SynchronousMachineDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineDynamics.CrossCompoundTurbineGovernorDyanmics"), &assign_SynchronousMachineDynamics_CrossCompoundTurbineGovernorDyanmics));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineDynamics.CrossCompoundTurbineGovernorDynamics"), &assign_SynchronousMachineDynamics_CrossCompoundTurbineGovernorDynamics));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineDynamics.ExcitationSystemDynamics"), &assign_SynchronousMachineDynamics_ExcitationSystemDynamics));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineDynamics.GenICompensationForGenJ"), &assign_SynchronousMachineDynamics_GenICompensationForGenJ));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineDynamics.MechanicalLoadDynamics"), &assign_SynchronousMachineDynamics_MechanicalLoadDynamics));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineDynamics.SynchronousMachine"), &assign_SynchronousMachineDynamics_SynchronousMachine));
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineDynamics.TurbineGovernorDynamics"), &assign_SynchronousMachineDynamics_TurbineGovernorDynamics));
}

const BaseClassDefiner SynchronousMachineDynamics::declare()
{
	return BaseClassDefiner(SynchronousMachineDynamics::addConstructToMap, SynchronousMachineDynamics::addPrimitiveAssignFnsToMap, SynchronousMachineDynamics::addClassAssignFnsToMap, SynchronousMachineDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* SynchronousMachineDynamics_factory()
	{
		return new SynchronousMachineDynamics;
	}
}
