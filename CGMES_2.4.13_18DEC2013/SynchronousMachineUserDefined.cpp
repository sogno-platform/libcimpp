/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SynchronousMachineUserDefined.hpp"

#include <algorithm>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

SynchronousMachineUserDefined::SynchronousMachineUserDefined() {};
SynchronousMachineUserDefined::~SynchronousMachineUserDefined() {};



bool assign_SynchronousMachineUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SynchronousMachineUserDefined* element = dynamic_cast<SynchronousMachineUserDefined*>(BaseClass_ptr1))
	{
		buffer >> element->proprietary;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ProprietaryParameterDynamics_SynchronousMachineUserDefined(BaseClass*, BaseClass*);
bool assign_SynchronousMachineUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SynchronousMachineUserDefined* element = dynamic_cast<SynchronousMachineUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_SynchronousMachineUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char SynchronousMachineUserDefined::debugName[] = "SynchronousMachineUserDefined";
const char* SynchronousMachineUserDefined::debugString() const
{
	return SynchronousMachineUserDefined::debugName;
}

void SynchronousMachineUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:SynchronousMachineUserDefined"), &SynchronousMachineUserDefined_factory));
}

void SynchronousMachineUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineUserDefined.proprietary"), &assign_SynchronousMachineUserDefined_proprietary));
}

void SynchronousMachineUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SynchronousMachineUserDefined.ProprietaryParameterDynamics"), &assign_SynchronousMachineUserDefined_ProprietaryParameterDynamics));
}

const BaseClassDefiner SynchronousMachineUserDefined::declare()
{
	return BaseClassDefiner(SynchronousMachineUserDefined::addConstructToMap, SynchronousMachineUserDefined::addPrimitiveAssignFnsToMap, SynchronousMachineUserDefined::addClassAssignFnsToMap, SynchronousMachineUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* SynchronousMachineUserDefined_factory()
	{
		return new SynchronousMachineUserDefined;
	}
}
