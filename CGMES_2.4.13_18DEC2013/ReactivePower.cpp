#include "ReactivePower.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

ReactivePower::ReactivePower() {}

ReactivePower::~ReactivePower(){}

ReactivePower::ReactivePower(long double value) : value(value), initialized(true) {}

void ReactivePower::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void ReactivePower::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void ReactivePower::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char ReactivePower::debugName[] = "ReactivePower";
const char* ReactivePower::debugString() {
	return ReactivePower::debugName;
}


const BaseClassDefiner ReactivePower::declare() {
	return BaseClassDefiner(ReactivePower::addConstructToMap, ReactivePower::addPrimitiveAssignFnsToMap, ReactivePower::addClassAssignFnsToMap, ReactivePower::debugName);
}

namespace CIMPP {
	ReactivePower& ReactivePower::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	ReactivePower& ReactivePower::operator-=(const ReactivePower& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	ReactivePower& ReactivePower::operator*=(const ReactivePower& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	ReactivePower& ReactivePower::operator/=(const ReactivePower& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	ReactivePower& ReactivePower::operator+=(const ReactivePower& rhs) {
	    value += rhs.value;
	    return *this;
	}

	ReactivePower::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, ReactivePower& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
