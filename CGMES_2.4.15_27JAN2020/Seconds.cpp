#include "Seconds.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Seconds::Seconds() {}

Seconds::~Seconds(){}

Seconds::Seconds(long double value) : value(value), initialized(true) {}

void Seconds::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void Seconds::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void Seconds::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char Seconds::debugName[] = "Seconds";
const char* Seconds::debugString() {
	return Seconds::debugName;
}


const BaseClassDefiner Seconds::declare() {
	return BaseClassDefiner(Seconds::addConstructToMap, Seconds::addPrimitiveAssignFnsToMap, Seconds::addClassAssignFnsToMap, Seconds::debugName);
}

namespace CIMPP {
	Seconds& Seconds::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	Seconds& Seconds::operator-=(const Seconds& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	Seconds& Seconds::operator*=(const Seconds& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	Seconds& Seconds::operator/=(const Seconds& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	Seconds& Seconds::operator+=(const Seconds& rhs) {
	    value += rhs.value;
	    return *this;
	}

	Seconds::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, Seconds& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
