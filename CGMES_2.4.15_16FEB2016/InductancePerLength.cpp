#include "InductancePerLength.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

InductancePerLength::InductancePerLength() {}

InductancePerLength::~InductancePerLength(){}

InductancePerLength::InductancePerLength(long double value) : value(value), initialized(true) {}

void InductancePerLength::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void InductancePerLength::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void InductancePerLength::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char InductancePerLength::debugName[] = "InductancePerLength";
const char* InductancePerLength::debugString() {
	return InductancePerLength::debugName;
}


const BaseClassDefiner InductancePerLength::declare() {
	return BaseClassDefiner(InductancePerLength::addConstructToMap, InductancePerLength::addPrimitiveAssignFnsToMap, InductancePerLength::addClassAssignFnsToMap, InductancePerLength::debugName);
}

namespace CIMPP {
	InductancePerLength& InductancePerLength::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	InductancePerLength& InductancePerLength::operator-=(const InductancePerLength& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	InductancePerLength& InductancePerLength::operator*=(const InductancePerLength& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	InductancePerLength& InductancePerLength::operator/=(const InductancePerLength& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	InductancePerLength& InductancePerLength::operator+=(const InductancePerLength& rhs) {
	    value += rhs.value;
	    return *this;
	}

	InductancePerLength::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, InductancePerLength& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
