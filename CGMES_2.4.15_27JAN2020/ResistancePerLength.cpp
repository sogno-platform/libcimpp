#include "ResistancePerLength.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

ResistancePerLength::ResistancePerLength() {}

ResistancePerLength::~ResistancePerLength(){}

ResistancePerLength::ResistancePerLength(long double value) : value(value), initialized(true) {}

void ResistancePerLength::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {}

void ResistancePerLength::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void ResistancePerLength::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char ResistancePerLength::debugName[] = "ResistancePerLength";
const char* ResistancePerLength::debugString() {
	return ResistancePerLength::debugName;
}


const BaseClassDefiner ResistancePerLength::declare() {
	return BaseClassDefiner(ResistancePerLength::addConstructToMap, ResistancePerLength::addPrimitiveAssignFnsToMap, ResistancePerLength::addClassAssignFnsToMap, ResistancePerLength::debugName);
}

namespace CIMPP {
	ResistancePerLength& ResistancePerLength::operator=(long double &rop) {
		value = rop;
		initialized = true;
		return *this;
	}

	ResistancePerLength& ResistancePerLength::operator-=(const ResistancePerLength& rhs) {
	    value -= rhs.value;
	    return *this;
	}

	ResistancePerLength& ResistancePerLength::operator*=(const ResistancePerLength& rhs) {
	    value *= rhs.value;
	    return *this;
	}

	ResistancePerLength& ResistancePerLength::operator/=(const ResistancePerLength& rhs) {
	    value /= rhs.value;
	    return *this;
	}

	ResistancePerLength& ResistancePerLength::operator+=(const ResistancePerLength& rhs) {
	    value += rhs.value;
	    return *this;
	}

	ResistancePerLength::operator long double() {
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, ResistancePerLength& rop) {
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}
}
