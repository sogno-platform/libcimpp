/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "LimitSet.hpp"

#include <algorithm>
#include <sstream>

#include "Boolean.hpp"

using namespace CIMPP;

LimitSet::LimitSet() {};
LimitSet::~LimitSet() {};


bool assign_LimitSet_isPercentageLimits(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (LimitSet* element = dynamic_cast<LimitSet*>(BaseClass_ptr1))
	{
		buffer >> element->isPercentageLimits;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



const char LimitSet::debugName[] = "LimitSet";
const char* LimitSet::debugString() const
{
	return LimitSet::debugName;
}

void LimitSet::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:LimitSet"), &LimitSet_factory));
}

void LimitSet::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:LimitSet.isPercentageLimits"), &assign_LimitSet_isPercentageLimits));
}

void LimitSet::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

const BaseClassDefiner LimitSet::declare()
{
	return BaseClassDefiner(LimitSet::addConstructToMap, LimitSet::addPrimitiveAssignFnsToMap, LimitSet::addClassAssignFnsToMap, LimitSet::debugName);
}

namespace CIMPP
{
	BaseClass* LimitSet_factory()
	{
		return new LimitSet;
	}
}
