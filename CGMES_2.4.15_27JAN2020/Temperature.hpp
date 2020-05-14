#ifndef Temperature_H
#define Temperature_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class Temperature : public BaseClass
	{
	
	public:
		Temperature();
		virtual ~Temperature();
		Temperature(long double value);
		static const BaseClassDefiner declare();
		Temperature& operator=(long double &rop);
		Temperature& operator+=(const Temperature& rhs);
		Temperature& operator-=(const Temperature& rhs);
		Temperature& operator*=(const Temperature& rhs);
		Temperature& operator/=(const Temperature& rhs);
		friend std::istream& operator>>(std::istream& lop, Temperature& rop);
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
