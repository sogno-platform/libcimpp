/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindType1or2UserDefined.hpp"

#include <algorithm>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

WindType1or2UserDefined::WindType1or2UserDefined() {};
WindType1or2UserDefined::~WindType1or2UserDefined() {};



bool assign_WindType1or2UserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindType1or2UserDefined* element = dynamic_cast<WindType1or2UserDefined*>(BaseClass_ptr1))
	{
		buffer >> element->proprietary;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ProprietaryParameterDynamics_WindType1or2UserDefined(BaseClass*, BaseClass*);
bool assign_WindType1or2UserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindType1or2UserDefined* element = dynamic_cast<WindType1or2UserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_WindType1or2UserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char WindType1or2UserDefined::debugName[] = "WindType1or2UserDefined";
const char* WindType1or2UserDefined::debugString() const
{
	return WindType1or2UserDefined::debugName;
}

void WindType1or2UserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindType1or2UserDefined"), &WindType1or2UserDefined_factory));
}

void WindType1or2UserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindType1or2UserDefined.proprietary"), &assign_WindType1or2UserDefined_proprietary));
}

void WindType1or2UserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindType1or2UserDefined.ProprietaryParameterDynamics"), &assign_WindType1or2UserDefined_ProprietaryParameterDynamics));
}

const BaseClassDefiner WindType1or2UserDefined::declare()
{
	return BaseClassDefiner(WindType1or2UserDefined::addConstructToMap, WindType1or2UserDefined::addPrimitiveAssignFnsToMap, WindType1or2UserDefined::addClassAssignFnsToMap, WindType1or2UserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* WindType1or2UserDefined_factory()
	{
		return new WindType1or2UserDefined;
	}
}
