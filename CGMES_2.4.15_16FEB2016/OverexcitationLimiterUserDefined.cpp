/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "OverexcitationLimiterUserDefined.hpp"

#include <algorithm>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

OverexcitationLimiterUserDefined::OverexcitationLimiterUserDefined() {};
OverexcitationLimiterUserDefined::~OverexcitationLimiterUserDefined() {};



bool assign_OverexcitationLimiterUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (OverexcitationLimiterUserDefined* element = dynamic_cast<OverexcitationLimiterUserDefined*>(BaseClass_ptr1))
	{
		buffer >> element->proprietary;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ProprietaryParameterDynamics_OverexcitationLimiterUserDefined(BaseClass*, BaseClass*);
bool assign_OverexcitationLimiterUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	OverexcitationLimiterUserDefined* element = dynamic_cast<OverexcitationLimiterUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_OverexcitationLimiterUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char OverexcitationLimiterUserDefined::debugName[] = "OverexcitationLimiterUserDefined";
const char* OverexcitationLimiterUserDefined::debugString() const
{
	return OverexcitationLimiterUserDefined::debugName;
}

void OverexcitationLimiterUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:OverexcitationLimiterUserDefined"), &OverexcitationLimiterUserDefined_factory));
}

void OverexcitationLimiterUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:OverexcitationLimiterUserDefined.proprietary"), &assign_OverexcitationLimiterUserDefined_proprietary));
}

void OverexcitationLimiterUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:OverexcitationLimiterUserDefined.ProprietaryParameterDynamics"), &assign_OverexcitationLimiterUserDefined_ProprietaryParameterDynamics));
}

const BaseClassDefiner OverexcitationLimiterUserDefined::declare()
{
	return BaseClassDefiner(OverexcitationLimiterUserDefined::addConstructToMap, OverexcitationLimiterUserDefined::addPrimitiveAssignFnsToMap, OverexcitationLimiterUserDefined::addClassAssignFnsToMap, OverexcitationLimiterUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* OverexcitationLimiterUserDefined_factory()
	{
		return new OverexcitationLimiterUserDefined;
	}
}
