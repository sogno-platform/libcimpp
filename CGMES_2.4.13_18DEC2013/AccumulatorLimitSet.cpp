/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AccumulatorLimitSet.hpp"

#include <algorithm>
#include <sstream>

#include "AccumulatorLimit.hpp"
#include "Accumulator.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

AccumulatorLimitSet::AccumulatorLimitSet() {};
AccumulatorLimitSet::~AccumulatorLimitSet() {};




bool assign_AccumulatorLimitSet_isPercentageLimits(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (AccumulatorLimitSet* element = dynamic_cast<AccumulatorLimitSet*>(BaseClass_ptr1))
	{
		buffer >> element->isPercentageLimits;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_AccumulatorLimit_LimitSet(BaseClass*, BaseClass*);
bool assign_AccumulatorLimitSet_Limits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AccumulatorLimitSet* element = dynamic_cast<AccumulatorLimitSet*>(BaseClass_ptr1);
	AccumulatorLimit* element2 = dynamic_cast<AccumulatorLimit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Limits.begin(), element->Limits.end(), element2) == element->Limits.end())
		{
			element->Limits.push_back(element2);
			return assign_AccumulatorLimit_LimitSet(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Accumulator_LimitSets(BaseClass*, BaseClass*);
bool assign_AccumulatorLimitSet_Measurements(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AccumulatorLimitSet* element = dynamic_cast<AccumulatorLimitSet*>(BaseClass_ptr1);
	Accumulator* element2 = dynamic_cast<Accumulator*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->Measurements.begin(), element->Measurements.end(), element2) == element->Measurements.end())
		{
			element->Measurements.push_back(element2);
			return assign_Accumulator_LimitSets(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


const char AccumulatorLimitSet::debugName[] = "AccumulatorLimitSet";
const char* AccumulatorLimitSet::debugString() const
{
	return AccumulatorLimitSet::debugName;
}

void AccumulatorLimitSet::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:AccumulatorLimitSet"), &AccumulatorLimitSet_factory));
}

void AccumulatorLimitSet::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:AccumulatorLimitSet.isPercentageLimits"), &assign_AccumulatorLimitSet_isPercentageLimits));
}

void AccumulatorLimitSet::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:AccumulatorLimitSet.Limits"), &assign_AccumulatorLimitSet_Limits));
	assign_map.insert(std::make_pair(std::string("cim:AccumulatorLimitSet.Measurements"), &assign_AccumulatorLimitSet_Measurements));
}

const BaseClassDefiner AccumulatorLimitSet::declare()
{
	return BaseClassDefiner(AccumulatorLimitSet::addConstructToMap, AccumulatorLimitSet::addPrimitiveAssignFnsToMap, AccumulatorLimitSet::addClassAssignFnsToMap, AccumulatorLimitSet::debugName);
}

namespace CIMPP
{
	BaseClass* AccumulatorLimitSet_factory()
	{
		return new AccumulatorLimitSet;
	}
}
