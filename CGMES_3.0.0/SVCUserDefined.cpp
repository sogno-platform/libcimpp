/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "SVCUserDefined.hpp"

#include <algorithm>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

SVCUserDefined::SVCUserDefined() {};
SVCUserDefined::~SVCUserDefined() {};



bool assign_SVCUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (SVCUserDefined* element = dynamic_cast<SVCUserDefined*>(BaseClass_ptr1))
	{
		buffer >> element->proprietary;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ProprietaryParameterDynamics_SVCUserDefined(BaseClass*, BaseClass*);
bool assign_SVCUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	SVCUserDefined* element = dynamic_cast<SVCUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_SVCUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char SVCUserDefined::debugName[] = "SVCUserDefined";
const char* SVCUserDefined::debugString() const
{
	return SVCUserDefined::debugName;
}

void SVCUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:SVCUserDefined"), &SVCUserDefined_factory));
}

void SVCUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SVCUserDefined.proprietary"), &assign_SVCUserDefined_proprietary));
}

void SVCUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:SVCUserDefined.ProprietaryParameterDynamics"), &assign_SVCUserDefined_ProprietaryParameterDynamics));
}

const BaseClassDefiner SVCUserDefined::declare()
{
	return BaseClassDefiner(SVCUserDefined::addConstructToMap, SVCUserDefined::addPrimitiveAssignFnsToMap, SVCUserDefined::addClassAssignFnsToMap, SVCUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* SVCUserDefined_factory()
	{
		return new SVCUserDefined;
	}
}
