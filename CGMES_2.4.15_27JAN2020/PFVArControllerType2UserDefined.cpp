/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PFVArControllerType2UserDefined.hpp"

#include <algorithm>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

PFVArControllerType2UserDefined::PFVArControllerType2UserDefined() {};
PFVArControllerType2UserDefined::~PFVArControllerType2UserDefined() {};



bool assign_PFVArControllerType2UserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PFVArControllerType2UserDefined* element = dynamic_cast<PFVArControllerType2UserDefined*>(BaseClass_ptr1))
	{
		buffer >> element->proprietary;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ProprietaryParameterDynamics_PFVArControllerType2UserDefined(BaseClass*, BaseClass*);
bool assign_PFVArControllerType2UserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PFVArControllerType2UserDefined* element = dynamic_cast<PFVArControllerType2UserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_PFVArControllerType2UserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char PFVArControllerType2UserDefined::debugName[] = "PFVArControllerType2UserDefined";
const char* PFVArControllerType2UserDefined::debugString() const
{
	return PFVArControllerType2UserDefined::debugName;
}

void PFVArControllerType2UserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PFVArControllerType2UserDefined"), &PFVArControllerType2UserDefined_factory));
}

void PFVArControllerType2UserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PFVArControllerType2UserDefined.proprietary"), &assign_PFVArControllerType2UserDefined_proprietary));
}

void PFVArControllerType2UserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PFVArControllerType2UserDefined.ProprietaryParameterDynamics"), &assign_PFVArControllerType2UserDefined_ProprietaryParameterDynamics));
}

const BaseClassDefiner PFVArControllerType2UserDefined::declare()
{
	return BaseClassDefiner(PFVArControllerType2UserDefined::addConstructToMap, PFVArControllerType2UserDefined::addPrimitiveAssignFnsToMap, PFVArControllerType2UserDefined::addClassAssignFnsToMap, PFVArControllerType2UserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* PFVArControllerType2UserDefined_factory()
	{
		return new PFVArControllerType2UserDefined;
	}
}
