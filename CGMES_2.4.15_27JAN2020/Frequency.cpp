#include "Frequency.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Frequency::Frequency() {}

Frequency::~Frequency(){}

Frequency::Frequency(long double value) : value(value), initialized(true) {}

void Frequency::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void Frequency::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void Frequency::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char Frequency::debugName[] = "Frequency";
const char* Frequency::debugString() {
	return Frequency::debugName;
}


const BaseClassDefiner Frequency::declare() {
	return BaseClassDefiner(Frequency::addConstructToMap, Frequency::addPrimitiveAssignFnsToMap, Frequency::addClassAssignFnsToMap, Frequency::debugName);
}

namespace CIMPP {
	Frequency& Frequency::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	Frequency& Frequency::operator-=(const Frequency& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	Frequency& Frequency::operator*=(const Frequency& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	Frequency& Frequency::operator/=(const Frequency& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	Frequency& Frequency::operator+=(const Frequency& rhs) {
	    value += rhs.value;
	    return *this;
	}

	Frequency::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, Frequency& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
