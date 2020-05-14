#include "PerCent.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

PerCent::PerCent() {}

PerCent::~PerCent(){}

PerCent::PerCent(long double value) : value(value), initialized(true) {}

void PerCent::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void PerCent::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void PerCent::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char PerCent::debugName[] = "PerCent";
const char* PerCent::debugString() {
	return PerCent::debugName;
}


const BaseClassDefiner PerCent::declare() {
	return BaseClassDefiner(PerCent::addConstructToMap, PerCent::addPrimitiveAssignFnsToMap, PerCent::addClassAssignFnsToMap, PerCent::debugName);
}

namespace CIMPP {
	PerCent& PerCent::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	PerCent& PerCent::operator-=(const PerCent& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	PerCent& PerCent::operator*=(const PerCent& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	PerCent& PerCent::operator/=(const PerCent& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	PerCent& PerCent::operator+=(const PerCent& rhs) {
	    value += rhs.value;
	    return *this;
	}

	PerCent::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, PerCent& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
