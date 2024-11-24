/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CSCUserDefined.hpp"

#include <algorithm>
#include <sstream>

#include "ProprietaryParameterDynamics.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

CSCUserDefined::CSCUserDefined() {};
CSCUserDefined::~CSCUserDefined() {};



bool assign_CSCUserDefined_proprietary(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (CSCUserDefined* element = dynamic_cast<CSCUserDefined*>(BaseClass_ptr1))
	{
		buffer >> element->proprietary;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_ProprietaryParameterDynamics_CSCUserDefined(BaseClass*, BaseClass*);
bool assign_CSCUserDefined_ProprietaryParameterDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	CSCUserDefined* element = dynamic_cast<CSCUserDefined*>(BaseClass_ptr1);
	ProprietaryParameterDynamics* element2 = dynamic_cast<ProprietaryParameterDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->ProprietaryParameterDynamics.begin(), element->ProprietaryParameterDynamics.end(), element2) == element->ProprietaryParameterDynamics.end())
		{
			element->ProprietaryParameterDynamics.push_back(element2);
			return assign_ProprietaryParameterDynamics_CSCUserDefined(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char CSCUserDefined::debugName[] = "CSCUserDefined";
const char* CSCUserDefined::debugString() const
{
	return CSCUserDefined::debugName;
}

void CSCUserDefined::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:CSCUserDefined"), &CSCUserDefined_factory));
}

void CSCUserDefined::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:CSCUserDefined.proprietary"), &assign_CSCUserDefined_proprietary));
}

void CSCUserDefined::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:CSCUserDefined.ProprietaryParameterDynamics"), &assign_CSCUserDefined_ProprietaryParameterDynamics));
}

const BaseClassDefiner CSCUserDefined::declare()
{
	return BaseClassDefiner(CSCUserDefined::addConstructToMap, CSCUserDefined::addPrimitiveAssignFnsToMap, CSCUserDefined::addClassAssignFnsToMap, CSCUserDefined::debugName);
}

namespace CIMPP
{
	BaseClass* CSCUserDefined_factory()
	{
		return new CSCUserDefined;
	}
}
