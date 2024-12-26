#include "ActivePowerPerFrequency.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

ActivePowerPerFrequency::ActivePowerPerFrequency() {}

ActivePowerPerFrequency::~ActivePowerPerFrequency(){}

ActivePowerPerFrequency::ActivePowerPerFrequency(long double value) : value(value), initialized(true) {}

void ActivePowerPerFrequency::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void ActivePowerPerFrequency::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void ActivePowerPerFrequency::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char ActivePowerPerFrequency::debugName[] = "ActivePowerPerFrequency";
const char* ActivePowerPerFrequency::debugString() {
	return ActivePowerPerFrequency::debugName;
}


const BaseClassDefiner ActivePowerPerFrequency::declare() {
	return BaseClassDefiner(ActivePowerPerFrequency::addConstructToMap, ActivePowerPerFrequency::addPrimitiveAssignFnsToMap, ActivePowerPerFrequency::addClassAssignFnsToMap, ActivePowerPerFrequency::debugName);
}

namespace CIMPP {
	ActivePowerPerFrequency& ActivePowerPerFrequency::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	ActivePowerPerFrequency& ActivePowerPerFrequency::operator-=(const ActivePowerPerFrequency& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	ActivePowerPerFrequency& ActivePowerPerFrequency::operator*=(const ActivePowerPerFrequency& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	ActivePowerPerFrequency& ActivePowerPerFrequency::operator/=(const ActivePowerPerFrequency& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	ActivePowerPerFrequency& ActivePowerPerFrequency::operator+=(const ActivePowerPerFrequency& rhs) {
	    value += rhs.value;
	    return *this;
	}

	ActivePowerPerFrequency::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, ActivePowerPerFrequency& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
