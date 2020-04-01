#include "Integer.hpp"
#include "../src/CIMExceptions.hpp"

using namespace CGMES;

Integer::Integer(){}

Integer::~Integer(){}

Integer::Integer(long int value)
	: value(value), initialized(true) {}

const BaseClassDefiner Integer::define() {
	return BaseClassDefiner(Integer::addConstructToMap, Integer::addPrimitiveAssignFnsToMap, Integer::addClassAssignFnsToMap, Integer::debugName);
}

const char Integer::debugName[] = "Integer";
const char* Integer::debugString() {
	return Integer::debugName;
}

void Integer::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {} 

void Integer::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {}

void Integer::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {}

namespace CGMES {
	Integer& Integer::operator=(long int &rop){
		value = rop;
		initialized = true;
		return *this;
	}
	
	Integer& Integer::operator-=(const Integer& rhs){
	    value -= rhs.value;
	    return *this;
	}
	
	Integer& Integer::operator*=(const Integer& rhs){
	    value *= rhs.value;
	    return *this;
	}
	
	Integer& Integer::operator/=(const Integer& rhs){
	    value /= rhs.value;
	    return *this;
	}
	
	Integer& Integer::operator+=(const Integer& rhs){
	    value += rhs.value;
	    return *this;
	}
	
	Integer::operator long int(){
		if(!initialized)
		{
			throw new ReadingUninitializedField();
		}
		return value;
	}

	std::istream& operator>>(std::istream& lop, Integer& rop)
	{
		std::string tmp;
		lop >> tmp;

		rop.value = stol(tmp);
		rop.initialized = true;
		return lop;
	}
}
