/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindPlantUserDefined.hpp"

#include <algorithm>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

WindPlantUserDefined::WindPlantUserDefined() {};
WindPlantUserDefined::~WindPlantUserDefined() {};



bool assign_WindPlantUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindPlantUserDefined* element = dynamic_cast<WindPlantUserDefined*>(BaseClass_ptr1))
	{
		buffer >> element->proprietary;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ProprietaryParameterDynamics_WindPlantUserDefined(BaseClass*, BaseClass*);
bool assign_WindPlantUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindPlantUserDefined* element = dynamic_cast<WindPlantUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_WindPlantUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char WindPlantUserDefined::debugName[] = "WindPlantUserDefined";
const char* WindPlantUserDefined::debugString() const
{
	return WindPlantUserDefined::debugName;
}

void WindPlantUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindPlantUserDefined"), &WindPlantUserDefined_factory));
}

void WindPlantUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindPlantUserDefined.proprietary"), &assign_WindPlantUserDefined_proprietary));
}

void WindPlantUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindPlantUserDefined.ProprietaryParameterDynamics"), &assign_WindPlantUserDefined_ProprietaryParameterDynamics));
}

const BaseClassDefiner WindPlantUserDefined::declare()
{
	return BaseClassDefiner(WindPlantUserDefined::addConstructToMap, WindPlantUserDefined::addPrimitiveAssignFnsToMap, WindPlantUserDefined::addClassAssignFnsToMap, WindPlantUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* WindPlantUserDefined_factory()
	{
		return new WindPlantUserDefined;
	}
}
