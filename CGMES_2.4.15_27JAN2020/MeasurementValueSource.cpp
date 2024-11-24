#include <sstream>
#include "IdentifiedObject.hpp"
#include "MeasurementValueSource.hpp"

#include "MeasurementValue.hpp"

using namespace CIMPP;

MeasurementValueSource::MeasurementValueSource() {};

MeasurementValueSource::~MeasurementValueSource() {};




bool assign_MeasurementValueSource_MeasurementValues(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(MeasurementValueSource* element = dynamic_cast<MeasurementValueSource*>(BaseClass_ptr1)) {
		if(dynamic_cast<MeasurementValue*>(BaseClass_ptr2) != nullptr) {
                        element->MeasurementValues.push_back(dynamic_cast<MeasurementValue*>(BaseClass_ptr2));
			return true;
		}
	}
	return false;
}

namespace CIMPP {
	BaseClass* MeasurementValueSource_factory() {
		return new MeasurementValueSource;
	}
}

void MeasurementValueSource::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:MeasurementValueSource"), &MeasurementValueSource_factory));
}

void MeasurementValueSource::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
	}

void MeasurementValueSource::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:MeasurementValueSource.MeasurementValues"), &assign_MeasurementValueSource_MeasurementValues));
}

const char MeasurementValueSource::debugName[] = "MeasurementValueSource";
const char* MeasurementValueSource::debugString()
{
	return MeasurementValueSource::debugName;
}

const BaseClassDefiner MeasurementValueSource::declare()
{
	return BaseClassDefiner(MeasurementValueSource::addConstructToMap, MeasurementValueSource::addPrimitiveAssignFnsToMap, MeasurementValueSource::addClassAssignFnsToMap, MeasurementValueSource::debugName);
}
