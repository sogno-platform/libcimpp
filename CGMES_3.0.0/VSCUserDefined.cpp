/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VSCUserDefined.hpp"

#include <algorithm>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

VSCUserDefined::VSCUserDefined() {};
VSCUserDefined::~VSCUserDefined() {};



bool assign_VSCUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VSCUserDefined* element = dynamic_cast<VSCUserDefined*>(BaseClass_ptr1))
	{
		buffer >> element->proprietary;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ProprietaryParameterDynamics_VSCUserDefined(BaseClass*, BaseClass*);
bool assign_VSCUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VSCUserDefined* element = dynamic_cast<VSCUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_VSCUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char VSCUserDefined::debugName[] = "VSCUserDefined";
const char* VSCUserDefined::debugString() const
{
	return VSCUserDefined::debugName;
}

void VSCUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:VSCUserDefined"), &VSCUserDefined_factory));
}

void VSCUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:VSCUserDefined.proprietary"), &assign_VSCUserDefined_proprietary));
}

void VSCUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:VSCUserDefined.ProprietaryParameterDynamics"), &assign_VSCUserDefined_ProprietaryParameterDynamics));
}

const BaseClassDefiner VSCUserDefined::declare()
{
	return BaseClassDefiner(VSCUserDefined::addConstructToMap, VSCUserDefined::addPrimitiveAssignFnsToMap, VSCUserDefined::addClassAssignFnsToMap, VSCUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* VSCUserDefined_factory()
	{
		return new VSCUserDefined;
	}
}
