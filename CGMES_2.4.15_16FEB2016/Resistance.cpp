#include "Resistance.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Resistance::Resistance() {}

Resistance::~Resistance(){}

Resistance::Resistance(long double value) : value(value), initialized(true) {}

void Resistance::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void Resistance::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void Resistance::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char Resistance::debugName[] = "Resistance";
const char* Resistance::debugString() {
	return Resistance::debugName;
}


const BaseClassDefiner Resistance::declare() {
	return BaseClassDefiner(Resistance::addConstructToMap, Resistance::addPrimitiveAssignFnsToMap, Resistance::addClassAssignFnsToMap, Resistance::debugName);
}

namespace CIMPP {
	Resistance& Resistance::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	Resistance& Resistance::operator-=(const Resistance& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	Resistance& Resistance::operator*=(const Resistance& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	Resistance& Resistance::operator/=(const Resistance& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	Resistance& Resistance::operator+=(const Resistance& rhs) {
	    value += rhs.value;
	    return *this;
	}

	Resistance::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, Resistance& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
