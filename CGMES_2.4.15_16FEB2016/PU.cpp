#include "PU.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

PU::PU() {}

PU::~PU(){}

PU::PU(long double value) : value(value), initialized(true) {}

void PU::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void PU::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void PU::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char PU::debugName[] = "PU";
const char* PU::debugString() {
	return PU::debugName;
}


const BaseClassDefiner PU::declare() {
	return BaseClassDefiner(PU::addConstructToMap, PU::addPrimitiveAssignFnsToMap, PU::addClassAssignFnsToMap, PU::debugName);
}

namespace CIMPP {
	PU& PU::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	PU& PU::operator-=(const PU& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	PU& PU::operator*=(const PU& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	PU& PU::operator/=(const PU& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	PU& PU::operator+=(const PU& rhs) {
	    value += rhs.value;
	    return *this;
	}

	PU::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, PU& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
