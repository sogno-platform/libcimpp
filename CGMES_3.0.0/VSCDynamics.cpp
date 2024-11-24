/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VSCDynamics.hpp"

#include <algorithm>
#include <sstream>

#include "VsConverter.hpp"

using namespace CIMPP;

VSCDynamics::VSCDynamics() : VsConverter(nullptr) {};
VSCDynamics::~VSCDynamics() {};




bool assign_VsConverter_VSCDynamics(BaseClass*, BaseClass*);
bool assign_VSCDynamics_VsConverter(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VSCDynamics* element = dynamic_cast<VSCDynamics*>(BaseClass_ptr1);
	VsConverter* element2 = dynamic_cast<VsConverter*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->VsConverter != element2)
		{
			element->VsConverter = element2;
			return assign_VsConverter_VSCDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char VSCDynamics::debugName[] = "VSCDynamics";
const char* VSCDynamics::debugString() const
{
	return VSCDynamics::debugName;
}

void VSCDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:VSCDynamics"), &VSCDynamics_factory));
}

void VSCDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void VSCDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:VSCDynamics.VsConverter"), &assign_VSCDynamics_VsConverter));
}

const BaseClassDefiner VSCDynamics::declare()
{
	return BaseClassDefiner(VSCDynamics::addConstructToMap, VSCDynamics::addPrimitiveAssignFnsToMap, VSCDynamics::addClassAssignFnsToMap, VSCDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* VSCDynamics_factory()
	{
		return new VSCDynamics;
	}
}
