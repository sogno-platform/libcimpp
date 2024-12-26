#ifndef Inductance_H
#define Inductance_H

#include <string>
#include <istream>

#include "BaseClass.hpp"

namespace CIMPP
{
	class Inductance : public BaseClass
	{

	public:
		Inductance();
		virtual ~Inductance();
		Inductance(long double value);
		static const BaseClassDefiner declare();
		Inductance& operator=(long double &rop);
		Inductance& operator+=(const Inductance& rhs);
		Inductance& operator-=(const Inductance& rhs);
		Inductance& operator*=(const Inductance& rhs);
		Inductance& operator/=(const Inductance& rhs);
		friend std::istream& operator>>(std::istream& lop, Inductance& rop);
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
