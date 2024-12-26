#include "ActivePowerPerCurrentFlow.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

ActivePowerPerCurrentFlow::ActivePowerPerCurrentFlow() {}

ActivePowerPerCurrentFlow::~ActivePowerPerCurrentFlow(){}

ActivePowerPerCurrentFlow::ActivePowerPerCurrentFlow(long double value) : value(value), initialized(true) {}

void ActivePowerPerCurrentFlow::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void ActivePowerPerCurrentFlow::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void ActivePowerPerCurrentFlow::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char ActivePowerPerCurrentFlow::debugName[] = "ActivePowerPerCurrentFlow";
const char* ActivePowerPerCurrentFlow::debugString() {
	return ActivePowerPerCurrentFlow::debugName;
}


const BaseClassDefiner ActivePowerPerCurrentFlow::declare() {
	return BaseClassDefiner(ActivePowerPerCurrentFlow::addConstructToMap, ActivePowerPerCurrentFlow::addPrimitiveAssignFnsToMap, ActivePowerPerCurrentFlow::addClassAssignFnsToMap, ActivePowerPerCurrentFlow::debugName);
}

namespace CIMPP {
	ActivePowerPerCurrentFlow& ActivePowerPerCurrentFlow::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	ActivePowerPerCurrentFlow& ActivePowerPerCurrentFlow::operator-=(const ActivePowerPerCurrentFlow& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	ActivePowerPerCurrentFlow& ActivePowerPerCurrentFlow::operator*=(const ActivePowerPerCurrentFlow& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	ActivePowerPerCurrentFlow& ActivePowerPerCurrentFlow::operator/=(const ActivePowerPerCurrentFlow& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	ActivePowerPerCurrentFlow& ActivePowerPerCurrentFlow::operator+=(const ActivePowerPerCurrentFlow& rhs) {
	    value += rhs.value;
	    return *this;
	}

	ActivePowerPerCurrentFlow::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, ActivePowerPerCurrentFlow& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
