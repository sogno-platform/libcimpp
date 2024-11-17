#include <sstream>
#include "Measurement.hpp"
#include "Accumulator.hpp"

#include "AccumulatorValue.hpp"
#include "AccumulatorLimitSet.hpp"

using namespace CIMPP;

Accumulator::Accumulator() {};

Accumulator::~Accumulator() {};





bool assign_Accumulator_AccumulatorValues(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Accumulator* element = dynamic_cast<Accumulator*>(BaseClass_ptr1)) {
		if(dynamic_cast<AccumulatorValue*>(BaseClass_ptr2) != nullptr) {
                        element->AccumulatorValues.push_back(dynamic_cast<AccumulatorValue*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_Accumulator_LimitSets(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(Accumulator* element = dynamic_cast<Accumulator*>(BaseClass_ptr1)) {
		if(dynamic_cast<AccumulatorLimitSet*>(BaseClass_ptr2) != nullptr) {
                        element->LimitSets.push_back(dynamic_cast<AccumulatorLimitSet*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

namespace CIMPP {
	BaseClass* Accumulator_factory() {
		return new Accumulator;
	}
}

void Accumulator::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:Accumulator"), &Accumulator_factory));
}

void Accumulator::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void Accumulator::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:Accumulator.AccumulatorValues"), &assign_Accumulator_AccumulatorValues));
	assign_map.insert(std::make_pair(std::string("cim:Accumulator.LimitSets"), &assign_Accumulator_LimitSets));
}

const char Accumulator::debugName[] = "Accumulator";
const char* Accumulator::debugString()
{
	return Accumulator::debugName;
}

const BaseClassDefiner Accumulator::declare()
{
	return BaseClassDefiner(Accumulator::addConstructToMap, Accumulator::addPrimitiveAssignFnsToMap, Accumulator::addClassAssignFnsToMap, Accumulator::debugName);
}
