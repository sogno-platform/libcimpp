#ifndef Seconds_H
#define Seconds_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class Seconds : public BaseClass
	{
	
	public:
		Seconds();
		virtual ~Seconds();
		Seconds(long double value);
		static const BaseClassDefiner declare();
		Seconds& operator=(long double &rop);
		Seconds& operator+=(const Seconds& rhs);
		Seconds& operator-=(const Seconds& rhs);
		Seconds& operator*=(const Seconds& rhs);
		Seconds& operator/=(const Seconds& rhs);
		friend std::istream& operator>>(std::istream& lop, Seconds& rop);
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
