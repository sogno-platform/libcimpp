#include "ActivePower.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

ActivePower::ActivePower() {}

ActivePower::~ActivePower(){}

ActivePower::ActivePower(long double value) : value(value), initialized(true) {}

void ActivePower::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void ActivePower::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void ActivePower::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char ActivePower::debugName[] = "ActivePower";
const char* ActivePower::debugString() {
	return ActivePower::debugName;
}


const BaseClassDefiner ActivePower::declare() {
	return BaseClassDefiner(ActivePower::addConstructToMap, ActivePower::addPrimitiveAssignFnsToMap, ActivePower::addClassAssignFnsToMap, ActivePower::debugName);
}

namespace CIMPP {
	ActivePower& ActivePower::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	ActivePower& ActivePower::operator-=(const ActivePower& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	ActivePower& ActivePower::operator*=(const ActivePower& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	ActivePower& ActivePower::operator/=(const ActivePower& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	ActivePower& ActivePower::operator+=(const ActivePower& rhs) {
	    value += rhs.value;
	    return *this;
	}

	ActivePower::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, ActivePower& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
