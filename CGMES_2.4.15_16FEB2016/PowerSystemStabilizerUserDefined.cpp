/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PowerSystemStabilizerUserDefined.hpp"

#include <algorithm>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

PowerSystemStabilizerUserDefined::PowerSystemStabilizerUserDefined() {};
PowerSystemStabilizerUserDefined::~PowerSystemStabilizerUserDefined() {};



bool assign_PowerSystemStabilizerUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (PowerSystemStabilizerUserDefined* element = dynamic_cast<PowerSystemStabilizerUserDefined*>(BaseClass_ptr1))
	{
		buffer >> element->proprietary;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ProprietaryParameterDynamics_PowerSystemStabilizerUserDefined(BaseClass*, BaseClass*);
bool assign_PowerSystemStabilizerUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PowerSystemStabilizerUserDefined* element = dynamic_cast<PowerSystemStabilizerUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_PowerSystemStabilizerUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char PowerSystemStabilizerUserDefined::debugName[] = "PowerSystemStabilizerUserDefined";
const char* PowerSystemStabilizerUserDefined::debugString() const
{
	return PowerSystemStabilizerUserDefined::debugName;
}

void PowerSystemStabilizerUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:PowerSystemStabilizerUserDefined"), &PowerSystemStabilizerUserDefined_factory));
}

void PowerSystemStabilizerUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PowerSystemStabilizerUserDefined.proprietary"), &assign_PowerSystemStabilizerUserDefined_proprietary));
}

void PowerSystemStabilizerUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:PowerSystemStabilizerUserDefined.ProprietaryParameterDynamics"), &assign_PowerSystemStabilizerUserDefined_ProprietaryParameterDynamics));
}

const BaseClassDefiner PowerSystemStabilizerUserDefined::declare()
{
	return BaseClassDefiner(PowerSystemStabilizerUserDefined::addConstructToMap, PowerSystemStabilizerUserDefined::addPrimitiveAssignFnsToMap, PowerSystemStabilizerUserDefined::addClassAssignFnsToMap, PowerSystemStabilizerUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* PowerSystemStabilizerUserDefined_factory()
	{
		return new PowerSystemStabilizerUserDefined;
	}
}
