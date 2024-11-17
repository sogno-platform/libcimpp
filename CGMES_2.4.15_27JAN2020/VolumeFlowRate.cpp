#include "VolumeFlowRate.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

VolumeFlowRate::VolumeFlowRate() {}

VolumeFlowRate::~VolumeFlowRate(){}

VolumeFlowRate::VolumeFlowRate(long double value) : value(value), initialized(true) {}

void VolumeFlowRate::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void VolumeFlowRate::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void VolumeFlowRate::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char VolumeFlowRate::debugName[] = "VolumeFlowRate";
const char* VolumeFlowRate::debugString() {
	return VolumeFlowRate::debugName;
}


const BaseClassDefiner VolumeFlowRate::declare() {
	return BaseClassDefiner(VolumeFlowRate::addConstructToMap, VolumeFlowRate::addPrimitiveAssignFnsToMap, VolumeFlowRate::addClassAssignFnsToMap, VolumeFlowRate::debugName);
}

namespace CIMPP {
	VolumeFlowRate& VolumeFlowRate::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	VolumeFlowRate& VolumeFlowRate::operator-=(const VolumeFlowRate& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	VolumeFlowRate& VolumeFlowRate::operator*=(const VolumeFlowRate& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	VolumeFlowRate& VolumeFlowRate::operator/=(const VolumeFlowRate& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	VolumeFlowRate& VolumeFlowRate::operator+=(const VolumeFlowRate& rhs) {
	    value += rhs.value;
	    return *this;
	}

	VolumeFlowRate::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, VolumeFlowRate& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
