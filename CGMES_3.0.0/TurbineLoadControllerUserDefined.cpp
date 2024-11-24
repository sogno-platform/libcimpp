/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "TurbineLoadControllerUserDefined.hpp"

#include <algorithm>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

TurbineLoadControllerUserDefined::TurbineLoadControllerUserDefined() {};
TurbineLoadControllerUserDefined::~TurbineLoadControllerUserDefined() {};



bool assign_TurbineLoadControllerUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (TurbineLoadControllerUserDefined* element = dynamic_cast<TurbineLoadControllerUserDefined*>(BaseClass_ptr1))
	{
		buffer >> element->proprietary;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ProprietaryParameterDynamics_TurbineLoadControllerUserDefined(BaseClass*, BaseClass*);
bool assign_TurbineLoadControllerUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	TurbineLoadControllerUserDefined* element = dynamic_cast<TurbineLoadControllerUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_TurbineLoadControllerUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char TurbineLoadControllerUserDefined::debugName[] = "TurbineLoadControllerUserDefined";
const char* TurbineLoadControllerUserDefined::debugString() const
{
	return TurbineLoadControllerUserDefined::debugName;
}

void TurbineLoadControllerUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:TurbineLoadControllerUserDefined"), &TurbineLoadControllerUserDefined_factory));
}

void TurbineLoadControllerUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:TurbineLoadControllerUserDefined.proprietary"), &assign_TurbineLoadControllerUserDefined_proprietary));
}

void TurbineLoadControllerUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:TurbineLoadControllerUserDefined.ProprietaryParameterDynamics"), &assign_TurbineLoadControllerUserDefined_ProprietaryParameterDynamics));
}

const BaseClassDefiner TurbineLoadControllerUserDefined::declare()
{
	return BaseClassDefiner(TurbineLoadControllerUserDefined::addConstructToMap, TurbineLoadControllerUserDefined::addPrimitiveAssignFnsToMap, TurbineLoadControllerUserDefined::addClassAssignFnsToMap, TurbineLoadControllerUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* TurbineLoadControllerUserDefined_factory()
	{
		return new TurbineLoadControllerUserDefined;
	}
}
