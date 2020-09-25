#include "AngleRadians.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

AngleRadians::AngleRadians() {}

AngleRadians::~AngleRadians(){}

AngleRadians::AngleRadians(long double value) : value(value), initialized(true) {}

void AngleRadians::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void AngleRadians::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void AngleRadians::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char AngleRadians::debugName[] = "AngleRadians";
const char* AngleRadians::debugString() {
	return AngleRadians::debugName;
}


const BaseClassDefiner AngleRadians::declare() {
	return BaseClassDefiner(AngleRadians::addConstructToMap, AngleRadians::addPrimitiveAssignFnsToMap, AngleRadians::addClassAssignFnsToMap, AngleRadians::debugName);
}

namespace CIMPP {
	AngleRadians& AngleRadians::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	AngleRadians& AngleRadians::operator-=(const AngleRadians& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	AngleRadians& AngleRadians::operator*=(const AngleRadians& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	AngleRadians& AngleRadians::operator/=(const AngleRadians& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	AngleRadians& AngleRadians::operator+=(const AngleRadians& rhs) {
	    value += rhs.value;
	    return *this;
	}

	AngleRadians::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, AngleRadians& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
