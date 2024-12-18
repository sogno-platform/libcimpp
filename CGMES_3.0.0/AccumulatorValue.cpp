/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AccumulatorValue.hpp"

#include <algorithm>
#include <sstream>

#include "Accumulator.hpp"
#include "AccumulatorReset.hpp"

using namespace CIMPP;

AccumulatorValue::AccumulatorValue() : Accumulator(nullptr), AccumulatorReset(nullptr) {};
AccumulatorValue::~AccumulatorValue() {};





bool assign_Accumulator_AccumulatorValues(BaseClass*, BaseClass*);
bool assign_AccumulatorValue_Accumulator(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AccumulatorValue* element = dynamic_cast<AccumulatorValue*>(BaseClass_ptr1);
	Accumulator* element2 = dynamic_cast<Accumulator*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Accumulator != element2)
		{
			element->Accumulator = element2;
			return assign_Accumulator_AccumulatorValues(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_AccumulatorReset_AccumulatorValue(BaseClass*, BaseClass*);
bool assign_AccumulatorValue_AccumulatorReset(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AccumulatorValue* element = dynamic_cast<AccumulatorValue*>(BaseClass_ptr1);
	AccumulatorReset* element2 = dynamic_cast<AccumulatorReset*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->AccumulatorReset != element2)
		{
			element->AccumulatorReset = element2;
			return assign_AccumulatorReset_AccumulatorValue(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

const char AccumulatorValue::debugName[] = "AccumulatorValue";
const char* AccumulatorValue::debugString() const
{
	return AccumulatorValue::debugName;
}

void AccumulatorValue::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:AccumulatorValue"), &AccumulatorValue_factory));
}

void AccumulatorValue::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void AccumulatorValue::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:AccumulatorValue.Accumulator"), &assign_AccumulatorValue_Accumulator));
	assign_map.insert(std::make_pair(std::string("cim:AccumulatorValue.AccumulatorReset"), &assign_AccumulatorValue_AccumulatorReset));
}

const BaseClassDefiner AccumulatorValue::declare()
{
	return BaseClassDefiner(AccumulatorValue::addConstructToMap, AccumulatorValue::addPrimitiveAssignFnsToMap, AccumulatorValue::addClassAssignFnsToMap, AccumulatorValue::debugName);
}

namespace CIMPP
{
	BaseClass* AccumulatorValue_factory()
	{
		return new AccumulatorValue;
	}
}
