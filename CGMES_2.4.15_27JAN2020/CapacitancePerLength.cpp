#include "CapacitancePerLength.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

CapacitancePerLength::CapacitancePerLength() {}

CapacitancePerLength::~CapacitancePerLength(){}

CapacitancePerLength::CapacitancePerLength(long double value) : value(value), initialized(true) {}

void CapacitancePerLength::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void CapacitancePerLength::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void CapacitancePerLength::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char CapacitancePerLength::debugName[] = "CapacitancePerLength";
const char* CapacitancePerLength::debugString() {
	return CapacitancePerLength::debugName;
}


const BaseClassDefiner CapacitancePerLength::declare() {
	return BaseClassDefiner(CapacitancePerLength::addConstructToMap, CapacitancePerLength::addPrimitiveAssignFnsToMap, CapacitancePerLength::addClassAssignFnsToMap, CapacitancePerLength::debugName);
}

namespace CIMPP {
	CapacitancePerLength& CapacitancePerLength::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	CapacitancePerLength& CapacitancePerLength::operator-=(const CapacitancePerLength& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	CapacitancePerLength& CapacitancePerLength::operator*=(const CapacitancePerLength& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	CapacitancePerLength& CapacitancePerLength::operator/=(const CapacitancePerLength& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	CapacitancePerLength& CapacitancePerLength::operator+=(const CapacitancePerLength& rhs) {
	    value += rhs.value;
	    return *this;
	}

	CapacitancePerLength::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, CapacitancePerLength& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
