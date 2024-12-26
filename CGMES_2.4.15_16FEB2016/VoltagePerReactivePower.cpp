#include "VoltagePerReactivePower.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

VoltagePerReactivePower::VoltagePerReactivePower() {}

VoltagePerReactivePower::~VoltagePerReactivePower(){}

VoltagePerReactivePower::VoltagePerReactivePower(long double value) : value(value), initialized(true) {}

void VoltagePerReactivePower::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void VoltagePerReactivePower::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void VoltagePerReactivePower::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char VoltagePerReactivePower::debugName[] = "VoltagePerReactivePower";
const char* VoltagePerReactivePower::debugString() {
	return VoltagePerReactivePower::debugName;
}


const BaseClassDefiner VoltagePerReactivePower::declare() {
	return BaseClassDefiner(VoltagePerReactivePower::addConstructToMap, VoltagePerReactivePower::addPrimitiveAssignFnsToMap, VoltagePerReactivePower::addClassAssignFnsToMap, VoltagePerReactivePower::debugName);
}

namespace CIMPP {
	VoltagePerReactivePower& VoltagePerReactivePower::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	VoltagePerReactivePower& VoltagePerReactivePower::operator-=(const VoltagePerReactivePower& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	VoltagePerReactivePower& VoltagePerReactivePower::operator*=(const VoltagePerReactivePower& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	VoltagePerReactivePower& VoltagePerReactivePower::operator/=(const VoltagePerReactivePower& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	VoltagePerReactivePower& VoltagePerReactivePower::operator+=(const VoltagePerReactivePower& rhs) {
	    value += rhs.value;
	    return *this;
	}

	VoltagePerReactivePower::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, VoltagePerReactivePower& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
