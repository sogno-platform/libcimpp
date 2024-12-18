/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TurbineGovernorDynamics.hpp"

#include <algorithm>
#include <sstream>

#include "AsynchronousMachineDynamics.hpp"
#include "SynchronousMachineDynamics.hpp"
#include "TurbineLoadControllerDynamics.hpp"

using namespace CIMPP;

TurbineGovernorDynamics::TurbineGovernorDynamics() : AsynchronousMachineDynamics(nullptr), TurbineLoadControllerDynamics(nullptr) {};
TurbineGovernorDynamics::~TurbineGovernorDynamics() {};






bool assign_AsynchronousMachineDynamics_TurbineGovernorDynamics(BaseClass*, BaseClass*);
bool assign_TurbineGovernorDynamics_AsynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TurbineGovernorDynamics* element = dynamic_cast<TurbineGovernorDynamics*>(BaseClass_ptr1);
	AsynchronousMachineDynamics* element2 = dynamic_cast<AsynchronousMachineDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->AsynchronousMachineDynamics != element2)
		{
			element->AsynchronousMachineDynamics = element2;
			return assign_AsynchronousMachineDynamics_TurbineGovernorDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SynchronousMachineDynamics_TurbineGovernorDynamics(BaseClass*, BaseClass*);
bool assign_TurbineGovernorDynamics_SynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TurbineGovernorDynamics* element = dynamic_cast<TurbineGovernorDynamics*>(BaseClass_ptr1);
	SynchronousMachineDynamics* element2 = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->SynchronousMachineDynamics.begin(), element->SynchronousMachineDynamics.end(), element2) == element->SynchronousMachineDynamics.end())
		{
			element->SynchronousMachineDynamics.push_back(element2);
			return assign_SynchronousMachineDynamics_TurbineGovernorDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_TurbineLoadControllerDynamics_TurbineGovernorDynamics(BaseClass*, BaseClass*);
bool assign_TurbineGovernorDynamics_TurbineLoadControllerDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TurbineGovernorDynamics* element = dynamic_cast<TurbineGovernorDynamics*>(BaseClass_ptr1);
	TurbineLoadControllerDynamics* element2 = dynamic_cast<TurbineLoadControllerDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->TurbineLoadControllerDynamics != element2)
		{
			element->TurbineLoadControllerDynamics = element2;
			return assign_TurbineLoadControllerDynamics_TurbineGovernorDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char TurbineGovernorDynamics::debugName[] = "TurbineGovernorDynamics";
const char* TurbineGovernorDynamics::debugString() const
{
	return TurbineGovernorDynamics::debugName;
}

void TurbineGovernorDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:TurbineGovernorDynamics"), &TurbineGovernorDynamics_factory));
}

void TurbineGovernorDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void TurbineGovernorDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:TurbineGovernorDynamics.AsynchronousMachineDynamics"), &assign_TurbineGovernorDynamics_AsynchronousMachineDynamics));
	assign_map.insert(std::make_pair(std::string("cim:TurbineGovernorDynamics.SynchronousMachineDynamics"), &assign_TurbineGovernorDynamics_SynchronousMachineDynamics));
	assign_map.insert(std::make_pair(std::string("cim:TurbineGovernorDynamics.TurbineLoadControllerDynamics"), &assign_TurbineGovernorDynamics_TurbineLoadControllerDynamics));
}

const BaseClassDefiner TurbineGovernorDynamics::declare()
{
	return BaseClassDefiner(TurbineGovernorDynamics::addConstructToMap, TurbineGovernorDynamics::addPrimitiveAssignFnsToMap, TurbineGovernorDynamics::addClassAssignFnsToMap, TurbineGovernorDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* TurbineGovernorDynamics_factory()
	{
		return new TurbineGovernorDynamics;
	}
}
