#ifndef Capacitance_H
#define Capacitance_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class Capacitance : public BaseClass
	{

	public:
		Capacitance();
		virtual ~Capacitance();
		Capacitance(long double value);
		static const BaseClassDefiner declare();
		Capacitance& operator=(long double &rop);
		Capacitance& operator+=(const Capacitance& rhs);
		Capacitance& operator-=(const Capacitance& rhs);
		Capacitance& operator*=(const Capacitance& rhs);
		Capacitance& operator/=(const Capacitance& rhs);
		friend std::istream& operator>>(std::istream& lop, Capacitance& rop);
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
