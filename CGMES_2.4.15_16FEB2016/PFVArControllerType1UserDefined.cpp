/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PFVArControllerType1UserDefined.hpp"

#include <algorithm>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

PFVArControllerType1UserDefined::PFVArControllerType1UserDefined() {};
PFVArControllerType1UserDefined::~PFVArControllerType1UserDefined() {};



bool assign_PFVArControllerType1UserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArControllerType1UserDefined* element = dynamic_cast<PFVArControllerType1UserDefined*>(BaseClass_ptr1))
	{
		buffer >> element->proprietary;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ProprietaryParameterDynamics_PFVArControllerType1UserDefined(BaseClass*, BaseClass*);
bool assign_PFVArControllerType1UserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PFVArControllerType1UserDefined* element = dynamic_cast<PFVArControllerType1UserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_PFVArControllerType1UserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char PFVArControllerType1UserDefined::debugName[] = "PFVArControllerType1UserDefined";
const char* PFVArControllerType1UserDefined::debugString() const
{
	return PFVArControllerType1UserDefined::debugName;
}

void PFVArControllerType1UserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PFVArControllerType1UserDefined"), &PFVArControllerType1UserDefined_factory));
}

void PFVArControllerType1UserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PFVArControllerType1UserDefined.proprietary"), &assign_PFVArControllerType1UserDefined_proprietary));
}

void PFVArControllerType1UserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PFVArControllerType1UserDefined.ProprietaryParameterDynamics"), &assign_PFVArControllerType1UserDefined_ProprietaryParameterDynamics));
}

const BaseClassDefiner PFVArControllerType1UserDefined::declare()
{
	return BaseClassDefiner(PFVArControllerType1UserDefined::addConstructToMap, PFVArControllerType1UserDefined::addPrimitiveAssignFnsToMap, PFVArControllerType1UserDefined::addClassAssignFnsToMap, PFVArControllerType1UserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* PFVArControllerType1UserDefined_factory()
	{
		return new PFVArControllerType1UserDefined;
	}
}
