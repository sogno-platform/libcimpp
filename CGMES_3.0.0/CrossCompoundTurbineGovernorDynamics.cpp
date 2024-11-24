/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CrossCompoundTurbineGovernorDynamics.hpp"

#include <algorithm>
#include <sstream>

#include "SynchronousMachineDynamics.hpp"
#include "SynchronousMachineDynamics.hpp"

using namespace CIMPP;

CrossCompoundTurbineGovernorDynamics::CrossCompoundTurbineGovernorDynamics() : HighPressureSynchronousMachineDynamics(nullptr), LowPressureSynchronousMachineDynamics(nullptr) {};
CrossCompoundTurbineGovernorDynamics::~CrossCompoundTurbineGovernorDynamics() {};





bool assign_SynchronousMachineDynamics_CrossCompoundTurbineGovernorDyanmics(BaseClass*, BaseClass*);
bool assign_CrossCompoundTurbineGovernorDynamics_HighPressureSynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	CrossCompoundTurbineGovernorDynamics* element = dynamic_cast<CrossCompoundTurbineGovernorDynamics*>(BaseClass_ptr1);
	SynchronousMachineDynamics* element2 = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->HighPressureSynchronousMachineDynamics != element2)
		{
			element->HighPressureSynchronousMachineDynamics = element2;
			return assign_SynchronousMachineDynamics_CrossCompoundTurbineGovernorDyanmics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SynchronousMachineDynamics_CrossCompoundTurbineGovernorDynamics(BaseClass*, BaseClass*);
bool assign_CrossCompoundTurbineGovernorDynamics_LowPressureSynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	CrossCompoundTurbineGovernorDynamics* element = dynamic_cast<CrossCompoundTurbineGovernorDynamics*>(BaseClass_ptr1);
	SynchronousMachineDynamics* element2 = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->LowPressureSynchronousMachineDynamics != element2)
		{
			element->LowPressureSynchronousMachineDynamics = element2;
			return assign_SynchronousMachineDynamics_CrossCompoundTurbineGovernorDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char CrossCompoundTurbineGovernorDynamics::debugName[] = "CrossCompoundTurbineGovernorDynamics";
const char* CrossCompoundTurbineGovernorDynamics::debugString() const
{
	return CrossCompoundTurbineGovernorDynamics::debugName;
}

void CrossCompoundTurbineGovernorDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:CrossCompoundTurbineGovernorDynamics"), &CrossCompoundTurbineGovernorDynamics_factory));
}

void CrossCompoundTurbineGovernorDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void CrossCompoundTurbineGovernorDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:CrossCompoundTurbineGovernorDynamics.HighPressureSynchronousMachineDynamics"), &assign_CrossCompoundTurbineGovernorDynamics_HighPressureSynchronousMachineDynamics));
	assign_map.insert(std::make_pair(std::string("cim:CrossCompoundTurbineGovernorDynamics.LowPressureSynchronousMachineDynamics"), &assign_CrossCompoundTurbineGovernorDynamics_LowPressureSynchronousMachineDynamics));
}

const BaseClassDefiner CrossCompoundTurbineGovernorDynamics::declare()
{
	return BaseClassDefiner(CrossCompoundTurbineGovernorDynamics::addConstructToMap, CrossCompoundTurbineGovernorDynamics::addPrimitiveAssignFnsToMap, CrossCompoundTurbineGovernorDynamics::addClassAssignFnsToMap, CrossCompoundTurbineGovernorDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* CrossCompoundTurbineGovernorDynamics_factory()
	{
		return new CrossCompoundTurbineGovernorDynamics;
	}
}
