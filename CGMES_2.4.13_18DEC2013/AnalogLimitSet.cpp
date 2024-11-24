/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AnalogLimitSet.hpp"

#include <algorithm>
#include <sstream>

#include "AnalogLimit.hpp"
#include "Analog.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

AnalogLimitSet::AnalogLimitSet() {};
AnalogLimitSet::~AnalogLimitSet() {};




bool assign_AnalogLimitSet_isPercentageLimits(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AnalogLimitSet* element = dynamic_cast<AnalogLimitSet*>(BaseClass_ptr1))
	{
		buffer >> element->isPercentageLimits;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_AnalogLimit_LimitSet(BaseClass*, BaseClass*);
bool assign_AnalogLimitSet_Limits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AnalogLimitSet* element = dynamic_cast<AnalogLimitSet*>(BaseClass_ptr1);
	AnalogLimit* element2 = dynamic_cast<AnalogLimit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Limits.begin(), element->Limits.end(), element2) == element->Limits.end())
		{
			element->Limits.push_back(element2);
			return assign_AnalogLimit_LimitSet(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Analog_LimitSets(BaseClass*, BaseClass*);
bool assign_AnalogLimitSet_Measurements(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AnalogLimitSet* element = dynamic_cast<AnalogLimitSet*>(BaseClass_ptr1);
	Analog* element2 = dynamic_cast<Analog*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Measurements.begin(), element->Measurements.end(), element2) == element->Measurements.end())
		{
			element->Measurements.push_back(element2);
			return assign_Analog_LimitSets(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char AnalogLimitSet::debugName[] = "AnalogLimitSet";
const char* AnalogLimitSet::debugString() const
{
	return AnalogLimitSet::debugName;
}

void AnalogLimitSet::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:AnalogLimitSet"), &AnalogLimitSet_factory));
}

void AnalogLimitSet::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:AnalogLimitSet.isPercentageLimits"), &assign_AnalogLimitSet_isPercentageLimits));
}

void AnalogLimitSet::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:AnalogLimitSet.Limits"), &assign_AnalogLimitSet_Limits));
	assign_map.insert(std::make_pair(std::string("cim:AnalogLimitSet.Measurements"), &assign_AnalogLimitSet_Measurements));
}

const BaseClassDefiner AnalogLimitSet::declare()
{
	return BaseClassDefiner(AnalogLimitSet::addConstructToMap, AnalogLimitSet::addPrimitiveAssignFnsToMap, AnalogLimitSet::addClassAssignFnsToMap, AnalogLimitSet::debugName);
}

namespace CIMPP
{
	BaseClass* AnalogLimitSet_factory()
	{
		return new AnalogLimitSet;
	}
}
