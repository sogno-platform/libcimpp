/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Accumulator.hpp"

#include <algorithm>
#include <sstream>

#include "AccumulatorValue.hpp"
#include "AccumulatorLimitSet.hpp"

using namespace CIMPP;

Accumulator::Accumulator() {};
Accumulator::~Accumulator() {};





bool assign_AccumulatorValue_Accumulator(BaseClass*, BaseClass*);
bool assign_Accumulator_AccumulatorValues(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Accumulator* element = dynamic_cast<Accumulator*>(BaseClass_ptr1);
	AccumulatorValue* element2 = dynamic_cast<AccumulatorValue*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->AccumulatorValues.begin(), element->AccumulatorValues.end(), element2) == element->AccumulatorValues.end())
		{
			element->AccumulatorValues.push_back(element2);
			return assign_AccumulatorValue_Accumulator(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_AccumulatorLimitSet_Measurements(BaseClass*, BaseClass*);
bool assign_Accumulator_LimitSets(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Accumulator* element = dynamic_cast<Accumulator*>(BaseClass_ptr1);
	AccumulatorLimitSet* element2 = dynamic_cast<AccumulatorLimitSet*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->LimitSets.begin(), element->LimitSets.end(), element2) == element->LimitSets.end())
		{
			element->LimitSets.push_back(element2);
			return assign_AccumulatorLimitSet_Measurements(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char Accumulator::debugName[] = "Accumulator";
const char* Accumulator::debugString() const
{
	return Accumulator::debugName;
}

void Accumulator::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:Accumulator"), &Accumulator_factory));
}

void Accumulator::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Accumulator::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:Accumulator.AccumulatorValues"), &assign_Accumulator_AccumulatorValues));
	assign_map.insert(std::make_pair(std::string("cim:Accumulator.LimitSets"), &assign_Accumulator_LimitSets));
}

const BaseClassDefiner Accumulator::declare()
{
	return BaseClassDefiner(Accumulator::addConstructToMap, Accumulator::addPrimitiveAssignFnsToMap, Accumulator::addClassAssignFnsToMap, Accumulator::debugName);
}

namespace CIMPP
{
	BaseClass* Accumulator_factory()
	{
		return new Accumulator;
	}
}
