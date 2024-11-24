#include <sstream>
#include "IdentifiedObject.hpp"
#include "MeasurementValue.hpp"

#include "MeasurementValueQuality.hpp"
#include "MeasurementValueSource.hpp"
#include "PerCent.hpp"
#include "DateTime.hpp"

using namespace CIMPP;

MeasurementValue::MeasurementValue(): MeasurementValueQuality(nullptr), MeasurementValueSource(nullptr) {};

MeasurementValue::~MeasurementValue() {};




bool assign_MeasurementValue_sensorAccuracy(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(MeasurementValue* element = dynamic_cast<MeasurementValue*>(BaseClass_ptr1)) {
                buffer >> element->sensorAccuracy;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_MeasurementValue_timeStamp(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(MeasurementValue* element = dynamic_cast<MeasurementValue*>(BaseClass_ptr1)) {
                buffer >> element->timeStamp;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}


bool assign_MeasurementValue_MeasurementValueQuality(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(MeasurementValue* element = dynamic_cast<MeasurementValue*>(BaseClass_ptr1)) {
                element->MeasurementValueQuality = dynamic_cast<MeasurementValueQuality*>(BaseClass_ptr2);
                if(element->MeasurementValueQuality != nullptr)
                        return true;
        }
        return false;
}

bool assign_MeasurementValueSource_MeasurementValues(BaseClass*, BaseClass*);
bool assign_MeasurementValue_MeasurementValueSource(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(MeasurementValue* element = dynamic_cast<MeasurementValue*>(BaseClass_ptr1)) {
                element->MeasurementValueSource = dynamic_cast<MeasurementValueSource*>(BaseClass_ptr2);
                if(element->MeasurementValueSource != nullptr)
                        return assign_MeasurementValueSource_MeasurementValues(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}



namespace CIMPP {
	BaseClass* MeasurementValue_factory() {
		return new MeasurementValue;
	}
}

void MeasurementValue::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:MeasurementValue"), &MeasurementValue_factory));
}

void MeasurementValue::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
			assign_map.insert(std::make_pair(std::string("cim:MeasurementValue.sensorAccuracy"), &assign_MeasurementValue_sensorAccuracy));
	assign_map.insert(std::make_pair(std::string("cim:MeasurementValue.timeStamp"), &assign_MeasurementValue_timeStamp));
}

void MeasurementValue::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:MeasurementValue.MeasurementValueQuality"), &assign_MeasurementValue_MeasurementValueQuality));
	assign_map.insert(std::make_pair(std::string("cim:MeasurementValue.MeasurementValueSource"), &assign_MeasurementValue_MeasurementValueSource));
		}

const char MeasurementValue::debugName[] = "MeasurementValue";
const char* MeasurementValue::debugString()
{
	return MeasurementValue::debugName;
}

const BaseClassDefiner MeasurementValue::declare()
{
	return BaseClassDefiner(MeasurementValue::addConstructToMap, MeasurementValue::addPrimitiveAssignFnsToMap, MeasurementValue::addClassAssignFnsToMap, MeasurementValue::debugName);
}
