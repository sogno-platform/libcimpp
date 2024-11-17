#include "Decimal.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Decimal::Decimal() {}

Decimal::~Decimal(){}

Decimal::Decimal(long double value) : value(value), initialized(true) {}

void Decimal::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void Decimal::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void Decimal::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char Decimal::debugName[] = "Decimal";
const char* Decimal::debugString() {
	return Decimal::debugName;
}


const BaseClassDefiner Decimal::declare() {
	return BaseClassDefiner(Decimal::addConstructToMap, Decimal::addPrimitiveAssignFnsToMap, Decimal::addClassAssignFnsToMap, Decimal::debugName);
}

namespace CIMPP {
	Decimal& Decimal::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	Decimal& Decimal::operator-=(const Decimal& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	Decimal& Decimal::operator*=(const Decimal& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	Decimal& Decimal::operator/=(const Decimal& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	Decimal& Decimal::operator+=(const Decimal& rhs) {
	    value += rhs.value;
	    return *this;
	}

	Decimal::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, Decimal& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
