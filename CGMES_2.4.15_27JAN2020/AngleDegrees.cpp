#include "AngleDegrees.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

AngleDegrees::AngleDegrees() {}

AngleDegrees::~AngleDegrees(){}

AngleDegrees::AngleDegrees(long double value) : value(value), initialized(true) {}

void AngleDegrees::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void AngleDegrees::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void AngleDegrees::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char AngleDegrees::debugName[] = "AngleDegrees";
const char* AngleDegrees::debugString() {
	return AngleDegrees::debugName;
}


const BaseClassDefiner AngleDegrees::declare() {
	return BaseClassDefiner(AngleDegrees::addConstructToMap, AngleDegrees::addPrimitiveAssignFnsToMap, AngleDegrees::addClassAssignFnsToMap, AngleDegrees::debugName);
}

namespace CIMPP {
	AngleDegrees& AngleDegrees::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	AngleDegrees& AngleDegrees::operator-=(const AngleDegrees& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	AngleDegrees& AngleDegrees::operator*=(const AngleDegrees& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	AngleDegrees& AngleDegrees::operator/=(const AngleDegrees& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	AngleDegrees& AngleDegrees::operator+=(const AngleDegrees& rhs) {
	    value += rhs.value;
	    return *this;
	}

	AngleDegrees::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, AngleDegrees& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
