#ifndef INTEGER_H
#define INTEGER_H

#include <string>
#include <iostream>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP {

	/**
	* An Integer number. The range is unspecified and not limited.
	*/
	class Integer
	{
	public:
		Integer();
		Integer(long int value);
		virtual ~Integer();
		static const BaseClassDefiner declare();
		Integer& operator=(long int &rop);
		Integer& operator+=(const Integer& rhs);
		Integer& operator-=(const Integer& rhs);
		Integer& operator*=(const Integer& rhs);
		Integer& operator/=(const Integer& rhs);
		friend std::istream& operator>>(std::istream& lop, Integer& rop);
		operator long int();

		long int value = 0;
		bool initialized = false;

		static const char debugName[];
		virtual const char* debugString();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
	};
}
#endif // INTEGER_H
