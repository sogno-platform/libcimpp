#ifndef Simple_Float_H
#define Simple_Float_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class Simple_Float : public BaseClass
	{
	
	public:
		Simple_Float();
		virtual ~Simple_Float();
		Simple_Float(long double value);
		static const BaseClassDefiner declare();
		Simple_Float& operator=(long double &rop);
		Simple_Float& operator+=(const Simple_Float& rhs);
		Simple_Float& operator-=(const Simple_Float& rhs);
		Simple_Float& operator*=(const Simple_Float& rhs);
		Simple_Float& operator/=(const Simple_Float& rhs);
		friend std::istream& operator>>(std::istream& lop, Simple_Float& rop);
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
#endif
