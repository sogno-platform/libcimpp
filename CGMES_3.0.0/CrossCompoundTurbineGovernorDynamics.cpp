/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CrossCompoundTurbineGovernorDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "SynchronousMachineDynamics.hpp"
#include "SynchronousMachineDynamics.hpp"

using namespace CIMPP;

CrossCompoundTurbineGovernorDynamics::CrossCompoundTurbineGovernorDynamics() : HighPressureSynchronousMachineDynamics(nullptr), LowPressureSynchronousMachineDynamics(nullptr) {};
CrossCompoundTurbineGovernorDynamics::~CrossCompoundTurbineGovernorDynamics() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:CrossCompoundTurbineGovernorDynamics.HighPressureSynchronousMachineDynamics", { CGMESProfile::DY, } },
	{ "cim:CrossCompoundTurbineGovernorDynamics.LowPressureSynchronousMachineDynamics", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
CrossCompoundTurbineGovernorDynamics::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
CrossCompoundTurbineGovernorDynamics::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = DynamicsFunctionBlock::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}



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


bool get_CrossCompoundTurbineGovernorDynamics_HighPressureSynchronousMachineDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const CrossCompoundTurbineGovernorDynamics* element = dynamic_cast<const CrossCompoundTurbineGovernorDynamics*>(BaseClass_ptr1))
	{
		if (element->HighPressureSynchronousMachineDynamics != 0)
		{
			BaseClass_list.push_back(element->HighPressureSynchronousMachineDynamics);
			return true;
		}
	}
	return false;
}

bool get_CrossCompoundTurbineGovernorDynamics_LowPressureSynchronousMachineDynamics(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const CrossCompoundTurbineGovernorDynamics* element = dynamic_cast<const CrossCompoundTurbineGovernorDynamics*>(BaseClass_ptr1))
	{
		if (element->LowPressureSynchronousMachineDynamics != 0)
		{
			BaseClass_list.push_back(element->LowPressureSynchronousMachineDynamics);
			return true;
		}
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

void CrossCompoundTurbineGovernorDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addPrimitiveGetFnsToMap(get_map);
}

void CrossCompoundTurbineGovernorDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	DynamicsFunctionBlock::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:CrossCompoundTurbineGovernorDynamics.HighPressureSynchronousMachineDynamics", &get_CrossCompoundTurbineGovernorDynamics_HighPressureSynchronousMachineDynamics);
	get_map.emplace("cim:CrossCompoundTurbineGovernorDynamics.LowPressureSynchronousMachineDynamics", &get_CrossCompoundTurbineGovernorDynamics_LowPressureSynchronousMachineDynamics);
}

void CrossCompoundTurbineGovernorDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	DynamicsFunctionBlock::addEnumGetFnsToMap(get_map);
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
