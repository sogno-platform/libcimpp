#include "Reactance.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Reactance::Reactance() {}

Reactance::~Reactance(){}

Reactance::Reactance(long double value) : value(value), initialized(true) {}

void Reactance::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void Reactance::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void Reactance::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char Reactance::debugName[] = "Reactance";
const char* Reactance::debugString() {
	return Reactance::debugName;
}


const BaseClassDefiner Reactance::declare() {
	return BaseClassDefiner(Reactance::addConstructToMap, Reactance::addPrimitiveAssignFnsToMap, Reactance::addClassAssignFnsToMap, Reactance::debugName);
}

namespace CIMPP {
	Reactance& Reactance::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	Reactance& Reactance::operator-=(const Reactance& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	Reactance& Reactance::operator*=(const Reactance& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	Reactance& Reactance::operator/=(const Reactance& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	Reactance& Reactance::operator+=(const Reactance& rhs) {
	    value += rhs.value;
	    return *this;
	}

	Reactance::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, Reactance& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
