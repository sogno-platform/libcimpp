/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CSCDynamics.hpp"

#include <algorithm>
#include <sstream>

#include "CsConverter.hpp"

using namespace CIMPP;

CSCDynamics::CSCDynamics() : CSConverter(nullptr) {};
CSCDynamics::~CSCDynamics() {};




bool assign_CsConverter_CSCDynamics(BaseClass*, BaseClass*);
bool assign_CSCDynamics_CSConverter(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	CSCDynamics* element = dynamic_cast<CSCDynamics*>(BaseClass_ptr1);
	CsConverter* element2 = dynamic_cast<CsConverter*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->CSConverter != element2)
		{
			element->CSConverter = element2;
			return assign_CsConverter_CSCDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char CSCDynamics::debugName[] = "CSCDynamics";
const char* CSCDynamics::debugString() const
{
	return CSCDynamics::debugName;
}

void CSCDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:CSCDynamics"), &CSCDynamics_factory));
}

void CSCDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void CSCDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:CSCDynamics.CSConverter"), &assign_CSCDynamics_CSConverter));
}

const BaseClassDefiner CSCDynamics::declare()
{
	return BaseClassDefiner(CSCDynamics::addConstructToMap, CSCDynamics::addPrimitiveAssignFnsToMap, CSCDynamics::addClassAssignFnsToMap, CSCDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* CSCDynamics_factory()
	{
		return new CSCDynamics;
	}
}
