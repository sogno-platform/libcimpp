#include "Conductance.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Conductance::Conductance() {}

Conductance::~Conductance(){}

Conductance::Conductance(long double value) : value(value), initialized(true) {}

void Conductance::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void Conductance::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void Conductance::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char Conductance::debugName[] = "Conductance";
const char* Conductance::debugString() {
	return Conductance::debugName;
}


const BaseClassDefiner Conductance::declare() {
	return BaseClassDefiner(Conductance::addConstructToMap, Conductance::addPrimitiveAssignFnsToMap, Conductance::addClassAssignFnsToMap, Conductance::debugName);
}

namespace CIMPP {
	Conductance& Conductance::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	Conductance& Conductance::operator-=(const Conductance& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	Conductance& Conductance::operator*=(const Conductance& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	Conductance& Conductance::operator/=(const Conductance& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	Conductance& Conductance::operator+=(const Conductance& rhs) {
	    value += rhs.value;
	    return *this;
	}

	Conductance::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, Conductance& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
