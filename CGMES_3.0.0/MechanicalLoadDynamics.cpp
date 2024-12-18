/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "MechanicalLoadDynamics.hpp"

#include <algorithm>
#include <sstream>

#include "AsynchronousMachineDynamics.hpp"
#include "SynchronousMachineDynamics.hpp"

using namespace CIMPP;

MechanicalLoadDynamics::MechanicalLoadDynamics() : AsynchronousMachineDynamics(nullptr), SynchronousMachineDynamics(nullptr) {};
MechanicalLoadDynamics::~MechanicalLoadDynamics() {};





bool assign_AsynchronousMachineDynamics_MechanicalLoadDynamics(BaseClass*, BaseClass*);
bool assign_MechanicalLoadDynamics_AsynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	MechanicalLoadDynamics* element = dynamic_cast<MechanicalLoadDynamics*>(BaseClass_ptr1);
	AsynchronousMachineDynamics* element2 = dynamic_cast<AsynchronousMachineDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->AsynchronousMachineDynamics != element2)
		{
			element->AsynchronousMachineDynamics = element2;
			return assign_AsynchronousMachineDynamics_MechanicalLoadDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SynchronousMachineDynamics_MechanicalLoadDynamics(BaseClass*, BaseClass*);
bool assign_MechanicalLoadDynamics_SynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	MechanicalLoadDynamics* element = dynamic_cast<MechanicalLoadDynamics*>(BaseClass_ptr1);
	SynchronousMachineDynamics* element2 = dynamic_cast<SynchronousMachineDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->SynchronousMachineDynamics != element2)
		{
			element->SynchronousMachineDynamics = element2;
			return assign_SynchronousMachineDynamics_MechanicalLoadDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char MechanicalLoadDynamics::debugName[] = "MechanicalLoadDynamics";
const char* MechanicalLoadDynamics::debugString() const
{
	return MechanicalLoadDynamics::debugName;
}

void MechanicalLoadDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:MechanicalLoadDynamics"), &MechanicalLoadDynamics_factory));
}

void MechanicalLoadDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void MechanicalLoadDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:MechanicalLoadDynamics.AsynchronousMachineDynamics"), &assign_MechanicalLoadDynamics_AsynchronousMachineDynamics));
	assign_map.insert(std::make_pair(std::string("cim:MechanicalLoadDynamics.SynchronousMachineDynamics"), &assign_MechanicalLoadDynamics_SynchronousMachineDynamics));
}

const BaseClassDefiner MechanicalLoadDynamics::declare()
{
	return BaseClassDefiner(MechanicalLoadDynamics::addConstructToMap, MechanicalLoadDynamics::addPrimitiveAssignFnsToMap, MechanicalLoadDynamics::addClassAssignFnsToMap, MechanicalLoadDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* MechanicalLoadDynamics_factory()
	{
		return new MechanicalLoadDynamics;
	}
}
