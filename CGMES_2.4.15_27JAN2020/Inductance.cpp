#include "Inductance.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Inductance::Inductance() {}

Inductance::~Inductance(){}

Inductance::Inductance(long double value) : value(value), initialized(true) {}

void Inductance::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void Inductance::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void Inductance::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char Inductance::debugName[] = "Inductance";
const char* Inductance::debugString() {
	return Inductance::debugName;
}


const BaseClassDefiner Inductance::declare() {
	return BaseClassDefiner(Inductance::addConstructToMap, Inductance::addPrimitiveAssignFnsToMap, Inductance::addClassAssignFnsToMap, Inductance::debugName);
}

namespace CIMPP {
	Inductance& Inductance::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	Inductance& Inductance::operator-=(const Inductance& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	Inductance& Inductance::operator*=(const Inductance& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	Inductance& Inductance::operator/=(const Inductance& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	Inductance& Inductance::operator+=(const Inductance& rhs) {
	    value += rhs.value;
	    return *this;
	}

	Inductance::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, Inductance& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
