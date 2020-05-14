#include "Susceptance.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Susceptance::Susceptance() {}

Susceptance::~Susceptance(){}

Susceptance::Susceptance(long double value) : value(value), initialized(true) {}

void Susceptance::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void Susceptance::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void Susceptance::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char Susceptance::debugName[] = "Susceptance";
const char* Susceptance::debugString() {
	return Susceptance::debugName;
}


const BaseClassDefiner Susceptance::declare() {
	return BaseClassDefiner(Susceptance::addConstructToMap, Susceptance::addPrimitiveAssignFnsToMap, Susceptance::addClassAssignFnsToMap, Susceptance::debugName);
}

namespace CIMPP {
	Susceptance& Susceptance::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	Susceptance& Susceptance::operator-=(const Susceptance& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	Susceptance& Susceptance::operator*=(const Susceptance& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	Susceptance& Susceptance::operator/=(const Susceptance& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	Susceptance& Susceptance::operator+=(const Susceptance& rhs) {
	    value += rhs.value;
	    return *this;
	}

	Susceptance::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, Susceptance& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
