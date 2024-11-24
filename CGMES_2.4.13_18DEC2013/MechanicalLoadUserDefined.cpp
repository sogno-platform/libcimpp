/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "MechanicalLoadUserDefined.hpp"

#include <algorithm>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

MechanicalLoadUserDefined::MechanicalLoadUserDefined() {};
MechanicalLoadUserDefined::~MechanicalLoadUserDefined() {};



bool assign_MechanicalLoadUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (MechanicalLoadUserDefined* element = dynamic_cast<MechanicalLoadUserDefined*>(BaseClass_ptr1))
	{
		buffer >> element->proprietary;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ProprietaryParameterDynamics_MechanicalLoadUserDefined(BaseClass*, BaseClass*);
bool assign_MechanicalLoadUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	MechanicalLoadUserDefined* element = dynamic_cast<MechanicalLoadUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_MechanicalLoadUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char MechanicalLoadUserDefined::debugName[] = "MechanicalLoadUserDefined";
const char* MechanicalLoadUserDefined::debugString() const
{
	return MechanicalLoadUserDefined::debugName;
}

void MechanicalLoadUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:MechanicalLoadUserDefined"), &MechanicalLoadUserDefined_factory));
}

void MechanicalLoadUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:MechanicalLoadUserDefined.proprietary"), &assign_MechanicalLoadUserDefined_proprietary));
}

void MechanicalLoadUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:MechanicalLoadUserDefined.ProprietaryParameterDynamics"), &assign_MechanicalLoadUserDefined_ProprietaryParameterDynamics));
}

const BaseClassDefiner MechanicalLoadUserDefined::declare()
{
	return BaseClassDefiner(MechanicalLoadUserDefined::addConstructToMap, MechanicalLoadUserDefined::addPrimitiveAssignFnsToMap, MechanicalLoadUserDefined::addClassAssignFnsToMap, MechanicalLoadUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* MechanicalLoadUserDefined_factory()
	{
		return new MechanicalLoadUserDefined;
	}
}
