#include "Voltage.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Voltage::Voltage() {}

Voltage::~Voltage(){}

Voltage::Voltage(long double value) : value(value), initialized(true) {}

void Voltage::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void Voltage::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void Voltage::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char Voltage::debugName[] = "Voltage";
const char* Voltage::debugString() {
	return Voltage::debugName;
}


const BaseClassDefiner Voltage::declare() {
	return BaseClassDefiner(Voltage::addConstructToMap, Voltage::addPrimitiveAssignFnsToMap, Voltage::addClassAssignFnsToMap, Voltage::debugName);
}

namespace CIMPP {
	Voltage& Voltage::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	Voltage& Voltage::operator-=(const Voltage& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	Voltage& Voltage::operator*=(const Voltage& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	Voltage& Voltage::operator/=(const Voltage& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	Voltage& Voltage::operator+=(const Voltage& rhs) {
	    value += rhs.value;
	    return *this;
	}

	Voltage::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, Voltage& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
