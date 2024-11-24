/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VoltageAdjusterUserDefined.hpp"

#include <algorithm>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

VoltageAdjusterUserDefined::VoltageAdjusterUserDefined() {};
VoltageAdjusterUserDefined::~VoltageAdjusterUserDefined() {};



bool assign_VoltageAdjusterUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VoltageAdjusterUserDefined* element = dynamic_cast<VoltageAdjusterUserDefined*>(BaseClass_ptr1))
	{
		buffer >> element->proprietary;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ProprietaryParameterDynamics_VoltageAdjusterUserDefined(BaseClass*, BaseClass*);
bool assign_VoltageAdjusterUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VoltageAdjusterUserDefined* element = dynamic_cast<VoltageAdjusterUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_VoltageAdjusterUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char VoltageAdjusterUserDefined::debugName[] = "VoltageAdjusterUserDefined";
const char* VoltageAdjusterUserDefined::debugString() const
{
	return VoltageAdjusterUserDefined::debugName;
}

void VoltageAdjusterUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:VoltageAdjusterUserDefined"), &VoltageAdjusterUserDefined_factory));
}

void VoltageAdjusterUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:VoltageAdjusterUserDefined.proprietary"), &assign_VoltageAdjusterUserDefined_proprietary));
}

void VoltageAdjusterUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:VoltageAdjusterUserDefined.ProprietaryParameterDynamics"), &assign_VoltageAdjusterUserDefined_ProprietaryParameterDynamics));
}

const BaseClassDefiner VoltageAdjusterUserDefined::declare()
{
	return BaseClassDefiner(VoltageAdjusterUserDefined::addConstructToMap, VoltageAdjusterUserDefined::addPrimitiveAssignFnsToMap, VoltageAdjusterUserDefined::addClassAssignFnsToMap, VoltageAdjusterUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* VoltageAdjusterUserDefined_factory()
	{
		return new VoltageAdjusterUserDefined;
	}
}
