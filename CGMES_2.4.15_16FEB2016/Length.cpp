#include "Length.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Length::Length() {}

Length::~Length(){}

Length::Length(long double value) : value(value), initialized(true) {}

void Length::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void Length::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void Length::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char Length::debugName[] = "Length";
const char* Length::debugString() {
	return Length::debugName;
}


const BaseClassDefiner Length::declare() {
	return BaseClassDefiner(Length::addConstructToMap, Length::addPrimitiveAssignFnsToMap, Length::addClassAssignFnsToMap, Length::debugName);
}

namespace CIMPP {
	Length& Length::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	Length& Length::operator-=(const Length& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	Length& Length::operator*=(const Length& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	Length& Length::operator/=(const Length& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	Length& Length::operator+=(const Length& rhs) {
	    value += rhs.value;
	    return *this;
	}

	Length::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, Length& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
