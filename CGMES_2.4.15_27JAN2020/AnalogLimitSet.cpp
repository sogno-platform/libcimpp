#include <sstream>
#include "LimitSet.hpp"
#include "AnalogLimitSet.hpp"

#include "Analog.hpp"
#include "AnalogLimit.hpp"

using namespace CIMPP;

AnalogLimitSet::AnalogLimitSet() {};

AnalogLimitSet::~AnalogLimitSet() {};


bool assign_AnalogLimitSet_Measurements(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(AnalogLimitSet* element = dynamic_cast<AnalogLimitSet*>(BaseClass_ptr1)) {
		if(dynamic_cast<Analog*>(BaseClass_ptr2) != nullptr) {
                        element->Measurements.push_back(dynamic_cast<Analog*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

bool assign_AnalogLimitSet_Limits(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(AnalogLimitSet* element = dynamic_cast<AnalogLimitSet*>(BaseClass_ptr1)) {
		if(dynamic_cast<AnalogLimit*>(BaseClass_ptr2) != nullptr) {
                        element->Limits.push_back(dynamic_cast<AnalogLimit*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}




namespace CIMPP {
	BaseClass* AnalogLimitSet_factory() {
		return new AnalogLimitSet;
	}
}

void AnalogLimitSet::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:AnalogLimitSet"), &AnalogLimitSet_factory));
}

void AnalogLimitSet::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
		}

void AnalogLimitSet::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:AnalogLimitSet.Measurements"), &assign_AnalogLimitSet_Measurements));
	assign_map.insert(std::make_pair(std::string("cim:AnalogLimitSet.Limits"), &assign_AnalogLimitSet_Limits));
}

const char AnalogLimitSet::debugName[] = "AnalogLimitSet";
const char* AnalogLimitSet::debugString()
{
	return AnalogLimitSet::debugName;
}

const BaseClassDefiner AnalogLimitSet::declare()
{
	return BaseClassDefiner(AnalogLimitSet::addConstructToMap, AnalogLimitSet::addPrimitiveAssignFnsToMap, AnalogLimitSet::addClassAssignFnsToMap, AnalogLimitSet::debugName);
}


