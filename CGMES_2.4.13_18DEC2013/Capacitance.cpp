#include "Capacitance.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Capacitance::Capacitance() {}

Capacitance::~Capacitance(){}

Capacitance::Capacitance(long double value) : value(value), initialized(true) {}

void Capacitance::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void Capacitance::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void Capacitance::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char Capacitance::debugName[] = "Capacitance";
const char* Capacitance::debugString() {
	return Capacitance::debugName;
}


const BaseClassDefiner Capacitance::declare() {
	return BaseClassDefiner(Capacitance::addConstructToMap, Capacitance::addPrimitiveAssignFnsToMap, Capacitance::addClassAssignFnsToMap, Capacitance::debugName);
}

namespace CIMPP {
	Capacitance& Capacitance::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	Capacitance& Capacitance::operator-=(const Capacitance& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	Capacitance& Capacitance::operator*=(const Capacitance& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	Capacitance& Capacitance::operator/=(const Capacitance& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	Capacitance& Capacitance::operator+=(const Capacitance& rhs) {
	    value += rhs.value;
	    return *this;
	}

	Capacitance::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, Capacitance& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
