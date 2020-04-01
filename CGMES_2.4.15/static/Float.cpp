#include "Float.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CGMES;

Float::Float(){}

Float::~Float(){}

Float::Float(long double value) : value(value), initialized(true) {}

void Float::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {} 

void Float::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void Float::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

const char Float::debugName[] = "Float";
const char* Float::debugString() {
	return Float::debugName;
}

const BaseClassDefiner Float::define() {
	return BaseClassDefiner(Float::addConstructToMap, Float::addPrimitiveAssignFnsToMap, Float::addClassAssignFnsToMap, Float::debugName);
}

Float& Float::operator=(long double &rop) {
	value = rop;
	initialized = true;
	return *this;
}

Float& Float::operator-=(const Float& rhs) {
    value -= rhs.value;
    return *this;
}

Float& Float::operator*=(const Float& rhs) {
    value *= rhs.value;
    return *this;
}

Float& Float::operator/=(const Float& rhs) {
    value /= rhs.value;
    return *this;
}

Float& Float::operator+=(const Float& rhs) {
    value += rhs.value;
    return *this;
}

Float::operator long double() {
	if(!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

std::istream& operator>>(std::istream& lop, Float& rop) {
	std::string tmp;
	lop >> tmp;
	rop.value = stold(tmp);
	rop.initialized = true;
	return lop;
}
