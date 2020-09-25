#include "Temperature.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Temperature::Temperature() {}

Temperature::~Temperature(){}

Temperature::Temperature(long double value) : value(value), initialized(true) {}

void Temperature::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void Temperature::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void Temperature::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char Temperature::debugName[] = "Temperature";
const char* Temperature::debugString() {
	return Temperature::debugName;
}


const BaseClassDefiner Temperature::declare() {
	return BaseClassDefiner(Temperature::addConstructToMap, Temperature::addPrimitiveAssignFnsToMap, Temperature::addClassAssignFnsToMap, Temperature::debugName);
}

namespace CIMPP {
	Temperature& Temperature::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	Temperature& Temperature::operator-=(const Temperature& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	Temperature& Temperature::operator*=(const Temperature& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	Temperature& Temperature::operator/=(const Temperature& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	Temperature& Temperature::operator+=(const Temperature& rhs) {
	    value += rhs.value;
	    return *this;
	}

	Temperature::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, Temperature& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
