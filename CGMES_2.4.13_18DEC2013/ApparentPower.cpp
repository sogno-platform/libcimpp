#include "ApparentPower.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

ApparentPower::ApparentPower() {}

ApparentPower::~ApparentPower(){}

ApparentPower::ApparentPower(long double value) : value(value), initialized(true) {}

void ApparentPower::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void ApparentPower::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void ApparentPower::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char ApparentPower::debugName[] = "ApparentPower";
const char* ApparentPower::debugString() {
	return ApparentPower::debugName;
}


const BaseClassDefiner ApparentPower::declare() {
	return BaseClassDefiner(ApparentPower::addConstructToMap, ApparentPower::addPrimitiveAssignFnsToMap, ApparentPower::addClassAssignFnsToMap, ApparentPower::debugName);
}

namespace CIMPP {
	ApparentPower& ApparentPower::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	ApparentPower& ApparentPower::operator-=(const ApparentPower& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	ApparentPower& ApparentPower::operator*=(const ApparentPower& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	ApparentPower& ApparentPower::operator/=(const ApparentPower& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	ApparentPower& ApparentPower::operator+=(const ApparentPower& rhs) {
	    value += rhs.value;
	    return *this;
	}

	ApparentPower::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, ApparentPower& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
