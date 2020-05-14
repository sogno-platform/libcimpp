#include <sstream>
#include "Control.hpp"
#include "AccumulatorReset.hpp"

#include "AccumulatorValue.hpp"

using namespace CIMPP;

AccumulatorReset::AccumulatorReset() {};

AccumulatorReset::~AccumulatorReset() {};


bool assign_AccumulatorValue_AccumulatorReset(BaseClass*, BaseClass*);
bool assign_AccumulatorReset_AccumulatorValue(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(AccumulatorReset* element = dynamic_cast<AccumulatorReset*>(BaseClass_ptr1)) {
                element->AccumulatorValue = dynamic_cast<AccumulatorValue*>(BaseClass_ptr2);
                if(element->AccumulatorValue != nullptr)
                        return assign_AccumulatorValue_AccumulatorReset(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}



namespace CIMPP {
	BaseClass* AccumulatorReset_factory() {
		return new AccumulatorReset;
	}
}

void AccumulatorReset::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:AccumulatorReset"), &AccumulatorReset_factory));
}

void AccumulatorReset::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void AccumulatorReset::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:AccumulatorReset.AccumulatorValue"), &assign_AccumulatorReset_AccumulatorValue));
}

const char AccumulatorReset::debugName[] = "AccumulatorReset";
const char* AccumulatorReset::debugString()
{
	return AccumulatorReset::debugName;
}

const BaseClassDefiner AccumulatorReset::declare()
{
	return BaseClassDefiner(AccumulatorReset::addConstructToMap, AccumulatorReset::addPrimitiveAssignFnsToMap, AccumulatorReset::addClassAssignFnsToMap, AccumulatorReset::debugName);
}


