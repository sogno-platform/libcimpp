/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "UnderexcitationLimiterUserDefined.hpp"

#include <algorithm>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

UnderexcitationLimiterUserDefined::UnderexcitationLimiterUserDefined() {};
UnderexcitationLimiterUserDefined::~UnderexcitationLimiterUserDefined() {};



bool assign_UnderexcitationLimiterUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (UnderexcitationLimiterUserDefined* element = dynamic_cast<UnderexcitationLimiterUserDefined*>(BaseClass_ptr1))
	{
		buffer >> element->proprietary;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ProprietaryParameterDynamics_UnderexcitationLimiterUserDefined(BaseClass*, BaseClass*);
bool assign_UnderexcitationLimiterUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	UnderexcitationLimiterUserDefined* element = dynamic_cast<UnderexcitationLimiterUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_UnderexcitationLimiterUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char UnderexcitationLimiterUserDefined::debugName[] = "UnderexcitationLimiterUserDefined";
const char* UnderexcitationLimiterUserDefined::debugString() const
{
	return UnderexcitationLimiterUserDefined::debugName;
}

void UnderexcitationLimiterUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:UnderexcitationLimiterUserDefined"), &UnderexcitationLimiterUserDefined_factory));
}

void UnderexcitationLimiterUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:UnderexcitationLimiterUserDefined.proprietary"), &assign_UnderexcitationLimiterUserDefined_proprietary));
}

void UnderexcitationLimiterUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:UnderexcitationLimiterUserDefined.ProprietaryParameterDynamics"), &assign_UnderexcitationLimiterUserDefined_ProprietaryParameterDynamics));
}

const BaseClassDefiner UnderexcitationLimiterUserDefined::declare()
{
	return BaseClassDefiner(UnderexcitationLimiterUserDefined::addConstructToMap, UnderexcitationLimiterUserDefined::addPrimitiveAssignFnsToMap, UnderexcitationLimiterUserDefined::addClassAssignFnsToMap, UnderexcitationLimiterUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* UnderexcitationLimiterUserDefined_factory()
	{
		return new UnderexcitationLimiterUserDefined;
	}
}
