#include "CurrentFlow.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

CurrentFlow::CurrentFlow() {}

CurrentFlow::~CurrentFlow(){}

CurrentFlow::CurrentFlow(long double value) : value(value), initialized(true) {}

void CurrentFlow::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void CurrentFlow::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void CurrentFlow::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char CurrentFlow::debugName[] = "CurrentFlow";
const char* CurrentFlow::debugString() {
	return CurrentFlow::debugName;
}


const BaseClassDefiner CurrentFlow::declare() {
	return BaseClassDefiner(CurrentFlow::addConstructToMap, CurrentFlow::addPrimitiveAssignFnsToMap, CurrentFlow::addClassAssignFnsToMap, CurrentFlow::debugName);
}

namespace CIMPP {
	CurrentFlow& CurrentFlow::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	CurrentFlow& CurrentFlow::operator-=(const CurrentFlow& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	CurrentFlow& CurrentFlow::operator*=(const CurrentFlow& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	CurrentFlow& CurrentFlow::operator/=(const CurrentFlow& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	CurrentFlow& CurrentFlow::operator+=(const CurrentFlow& rhs) {
	    value += rhs.value;
	    return *this;
	}

	CurrentFlow::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, CurrentFlow& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
