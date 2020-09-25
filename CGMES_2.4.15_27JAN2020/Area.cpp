#include "Area.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Area::Area() {}

Area::~Area(){}

Area::Area(long double value) : value(value), initialized(true) {}

void Area::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void Area::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void Area::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char Area::debugName[] = "Area";
const char* Area::debugString() {
	return Area::debugName;
}


const BaseClassDefiner Area::declare() {
	return BaseClassDefiner(Area::addConstructToMap, Area::addPrimitiveAssignFnsToMap, Area::addClassAssignFnsToMap, Area::debugName);
}

namespace CIMPP {
	Area& Area::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	Area& Area::operator-=(const Area& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	Area& Area::operator*=(const Area& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	Area& Area::operator/=(const Area& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	Area& Area::operator+=(const Area& rhs) {
	    value += rhs.value;
	    return *this;
	}

	Area::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, Area& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
