#include "RotationSpeed.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

RotationSpeed::RotationSpeed() {}

RotationSpeed::~RotationSpeed(){}

RotationSpeed::RotationSpeed(long double value) : value(value), initialized(true) {}

void RotationSpeed::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void RotationSpeed::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void RotationSpeed::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char RotationSpeed::debugName[] = "RotationSpeed";
const char* RotationSpeed::debugString() {
	return RotationSpeed::debugName;
}


const BaseClassDefiner RotationSpeed::declare() {
	return BaseClassDefiner(RotationSpeed::addConstructToMap, RotationSpeed::addPrimitiveAssignFnsToMap, RotationSpeed::addClassAssignFnsToMap, RotationSpeed::debugName);
}

namespace CIMPP {
	RotationSpeed& RotationSpeed::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	RotationSpeed& RotationSpeed::operator-=(const RotationSpeed& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	RotationSpeed& RotationSpeed::operator*=(const RotationSpeed& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	RotationSpeed& RotationSpeed::operator/=(const RotationSpeed& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	RotationSpeed& RotationSpeed::operator+=(const RotationSpeed& rhs) {
	    value += rhs.value;
	    return *this;
	}

	RotationSpeed::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, RotationSpeed& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
