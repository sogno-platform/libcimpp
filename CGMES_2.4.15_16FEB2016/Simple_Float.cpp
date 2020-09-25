#include "Simple_Float.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Simple_Float::Simple_Float() {}

Simple_Float::~Simple_Float(){}

Simple_Float::Simple_Float(long double value) : value(value), initialized(true) {}

void Simple_Float::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void Simple_Float::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void Simple_Float::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char Simple_Float::debugName[] = "Simple_Float";
const char* Simple_Float::debugString() {
	return Simple_Float::debugName;
}


const BaseClassDefiner Simple_Float::declare() {
	return BaseClassDefiner(Simple_Float::addConstructToMap, Simple_Float::addPrimitiveAssignFnsToMap, Simple_Float::addClassAssignFnsToMap, Simple_Float::debugName);
}

namespace CIMPP {
	Simple_Float& Simple_Float::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	Simple_Float& Simple_Float::operator-=(const Simple_Float& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	Simple_Float& Simple_Float::operator*=(const Simple_Float& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	Simple_Float& Simple_Float::operator/=(const Simple_Float& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	Simple_Float& Simple_Float::operator+=(const Simple_Float& rhs) {
	    value += rhs.value;
	    return *this;
	}

	Simple_Float::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, Simple_Float& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
