#include "Money.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Money::Money() {}

Money::~Money(){}

Money::Money(long double value) : value(value), initialized(true) {}

void Money::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void Money::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void Money::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char Money::debugName[] = "Money";
const char* Money::debugString() {
	return Money::debugName;
}


const BaseClassDefiner Money::declare() {
	return BaseClassDefiner(Money::addConstructToMap, Money::addPrimitiveAssignFnsToMap, Money::addClassAssignFnsToMap, Money::debugName);
}

namespace CIMPP {
	Money& Money::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	Money& Money::operator-=(const Money& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	Money& Money::operator*=(const Money& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	Money& Money::operator/=(const Money& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	Money& Money::operator+=(const Money& rhs) {
	    value += rhs.value;
	    return *this;
	}

	Money::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, Money& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
