#include <sstream>
#include "Quality61850.hpp"
#include "MeasurementValueQuality.hpp"

#include "MeasurementValue.hpp"

using namespace CIMPP;

MeasurementValueQuality::MeasurementValueQuality(): MeasurementValue(nullptr) {};

MeasurementValueQuality::~MeasurementValueQuality() {};


bool assign_MeasurementValue_MeasurementValueQuality(BaseClass*, BaseClass*);
bool assign_MeasurementValueQuality_MeasurementValue(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(MeasurementValueQuality* element = dynamic_cast<MeasurementValueQuality*>(BaseClass_ptr1)) {
                element->MeasurementValue = dynamic_cast<MeasurementValue*>(BaseClass_ptr2);
                if(element->MeasurementValue != nullptr)
                        return assign_MeasurementValue_MeasurementValueQuality(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}



namespace CIMPP {
	BaseClass* MeasurementValueQuality_factory() {
		return new MeasurementValueQuality;
	}
}

void MeasurementValueQuality::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:MeasurementValueQuality"), &MeasurementValueQuality_factory));
}

void MeasurementValueQuality::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void MeasurementValueQuality::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:MeasurementValueQuality.MeasurementValue"), &assign_MeasurementValueQuality_MeasurementValue));
}

const char MeasurementValueQuality::debugName[] = "MeasurementValueQuality";
const char* MeasurementValueQuality::debugString()
{
	return MeasurementValueQuality::debugName;
}

const BaseClassDefiner MeasurementValueQuality::declare()
{
	return BaseClassDefiner(MeasurementValueQuality::addConstructToMap, MeasurementValueQuality::addPrimitiveAssignFnsToMap, MeasurementValueQuality::addClassAssignFnsToMap, MeasurementValueQuality::debugName);
}


