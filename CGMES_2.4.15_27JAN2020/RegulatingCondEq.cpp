/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RegulatingCondEq.hpp"

#include <algorithm>
#include <sstream>

#include "RegulatingControl.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

RegulatingCondEq::RegulatingCondEq() : RegulatingControl(nullptr) {};
RegulatingCondEq::~RegulatingCondEq() {};



bool assign_RegulatingCondEq_controlEnabled(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (RegulatingCondEq* element = dynamic_cast<RegulatingCondEq*>(BaseClass_ptr1))
	{
		buffer >> element->controlEnabled;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_RegulatingControl_RegulatingCondEq(BaseClass*, BaseClass*);
bool assign_RegulatingCondEq_RegulatingControl(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	RegulatingCondEq* element = dynamic_cast<RegulatingCondEq*>(BaseClass_ptr1);
	RegulatingControl* element2 = dynamic_cast<RegulatingControl*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->RegulatingControl != element2)
		{
			element->RegulatingControl = element2;
			return assign_RegulatingControl_RegulatingCondEq(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char RegulatingCondEq::debugName[] = "RegulatingCondEq";
const char* RegulatingCondEq::debugString() const
{
	return RegulatingCondEq::debugName;
}

void RegulatingCondEq::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:RegulatingCondEq"), &RegulatingCondEq_factory));
}

void RegulatingCondEq::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:RegulatingCondEq.controlEnabled"), &assign_RegulatingCondEq_controlEnabled));
}

void RegulatingCondEq::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:RegulatingCondEq.RegulatingControl"), &assign_RegulatingCondEq_RegulatingControl));
}

const BaseClassDefiner RegulatingCondEq::declare()
{
	return BaseClassDefiner(RegulatingCondEq::addConstructToMap, RegulatingCondEq::addPrimitiveAssignFnsToMap, RegulatingCondEq::addClassAssignFnsToMap, RegulatingCondEq::debugName);
}

namespace CIMPP
{
	BaseClass* RegulatingCondEq_factory()
	{
		return new RegulatingCondEq;
	}
}
