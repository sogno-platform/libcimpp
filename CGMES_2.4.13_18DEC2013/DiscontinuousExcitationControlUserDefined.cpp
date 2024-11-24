/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "DiscontinuousExcitationControlUserDefined.hpp"

#include <algorithm>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

DiscontinuousExcitationControlUserDefined::DiscontinuousExcitationControlUserDefined() {};
DiscontinuousExcitationControlUserDefined::~DiscontinuousExcitationControlUserDefined() {};



bool assign_DiscontinuousExcitationControlUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (DiscontinuousExcitationControlUserDefined* element = dynamic_cast<DiscontinuousExcitationControlUserDefined*>(BaseClass_ptr1))
	{
		buffer >> element->proprietary;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ProprietaryParameterDynamics_DiscontinuousExcitationControlUserDefined(BaseClass*, BaseClass*);
bool assign_DiscontinuousExcitationControlUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	DiscontinuousExcitationControlUserDefined* element = dynamic_cast<DiscontinuousExcitationControlUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_DiscontinuousExcitationControlUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char DiscontinuousExcitationControlUserDefined::debugName[] = "DiscontinuousExcitationControlUserDefined";
const char* DiscontinuousExcitationControlUserDefined::debugString() const
{
	return DiscontinuousExcitationControlUserDefined::debugName;
}

void DiscontinuousExcitationControlUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:DiscontinuousExcitationControlUserDefined"), &DiscontinuousExcitationControlUserDefined_factory));
}

void DiscontinuousExcitationControlUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:DiscontinuousExcitationControlUserDefined.proprietary"), &assign_DiscontinuousExcitationControlUserDefined_proprietary));
}

void DiscontinuousExcitationControlUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:DiscontinuousExcitationControlUserDefined.ProprietaryParameterDynamics"), &assign_DiscontinuousExcitationControlUserDefined_ProprietaryParameterDynamics));
}

const BaseClassDefiner DiscontinuousExcitationControlUserDefined::declare()
{
	return BaseClassDefiner(DiscontinuousExcitationControlUserDefined::addConstructToMap, DiscontinuousExcitationControlUserDefined::addPrimitiveAssignFnsToMap, DiscontinuousExcitationControlUserDefined::addClassAssignFnsToMap, DiscontinuousExcitationControlUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* DiscontinuousExcitationControlUserDefined_factory()
	{
		return new DiscontinuousExcitationControlUserDefined;
	}
}
