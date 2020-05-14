#ifndef Conductance_H
#define Conductance_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class Conductance : public BaseClass
	{
	
	public:
		Conductance();
		virtual ~Conductance();
		Conductance(long double value);
		static const BaseClassDefiner declare();
		Conductance& operator=(long double &rop);
		Conductance& operator+=(const Conductance& rhs);
		Conductance& operator-=(const Conductance& rhs);
		Conductance& operator*=(const Conductance& rhs);
		Conductance& operator/=(const Conductance& rhs);
		friend std::istream& operator>>(std::istream& lop, Conductance& rop);
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
