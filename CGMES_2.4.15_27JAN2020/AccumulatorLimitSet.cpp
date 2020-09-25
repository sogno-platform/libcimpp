#include <sstream>
#include "LimitSet.hpp"
#include "AccumulatorLimitSet.hpp"

#include "Accumulator.hpp"
#include "AccumulatorLimit.hpp"

using namespace CIMPP;

AccumulatorLimitSet::AccumulatorLimitSet() {};

AccumulatorLimitSet::~AccumulatorLimitSet() {};


bool assign_AccumulatorLimitSet_Measurements(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(AccumulatorLimitSet* element = dynamic_cast<AccumulatorLimitSet*>(BaseClass_ptr1)) {
		if(dynamic_cast<Accumulator*>(BaseClass_ptr2) != nullptr) {
                        element->Measurements.push_back(dynamic_cast<Accumulator*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_AccumulatorLimitSet_Limits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(AccumulatorLimitSet* element = dynamic_cast<AccumulatorLimitSet*>(BaseClass_ptr1)) {
		if(dynamic_cast<AccumulatorLimit*>(BaseClass_ptr2) != nullptr) {
                        element->Limits.push_back(dynamic_cast<AccumulatorLimit*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}




namespace CIMPP {
	BaseClass* AccumulatorLimitSet_factory() {
		return new AccumulatorLimitSet;
	}
}

void AccumulatorLimitSet::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:AccumulatorLimitSet"), &AccumulatorLimitSet_factory));
}

void AccumulatorLimitSet::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void AccumulatorLimitSet::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:AccumulatorLimitSet.Measurements"), &assign_AccumulatorLimitSet_Measurements));
	assign_map.insert(std::make_pair(std::string("cim:AccumulatorLimitSet.Limits"), &assign_AccumulatorLimitSet_Limits));
}

const char AccumulatorLimitSet::debugName[] = "AccumulatorLimitSet";
const char* AccumulatorLimitSet::debugString()
{
	return AccumulatorLimitSet::debugName;
}

const BaseClassDefiner AccumulatorLimitSet::declare()
{
	return BaseClassDefiner(AccumulatorLimitSet::addConstructToMap, AccumulatorLimitSet::addPrimitiveAssignFnsToMap, AccumulatorLimitSet::addClassAssignFnsToMap, AccumulatorLimitSet::debugName);
}


