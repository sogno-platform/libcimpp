#include <sstream>
#include "MeasurementValue.hpp"
#include "AccumulatorValue.hpp"

#include "Accumulator.hpp"
#include "AccumulatorReset.hpp"
#include "Integer.hpp"

using namespace CIMPP;

AccumulatorValue::AccumulatorValue(): Accumulator(nullptr), AccumulatorReset(nullptr) {};

AccumulatorValue::~AccumulatorValue() {};


bool assign_Accumulator_AccumulatorValues(BaseClass*, BaseClass*);
bool assign_AccumulatorValue_Accumulator(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(AccumulatorValue* element = dynamic_cast<AccumulatorValue*>(BaseClass_ptr1)) {
                element->Accumulator = dynamic_cast<Accumulator*>(BaseClass_ptr2);
                if(element->Accumulator != nullptr)
                        return assign_Accumulator_AccumulatorValues(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_AccumulatorValue_AccumulatorReset(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(AccumulatorValue* element = dynamic_cast<AccumulatorValue*>(BaseClass_ptr1)) {
                element->AccumulatorReset = dynamic_cast<AccumulatorReset*>(BaseClass_ptr2);
                if(element->AccumulatorReset != nullptr)
                        return true;
        }
        return false;
}





bool assign_AccumulatorValue_value(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(AccumulatorValue* element = dynamic_cast<AccumulatorValue*>(BaseClass_ptr1)) {
                buffer >> element->value;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* AccumulatorValue_factory() {
		return new AccumulatorValue;
	}
}

void AccumulatorValue::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:AccumulatorValue"), &AccumulatorValue_factory));
}

void AccumulatorValue::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
			assign_map.insert(std::make_pair(std::string("cim:AccumulatorValue.value"), &assign_AccumulatorValue_value));
}

void AccumulatorValue::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:AccumulatorValue.Accumulator"), &assign_AccumulatorValue_Accumulator));
	assign_map.insert(std::make_pair(std::string("cim:AccumulatorValue.AccumulatorReset"), &assign_AccumulatorValue_AccumulatorReset));
	}

const char AccumulatorValue::debugName[] = "AccumulatorValue";
const char* AccumulatorValue::debugString()
{
	return AccumulatorValue::debugName;
}

const BaseClassDefiner AccumulatorValue::declare()
{
	return BaseClassDefiner(AccumulatorValue::addConstructToMap, AccumulatorValue::addPrimitiveAssignFnsToMap, AccumulatorValue::addClassAssignFnsToMap, AccumulatorValue::debugName);
}


