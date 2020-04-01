#ifndef FLOAT_H
#define FLOAT_H

#include <string>
#include <iostream>
#include <istream>

#include "BaseClass.hpp"

namespace CGMES
{
	/**
	 * A floating point number. The range is unspecified and not limited.
	 */
	class Float : public BaseClass
	{
	
	public:
		Float();
		virtual ~Float();
		Float(long double value);
		static const BaseClassDefiner define();
		Float& operator=(long double &rop);
		Float& operator+=(const Float& rhs);
		Float& operator-=(const Float& rhs);
		Float& operator*=(const Float& rhs);
		Float& operator/=(const Float& rhs);
		friend std::istream& operator>>(std::istream& lop, Float& rop);
		operator long double();
	
		long double value = 0.0;
		bool initialized = false;
	
		static const char debugName[];
		virtual const char* debugString();
		
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
	};
}
#endif // FLOAT_H
